/*
 * XREFs of ?UpdateCapabilities@CRenderTargetManager@@AEAAXXZ @ 0x180114778
 * Callers:
 *     ?RenderAndPresent@CRenderTargetManager@@QEAAJXZ @ 0x18013EEDC (-RenderAndPresent@CRenderTargetManager@@QEAAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18002F800 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?IsHDR@RenderTargetInfo@@QEBA_NXZ @ 0x180040190 (-IsHDR@RenderTargetInfo@@QEBA_NXZ.c)
 *     ?reserve_region@?$vector_facade@PEAVIMonitorTarget@@V?$buffer_impl@PEAVIMonitorTarget@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAPEAVIMonitorTarget@@_K0@Z @ 0x1800C3264 (-reserve_region@-$vector_facade@PEAVIMonitorTarget@@V-$buffer_impl@PEAVIMonitorTarget@@$03$00Vli.c)
 *     ??1?$vector_facade@U_LUID@@V?$buffer_impl@U_LUID@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA@XZ @ 0x180114A14 (--1-$vector_facade@U_LUID@@V-$buffer_impl@U_LUID@@$01$00Vliberal_expansion_policy@detail@@@detai.c)
 *     ?Get2DScaleDimensions@CMILMatrix@@QEBAXPEAM0@Z @ 0x180115540 (-Get2DScaleDimensions@CMILMatrix@@QEBAXPEAM0@Z.c)
 *     ??$?0$0?0V?$vector_facade@U_LUID@@V?$buffer_impl@U_LUID@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@$0A@@?$span@U_LUID@@$0?0@gsl@@QEAA@AEAV?$vector_facade@U_LUID@@V?$buffer_impl@U_LUID@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x180216FB0 (--$-0$0-0V-$vector_facade@U_LUID@@V-$buffer_impl@U_LUID@@$01$00Vliberal_expansion_policy@detail@.c)
 *     ?UpdateFeatureLevels@CDeviceManager@@SAXAEBV?$span@U_LUID@@$0?0@gsl@@_N@Z @ 0x180226A48 (-UpdateFeatureLevels@CDeviceManager@@SAXAEBV-$span@U_LUID@@$0-0@gsl@@_N@Z.c)
 *     ?push_back@?$vector_facade@PEAVICapabilitiesContributorTarget@@V?$buffer_impl@PEAVICapabilitiesContributorTarget@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAX$$QEAPEAVICapabilitiesContributorTarget@@@Z @ 0x18025519C (-push_back@-$vector_facade@PEAVICapabilitiesContributorTarget@@V-$buffer_impl@PEAVICapabilitiesC.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CRenderTargetManager::UpdateCapabilities(CRenderTargetManager *this)
{
  char v1; // r12
  float v3; // xmm6_4
  int v4; // esi
  __int64 *v5; // rbx
  __int64 *v6; // r15
  float v7; // xmm6_4
  int (__fastcall ****v8)(_QWORD, GUID *, __int64 *); // rbx
  int (__fastcall ****v9)(_QWORD, GUID *, __int64 *); // rsi
  _QWORD *v10; // rbx
  _BYTE *v11; // r8
  _QWORD *v12; // r15
  _BYTE *v13; // rdx
  unsigned int v14; // r14d
  __int64 v15; // rdx
  int (__fastcall ***v16)(__int64, GUID *, __int64 *); // r14
  float v17; // xmm0_4
  CMILMatrix *v18; // rax
  int (__fastcall **v19)(__int64, GUID *, __int64 *); // rax
  int (__fastcall ***v20)(_QWORD, GUID *, __int64 *); // rcx
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rsi
  int v24; // ecx
  RenderTargetInfo *v25; // rax
  _DWORD *v26; // rax
  _BYTE *v27; // rcx
  _BYTE *v28; // r10
  _DWORD *i; // r9
  __int64 v30; // [rsp+28h] [rbp-79h] BYREF
  __int64 v31[2]; // [rsp+30h] [rbp-71h] BYREF
  _BYTE v32[24]; // [rsp+40h] [rbp-61h] BYREF
  _BYTE *v33; // [rsp+58h] [rbp-49h] BYREF
  _BYTE *v34; // [rsp+60h] [rbp-41h]
  _BYTE **v35; // [rsp+68h] [rbp-39h]
  _BYTE v36[16]; // [rsp+70h] [rbp-31h] BYREF
  _BYTE *v37; // [rsp+80h] [rbp-21h] BYREF
  _BYTE *v38; // [rsp+88h] [rbp-19h]
  __int64 *v39; // [rsp+90h] [rbp-11h]
  _BYTE v40[32]; // [rsp+98h] [rbp-9h] BYREF
  __int64 v41; // [rsp+B8h] [rbp+17h] BYREF

  v1 = 0;
  v37 = v40;
  v3 = 0.0;
  v38 = v40;
  v4 = 0;
  v39 = &v41;
  *((_DWORD *)this + 181) = 1065353216;
  *((_DWORD *)this + 182) = 1065353216;
  v5 = (__int64 *)*((_QWORD *)this + 3);
  v6 = (__int64 *)*((_QWORD *)this + 4);
  while ( v5 != v6 )
  {
    v16 = (int (__fastcall ***)(__int64, GUID *, __int64 *))*v5;
    v17 = *(float *)((*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(*v5 + 8) + 24LL))(*v5 + 8, v32) + 16);
    if ( v17 != 0.0 )
    {
      v3 = v3 + v17;
      ++v4;
    }
    if ( ((unsigned __int8 (__fastcall *)(int (__fastcall ***)(__int64, GUID *, __int64 *)))(*v16)[23])(v16) )
      v1 = 1;
    v30 = 0LL;
    v18 = (CMILMatrix *)((__int64 (__fastcall *)(int (__fastcall ***)(__int64, GUID *, __int64 *)))(*v16)[8])(v16);
    CMILMatrix::Get2DScaleDimensions(v18, (float *)&v30, (float *)&v30 + 1);
    if ( *(float *)&v30 > *((float *)this + 181) && *((float *)&v30 + 1) > *((float *)this + 182) )
      *(_QWORD *)((char *)this + 724) = _mm_unpacklo_ps((__m128)(unsigned int)v30, (__m128)HIDWORD(v30)).m128_u64[0];
    v19 = *v16;
    v31[0] = 0LL;
    if ( (*v19)((__int64)v16, &GUID_3426b083_3cb1_4ffc_9ad5_931f482bb72e, v31) >= 0 )
    {
      v30 = v31[0];
      detail::vector_facade<ICapabilitiesContributorTarget *,detail::buffer_impl<ICapabilitiesContributorTarget *,4,1,detail::liberal_expansion_policy>>::push_back(
        &v37,
        &v30);
    }
    if ( v31[0] )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v31[0] + 16LL))(v31[0]);
    ++v5;
  }
  if ( v4 )
    v7 = v3 / (float)v4;
  else
    v7 = *(float *)&`CVisual::SetOpacityInternal'::`2'::sc_defaultValue;
  *((float *)this + 183) = v7;
  *((_BYTE *)this + 751) = v4 != 0;
  v8 = (int (__fastcall ****)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 10);
  v9 = (int (__fastcall ****)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 11);
  while ( v8 != v9 )
  {
    v20 = *v8;
    v31[0] = 0LL;
    if ( (**v20)(v20, &GUID_3426b083_3cb1_4ffc_9ad5_931f482bb72e, v31) >= 0 )
    {
      v30 = v31[0];
      detail::vector_facade<ICapabilitiesContributorTarget *,detail::buffer_impl<ICapabilitiesContributorTarget *,4,1,detail::liberal_expansion_policy>>::push_back(
        &v37,
        &v30);
    }
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(v31);
    ++v8;
  }
  v10 = v37;
  v11 = v36;
  v12 = v38;
  v13 = v36;
  v33 = v36;
  v34 = v36;
  v14 = 0;
  v35 = &v37;
  while ( v10 != v12 )
  {
    v23 = *v10;
    (*(void (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)*v10 + 40LL))(*v10, v31);
    v24 = HIDWORD(v31[0]) * LODWORD(v31[0]);
    if ( HIDWORD(v31[0]) * LODWORD(v31[0]) > v14 )
    {
      *((_QWORD *)this + 89) = v31[0];
      v14 = v24;
      v25 = (RenderTargetInfo *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v23 + 24LL))(v23, v32);
      *((_DWORD *)this + 180) = RenderTargetInfo::IsHDR(v25) ? 8 : 4;
    }
    v26 = (_DWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v23 + 24LL))(v23, v32);
    v11 = v33;
    v13 = v34;
    v27 = v33;
    v28 = v33;
    for ( i = v33; v28 != v34 && (*i != *v26 || i[1] != v26[1]); i += 2 )
    {
      v27 = i + 2;
      v28 = i + 2;
    }
    if ( v27 == v34 )
    {
      *(_QWORD *)detail::vector_facade<IMonitorTarget *,detail::buffer_impl<IMonitorTarget *,4,1,detail::liberal_expansion_policy>>::reserve_region(
                   (const void **)&v33,
                   (v34 - v33) >> 3) = *(_QWORD *)v26;
      v13 = v34;
      v11 = v33;
    }
    ++v10;
  }
  if ( v13 != v11 )
  {
    v21 = gsl::span<_LUID,-1>::span<_LUID,-1>(v31, &v33);
    LOBYTE(v22) = v1;
    CDeviceManager::UpdateFeatureLevels(v21, v22);
    *((_BYTE *)this + 750) = 0;
  }
  detail::vector_facade<_LUID,detail::buffer_impl<_LUID,2,1,detail::liberal_expansion_policy>>::~vector_facade<_LUID,detail::buffer_impl<_LUID,2,1,detail::liberal_expansion_policy>>(
    &v33,
    v13);
  detail::vector_facade<_LUID,detail::buffer_impl<_LUID,2,1,detail::liberal_expansion_policy>>::~vector_facade<_LUID,detail::buffer_impl<_LUID,2,1,detail::liberal_expansion_policy>>(
    &v37,
    v15);
}
