/*
 * XREFs of KeSaveSupervisorState @ 0x1405B4AA4
 * Callers:
 *     IopLiveDumpProcessCorralStateChange @ 0x140469354 (IopLiveDumpProcessCorralStateChange.c)
 *     IopLiveDumpCollectPages @ 0x140596B54 (IopLiveDumpCollectPages.c)
 *     KeBugCheck2 @ 0x1405ADDF0 (KeBugCheck2.c)
 *     KiFreezeTargetExecution @ 0x1405BDC20 (KiFreezeTargetExecution.c)
 *     KdEnterDebugger @ 0x140B6A96C (KdEnterDebugger.c)
 * Callees:
 *     RtlXSaveS @ 0x14043B8FC (RtlXSaveS.c)
 *     KiSaveIptState @ 0x1404BE0A4 (KiSaveIptState.c)
 */

void __fastcall KeSaveSupervisorState(__int64 a1, __int64 a2)
{
  __int64 v2; // r11
  __int64 v4; // rdx

  if ( a1 )
  {
    v2 = a2;
    if ( (_DWORD)KiIptMsrMask && (a2 & 0x100) != 0 )
      KiSaveIptState((unsigned __int64 *)(a1
                                        + MEMORY[0xFFFFF78000000600]
                                        - (unsigned __int64)MEMORY[0xFFFFF780000003E8]
                                        + 64));
    if ( (KeFeatureBits & 0x800000) != 0 )
    {
      if ( KeEnabledSupervisorXStateFeatures )
      {
        v4 = KeEnabledSupervisorXStateFeatures & v2;
        *(_QWORD *)(a1 + 8) = KeEnabledSupervisorXStateFeatures & v2;
        RtlXSaveS(a1 - 512, v4);
      }
    }
  }
}
