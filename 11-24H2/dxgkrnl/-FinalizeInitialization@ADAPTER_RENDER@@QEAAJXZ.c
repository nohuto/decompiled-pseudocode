/*
 * XREFs of ?FinalizeInitialization@ADAPTER_RENDER@@QEAAJXZ @ 0x14019D5F4
 * Callers:
 *     ?CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAXPEAU_DXGK_ADAPTER_CAPS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1404056C4 (-CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAXPEAU_DXGK_ADAPTER_CAPS.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     ?OpenAdapter@DXGPROCESS@@QEAAJPEAVADAPTER_RENDER@@_N@Z @ 0x14036620C (-OpenAdapter@DXGPROCESS@@QEAAJPEAVADAPTER_RENDER@@_N@Z.c)
 */

__int64 __fastcall ADAPTER_RENDER::FinalizeInitialization(ADAPTER_RENDER *this)
{
  __int64 result; // rax
  struct DXGGLOBAL *Global; // rax
  int v4; // edi
  const wchar_t *v5; // r9

  if ( *(_BYTE *)(*((_QWORD *)this + 2) + 209LL) )
    return 0LL;
  Global = DXGGLOBAL::GetGlobal();
  v4 = DXGPROCESS::OpenAdapter(*((DXGPROCESS **)Global + 171), this, 1);
  if ( v4 >= 0 )
  {
    result = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)(*((_QWORD *)this + 95) + 8LL) + 800LL))(*((_QWORD *)this + 96));
    v4 = result;
    if ( (int)result >= 0 )
      return result;
    WdLogSingleEntry1(2LL, this);
    v5 = L"Adapter 0x%I64x: Failed to initialize paging process";
    WdLogGlobalForLineNumber = 4617;
  }
  else
  {
    WdLogSingleEntry1(2LL, this);
    v5 = L"Adapter 0x%I64x: Failed to create KMD process handle for system process";
    WdLogGlobalForLineNumber = 4610;
  }
  DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, v5, (__int64)this, 0LL, 0LL, 0LL, 0LL);
  return (unsigned int)v4;
}
