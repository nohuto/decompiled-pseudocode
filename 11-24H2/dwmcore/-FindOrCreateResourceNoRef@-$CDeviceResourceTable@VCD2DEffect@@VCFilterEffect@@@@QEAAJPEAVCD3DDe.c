/*
 * XREFs of ?FindOrCreateResourceNoRef@?$CDeviceResourceTable@VCD2DEffect@@VCFilterEffect@@@@QEAAJPEAVCD3DDevice@@PEAPEAVCD2DEffect@@@Z @ 0x180219530
 * Callers:
 *     ?GetD2DEffectNoRef@CFilterEffect@@QEAAJPEAVCDrawingContext@@PEAUID2D1Bitmap1@@PEAPEAUID2D1Effect@@@Z @ 0x18021925C (-GetD2DEffectNoRef@CFilterEffect@@QEAAJPEAVCDrawingContext@@PEAUID2D1Bitmap1@@PEAPEAUID2D1Effect.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180040010 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?reset@?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180059500 (-reset@-$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetDefaultDevice@CDeviceManager@@QEAAJPEAPEAVCD3DDevice@@@Z @ 0x1801A2590 (-GetDefaultDevice@CDeviceManager@@QEAAJPEAPEAVCD3DDevice@@@Z.c)
 *     ?reserve_region@?$vector_facade@V?$com_ptr_t@VCD2DEffect@@Uerr_returncode_policy@wil@@@wil@@V?$buffer_impl@V?$com_ptr_t@VCD2DEffect@@Uerr_returncode_policy@wil@@@wil@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAV?$com_ptr_t@VCD2DEffect@@Uerr_returncode_policy@wil@@@wil@@_K0@Z @ 0x1801EE6FC (-reserve_region@-$vector_facade@V-$com_ptr_t@VCD2DEffect@@Uerr_returncode_policy@wil@@@wil@@V-$b.c)
 *     ??1?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1801F5158 (--1-$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?CreateResource@CFilterEffect@@QEAAJPEAVCD3DDevice@@PEAPEAVCD2DEffect@@@Z @ 0x180291CB4 (-CreateResource@CFilterEffect@@QEAAJPEAVCD3DDevice@@PEAPEAVCD2DEffect@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDeviceResourceTable<CD2DEffect,CFilterEffect>::FindOrCreateResourceNoRef(
        __int64 a1,
        struct CD3DDevice *a2,
        struct CD2DEffect **a3)
{
  unsigned int v3; // edi
  __int64 i; // r15
  __int64 v8; // rcx
  CDeviceManager *v9; // rcx
  int DefaultDevice; // eax
  int v11; // eax
  int v12; // eax
  struct CD2DEffect *v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // r8
  struct CD2DEffect *v17; // [rsp+70h] [rbp+40h] BYREF
  struct CD3DDevice *v18; // [rsp+80h] [rbp+50h] BYREF
  __int64 v19; // [rsp+88h] [rbp+58h] BYREF

  v3 = 0;
  *a3 = 0LL;
  for ( i = 0LL; ; i = (unsigned int)(i + 1) )
  {
    v8 = *(_QWORD *)(a1 + 16);
    if ( (unsigned int)i >= (unsigned __int64)((*(_QWORD *)(a1 + 24) - v8) >> 3) )
      break;
    if ( !a2
      || a2 == (struct CD3DDevice *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v8 + 8 * i) + 40LL))(*(_QWORD *)(v8 + 8 * i)) )
    {
      *a3 = *(struct CD2DEffect **)(*(_QWORD *)(a1 + 16) + 8 * i);
      break;
    }
  }
  if ( !*a3 )
  {
    v17 = 0LL;
    if ( !a2 )
    {
      v18 = 0LL;
      wil::com_ptr_t<CD3DDevice,wil::err_returncode_policy>::reset((volatile signed __int32 **)&v18);
      DefaultDevice = CDeviceManager::GetDefaultDevice(v9, &v18);
      v3 = DefaultDevice;
      if ( DefaultDevice < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, DefaultDevice, 0x4Bu, 0LL);
      }
      else
      {
        v11 = CFilterEffect::CreateResource(*(CFilterEffect **)(a1 + 8), v18, &v17);
        v3 = v11;
        if ( v11 >= 0 )
        {
          wil::com_ptr_t<CD3DDevice,wil::err_returncode_policy>::~com_ptr_t<CD3DDevice,wil::err_returncode_policy>(&v18);
LABEL_16:
          v13 = v17;
          (*(void (__fastcall **)(struct CD2DEffect *, __int64))(*(_QWORD *)v17 + 72LL))(v17, a1);
          v17 = 0LL;
          v14 = *(_QWORD *)(a1 + 24) - *(_QWORD *)(a1 + 16);
          v19 = 0LL;
          v18 = 0LL;
          *a3 = v13;
          *(_QWORD *)detail::vector_facade<wil::com_ptr_t<CD2DEffect,wil::err_returncode_policy>,detail::buffer_impl<wil::com_ptr_t<CD2DEffect,wil::err_returncode_policy>,2,1,detail::liberal_expansion_policy>>::reserve_region(
                       (__int64 *)(a1 + 16),
                       v14 >> 3,
                       v15) = v13;
          wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v18);
          wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v19);
          goto LABEL_18;
        }
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v11, 0x4Eu, 0LL);
      }
      wil::com_ptr_t<CD3DDevice,wil::err_returncode_policy>::~com_ptr_t<CD3DDevice,wil::err_returncode_policy>(&v18);
LABEL_18:
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v17);
      return v3;
    }
    v12 = CFilterEffect::CreateResource(*(CFilterEffect **)(a1 + 8), a2, &v17);
    v3 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v12, 0x52u, 0LL);
      goto LABEL_18;
    }
    goto LABEL_16;
  }
  return v3;
}
