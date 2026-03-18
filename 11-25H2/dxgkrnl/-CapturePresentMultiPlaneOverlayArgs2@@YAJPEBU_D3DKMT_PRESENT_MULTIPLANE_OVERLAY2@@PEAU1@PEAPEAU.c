/*
 * XREFs of ?CapturePresentMultiPlaneOverlayArgs2@@YAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY2@@PEAU1@PEAPEAU_D3DKMT_MULTIPLANE_OVERLAY2@@PEAPEAUtagRECT@@@Z @ 0x1401D918C
 * Callers:
 *     DxgkPresentMultiPlaneOverlay2 @ 0x1401DAA20 (DxgkPresentMultiPlaneOverlay2.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140013010 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x14009F890 (RtlCopyVolatileMemory.c)
 *     memmove @ 0x14009F9C0 (memmove.c)
 *     memset @ 0x14009FCC0 (memset.c)
 *     _DxgkPresentMultiPlaneOverlay_::_2_::_AUTO::__AUTO @ 0x1401D9164 (_DxgkPresentMultiPlaneOverlay_--_2_--_AUTO--__AUTO.c)
 */

__int64 __fastcall CapturePresentMultiPlaneOverlayArgs2(
        const struct _D3DKMT_PRESENT_MULTIPLANE_OVERLAY2 *a1,
        struct _D3DKMT_PRESENT_MULTIPLANE_OVERLAY2 *a2,
        struct _D3DKMT_MULTIPLANE_OVERLAY2 **a3,
        struct tagRECT **a4)
{
  __int64 v8; // r9
  unsigned __int64 v9; // rcx
  __int64 v10; // r14
  unsigned int v11; // edi
  unsigned __int64 v13; // rax
  __int64 v14; // rcx
  struct _D3DKMT_MULTIPLANE_OVERLAY2 *v15; // rsi
  __int64 v16; // rax
  unsigned int v17; // ebx
  const void *v18; // rdx
  void **v19; // rax
  __int64 v20; // rcx
  __int64 CurrentProcess; // rax
  __int64 v22; // rcx
  __int64 v23; // rax
  void *v24[2]; // [rsp+50h] [rbp-188h] BYREF
  void *v25[38]; // [rsp+60h] [rbp-178h] BYREF

  memset(v25, 0, sizeof(v25));
  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    a1 = (const struct _D3DKMT_PRESENT_MULTIPLANE_OVERLAY2 *)MmUserProbeAddress;
  RtlCopyVolatileMemory(v25, a1, 0x130uLL);
  if ( (unsigned int)(HIDWORD(v25[35]) - 1) > 6 )
  {
    CurrentProcess = PsGetCurrentProcess(HIDWORD(v25[35]));
    v17 = -1073741811;
    WdLogSingleEntry3(2LL, HIDWORD(v25[35]), -1073741811LL, CurrentProcess);
    WdLogGlobalForLineNumber = 176;
    v23 = PsGetCurrentProcess(v22);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Presenting multi plane overlay plane count (0x%I64x) is invalid, returing 0x%I64x at 0x%I64x",
      HIDWORD(v25[35]),
      -1073741811LL,
      v23,
      0LL,
      0LL);
    return v17;
  }
  v9 = 120LL * HIDWORD(v25[35]);
  v10 = 0xFFFFFFFFLL;
  if ( v9 <= 0xFFFFFFFF )
    v10 = (unsigned int)v9;
  v11 = v9 > 0xFFFFFFFF ? 0xC0000095 : 0;
  if ( v9 > 0xFFFFFFFF )
  {
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 186;
    return v11;
  }
  v24[1] = 0LL;
  v13 = 120LL * HIDWORD(v25[35]);
  if ( !is_mul_ok(HIDWORD(v25[35]), 0x78uLL) )
    v13 = -1LL;
  v15 = (struct _D3DKMT_MULTIPLANE_OVERLAY2 *)operator new[](v13, 0x4B677844u, 256LL, v8);
  v24[0] = v15;
  if ( !v15 )
  {
    v16 = PsGetCurrentProcess(v14);
    v17 = -1073741801;
    WdLogSingleEntry2(3LL, -1073741801LL, v16);
    WdLogGlobalForLineNumber = 210;
    DxgkPresentMultiPlaneOverlay_::_2_::_AUTO::__AUTO(v24);
    return v17;
  }
  v18 = v25[36];
  if ( (char *)v25[36] + v10 < v25[36] || (char *)v25[36] + v10 > (void *)MmUserProbeAddress )
    *(_BYTE *)MmUserProbeAddress = 0;
  memmove(v15, v18, (unsigned int)v10);
  v25[36] = v15;
  v19 = v25;
  v20 = 2LL;
  do
  {
    *(_OWORD *)&a2->hAdapter = *(_OWORD *)v19;
    *(_OWORD *)&a2->BroadcastContext[1] = *((_OWORD *)v19 + 1);
    *(_OWORD *)&a2->BroadcastContext[5] = *((_OWORD *)v19 + 2);
    *(_OWORD *)&a2->BroadcastContext[9] = *((_OWORD *)v19 + 3);
    *(_OWORD *)&a2->BroadcastContext[13] = *((_OWORD *)v19 + 4);
    *(_OWORD *)&a2->BroadcastContext[17] = *((_OWORD *)v19 + 5);
    *(_OWORD *)&a2->BroadcastContext[21] = *((_OWORD *)v19 + 6);
    a2 = (struct _D3DKMT_PRESENT_MULTIPLANE_OVERLAY2 *)((char *)a2 + 128);
    *(_OWORD *)&a2[-1].pPresentPlanes = *((_OWORD *)v19 + 7);
    v19 += 16;
    --v20;
  }
  while ( v20 );
  *(_OWORD *)&a2->hAdapter = *(_OWORD *)v19;
  *(_OWORD *)&a2->BroadcastContext[1] = *((_OWORD *)v19 + 1);
  *(_OWORD *)&a2->BroadcastContext[5] = *((_OWORD *)v19 + 2);
  *a3 = v15;
  *a4 = 0LL;
  v24[0] = 0LL;
  DxgkPresentMultiPlaneOverlay_::_2_::_AUTO::__AUTO(v24);
  return 0LL;
}
