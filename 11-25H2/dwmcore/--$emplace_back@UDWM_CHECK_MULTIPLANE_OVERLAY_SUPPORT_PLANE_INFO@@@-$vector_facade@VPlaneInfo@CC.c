/*
 * XREFs of ??$emplace_back@UDWM_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE_INFO@@@?$vector_facade@VPlaneInfo@CCheckMPOCache@@V?$buffer_impl@VPlaneInfo@CCheckMPOCache@@$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXUDWM_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE_INFO@@@Z @ 0x1801FF1A8
 * Callers:
 *     ??0CCheckMPOCache@@QEAA@PEBUDWM_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE_INFO@@I_N@Z @ 0x1801FF098 (--0CCheckMPOCache@@QEAA@PEBUDWM_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE_INFO@@I_N@Z.c)
 * Callees:
 *     ?reserve_region@?$vector_facade@VPlaneInfo@CCheckMPOCache@@V?$buffer_impl@VPlaneInfo@CCheckMPOCache@@$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAVPlaneInfo@CCheckMPOCache@@_K0@Z @ 0x1801FF2B8 (-reserve_region@-$vector_facade@VPlaneInfo@CCheckMPOCache@@V-$buffer_impl@VPlaneInfo@CCheckMPOCa.c)
 */

__int64 __fastcall detail::vector_facade<CCheckMPOCache::PlaneInfo,detail::buffer_impl<CCheckMPOCache::PlaneInfo,6,1,detail::liberal_expansion_policy>>::emplace_back<DWM_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE_INFO>(
        _QWORD *a1,
        __int128 *a2)
{
  __int64 v3; // rax
  __int128 v4; // xmm0
  __int128 v5; // xmm1
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v14; // [rsp+20h] [rbp-98h]

  v14 = *a2;
  v3 = detail::vector_facade<CCheckMPOCache::PlaneInfo,detail::buffer_impl<CCheckMPOCache::PlaneInfo,6,1,detail::liberal_expansion_policy>>::reserve_region(
         a1,
         0xCCCCCCCCCCCCCCCDuLL * ((__int64)(a1[1] - *a1) >> 5));
  v4 = *a2;
  v5 = a2[1];
  *(_QWORD *)(v3 + 148) = 0LL;
  *(_OWORD *)v3 = v4;
  *(_DWORD *)(v3 + 156) = 0;
  v6 = a2[2];
  *(_DWORD *)(v3 + 144) = 0;
  *(_OWORD *)(v3 + 16) = v5;
  v7 = a2[3];
  *(_OWORD *)(v3 + 32) = v6;
  v8 = a2[4];
  *(_OWORD *)(v3 + 48) = v7;
  v9 = a2[5];
  *(_OWORD *)(v3 + 64) = v8;
  v10 = a2[6];
  *(_OWORD *)(v3 + 80) = v9;
  v11 = a2[7];
  *(_OWORD *)(v3 + 96) = v10;
  v12 = a2[8];
  *(_OWORD *)(v3 + 112) = v11;
  *(_OWORD *)(v3 + 128) = v12;
  return (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)&v14 + 1) + 32LL))(*((_QWORD *)&v14 + 1));
}
