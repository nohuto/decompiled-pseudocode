/*
 * XREFs of ?QueryDriverRecommendedMonitorModes@KernelDriver@@UEBAJXZ @ 0x1402767F0
 * Callers:
 *     <none>
 * Callees:
 *     ?DdiRecommendMonitorModes@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_RECOMMENDMONITORMODES@@@Z @ 0x1401A52CC (-DdiRecommendMonitorModes@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_RECOMMENDMONITORMODES@@@Z.c)
 */

__int64 __fastcall KernelDriver::QueryDriverRecommendedMonitorModes(KernelDriver *this, __int64 a2, __int64 a3)
{
  ADAPTER_DISPLAY *v4; // rcx
  __int64 result; // rax
  D3DDDI_VIDEO_PRESENT_TARGET_ID v6; // eax
  int v7; // eax
  unsigned int v8; // edi
  _DXGKARG_RECOMMENDMONITORMODES v9; // [rsp+30h] [rbp-28h] BYREF

  v4 = (ADAPTER_DISPLAY *)*((_QWORD *)this + 3);
  if ( v4 )
  {
    v6 = *((_DWORD *)this + 8);
    *(&v9.VideoPresentTargetId + 1) = 0;
    v9.VideoPresentTargetId = v6;
    v9.hMonitorSourceModeSet = (D3DKMDT_HMONITORSOURCEMODESET)*((_QWORD *)this + 1);
    v9.pMonitorSourceModeSetInterface = &DXGK_MONITORSOURCEMODESET_INTERFACE_V1_IMPL::DxgMonitorSourceModeSetInterfaceV1;
    v7 = ADAPTER_DISPLAY::DdiRecommendMonitorModes(v4, &v9, a3);
    v8 = v7;
    if ( v7 < 0 )
    {
      WdLogSingleEntry4(2LL, this, *((unsigned int *)this + 8), *(_QWORD *)(*((_QWORD *)this + 3) + 16LL), v7);
      WdLogGlobalForLineNumber = 104;
    }
    return v8;
  }
  else
  {
    WdLogSingleEntry1(2LL, -1073741632LL);
    result = 3221225664LL;
    WdLogGlobalForLineNumber = 69;
  }
  return result;
}
