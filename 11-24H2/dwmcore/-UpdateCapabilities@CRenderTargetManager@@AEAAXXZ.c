/*
 * XREFs of ?UpdateCapabilities@CRenderTargetManager@@AEAAXXZ @ 0x1800A6188
 * Callers:
 *     ?RenderAndPresent@CRenderTargetManager@@QEAAJXZ @ 0x1801033D0 (-RenderAndPresent@CRenderTargetManager@@QEAAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180040010 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?IsHDR@RenderTargetInfo@@QEBA_NXZ @ 0x180061250 (-IsHDR@RenderTargetInfo@@QEBA_NXZ.c)
 *     ??1?$vector_facade@U_LUID@@V?$buffer_impl@U_LUID@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA@XZ @ 0x1800A6424 (--1-$vector_facade@U_LUID@@V-$buffer_impl@U_LUID@@$01$00Vliberal_expansion_policy@detail@@@detai.c)
 *     ?Get2DScaleDimensions@CMILMatrix@@QEBAXPEAM0@Z @ 0x1800A7F50 (-Get2DScaleDimensions@CMILMatrix@@QEBAXPEAM0@Z.c)
 *     ?reserve_region@?$vector_facade@PEAVIMonitorTarget@@V?$buffer_impl@PEAVIMonitorTarget@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAPEAVIMonitorTarget@@_K0@Z @ 0x18018A498 (-reserve_region@-$vector_facade@PEAVIMonitorTarget@@V-$buffer_impl@PEAVIMonitorTarget@@$03$00Vli.c)
 *     ??$?0$0?0V?$vector_facade@U_LUID@@V?$buffer_impl@U_LUID@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@$0A@@?$span@U_LUID@@$0?0@gsl@@QEAA@AEAV?$vector_facade@U_LUID@@V?$buffer_impl@U_LUID@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x18020AC30 (--$-0$0-0V-$vector_facade@U_LUID@@V-$buffer_impl@U_LUID@@$01$00Vliberal_expansion_policy@detail@.c)
 *     ?UpdateFeatureLevels@CDeviceManager@@SAXAEBV?$span@U_LUID@@$0?0@gsl@@_N@Z @ 0x18021AD90 (-UpdateFeatureLevels@CDeviceManager@@SAXAEBV-$span@U_LUID@@$0-0@gsl@@_N@Z.c)
 *     ?push_back@?$vector_facade@PEAVICapabilitiesContributorTarget@@V?$buffer_impl@PEAVICapabilitiesContributorTarget@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAX$$QEAPEAVICapabilitiesContributorTarget@@@Z @ 0x180249E4C (-push_back@-$vector_facade@PEAVICapabilitiesContributorTarget@@V-$buffer_impl@PEAVICapabilitiesC.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
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
  int (__fastcall ***v15)(__int64, GUID *, __int64 *); // r14
  float v16; // xmm0_4
  CMILMatrix *v17; // rax
  int (__fastcall **v18)(__int64, GUID *, __int64 *); // rax
  int (__fastcall ***v19)(_QWORD, GUID *, __int64 *); // rcx
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rsi
  int v23; // ecx
  RenderTargetInfo *v24; // rax
  _DWORD *v25; // rax
  _BYTE *v26; // rcx
  _BYTE *v27; // r10
  _DWORD *i; // r9
  __int64 v29; // [rsp+28h] [rbp-79h] BYREF
  __int64 v30[2]; // [rsp+30h] [rbp-71h] BYREF
  _BYTE v31[24]; // [rsp+40h] [rbp-61h] BYREF
  _BYTE *v32; // [rsp+58h] [rbp-49h] BYREF
  _BYTE *v33; // [rsp+60h] [rbp-41h]
  _BYTE **v34; // [rsp+68h] [rbp-39h]
  _BYTE v35[16]; // [rsp+70h] [rbp-31h] BYREF
  _BYTE *v36; // [rsp+80h] [rbp-21h] BYREF
  _BYTE *v37; // [rsp+88h] [rbp-19h]
  __int64 *v38; // [rsp+90h] [rbp-11h]
  _BYTE v39[32]; // [rsp+98h] [rbp-9h] BYREF
  __int64 v40; // [rsp+B8h] [rbp+17h] BYREF

  v1 = 0;
  v36 = v39;
  v3 = 0.0;
  v37 = v39;
  v4 = 0;
  v38 = &v40;
  *((_DWORD *)this + 181) = 1065353216;
  *((_DWORD *)this + 182) = 1065353216;
  v5 = (__int64 *)*((_QWORD *)this + 3);
  v6 = (__int64 *)*((_QWORD *)this + 4);
  while ( v5 != v6 )
  {
    v15 = (int (__fastcall ***)(__int64, GUID *, __int64 *))*v5;
    v16 = *(float *)((*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(*v5 + 8) + 24LL))(*v5 + 8, v31) + 16);
    if ( v16 != 0.0 )
    {
      v3 = v3 + v16;
      ++v4;
    }
    if ( ((unsigned __int8 (__fastcall *)(int (__fastcall ***)(__int64, GUID *, __int64 *)))(*v15)[23])(v15) )
      v1 = 1;
    v29 = 0LL;
    v17 = (CMILMatrix *)((__int64 (__fastcall *)(int (__fastcall ***)(__int64, GUID *, __int64 *)))(*v15)[8])(v15);
    CMILMatrix::Get2DScaleDimensions(v17, (float *)&v29, (float *)&v29 + 1);
    if ( *(float *)&v29 > *((float *)this + 181) && *((float *)&v29 + 1) > *((float *)this + 182) )
      *(_QWORD *)((char *)this + 724) = _mm_unpacklo_ps((__m128)(unsigned int)v29, (__m128)HIDWORD(v29)).m128_u64[0];
    v18 = *v15;
    v30[0] = 0LL;
    if ( (*v18)((__int64)v15, &GUID_3426b083_3cb1_4ffc_9ad5_931f482bb72e, v30) >= 0 )
    {
      v29 = v30[0];
      detail::vector_facade<ICapabilitiesContributorTarget *,detail::buffer_impl<ICapabilitiesContributorTarget *,4,1,detail::liberal_expansion_policy>>::push_back(
        &v36,
        &v29);
    }
    if ( v30[0] )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v30[0] + 16LL))(v30[0]);
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
    v19 = *v8;
    v30[0] = 0LL;
    if ( (**v19)(v19, &GUID_3426b083_3cb1_4ffc_9ad5_931f482bb72e, v30) >= 0 )
    {
      v29 = v30[0];
      detail::vector_facade<ICapabilitiesContributorTarget *,detail::buffer_impl<ICapabilitiesContributorTarget *,4,1,detail::liberal_expansion_policy>>::push_back(
        &v36,
        &v29);
    }
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(v30);
    ++v8;
  }
  v10 = v36;
  v11 = v35;
  v12 = v37;
  v13 = v35;
  v32 = v35;
  v33 = v35;
  v14 = 0;
  v34 = &v36;
  while ( v10 != v12 )
  {
    v22 = *v10;
    (*(void (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)*v10 + 40LL))(*v10, v30);
    v23 = HIDWORD(v30[0]) * LODWORD(v30[0]);
    if ( HIDWORD(v30[0]) * LODWORD(v30[0]) > v14 )
    {
      *((_QWORD *)this + 89) = v30[0];
      v14 = v23;
      v24 = (RenderTargetInfo *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v22 + 24LL))(v22, v31);
      *((_DWORD *)this + 180) = RenderTargetInfo::IsHDR(v24) ? 8 : 4;
    }
    v25 = (_DWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v22 + 24LL))(v22, v31);
    v11 = v32;
    v13 = v33;
    v26 = v32;
    v27 = v32;
    for ( i = v32; v27 != v33 && (*i != *v25 || i[1] != v25[1]); i += 2 )
    {
      v26 = i + 2;
      v27 = i + 2;
    }
    if ( v26 == v33 )
    {
      *(_QWORD *)detail::vector_facade<IMonitorTarget *,detail::buffer_impl<IMonitorTarget *,4,1,detail::liberal_expansion_policy>>::reserve_region(
                   &v32,
                   (v33 - v32) >> 3) = *(_QWORD *)v25;
      v13 = v33;
      v11 = v32;
    }
    ++v10;
  }
  if ( v13 != v11 )
  {
    v20 = gsl::span<_LUID,-1>::span<_LUID,-1>(v30, &v32);
    LOBYTE(v21) = v1;
    CDeviceManager::UpdateFeatureLevels(v20, v21);
    *((_BYTE *)this + 750) = 0;
  }
  detail::vector_facade<_LUID,detail::buffer_impl<_LUID,2,1,detail::liberal_expansion_policy>>::~vector_facade<_LUID,detail::buffer_impl<_LUID,2,1,detail::liberal_expansion_policy>>(&v32);
  detail::vector_facade<_LUID,detail::buffer_impl<_LUID,2,1,detail::liberal_expansion_policy>>::~vector_facade<_LUID,detail::buffer_impl<_LUID,2,1,detail::liberal_expansion_policy>>(&v36);
}
