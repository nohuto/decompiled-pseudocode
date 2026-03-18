/*
 * XREFs of ?IommuReserveGpuVa@ADAPTER_RENDER@@CAJPEAUSYSMM_ADAPTER@@_KPEA_KPEAX@Z @ 0x14019D2C0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?VidMmReserveGpuVirtualAddress@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAVDXGPROCESS@@PEAUVIDMM_PAGING_QUEUE@@PEAUD3DDDI_RESERVEGPUVIRTUALADDRESS@@@Z @ 0x140050288 (-VidMmReserveGpuVirtualAddress@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAVDXGPROCESS@@PEAUVIDMM_PA.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     memset @ 0x14009FCC0 (memset.c)
 */

__int64 __fastcall ADAPTER_RENDER::IommuReserveGpuVa(
        struct SYSMM_ADAPTER *a1,
        D3DGPU_SIZE_T a2,
        unsigned __int64 *a3,
        _QWORD *a4)
{
  struct VIDMM_GLOBAL *v7; // rbp
  VIDMM_EXPORT *v8; // rbx
  struct DXGGLOBAL *Global; // rax
  __int64 result; // rax
  D3DDDI_RESERVEGPUVIRTUALADDRESS v11; // [rsp+50h] [rbp-78h] BYREF

  memset(&v11, 0, sizeof(v11));
  v7 = (struct VIDMM_GLOBAL *)a4[96];
  v11.Size = a2;
  if ( v7 )
  {
    v8 = (VIDMM_EXPORT *)a4[95];
    Global = DXGGLOBAL::GetGlobal();
    result = VIDMM_EXPORT::VidMmReserveGpuVirtualAddress(v8, v7, *((struct DXGPROCESS **)Global + 167), 0LL, &v11);
    if ( (int)result >= 0 )
      *a3 = v11.VirtualAddress;
  }
  else
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 5522;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"VIDMM_GLOBAL is not initialized",
      5522LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225473LL;
  }
  return result;
}
