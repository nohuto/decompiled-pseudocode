/*
 * XREFs of PsGetNextProcessEx @ 0x140A3AC50
 * Callers:
 *     <none>
 * Callees:
 *     PspUnlockProcessListShared @ 0x1402BAE60 (PspUnlockProcessListShared.c)
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 *     ObReferenceObjectSafeWithTag @ 0x14033E7D0 (ObReferenceObjectSafeWithTag.c)
 *     PspLockProcessListShared @ 0x14041B0F0 (PspLockProcessListShared.c)
 */

unsigned __int64 __fastcall PsGetNextProcessEx(_QWORD *Object)
{
  struct _KTHREAD *CurrentThread; // r14
  __int64 *v3; // rbp
  int v4; // esi
  __int64 v5; // rdx
  __int64 *v6; // rbx

  CurrentThread = KeGetCurrentThread();
  v3 = 0LL;
  v4 = 0;
  PspLockProcessListShared((__int64)CurrentThread);
  v6 = (__int64 *)PsActiveProcessHead;
  if ( Object )
    v6 = (__int64 *)Object[59];
  while ( v6 != &PsActiveProcessHead )
  {
    v3 = v6 - 59;
    if ( ObReferenceObjectSafeWithTag((__int64)(v6 - 59), 0x746C6644u) )
    {
      v4 = 1;
      break;
    }
    v6 = (__int64 *)*v6;
  }
  PspUnlockProcessListShared((__int64)CurrentThread, v5);
  if ( Object )
    ObfDereferenceObjectWithTag(Object, 0x746C6644u);
  return (unsigned __int64)v3 & -(__int64)(v4 != 0);
}
