/*
 * XREFs of BmlDoesTargetModeSupportWireFormat @ 0x1403F6A84
 * Callers:
 *     BmlDoesTargetModeObeyConstraint @ 0x1402694B8 (BmlDoesTargetModeObeyConstraint.c)
 *     BmlCompareTargetModesWithConstraint @ 0x1402DD6F4 (BmlCompareTargetModesWithConstraint.c)
 *     ?BmlPickColorSpaceAndWireFormat@@YAJPEBUBML_VIDPN_PATH_ORDER@@W4DXGK_DIAG_CCD_BML_ORIGIN@@PEAVDMMVIDPN@@@Z @ 0x140365490 (-BmlPickColorSpaceAndWireFormat@@YAJPEBUBML_VIDPN_PATH_ORDER@@W4DXGK_DIAG_CCD_BML_ORIGIN@@PEAVDM.c)
 * Callees:
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x140039D4C (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     ?UsingSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ @ 0x14028EBBC (-UsingSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ.c)
 */

bool __fastcall BmlDoesTargetModeSupportWireFormat(__int64 a1, int a2)
{
  unsigned int v3; // ebx
  __int64 v5; // rsi
  __int64 v6; // rsi
  char v7; // dl

  v3 = *(_DWORD *)(a1 + 128);
  if ( !*(_QWORD *)(a1 + 40) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 68;
  }
  v5 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 112LL);
  if ( !*(_QWORD *)(v5 + 40) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 68;
  }
  v6 = *(_QWORD *)(ContainedBy<DMMVIDPN>::GetContainer(*(_QWORD *)(v5 + 40) + 64LL) + 48);
  if ( !*(_QWORD *)(v6 + 8) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 68;
  }
  if ( DXGADAPTER::UsingSetTimingsFromVidPn(*(DXGADAPTER **)(*(_QWORD *)(v6 + 8) + 16LL)) )
    return (a2 & v3) >= 0x4000000
        || (((unsigned __int8)(v7 & (v3 >> 2)) | (unsigned __int8)((unsigned __int16)(a2 & v3 | ((a2 & v3 | ((a2 & v3) >> 6)) >> 6)) >> 8)) & 0x3F) != 0;
  else
    return (v7 & 0x3F) == 2;
}
