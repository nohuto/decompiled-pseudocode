/*
 * XREFs of CmpCloseLightWeightTransaction @ 0x140A06160
 * Callers:
 *     <none>
 * Callees:
 *     CmpInitializeThreadInfo @ 0x1403FA250 (CmpInitializeThreadInfo.c)
 *     CmpCleanupThreadInfo @ 0x14041EE60 (CmpCleanupThreadInfo.c)
 *     CmpRollbackLightWeightTransaction @ 0x140A061B8 (CmpRollbackLightWeightTransaction.c)
 *     CmpAcquireShutdownRundown @ 0x140BB9400 (CmpAcquireShutdownRundown.c)
 *     CmpReleaseShutdownRundown @ 0x140BB9880 (CmpReleaseShutdownRundown.c)
 */

_KAFFINITY_EX *__fastcall CmpCloseLightWeightTransaction(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v8; // rcx
  __int128 v9; // [rsp+20h] [rbp-28h] BYREF
  __int64 v10; // [rsp+30h] [rbp-18h]

  v9 = 0LL;
  v10 = 0LL;
  CmpInitializeThreadInfo((_KAFFINITY_EX *)&v9);
  if ( v6 == 1 && (unsigned __int8)CmpAcquireShutdownRundown(v4, v3, v5, 1LL) )
  {
    CmpRollbackLightWeightTransaction(a2);
    CmpReleaseShutdownRundown(v8);
  }
  return CmpCleanupThreadInfo((_KAFFINITY_EX **)&v9);
}
