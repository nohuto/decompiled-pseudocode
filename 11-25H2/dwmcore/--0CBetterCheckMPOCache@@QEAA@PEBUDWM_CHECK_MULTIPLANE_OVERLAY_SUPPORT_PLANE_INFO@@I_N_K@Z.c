/*
 * XREFs of ??0CBetterCheckMPOCache@@QEAA@PEBUDWM_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE_INFO@@I_N_K@Z @ 0x1802C1F98
 * Callers:
 *     ??$make_unique@VCBetterCheckMPOCache@@AEAPEBUDWM_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE_INFO@@AEAIAEA_NAEA_K$0A@@std@@YA?AV?$unique_ptr@VCBetterCheckMPOCache@@U?$default_delete@VCBetterCheckMPOCache@@@std@@@0@AEAPEBUDWM_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE_INFO@@AEAIAEA_NAEA_K@Z @ 0x1802C1A18 (--$make_unique@VCBetterCheckMPOCache@@AEAPEBUDWM_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE_INFO@@AE.c)
 * Callees:
 *     ??0PlaneInfo@CBetterCheckMPOCache@@QEAA@AEBUDWM_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE_INFO@@@Z @ 0x1802C2108 (--0PlaneInfo@CBetterCheckMPOCache@@QEAA@AEBUDWM_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE_INFO@@@Z.c)
 *     ?reserve_region@?$vector_facade@VPlaneInfo@CBetterCheckMPOCache@@V?$buffer_impl@VPlaneInfo@CBetterCheckMPOCache@@$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAVPlaneInfo@CBetterCheckMPOCache@@_K0@Z @ 0x1802C4A64 (-reserve_region@-$vector_facade@VPlaneInfo@CBetterCheckMPOCache@@V-$buffer_impl@VPlaneInfo@CBett.c)
 */

CBetterCheckMPOCache *__fastcall CBetterCheckMPOCache::CBetterCheckMPOCache(
        CBetterCheckMPOCache *this,
        const struct DWM_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE_INFO *a2,
        unsigned int a3,
        char a4,
        unsigned __int64 a5)
{
  char *v5; // r10
  _QWORD *v6; // rsi
  __int64 v9; // rdi
  __int64 v10; // r14
  __int128 v11; // xmm1
  __int64 v12; // rdx
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  CBetterCheckMPOCache::PlaneInfo *v20; // rax
  _OWORD v22[9]; // [rsp+20h] [rbp-98h] BYREF

  v5 = (char *)this + 24;
  *(_QWORD *)this = (char *)this + 24;
  v6 = (_QWORD *)((char *)this + 480);
  *((_QWORD *)this + 1) = (char *)this + 24;
  *((_QWORD *)this + 2) = (char *)this + 480;
  *((_QWORD *)this + 60) = a5;
  *((_BYTE *)this + 488) = a4;
  if ( a3 )
  {
    v9 = 0LL;
    v10 = a3;
    do
    {
      v11 = *((_OWORD *)a2 + 1);
      v12 = *((_QWORD *)this + 1) - (_QWORD)v5;
      v22[0] = *(_OWORD *)a2;
      v13 = *((_OWORD *)a2 + 2);
      v22[1] = v11;
      v14 = *((_OWORD *)a2 + 3);
      v22[2] = v13;
      v15 = *((_OWORD *)a2 + 4);
      v22[3] = v14;
      v16 = *((_OWORD *)a2 + 5);
      v22[4] = v15;
      v17 = *((_OWORD *)a2 + 6);
      v22[5] = v16;
      v18 = *((_OWORD *)a2 + 7);
      v22[6] = v17;
      v19 = *((_OWORD *)a2 + 8);
      v22[7] = v18;
      v22[8] = v19;
      v20 = (CBetterCheckMPOCache::PlaneInfo *)detail::vector_facade<CBetterCheckMPOCache::PlaneInfo,detail::buffer_impl<CBetterCheckMPOCache::PlaneInfo,6,1,detail::liberal_expansion_policy>>::reserve_region(
                                                 this,
                                                 0x86BCA1AF286BCA1BuLL * (v12 >> 2));
      CBetterCheckMPOCache::PlaneInfo::PlaneInfo(
        v20,
        (const struct DWM_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE_INFO *)v22);
      v5 = *(char **)this;
      if ( !*(_DWORD *)(v9 + *(_QWORD *)this + 8) || !*(_DWORD *)&v5[v9 + 12] )
        *v6 = 0LL;
      a2 = (const struct DWM_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE_INFO *)((char *)a2 + 144);
      v9 += 76LL;
      --v10;
    }
    while ( v10 );
  }
  return this;
}
