/*
 * XREFs of MiLocateCloneAddress @ 0x1403DE800
 * Callers:
 *     MiCompleteProtoPteFault @ 0x140232170 (MiCompleteProtoPteFault.c)
 *     MiActOnPte @ 0x140237188 (MiActOnPte.c)
 *     MiSharedVaToPartition @ 0x14023B3F0 (MiSharedVaToPartition.c)
 *     MiGetPageProtection @ 0x140245740 (MiGetPageProtection.c)
 *     MiProbeLeafPteAccess @ 0x1402ADF50 (MiProbeLeafPteAccess.c)
 *     MiGetPfnProtection @ 0x14037CFCC (MiGetPfnProtection.c)
 *     MiComputePageCommitment @ 0x14037DDA4 (MiComputePageCommitment.c)
 *     MiSetProtectionOnSection @ 0x14037E180 (MiSetProtectionOnSection.c)
 *     MiCopyOnWrite @ 0x140386068 (MiCopyOnWrite.c)
 *     MiTrimThisWsle @ 0x140388394 (MiTrimThisWsle.c)
 *     MiCopyToUserVa @ 0x1403DDE48 (MiCopyToUserVa.c)
 *     MiMakeProtoPrivate @ 0x1403DE138 (MiMakeProtoPrivate.c)
 *     MiQueryLeafPte @ 0x1403DE2A0 (MiQueryLeafPte.c)
 *     MiSplitReducedCommitClonePage @ 0x1404F6C24 (MiSplitReducedCommitClonePage.c)
 *     MiCheckCommitReleaseFromVad @ 0x14065DD60 (MiCheckCommitReleaseFromVad.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall MiLocateCloneAddress(__int64 a1, unsigned __int64 a2)
{
  _QWORD *result; // rax

  result = *(_QWORD **)(a1 + 640);
  if ( !result )
    return 0LL;
  do
  {
    if ( a2 > result[4] )
    {
      result = (_QWORD *)result[1];
    }
    else
    {
      if ( a2 >= result[3] )
        break;
      result = (_QWORD *)*result;
    }
  }
  while ( result );
  if ( !result || !result[6] )
    return 0LL;
  return result;
}
