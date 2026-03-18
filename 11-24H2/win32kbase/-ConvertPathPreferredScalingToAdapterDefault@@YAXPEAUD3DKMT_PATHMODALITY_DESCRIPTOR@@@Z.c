/*
 * XREFs of ?ConvertPathPreferredScalingToAdapterDefault@@YAXPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@@Z @ 0x14019F7FC
 * Callers:
 *     ?ReplacePreferredScaling@@YAJPEBUD3DKMT_GETPATHSMODALITY@@PEAU1@@Z @ 0x1401C90B4 (-ReplacePreferredScaling@@YAJPEBUD3DKMT_GETPATHSMODALITY@@PEAU1@@Z.c)
 *     ?SetDisplayConfigHandlePreferredScaling@@YAJPEAUD3DKMT_GETPATHSMODALITY@@PEAW4_DXGK_DIAG_SDC_STAGE@@@Z @ 0x1401C94F0 (-SetDisplayConfigHandlePreferredScaling@@YAJPEAUD3DKMT_GETPATHSMODALITY@@PEAW4_DXGK_DIAG_SDC_STA.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

void __fastcall ConvertPathPreferredScalingToAdapterDefault(struct D3DKMT_PATHMODALITY_DESCRIPTOR *a1)
{
  __int64 DxgkWin32kInterface; // rax

  if ( (*(_QWORD *)a1 & 0x40000000000LL) == 0 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 13781;
  }
  if ( (*(_DWORD *)a1 & 0x10000) == 0 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 13782;
  }
  if ( *((_DWORD *)a1 + 35) == 253 )
  {
    if ( !_bittest64((const signed __int64 *)a1, 0x2Cu) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 13786;
    }
    DxgkWin32kInterface = DxDdGetDxgkWin32kInterface(a1);
    (*(void (__fastcall **)(char *, char *))(DxgkWin32kInterface + 312))((char *)a1 + 16, (char *)a1 + 140);
  }
  *(_QWORD *)a1 |= 0x40000000000uLL;
  *((_DWORD *)a1 + 34) = *((_DWORD *)a1 + 35);
}
