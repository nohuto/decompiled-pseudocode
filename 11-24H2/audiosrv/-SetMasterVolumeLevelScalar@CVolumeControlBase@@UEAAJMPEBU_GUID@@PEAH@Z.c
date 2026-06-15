/*
 * XREFs of ?SetMasterVolumeLevelScalar@CVolumeControlBase@@UEAAJMPEBU_GUID@@PEAH@Z @ 0x180086720
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180014EAC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180020710 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?Update@AudioSrvVolumeTelemetry@@IEAAXXZ @ 0x180028798 (-Update@AudioSrvVolumeTelemetry@@IEAAXXZ.c)
 *     ??A?$CAtlArray@VCVolumeUnit@@V?$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAAEAVCVolumeUnit@@_K@Z @ 0x180048740 (--A-$CAtlArray@VCVolumeUnit@@V-$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAAEAVCVolumeUnit@@_K.c)
 *     ?GetWiper@CVolumeUnit@@QEAAMXZ @ 0x18004AF44 (-GetWiper@CVolumeUnit@@QEAAMXZ.c)
 *     ?SetWiper@CVolumeUnit@@QEAAJM@Z @ 0x18004E578 (-SetWiper@CVolumeUnit@@QEAAJM@Z.c)
 *     WPP_SF_qdg @ 0x1800736B8 (WPP_SF_qdg.c)
 *     WPP_SF_qdgg @ 0x1800C372C (WPP_SF_qdgg.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_EnhancedAudioTracing_2@@@details@wil@@QEAA_NXZ @ 0x180103030 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_EnhancedAudioTracing_2@.c)
 *     WPP_SF_qg_guid_ @ 0x180115B0C (WPP_SF_qg_guid_.c)
 *     WPP_SF_qggg @ 0x180115BDC (WPP_SF_qggg.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CVolumeControlBase::SetMasterVolumeLevelScalar(
        CVolumeControlBase *this,
        float a2,
        const struct _GUID *a3,
        int *a4)
{
  int *v4; // r12
  struct _RTL_CRITICAL_SECTION *v7; // rbx
  unsigned __int64 v8; // rdx
  CVolumeUnit *v9; // rax
  float Wiper; // xmm12_4
  int v11; // r14d
  int v12; // r8d
  float *v13; // rax
  float v14; // xmm11_4
  CVolumeUnit *v15; // rax
  int v16; // eax
  unsigned int v17; // ebx
  __int64 v18; // rdx
  _DWORD *v19; // rax
  int v20; // xmm9_4
  int v21; // xmm8_4
  int v22; // xmm7_4
  float *v23; // rax
  float v24; // xmm6_4
  float *v25; // rax
  float v26; // xmm7_4
  float *v27; // rax
  __int64 v28; // rdx
  __int64 v29; // r8
  unsigned int v30; // ebx
  float *v31; // rax
  float v32; // xmm6_4
  float *v33; // rax
  float *v34; // rax
  int v36[2]; // [rsp+20h] [rbp-C8h]
  struct _RTL_CRITICAL_SECTION *v37[2]; // [rsp+40h] [rbp-A8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+0h]

  v4 = a4;
  if ( a2 < 0.0 || a2 > 1.0 )
  {
    v17 = -2147024809;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2FE,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\volumecontrol.cpp",
      (const char *)0x80070057LL);
    return v17;
  }
  v7 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 8);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 8));
  v8 = *((unsigned int *)this + 28);
  v37[0] = v7;
  v9 = (CVolumeUnit *)ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::operator[]((_QWORD *)this + 10, v8);
  Wiper = CVolumeUnit::GetWiper(v9);
  v11 = 1;
  if ( a2 != Wiper )
  {
    if ( !(unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_EnhancedAudioTracing_2>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Servicing_EnhancedAudioTracing_2>::GetImpl'::`2'::impl)
      && WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_qg_guid_(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        23,
        v12,
        (_DWORD)this,
        COERCE_UNSIGNED_INT64(a2),
        (__int64)a3);
    }
    v13 = (float *)ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::operator[](
                     (_QWORD *)this + 10,
                     *((unsigned int *)this + 28));
    v14 = fmaxf(fminf(v13[1], v13[3]), v13[2]);
    if ( !(unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_EnhancedAudioTracing_2>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Servicing_EnhancedAudioTracing_2>::GetImpl'::`2'::impl)
      && WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      v36[0] = *((_DWORD *)this + 28);
      WPP_SF_qdg(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x18u,
        (__int64)&WPP_658f1c7cc29732d428a1952a824bf53f_Traceguids,
        this,
        *(_QWORD *)v36,
        a2);
    }
    v15 = (CVolumeUnit *)ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::operator[](
                           (_QWORD *)this + 10,
                           *((unsigned int *)this + 28));
    v16 = CVolumeUnit::SetWiper(v15, a2);
    v17 = v16;
    if ( v16 < 0 )
    {
      v18 = 791LL;
LABEL_33:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v18,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\volumecontrol.cpp",
        (const char *)(unsigned int)v16);
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(v37);
      return v17;
    }
    v19 = (_DWORD *)ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::operator[](
                      (_QWORD *)this + 10,
                      *((unsigned int *)this + 28));
    v20 = v19[4];
    v21 = v19[3];
    v22 = v19[2];
    v23 = (float *)ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::operator[](
                     (_QWORD *)this + 10,
                     *((unsigned int *)this + 28));
    v24 = fmaxf(fminf(v23[1], v23[3]), v23[2]);
    AudioSrvVolumeTelemetry::Update((CVolumeControlBase *)((char *)this + 136));
    *((float *)this + 52) = v24;
    *((_DWORD *)this + 53) = v22;
    *((_DWORD *)this + 54) = v21;
    *((_DWORD *)this + 55) = v20;
    v25 = (float *)ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::operator[](
                     (_QWORD *)this + 10,
                     *((unsigned int *)this + 28));
    v26 = fmaxf(fminf(v25[1], v25[3]), v25[2]) - v14;
    if ( !(unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_EnhancedAudioTracing_2>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Servicing_EnhancedAudioTracing_2>::GetImpl'::`2'::impl)
      && WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      v27 = (float *)ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::operator[](
                       (_QWORD *)this + 10,
                       *((unsigned int *)this + 28));
      WPP_SF_qggg(*((_QWORD *)WPP_GLOBAL_Control + 2), v28, v29, this, v26, fmaxf(fminf(v27[1], v27[3]), v27[2]), v14);
    }
    v30 = 0;
    if ( *((_DWORD *)this + 29) )
    {
      do
      {
        if ( v30 != *((_DWORD *)this + 28) )
        {
          v31 = (float *)ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::operator[](
                           (_QWORD *)this + 10,
                           v30);
          v32 = fmaxf(fminf(v31[1], v31[3]), v31[2]) + v26;
          if ( !(unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_EnhancedAudioTracing_2>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Servicing_EnhancedAudioTracing_2>::GetImpl'::`2'::impl)
            && WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
            && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
            && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
          {
            v33 = (float *)ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::operator[](
                             (_QWORD *)this + 10,
                             v30);
            WPP_SF_qdgg(
              *((_QWORD *)WPP_GLOBAL_Control + 2),
              26LL,
              &WPP_658f1c7cc29732d428a1952a824bf53f_Traceguids,
              this,
              v30,
              fmaxf(fminf(v33[1], v33[3]), v33[2]),
              v32);
          }
          v34 = (float *)ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::operator[](
                           (_QWORD *)this + 10,
                           v30);
          v34[1] = fmaxf(fminf(v32, v34[5]), v34[2]);
        }
        ++v30;
      }
      while ( v30 < *((_DWORD *)this + 29) );
      v4 = a4;
    }
    v16 = (*(__int64 (__fastcall **)(CVolumeControlBase *, _QWORD))(*(_QWORD *)this + 256LL))(this, 0LL);
    v17 = v16;
    if ( v16 < 0 )
    {
      v18 = 826LL;
      goto LABEL_33;
    }
    if ( !a3 || *(_QWORD *)&a3->Data1 != 0x4E8B67CC68F64C3DLL || *(_QWORD *)a3->Data4 != 0x6147AA4EA63F7FA1LL )
      (*(void (__fastcall **)(_QWORD, _QWORD, const struct _GUID *))(**((_QWORD **)this + 16) + 24LL))(
        *((_QWORD *)this + 16),
        0LL,
        a3);
  }
  if ( v4 )
  {
    if ( Wiper != a2 )
      v11 = 0;
    *v4 = v11;
  }
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(v37);
  return 0LL;
}
