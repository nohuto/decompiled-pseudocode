/*
 * XREFs of RtlUnlockCurrentThread @ 0x180110AB0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpUnlockStack @ 0x180110B60 (RtlpUnlockStack.c)
 *     ZwUnlockVirtualMemory @ 0x180166DD0 (ZwUnlockVirtualMemory.c)
 */

__int64 RtlUnlockCurrentThread()
{
  struct _TEB *v0; // rbx
  unsigned int LockCount; // eax
  unsigned int v2; // eax
  struct _TEB *v3; // rcx
  __int64 WowTebOffset; // rax
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF
  __int64 v7; // [rsp+38h] [rbp+10h] BYREF
  struct _TEB *v8; // [rsp+40h] [rbp+18h] BYREF
  struct _TEB *v9; // [rsp+48h] [rbp+20h] BYREF

  v6 = 0LL;
  v0 = NtCurrentTeb();
  LockCount = v0->LockCount;
  if ( !LockCount )
    return 3221225514LL;
  v2 = LockCount - 1;
  v0->LockCount = v2;
  if ( !v2 )
  {
    v8 = v0;
    v7 = 6264LL;
    ZwUnlockVirtualMemory(-1LL, &v8, &v7, 1LL);
    v3 = NtCurrentTeb();
    WowTebOffset = v3->WowTebOffset;
    if ( (int)WowTebOffset < 0 )
      v3 = (struct _TEB *)((char *)v3 + WowTebOffset);
    v9 = v3;
    if ( v0 != v3 )
    {
      v6 = 6264LL;
      ZwUnlockVirtualMemory(-1LL, &v9, &v6, 1LL);
    }
    RtlpUnlockStack();
  }
  return 0LL;
}
