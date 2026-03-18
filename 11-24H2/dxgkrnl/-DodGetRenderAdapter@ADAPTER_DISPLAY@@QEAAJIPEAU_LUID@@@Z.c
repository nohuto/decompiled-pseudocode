/*
 * XREFs of ?DodGetRenderAdapter@ADAPTER_DISPLAY@@QEAAJIPEAU_LUID@@@Z @ 0x140198CCC
 * Callers:
 *     DxgkDisplayConfigDeviceInfoForAdapter @ 0x1403C64A0 (DxgkDisplayConfigDeviceInfoForAdapter.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::DodGetRenderAdapter(ADAPTER_DISPLAY *this, __int64 a2, struct _LUID *a3)
{
  int v3; // eax
  __int64 v4; // rdi

  v3 = (*(__int64 (__fastcall **)(_QWORD, __int64, struct _LUID *))(*((_QWORD *)this + 2) + 2376LL))(
         *(_QWORD *)(*((_QWORD *)this + 2) + 2296LL),
         a2,
         a3);
  v4 = v3;
  if ( v3 < 0 )
  {
    WdLogSingleEntry1(2LL, v3);
    WdLogGlobalForLineNumber = 8907;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Dod driver failed DxgiIddDdiGetIdRenderAdapter call with 0x%I64x",
      v4,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  return (unsigned int)v4;
}
