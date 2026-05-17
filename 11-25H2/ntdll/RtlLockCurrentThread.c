/*
 * XREFs of RtlLockCurrentThread @ 0x1800FC0B0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpLockStack @ 0x1800FC1C0 (RtlpLockStack.c)
 *     RtlpUnlockStack @ 0x180110B60 (RtlpUnlockStack.c)
 *     NtLockVirtualMemory @ 0x1801654F0 (NtLockVirtualMemory.c)
 *     ZwUnlockVirtualMemory @ 0x180166DD0 (ZwUnlockVirtualMemory.c)
 */

__int64 RtlLockCurrentThread()
{
  struct _TEB *v0; // rsi
  unsigned int LockCount; // eax
  int v2; // edi
  struct _TEB *v3; // rcx
  char v4; // bl
  __int64 WowTebOffset; // rax
  __int64 v7; // [rsp+60h] [rbp+38h] BYREF
  __int64 v8; // [rsp+68h] [rbp+40h] BYREF
  struct _TEB *v9; // [rsp+70h] [rbp+48h] BYREF
  struct _TEB *v10; // [rsp+78h] [rbp+50h] BYREF

  v7 = 0LL;
  v0 = NtCurrentTeb();
  LockCount = v0->LockCount;
  if ( LockCount )
  {
    v0->LockCount = LockCount + 1;
    return 0LL;
  }
  v9 = v0;
  v8 = 6264LL;
  v2 = NtLockVirtualMemory(-1LL, &v9, &v8, 1LL);
  if ( v2 >= 0 )
  {
    v3 = NtCurrentTeb();
    v4 = 1;
    WowTebOffset = v3->WowTebOffset;
    if ( (int)WowTebOffset < 0 )
      v3 = (struct _TEB *)((char *)v3 + WowTebOffset);
    v10 = v3;
    if ( v0 != v3 )
    {
      v7 = 6264LL;
      v2 = NtLockVirtualMemory(-1LL, &v10, &v7, 1LL);
      if ( v2 < 0 )
      {
LABEL_12:
        ZwUnlockVirtualMemory(-1LL, &v9, &v8, 1LL);
        if ( (unsigned __int8)v4 >= 2u )
          ZwUnlockVirtualMemory(-1LL, &v10, &v7, 1LL);
        return (unsigned int)v2;
      }
      v4 = 3;
    }
    v2 = RtlpLockStack();
    if ( v2 >= 0 )
    {
      v0->LockCount = 1;
      return 0LL;
    }
    goto LABEL_12;
  }
  return (unsigned int)v2;
}
