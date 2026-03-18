/*
 * XREFs of ?Render@CSpectreCallbackRenderer@@UEAAJXZ @ 0x180291210
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18002F800 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180041FB8 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180069F90 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B2FCC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Invert@CMILMatrix@@QEAA_NXZ @ 0x1801612EC (-Invert@CMILMatrix@@QEAA_NXZ.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     memset_0 @ 0x18025D108 (memset_0.c)
 *     ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@PEAUISpectreLightNode@@V?$allocator@PEAUISpectreLightNode@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x18026FB6C (--$_Resize_reallocate@U_Value_init_tag@std@@@-$vector@PEAUISpectreLightNode@@V-$allocator@PEAUIS.c)
 *     gsl::final_action__lambda_2c23dc335d575e6068a59f43383614b1___::_final_action__lambda_2c23dc335d575e6068a59f43383614b1___ @ 0x18026FDE0 (gsl--final_action__lambda_2c23dc335d575e6068a59f43383614b1___--_final_action__lambda_2c23dc335d5.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CSpectreCallbackRenderer::Render(CSpectreCallbackRenderer *this)
{
  __int64 v2; // rax
  __int64 v3; // r14
  __int64 v4; // rbx
  char v5; // r15
  __int64 v7; // rbx
  void (__fastcall *v8)(__int64, __int64, __int64 *, _QWORD); // rdi
  __int64 v9; // rbx
  void (__fastcall *v10)(__int64, void (__fastcall ****)(_QWORD, GUID *, __int64 *)); // rdi
  __int64 v11; // rax
  __int64 v12; // r12
  __int64 v13; // rdx
  struct Windows::Foundation::Numerics::float4x4 *v14; // r8
  __int64 v15; // rax
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm2
  __int128 v19; // xmm3
  char *v20; // rdi
  _BYTE *v21; // rdx
  unsigned __int64 v22; // rbx
  unsigned __int64 v23; // rcx
  size_t v24; // rbx
  unsigned __int64 v25; // r14
  __int64 v26; // rcx
  __int64 v27; // rdi
  void (__fastcall *v28)(__int64, __int64); // rbx
  __int64 v29; // rax
  void (__fastcall *v30)(__int64, float *); // rax
  int v31; // eax
  unsigned int v32; // ebx
  void *v34[2]; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v35; // [rsp+40h] [rbp-C0h]
  __int64 v36; // [rsp+48h] [rbp-B8h] BYREF
  void (__fastcall ***v37)(_QWORD, GUID *, __int64 *); // [rsp+50h] [rbp-B0h] BYREF
  __int64 v38; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v39; // [rsp+60h] [rbp-A0h] BYREF
  int v40; // [rsp+68h] [rbp-98h] BYREF
  _QWORD v41[2]; // [rsp+70h] [rbp-90h] BYREF
  char v42; // [rsp+80h] [rbp-80h]
  _OWORD v43[4]; // [rsp+90h] [rbp-70h] BYREF
  int v44; // [rsp+D0h] [rbp-30h]
  __int128 v45; // [rsp+E0h] [rbp-20h] BYREF
  float v46[4]; // [rsp+F0h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+138h] [rbp+38h]

  v2 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 3) + 24LL))(*((_QWORD *)this + 3));
  v39 = 0LL;
  v3 = v2;
  v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 32LL))(v2);
  (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v4 + 320LL))(v4, &v39);
  v45 = 0LL;
  v5 = 1;
  v40 = 1;
  (*(void (__fastcall **)(__int64, int *, __int128 *))(*(_QWORD *)v39 + 768LL))(v39, &v40, &v45);
  if ( SDWORD2(v45) <= (int)v45 || SHIDWORD(v45) <= SDWORD1(v45) )
  {
LABEL_27:
    v32 = 0;
    goto LABEL_28;
  }
  v7 = v39;
  v38 = 0LL;
  v8 = *(void (__fastcall **)(__int64, __int64, __int64 *, _QWORD))(*(_QWORD *)v39 + 712LL);
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset(&v38);
  v8(v7, 1LL, &v38, 0LL);
  v9 = v38;
  v37 = 0LL;
  v10 = *(void (__fastcall **)(__int64, void (__fastcall ****)(_QWORD, GUID *, __int64 *)))(*(_QWORD *)v38 + 56LL);
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)&v37);
  v10(v9, &v37);
  v36 = 0LL;
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset(&v36);
  (**v37)(v37, &GUID_6f15aaf2_d208_4e89_9ab4_489535d34f9c, &v36);
  v11 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 40LL))(v3);
  v35 = 0LL;
  v12 = v11;
  *(_OWORD *)v34 = 0LL;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
  v41[0] = v12;
  v41[1] = v34;
  v15 = *((_QWORD *)this + 16);
  v42 = 1;
  if ( *((_QWORD *)this + 15) != v15 )
  {
    v16 = *((_OWORD *)this + 2);
    v44 = 0;
    v17 = *((_OWORD *)this + 3);
    v18 = *((_OWORD *)this + 4);
    v19 = *((_OWORD *)this + 5);
    v43[0] = v16;
    v43[1] = v17;
    v43[2] = v18;
    v43[3] = v19;
    if ( CMILMatrix::Invert((CMILMatrix *)v43, v13, v14) )
    {
      v20 = (char *)v34[1];
      v21 = v34[0];
      v22 = (__int64)(*((_QWORD *)this + 16) - *((_QWORD *)this + 15)) >> 3;
      v23 = ((char *)v34[1] - (char *)v34[0]) >> 3;
      if ( v22 < v23 )
      {
        v20 = (char *)v34[0] + 8 * v22;
LABEL_14:
        v34[1] = v20;
        goto LABEL_15;
      }
      if ( v22 > v23 )
      {
        if ( v22 <= (signed __int64)(v35 - (unsigned __int64)v34[0]) >> 3 )
        {
          v24 = 8 * (v22 - v23);
          memset_0(v34[1], 0, v24);
          v21 = v34[0];
          v20 += v24;
          goto LABEL_14;
        }
        std::vector<ISpectreLightNode *>::_Resize_reallocate<std::_Value_init_tag>(
          (const void **)v34,
          (__int64)(*((_QWORD *)this + 16) - *((_QWORD *)this + 15)) >> 3);
        v21 = v34[0];
        v20 = (char *)v34[1];
      }
LABEL_15:
      v25 = 0LL;
      if ( (v20 - v21) >> 3 )
      {
        do
        {
          v26 = *(_QWORD *)(*((_QWORD *)this + 15) + 8 * v25);
          if ( (*(int (__fastcall **)(__int64, _OWORD *, _BYTE *))(*(_QWORD *)v26 + 288LL))(v26, v43, &v21[8 * v25]) >= 0 )
          {
            v27 = *((_QWORD *)v34[0] + v25);
            v28 = *(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v27 + 24LL);
            v29 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 3) + 40LL))(*((_QWORD *)this + 3));
            v28(v27, v29);
          }
          ++v25;
          v21 = v34[0];
        }
        while ( v25 < ((char *)v34[1] - (char *)v34[0]) >> 3 );
      }
      v5 = 0;
    }
  }
  (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)v12 + 16LL))(v12, (char *)this + 96);
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v12 + 24LL))(v12, v36);
  v30 = *(void (__fastcall **)(__int64, float *))(*(_QWORD *)v12 + 32LL);
  v46[0] = (float)(int)v45;
  v46[1] = (float)SDWORD1(v45);
  v46[2] = (float)SDWORD2(v45);
  v46[3] = (float)SHIDWORD(v45);
  v30(v12, v46);
  v31 = (*(__int64 (__fastcall **)(__int64, _QWORD, char *, _QWORD, char))(*(_QWORD *)v12 + 40LL))(
          v12,
          *((_QWORD *)this + 3),
          (char *)this + 32,
          0LL,
          v5);
  v32 = v31;
  if ( v31 >= 0 )
  {
    gsl::final_action__lambda_2c23dc335d575e6068a59f43383614b1___::_final_action__lambda_2c23dc335d575e6068a59f43383614b1___(v41);
    if ( v34[0] )
    {
      std::_Deallocate<16,0>((_QWORD *)v34[0], (v35 - (unsigned __int64)v34[0]) & 0xFFFFFFFFFFFFFFF8uLL);
      v35 = 0LL;
      *(_OWORD *)v34 = 0LL;
    }
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v36);
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v37);
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v38);
    goto LABEL_27;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x8E,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\spatialcallbackrenderer.cpp",
    (const char *)(unsigned int)v31);
  gsl::final_action__lambda_2c23dc335d575e6068a59f43383614b1___::_final_action__lambda_2c23dc335d575e6068a59f43383614b1___(v41);
  if ( v34[0] )
  {
    std::_Deallocate<16,0>((_QWORD *)v34[0], (v35 - (unsigned __int64)v34[0]) & 0xFFFFFFFFFFFFFFF8uLL);
    v35 = 0LL;
    *(_OWORD *)v34 = 0LL;
  }
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v36);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v37);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v38);
LABEL_28:
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v39);
  return v32;
}
