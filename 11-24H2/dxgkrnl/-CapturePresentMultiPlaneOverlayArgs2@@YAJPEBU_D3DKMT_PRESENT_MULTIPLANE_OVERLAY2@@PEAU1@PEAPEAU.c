/*
 * XREFs of ?CapturePresentMultiPlaneOverlayArgs2@@YAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY2@@PEAU1@PEAPEAU_D3DKMT_MULTIPLANE_OVERLAY2@@PEAPEAUtagRECT@@@Z @ 0x1401DE41C
 * Callers:
 *     DxgkPresentMultiPlaneOverlay2 @ 0x1401DFCB0 (DxgkPresentMultiPlaneOverlay2.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400224A0 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x1400A1BF0 (RtlCopyVolatileMemory.c)
 *     memmove @ 0x1400A1D00 (memmove.c)
 *     memset @ 0x1400A2000 (memset.c)
 *     _DxgkPresentMultiPlaneOverlay_::_2_::_AUTO::__AUTO @ 0x1401DE3F4 (_DxgkPresentMultiPlaneOverlay_--_2_--_AUTO--__AUTO.c)
 */

__int64 __fastcall CapturePresentMultiPlaneOverlayArgs2(
        const struct _D3DKMT_PRESENT_MULTIPLANE_OVERLAY2 *a1,
        struct _D3DKMT_PRESENT_MULTIPLANE_OVERLAY2 *a2,
        struct _D3DKMT_MULTIPLANE_OVERLAY2 **a3,
        struct tagRECT **a4)
{
  unsigned __int64 v8; // rcx
  __int64 v9; // r14
  unsigned int v10; // edi
  unsigned __int64 v12; // rax
  __int64 v13; // rcx
  struct _D3DKMT_MULTIPLANE_OVERLAY2 *v14; // rsi
  __int64 v15; // rax
  unsigned int v16; // ebx
  const void *v17; // rdx
  void **v18; // rax
  __int64 v19; // rcx
  __int64 CurrentProcess; // rax
  __int64 v21; // rcx
  __int64 v22; // rax
  void *v23[2]; // [rsp+50h] [rbp-188h] BYREF
  void *v24[38]; // [rsp+60h] [rbp-178h] BYREF

  memset(v24, 0, sizeof(v24));
  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    a1 = (const struct _D3DKMT_PRESENT_MULTIPLANE_OVERLAY2 *)MmUserProbeAddress;
  RtlCopyVolatileMemory(v24, a1, 0x130uLL);
  if ( (unsigned int)(HIDWORD(v24[35]) - 1) > 6 )
  {
    CurrentProcess = PsGetCurrentProcess(HIDWORD(v24[35]));
    v16 = -1073741811;
    WdLogSingleEntry3(2LL, HIDWORD(v24[35]), -1073741811LL, CurrentProcess);
    WdLogGlobalForLineNumber = 178;
    v22 = PsGetCurrentProcess(v21);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Presenting multi plane overlay plane count (0x%I64x) is invalid, returing 0x%I64x at 0x%I64x",
      HIDWORD(v24[35]),
      -1073741811LL,
      v22,
      0LL,
      0LL);
    return v16;
  }
  v8 = 120LL * HIDWORD(v24[35]);
  v9 = 0xFFFFFFFFLL;
  if ( v8 <= 0xFFFFFFFF )
    v9 = (unsigned int)v8;
  v10 = v8 > 0xFFFFFFFF ? 0xC0000095 : 0;
  if ( v8 > 0xFFFFFFFF )
  {
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 188;
    return v10;
  }
  v23[1] = 0LL;
  v12 = 120LL * HIDWORD(v24[35]);
  if ( !is_mul_ok(HIDWORD(v24[35]), 0x78uLL) )
    v12 = -1LL;
  v14 = (struct _D3DKMT_MULTIPLANE_OVERLAY2 *)operator new[](v12, 0x4B677844u, 256LL);
  v23[0] = v14;
  if ( !v14 )
  {
    v15 = PsGetCurrentProcess(v13);
    v16 = -1073741801;
    WdLogSingleEntry2(3LL, -1073741801LL, v15);
    WdLogGlobalForLineNumber = 212;
    DxgkPresentMultiPlaneOverlay_::_2_::_AUTO::__AUTO(v23);
    return v16;
  }
  v17 = v24[36];
  if ( (char *)v24[36] + v9 < v24[36] || (char *)v24[36] + v9 > (void *)MmUserProbeAddress )
    *(_BYTE *)MmUserProbeAddress = 0;
  memmove(v14, v17, (unsigned int)v9);
  v24[36] = v14;
  v18 = v24;
  v19 = 2LL;
  do
  {
    *(_OWORD *)&a2->hAdapter = *(_OWORD *)v18;
    *(_OWORD *)&a2->BroadcastContext[1] = *((_OWORD *)v18 + 1);
    *(_OWORD *)&a2->BroadcastContext[5] = *((_OWORD *)v18 + 2);
    *(_OWORD *)&a2->BroadcastContext[9] = *((_OWORD *)v18 + 3);
    *(_OWORD *)&a2->BroadcastContext[13] = *((_OWORD *)v18 + 4);
    *(_OWORD *)&a2->BroadcastContext[17] = *((_OWORD *)v18 + 5);
    *(_OWORD *)&a2->BroadcastContext[21] = *((_OWORD *)v18 + 6);
    a2 = (struct _D3DKMT_PRESENT_MULTIPLANE_OVERLAY2 *)((char *)a2 + 128);
    *(_OWORD *)&a2[-1].pPresentPlanes = *((_OWORD *)v18 + 7);
    v18 += 16;
    --v19;
  }
  while ( v19 );
  *(_OWORD *)&a2->hAdapter = *(_OWORD *)v18;
  *(_OWORD *)&a2->BroadcastContext[1] = *((_OWORD *)v18 + 1);
  *(_OWORD *)&a2->BroadcastContext[5] = *((_OWORD *)v18 + 2);
  *a3 = v14;
  *a4 = 0LL;
  v23[0] = 0LL;
  DxgkPresentMultiPlaneOverlay_::_2_::_AUTO::__AUTO(v23);
  return 0LL;
}
