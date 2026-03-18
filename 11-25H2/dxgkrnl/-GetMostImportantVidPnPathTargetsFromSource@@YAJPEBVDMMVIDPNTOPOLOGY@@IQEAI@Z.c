/*
 * XREFs of ?GetMostImportantVidPnPathTargetsFromSource@@YAJPEBVDMMVIDPNTOPOLOGY@@IQEAI@Z @ 0x1403A6750
 * Callers:
 *     ?UpdateTargetLinkTrainingStatus@VIDPN_MGR@@QEAAJPEAU_DXGK_CONNECTION_CHANGE@@EPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x140257160 (-UpdateTargetLinkTrainingStatus@VIDPN_MGR@@QEAAJPEAU_DXGK_CONNECTION_CHANGE@@EPEAU_DXGK_DISPLAY_.c)
 *     ?IsPrimaryClonePath@DMMVIDPNPRESENTPATH@@QEBAJPEAE@Z @ 0x14025F67C (-IsPrimaryClonePath@DMMVIDPNPRESENTPATH@@QEBAJPEAE@Z.c)
 *     ?DmmGetMostImportantVidPnPathTargetsFromSource@@YAJQEAXPEAUD3DKMDT_HVIDPN__@@IQEAI@Z @ 0x1402C2360 (-DmmGetMostImportantVidPnPathTargetsFromSource@@YAJQEAXPEAUD3DKMDT_HVIDPN__@@IQEAI@Z.c)
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x14030CF78 (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_.c)
 *     ?DmmGetMostImportantClientVidPnPathTargetsFromSource@@YAJQEAXIQEAI@Z @ 0x1403A6598 (-DmmGetMostImportantClientVidPnPathTargetsFromSource@@YAJQEAXIQEAI@Z.c)
 *     ?BuildSetTimingsPathInfoFromClientVidPn@VIDPN_MGR@@AEBAJKQEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAK2AEAV?$unique_ptr@$$BY0A@U_DXGK_SET_TIMING_PATH_INFO@@U?$default_delete@$$BY0A@U_DXGK_SET_TIMING_PATH_INFO@@@wistd@@@wistd@@AEAV?$unique_ptr@$$BY0A@IU?$default_delete@$$BY0A@I@wistd@@@5@4@Z @ 0x14042AC60 (-BuildSetTimingsPathInfoFromClientVidPn@VIDPN_MGR@@AEBAJKQEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_M.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetMostImportantVidPnPathTargetsFromSource(
        const struct DMMVIDPNTOPOLOGY *a1,
        int a2,
        unsigned int *const a3)
{
  char *v4; // r9
  char *v5; // rdx
  char *v6; // rcx
  int v7; // r10d
  char *v8; // rcx
  char *v9; // rax
  __int64 result; // rax

  if ( a3 )
  {
    v4 = (char *)a1 + 24;
    v5 = 0LL;
    v6 = (char *)*((_QWORD *)a1 + 3);
    v7 = 32;
    if ( v6 == v4 )
      return 3223192377LL;
    v8 = v6 - 8;
    if ( !v8 )
      return 3223192377LL;
    do
    {
      if ( *(_DWORD *)(*((_QWORD *)v8 + 11) + 24LL) == a2 && *((_DWORD *)v8 + 26) < v7 )
      {
        v5 = v8;
        v7 = *((_DWORD *)v8 + 26);
      }
      v9 = (char *)*((_QWORD *)v8 + 1);
      v8 = v9 - 8;
      if ( v9 == v4 )
        v8 = 0LL;
    }
    while ( v8 );
    if ( v5 )
    {
      result = 0LL;
      *a3 = *(_DWORD *)(*((_QWORD *)v5 + 12) + 24LL);
    }
    else
    {
      return 3223192377LL;
    }
  }
  else
  {
    WdLogSingleEntry1(2LL, 0LL);
    result = 3221225485LL;
    WdLogGlobalForLineNumber = 9447;
  }
  return result;
}
