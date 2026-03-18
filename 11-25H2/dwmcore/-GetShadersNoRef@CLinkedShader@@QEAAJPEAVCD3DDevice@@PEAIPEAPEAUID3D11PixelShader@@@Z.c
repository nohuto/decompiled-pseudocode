/*
 * XREFs of ?GetShadersNoRef@CLinkedShader@@QEAAJPEAVCD3DDevice@@PEAIPEAPEAUID3D11PixelShader@@@Z @ 0x18006D050
 * Callers:
 *     ?GetCompositingPixelShaderNoRef@CSurfaceShaderComposer@@QEAAJW4D3D_FEATURE_LEVEL@@V?$span@$$CBUPixelFormatInfo@@$0?0@gsl@@W4DXGI_COLOR_SPACE_TYPE@@PEAPEAUID3D11PixelShader@@@Z @ 0x180170840 (-GetCompositingPixelShaderNoRef@CSurfaceShaderComposer@@QEAAJW4D3D_FEATURE_LEVEL@@V-$span@$$CBUP.c)
 *     ?SetStateOnDevice@CProjectedShadowRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z @ 0x18018EDE0 (-SetStateOnDevice@CProjectedShadowRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18002F800 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180069F90 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x18006BB80 (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18006BBE0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?Create@CD3DPixelShader@@SAJPEAVCD3DDevice@@PEBX_KPEAPEAV1@@Z @ 0x18006D2F8 (-Create@CD3DPixelShader@@SAJPEAVCD3DDevice@@PEBX_KPEAPEAV1@@Z.c)
 *     ?reserve_region@?$vector_facade@V?$com_ptr_t@VCD3DPixelShader@@Uerr_returncode_policy@wil@@@wil@@V?$buffer_impl@V?$com_ptr_t@VCD3DPixelShader@@Uerr_returncode_policy@wil@@@wil@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAV?$com_ptr_t@VCD3DPixelShader@@Uerr_returncode_policy@wil@@@wil@@_K0@Z @ 0x18006D498 (-reserve_region@-$vector_facade@V-$com_ptr_t@VCD3DPixelShader@@Uerr_returncode_policy@wil@@@wil@.c)
 *     ?reset@?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800DA620 (-reset@-$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?Release@CD3DDevice@@UEAAKXZ @ 0x1800DA640 (-Release@CD3DDevice@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetDefaultDevice@CDeviceManager@@QEAAJPEAPEAVCD3DDevice@@@Z @ 0x1801AA080 (-GetDefaultDevice@CDeviceManager@@QEAAJPEAPEAVCD3DDevice@@@Z.c)
 *     ?CreateResource@CLinkedShader@@QEAAJPEAVCD3DDevice@@PEAPEAVCD3DPixelShader@@@Z @ 0x1802062D0 (-CreateResource@CLinkedShader@@QEAAJPEAVCD3DDevice@@PEAPEAVCD3DPixelShader@@@Z.c)
 *     memmove_0 @ 0x1802E8980 (memmove_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CLinkedShader::GetShadersNoRef(
        CLinkedShader *this,
        struct CD3DDevice *a2,
        unsigned int *a3,
        struct ID3D11PixelShader **a4)
{
  __int64 v4; // rbx
  char *v5; // r14
  unsigned int v6; // edi
  __int64 i; // r10
  struct CD3DPixelShader *v12; // rbx
  __int64 v14; // rbx
  unsigned __int64 v15; // rdi
  const void *v16; // rax
  int v17; // eax
  char *v18; // rax
  char *v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // r13
  unsigned __int64 v22; // rcx
  unsigned __int64 v23; // rcx
  SIZE_T size_of; // rax
  _QWORD *v25; // rsi
  char *v26; // r8
  void *v27; // rcx
  char *v28; // rdx
  char *v29; // rax
  char *v30; // r13
  size_t v31; // r8
  _QWORD *v32; // rcx
  __int64 v33; // rax
  CDeviceManager *v34; // rcx
  int DefaultDevice; // eax
  int v36; // eax
  struct CD3DPixelShader *v37; // [rsp+30h] [rbp-48h] BYREF
  char *v38; // [rsp+38h] [rbp-40h]
  char *v39; // [rsp+40h] [rbp-38h]
  __int64 v40; // [rsp+48h] [rbp-30h]
  CD3DDevice *v41; // [rsp+80h] [rbp+8h] BYREF

  v4 = *((_QWORD *)this + 6);
  v5 = (char *)this + 32;
  v6 = 0;
  for ( i = 0LL; ; i = (unsigned int)(i + 1) )
  {
    if ( (unsigned int)i >= (unsigned __int64)((*((_QWORD *)this + 7) - v4) >> 3) )
      goto LABEL_9;
    if ( !a2 || a2 == *(struct CD3DDevice **)(*(_QWORD *)(*(_QWORD *)(v4 + 8 * i) + 40LL) + 80LL) )
      break;
  }
  v12 = *(struct CD3DPixelShader **)(v4 + 8 * i);
  if ( v12 )
  {
LABEL_6:
    *a3 = *((_DWORD *)this + 6);
    *a4 = (struct ID3D11PixelShader *)*((_QWORD *)v12 + 15);
    return v6;
  }
LABEL_9:
  v37 = 0LL;
  if ( a2 )
  {
    v14 = *((_QWORD *)this + 5);
    v15 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v14 + 16) + 32LL))(*(_QWORD *)(v14 + 16));
    v16 = (const void *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v14 + 16) + 24LL))(*(_QWORD *)(v14 + 16));
    v17 = CD3DPixelShader::Create(a2, v16, v15, &v37);
    v6 = v17;
    if ( v17 >= 0 )
    {
LABEL_11:
      v12 = v37;
      v18 = (char *)*((_QWORD *)v37 + 7);
      v19 = (char *)*((_QWORD *)v37 + 8);
      v38 = v18;
      if ( v18 == v19 )
      {
        v20 = *((_QWORD *)v37 + 6);
        v21 = (__int64)&v18[-v20] >> 3;
        v37 = (struct CD3DPixelShader *)0x1FFFFFFFFFFFFFFFLL;
        if ( v21 == 0x1FFFFFFFFFFFFFFFLL )
          std::_Xlength_error("vector too long");
        v22 = (__int64)&v19[-v20] >> 3;
        v40 = v21 + 1;
        if ( v22 > 0x1FFFFFFFFFFFFFFFLL - (v22 >> 1) )
        {
          v23 = 0x1FFFFFFFFFFFFFFFLL;
        }
        else
        {
          v23 = (v22 >> 1) + v22;
          v37 = (struct CD3DPixelShader *)v23;
          if ( v23 < v21 + 1 )
          {
            v23 = v21 + 1;
            v37 = (struct CD3DPixelShader *)(v21 + 1);
          }
        }
        size_of = std::_Get_size_of_n<8>(v23);
        v25 = (_QWORD *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
        v25[v21] = v5;
        v26 = (char *)*((_QWORD *)v12 + 7);
        v27 = v25;
        v28 = (char *)*((_QWORD *)v12 + 6);
        v29 = (char *)&v25[v21];
        v30 = v38;
        v39 = v29;
        if ( v38 == v26 )
        {
          v31 = v26 - v28;
        }
        else
        {
          memmove_0(v25, v28, v38 - v28);
          v28 = v30;
          v31 = *((_QWORD *)v12 + 7) - (_QWORD)v30;
          v27 = v39 + 8;
        }
        memmove_0(v27, v28, v31);
        v32 = (_QWORD *)*((_QWORD *)v12 + 6);
        if ( v32 )
          std::_Deallocate<16,0>(v32, (*((_QWORD *)v12 + 8) - (_QWORD)v32) & 0xFFFFFFFFFFFFFFF8uLL);
        v33 = v40;
        *((_QWORD *)v12 + 6) = v25;
        *((_QWORD *)v12 + 7) = &v25[v33];
        *((_QWORD *)v12 + 8) = &v25[(_QWORD)v37];
      }
      else
      {
        *(_QWORD *)v18 = v5;
        *((_QWORD *)v12 + 7) += 8LL;
      }
      *(_QWORD *)detail::vector_facade<wil::com_ptr_t<CD3DPixelShader,wil::err_returncode_policy>,detail::buffer_impl<wil::com_ptr_t<CD3DPixelShader,wil::err_returncode_policy>,2,1,detail::liberal_expansion_policy>>::reserve_region(
                   v5 + 16,
                   (__int64)(*((_QWORD *)v5 + 3) - *((_QWORD *)v5 + 2)) >> 3) = v12;
      goto LABEL_6;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v17, 0x52u, 0LL);
    if ( v37 )
      (*(void (__fastcall **)(struct CD3DPixelShader *))(*(_QWORD *)v37 + 16LL))(v37);
  }
  else
  {
    v41 = 0LL;
    wil::com_ptr_t<CD3DDevice,wil::err_returncode_policy>::reset(&v41);
    DefaultDevice = CDeviceManager::GetDefaultDevice(v34, &v41);
    v6 = DefaultDevice;
    if ( DefaultDevice < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, DefaultDevice, 0x4Bu, 0LL);
      if ( v41 )
        CD3DDevice::Release(v41);
    }
    else
    {
      v36 = CLinkedShader::CreateResource(*((CLinkedShader **)v5 + 1), v41, &v37);
      v6 = v36;
      if ( v36 >= 0 )
      {
        if ( v41 )
          CD3DDevice::Release(v41);
        goto LABEL_11;
      }
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v36, 0x4Eu, 0LL);
      if ( v41 )
        CD3DDevice::Release(v41);
    }
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v37);
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x11u, 0LL);
  return v6;
}
