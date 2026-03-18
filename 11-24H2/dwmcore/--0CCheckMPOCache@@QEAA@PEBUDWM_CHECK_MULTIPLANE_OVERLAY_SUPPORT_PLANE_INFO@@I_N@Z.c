/*
 * XREFs of ??0CCheckMPOCache@@QEAA@PEBUDWM_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE_INFO@@I_N@Z @ 0x1801F2968
 * Callers:
 *     ??$make_unique@VCCheckMPOCache@@AEAPEBUDWM_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE_INFO@@AEAIAEA_N$0A@@std@@YA?AV?$unique_ptr@VCCheckMPOCache@@U?$default_delete@VCCheckMPOCache@@@std@@@0@AEAPEBUDWM_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE_INFO@@AEAIAEA_N@Z @ 0x1801F2900 (--$make_unique@VCCheckMPOCache@@AEAPEBUDWM_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE_INFO@@AEAIAEA_.c)
 * Callees:
 *     ?GetCurrentFrameId@@YA_KXZ @ 0x18003A510 (-GetCurrentFrameId@@YA_KXZ.c)
 *     ??$emplace_back@UDWM_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE_INFO@@@?$vector_facade@VPlaneInfo@CCheckMPOCache@@V?$buffer_impl@VPlaneInfo@CCheckMPOCache@@$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXUDWM_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE_INFO@@@Z @ 0x1801F2A78 (--$emplace_back@UDWM_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE_INFO@@@-$vector_facade@VPlaneInfo@CC.c)
 */

CCheckMPOCache *__fastcall CCheckMPOCache::CCheckMPOCache(
        CCheckMPOCache *this,
        const struct DWM_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE_INFO *a2)
{
  _QWORD *v3; // r14
  unsigned int v5; // r8d
  __int64 v6; // rcx
  char v7; // r9
  __int64 v8; // rdi
  __int64 v9; // rbp
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  _OWORD v19[9]; // [rsp+20h] [rbp-98h] BYREF

  v3 = (_QWORD *)((char *)this + 984);
  *(_QWORD *)this = (char *)this + 24;
  *((_QWORD *)this + 1) = (char *)this + 24;
  *((_QWORD *)this + 2) = (char *)this + 984;
  *((_QWORD *)this + 123) = GetCurrentFrameId();
  *(_BYTE *)(v6 + 992) = v7;
  if ( v5 )
  {
    v8 = 0LL;
    v9 = v5;
    do
    {
      v10 = *((_OWORD *)a2 + 1);
      v19[0] = *(_OWORD *)a2;
      v11 = *((_OWORD *)a2 + 2);
      v19[1] = v10;
      v12 = *((_OWORD *)a2 + 3);
      v19[2] = v11;
      v13 = *((_OWORD *)a2 + 4);
      v19[3] = v12;
      v14 = *((_OWORD *)a2 + 5);
      v19[4] = v13;
      v15 = *((_OWORD *)a2 + 6);
      v19[5] = v14;
      v16 = *((_OWORD *)a2 + 7);
      v19[6] = v15;
      v17 = *((_OWORD *)a2 + 8);
      v19[7] = v16;
      v19[8] = v17;
      detail::vector_facade<CCheckMPOCache::PlaneInfo,detail::buffer_impl<CCheckMPOCache::PlaneInfo,6,1,detail::liberal_expansion_policy>>::emplace_back<DWM_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE_INFO>(
        this,
        v19);
      if ( !*(_DWORD *)(v8 + *(_QWORD *)this + 144) || !*(_DWORD *)(v8 + *(_QWORD *)this + 148) )
        *v3 = 0LL;
      a2 = (const struct DWM_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE_INFO *)((char *)a2 + 144);
      v8 += 160LL;
      --v9;
    }
    while ( v9 );
  }
  return this;
}
