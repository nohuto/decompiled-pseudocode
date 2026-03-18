/*
 * XREFs of CmpFlushNotifiesOnAllUnbackedHigherLayerKcbs @ 0x1409DA27C
 * Callers:
 *     CmDeleteLayeredKey @ 0x14041D4E4 (CmDeleteLayeredKey.c)
 *     CmDeleteKey @ 0x14086D4EC (CmDeleteKey.c)
 *     CmpLightWeightCommitRecreateKeyUoW @ 0x1409D8998 (CmpLightWeightCommitRecreateKeyUoW.c)
 *     CmpLightWeightCommitDeleteKeyUoW @ 0x1409DA0D4 (CmpLightWeightCommitDeleteKeyUoW.c)
 * Callees:
 *     CmpEnumerateAllHigherLayerKcbs @ 0x1409DB09C (CmpEnumerateAllHigherLayerKcbs.c)
 */

__int64 __fastcall CmpFlushNotifiesOnAllUnbackedHigherLayerKcbs(int a1, __int64 a2, int a3, char a4)
{
  __int64 v5; // [rsp+40h] [rbp-18h] BYREF

  v5 = 0x100000008LL;
  BYTE5(v5) = a4;
  return CmpEnumerateAllHigherLayerKcbs(
           a1,
           (unsigned int)CmpFlushNotifiesPreCallback,
           (unsigned int)CmpFlushNotifiesPostCallback,
           a3,
           (__int64)&v5,
           a4,
           1);
}
