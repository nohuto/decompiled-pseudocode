/*
 * XREFs of CmpCloseLightWeightTransaction @ 0x140866F90
 * Callers:
 *     <none>
 * Callees:
 *     CmpInitializeThreadInfo @ 0x1403F5C00 (CmpInitializeThreadInfo.c)
 *     CmCleanupThreadInfo @ 0x140429780 (CmCleanupThreadInfo.c)
 *     CmpRollbackLightWeightTransaction @ 0x140866FE0 (CmpRollbackLightWeightTransaction.c)
 *     CmpAcquireShutdownRundown @ 0x140BA9460 (CmpAcquireShutdownRundown.c)
 *     CmpReleaseShutdownRundown @ 0x140BA9970 (CmpReleaseShutdownRundown.c)
 */

_KAFFINITY_EX *__fastcall CmpCloseLightWeightTransaction(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v8; // rcx
  __int128 v9; // [rsp+20h] [rbp-18h] BYREF

  v9 = 0LL;
  CmpInitializeThreadInfo((_KAFFINITY_EX *)&v9);
  if ( v6 == 1 && (unsigned __int8)CmpAcquireShutdownRundown(v4, v3, v5, 1LL) )
  {
    CmpRollbackLightWeightTransaction(a2);
    CmpReleaseShutdownRundown(v8);
  }
  return CmCleanupThreadInfo((_KAFFINITY_EX **)&v9);
}
