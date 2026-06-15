/*
 * XREFs of ?SetMasterVolumeLevel@CVolumeControlBase@@UEAAJMPEBU_GUID@@PEAH@Z @ 0x180086420
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180014EAC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180020710 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?Update@AudioSrvVolumeTelemetry@@IEAAXXZ @ 0x180028798 (-Update@AudioSrvVolumeTelemetry@@IEAAXXZ.c)
 *     ??A?$CAtlArray@VCVolumeUnit@@V?$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAAEAVCVolumeUnit@@_K@Z @ 0x180048740 (--A-$CAtlArray@VCVolumeUnit@@V-$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAAEAVCVolumeUnit@@_K.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_EnhancedAudioTracing_2@@@details@wil@@QEAA_NXZ @ 0x180103030 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_EnhancedAudioTracing_2@.c)
 *     WPP_SF_qg_guid_ @ 0x180115B0C (WPP_SF_qg_guid_.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CVolumeControlBase::SetMasterVolumeLevel(
        CVolumeControlBase *this,
        float a2,
        const struct _GUID *a3,
        int *a4)
{
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  unsigned __int64 v8; // rdx
  __int64 v9; // rax
  float v10; // xmm10_4
  float v11; // xmm9_4
  int v12; // xmm11_4
  float *v13; // rax
  int v14; // r14d
  float v15; // xmm8_4
  int v16; // r8d
  float *v17; // rax
  float v18; // xmm6_4
  float *v19; // rax
  float v20; // xmm6_4
  __int64 v21; // rax
  float *v22; // rax
  float *v23; // rax
  unsigned int v24; // esi
  float i; // xmm9_4
  float *v26; // rax
  float v27; // xmm6_4
  float *v28; // rax
  int v29; // eax
  unsigned int v30; // ebx
  __int64 v31; // r9
  __int64 v32; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+0h]
  struct _RTL_CRITICAL_SECTION *v35; // [rsp+C0h] [rbp+8h] BYREF

  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 8);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 8));
  v8 = *((unsigned int *)this + 28);
  v35 = v4;
  v9 = ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::operator[]((_QWORD *)this + 10, v8);
  v10 = *(float *)(v9 + 8);
  v11 = *(float *)(v9 + 12);
  v12 = *(_DWORD *)(v9 + 16);
  if ( v10 > a2 || a2 > v11 )
  {
    v32 = 638LL;
    goto LABEL_25;
  }
  v13 = (float *)ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::operator[](
                   (_QWORD *)this + 10,
                   *((unsigned int *)this + 28));
  v14 = 1;
  v15 = fmaxf(fminf(v13[1], v13[3]), v13[2]);
  if ( v15 == a2 )
    goto LABEL_18;
  if ( !(unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_EnhancedAudioTracing_2>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Servicing_EnhancedAudioTracing_2>::GetImpl'::`2'::impl)
    && WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qg_guid_(*((_QWORD *)WPP_GLOBAL_Control + 2), 22, v16, (_DWORD)this, COERCE_UNSIGNED_INT64(a2), (__int64)a3);
  }
  v17 = (float *)ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::operator[](
                   (_QWORD *)this + 10,
                   *((unsigned int *)this + 28));
  v18 = fmaxf(fminf(v17[1], v17[3]), v17[2]);
  AudioSrvVolumeTelemetry::Update((CVolumeControlBase *)((char *)this + 136));
  *((float *)this + 52) = v18;
  *((float *)this + 53) = v10;
  *((float *)this + 54) = v11;
  *((_DWORD *)this + 55) = v12;
  v19 = (float *)ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::operator[](
                   (_QWORD *)this + 10,
                   *((unsigned int *)this + 28));
  v20 = fmaxf(fminf(v19[1], v19[3]), v19[2]);
  v21 = ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::operator[](
          (_QWORD *)this + 10,
          *((unsigned int *)this + 28));
  if ( *(float *)(v21 + 8) > a2 || a2 > *(float *)(v21 + 12) )
  {
    v32 = 658LL;
LABEL_25:
    v30 = -2147024809;
    v31 = 2147942487LL;
    goto LABEL_26;
  }
  v22 = (float *)ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::operator[](
                   (_QWORD *)this + 10,
                   *((unsigned int *)this + 28));
  v22[1] = fmaxf(fminf(a2, v22[5]), v22[2]);
  v23 = (float *)ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::operator[](
                   (_QWORD *)this + 10,
                   *((unsigned int *)this + 28));
  v24 = 0;
  for ( i = fmaxf(fminf(v23[1], v23[3]), v23[2]) - v20; v24 < *((_DWORD *)this + 29); ++v24 )
  {
    if ( v24 != *((_DWORD *)this + 28) )
    {
      v26 = (float *)ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::operator[]((_QWORD *)this + 10, v24);
      v27 = fmaxf(fminf(v26[1], v26[3]), v26[2]);
      v28 = (float *)ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::operator[]((_QWORD *)this + 10, v24);
      v28[1] = fmaxf(fminf(v27 + i, v28[5]), v28[2]);
    }
  }
  v29 = (*(__int64 (__fastcall **)(CVolumeControlBase *, _QWORD))(*(_QWORD *)this + 256LL))(this, 0LL);
  v30 = v29;
  if ( v29 < 0 )
  {
    v31 = (unsigned int)v29;
    v32 = 675LL;
LABEL_26:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v32,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\volumecontrol.cpp",
      (const char *)v31);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v35);
    return v30;
  }
  (*(void (__fastcall **)(_QWORD, _QWORD, const struct _GUID *))(**((_QWORD **)this + 16) + 24LL))(
    *((_QWORD *)this + 16),
    0LL,
    a3);
LABEL_18:
  if ( a4 )
  {
    if ( v15 != a2 )
      v14 = 0;
    *a4 = v14;
  }
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v35);
  return 0LL;
}
