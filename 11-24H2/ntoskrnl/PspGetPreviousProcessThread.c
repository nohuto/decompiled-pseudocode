/*
 * XREFs of PspGetPreviousProcessThread @ 0x1408EF16C
 * Callers:
 *     PspTerminateAllThreads @ 0x1408EEED4 (PspTerminateAllThreads.c)
 * Callees:
 *     PspUnlockProcessShared @ 0x14028E8F0 (PspUnlockProcessShared.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     PspLockProcessShared @ 0x14031DC40 (PspLockProcessShared.c)
 *     ObReferenceObjectSafeWithTag @ 0x14031DCB0 (ObReferenceObjectSafeWithTag.c)
 */

__int64 __fastcall PspGetPreviousProcessThread(__int64 a1, _QWORD *a2)
{
  __int64 v2; // r14
  __int64 v5; // rbp
  int v6; // edi
  __int64 v7; // rbx

  v2 = a1 + 880;
  v5 = 0LL;
  v6 = 0;
  PspLockProcessShared(a1, (__int64)KeGetCurrentThread());
  if ( a2 )
    v7 = a2[176];
  else
    v7 = *(_QWORD *)(v2 + 8);
  while ( v7 != v2 )
  {
    v5 = v7 - 1400;
    if ( ObReferenceObjectSafeWithTag(v7 - 1400, 0x6E457350u) )
    {
      v6 = 1;
      break;
    }
    v7 = *(_QWORD *)(v7 + 8);
  }
  PspUnlockProcessShared(a1);
  if ( a2 )
    ObfDereferenceObjectWithTag(a2, 0x6E457350u);
  return v5 & -(__int64)(v6 != 0);
}
