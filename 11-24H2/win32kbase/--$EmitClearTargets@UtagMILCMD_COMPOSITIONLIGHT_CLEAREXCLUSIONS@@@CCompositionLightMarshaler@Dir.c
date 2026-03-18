/*
 * XREFs of ??$EmitClearTargets@UtagMILCMD_COMPOSITIONLIGHT_CLEAREXCLUSIONS@@@CCompositionLightMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@1@W4CompositionLightMarshalerFlag@01@W4MILCMD@@@Z @ 0x1400F9564
 * Callers:
 *     ?EmitUpdateCommands@CCompositionLightMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1400F94B0 (-EmitUpdateCommands@CCompositionLightMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x14007F480 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

char __fastcall DirectComposition::CCompositionLightMarshaler::EmitClearTargets<tagMILCMD_COMPOSITIONLIGHT_CLEAREXCLUSIONS>(
        __int64 a1,
        struct DirectComposition::CBatch **a2)
{
  char v3; // bl
  char *v5; // rcx
  void *v6; // [rsp+30h] [rbp+8h] BYREF

  v3 = 1;
  if ( (*(_DWORD *)(a1 + 16) & 0x40) != 0 )
  {
    v6 = 0LL;
    if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0xCuLL, &v6) )
    {
      v5 = (char *)v6;
      *(_DWORD *)v6 = 12;
      *(_QWORD *)(v5 + 4) = 0LL;
      *((_DWORD *)v5 + 1) = 77;
      *((_DWORD *)v5 + 2) = *(_DWORD *)(a1 + 32);
      *(_DWORD *)(a1 + 16) &= ~0x40u;
    }
    else
    {
      return 0;
    }
  }
  return v3;
}
