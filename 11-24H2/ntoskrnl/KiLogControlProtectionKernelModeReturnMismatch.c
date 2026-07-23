/*
 * XREFs of KiLogControlProtectionKernelModeReturnMismatch @ 0x1405C4414
 * Callers:
 *     KiProcessControlProtectionFromKernelMode @ 0x14043466C (KiProcessControlProtectionFromKernelMode.c)
 * Callees:
 *     EtwTimLogControlProtectionKernelModeReturnMismatch @ 0x14064E0B4 (EtwTimLogControlProtectionKernelModeReturnMismatch.c)
 */

void __fastcall KiLogControlProtectionKernelModeReturnMismatch(unsigned int a1, __int64 a2)
{
  signed __int32 v2; // eax
  signed __int32 v3; // ett

  if ( (_BYTE)KiKernelCetLogging )
  {
    _InterlockedAdd(&dword_140FC80EC, 1u);
    if ( *(_DWORD *)(a2 + 28) )
      _InterlockedAdd(&dword_140FC80F4, 1u);
    if ( !KeGetPcr()->Prcb.CombinedNmiMceActive && KeGetCurrentIrql() < 0xFu )
    {
      if ( *(_DWORD *)(a2 + 28) && !_InterlockedCompareExchange(&dword_140FC80F0, 1, 0) )
      {
LABEL_11:
        EtwTimLogControlProtectionKernelModeReturnMismatch(a1);
      }
      else
      {
        v2 = dword_140FC80E4;
        while ( v2 < dword_140FC80E8 )
        {
          v3 = v2;
          v2 = _InterlockedCompareExchange(&dword_140FC80E4, v2 + 1, v2);
          if ( v3 == v2 )
            goto LABEL_11;
        }
      }
    }
  }
}
