/*
 * XREFs of ?InitializeAPOs@CVolumeSoftware@@UEAAJ_KIPEAPEAUIAudioProcessingObject@@@Z @ 0x180085A90
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180014EAC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180020710 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x180043528 (-Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
 *     ??A?$CAtlArray@VCVolumeUnit@@V?$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAAEAVCVolumeUnit@@_K@Z @ 0x180048740 (--A-$CAtlArray@VCVolumeUnit@@V-$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAAEAVCVolumeUnit@@_K.c)
 *     ??$try_com_query_to@UIAudioVolume@@AEAPEAUIAudioProcessingObject@@@wil@@YA_NAEAPEAUIAudioProcessingObject@@PEAPEAUIAudioVolume@@@Z @ 0x180059D9C (--$try_com_query_to@UIAudioVolume@@AEAPEAUIAudioProcessingObject@@@wil@@YA_NAEAPEAUIAudioProcess.c)
 *     ?Release@?$CComPtrBase@UIPart@@@ATL@@QEAAXXZ @ 0x180060D98 (-Release@-$CComPtrBase@UIPart@@@ATL@@QEAAXXZ.c)
 *     ?SetAtGrow@?$CAtlArray@VCVolumeUnit@@V?$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAX_KAEBVCVolumeUnit@@@Z @ 0x180071B0C (-SetAtGrow@-$CAtlArray@VCVolumeUnit@@V-$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAX_KAEBVCVol.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_EnhancedAudioTracing_2@@@details@wil@@QEAA_NXZ @ 0x180103030 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_EnhancedAudioTracing_2@.c)
 *     ?InitializeAPOs_old@CVolumeSoftware@@QEAAJ_KIPEAPEAUIAudioProcessingObject@@@Z @ 0x180113D74 (-InitializeAPOs_old@CVolumeSoftware@@QEAAJ_KIPEAPEAUIAudioProcessingObject@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CVolumeSoftware::InitializeAPOs(
        CVolumeSoftware *this,
        __int64 a2,
        unsigned int a3,
        struct IAudioProcessingObject **a4)
{
  CVolumeSoftware *v6; // rdi
  unsigned __int64 v7; // rdx
  __int64 v8; // rbx
  unsigned int v9; // eax
  unsigned int v10; // ebx
  int v11; // eax
  unsigned __int64 v12; // r9
  __int64 v13; // rdx
  unsigned int *v14; // rsi
  unsigned int i; // ebx
  _OWORD *v16; // rax
  __int64 v18; // rdx
  int v19; // eax
  ATL::CAtlException *v20; // rbx
  const char *v21; // [rsp+28h] [rbp-90h]
  unsigned int v22; // [rsp+30h] [rbp-88h] BYREF
  unsigned int v23; // [rsp+34h] [rbp-84h]
  char *v24; // [rsp+38h] [rbp-80h]
  struct _RTL_CRITICAL_SECTION *v25; // [rsp+40h] [rbp-78h] BYREF
  unsigned int *v26; // [rsp+48h] [rbp-70h]
  ATL::CAtlException *v27; // [rsp+50h] [rbp-68h] BYREF
  _OWORD v28[4]; // [rsp+60h] [rbp-58h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+0h]

  v6 = this;
  if ( !(unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_EnhancedAudioTracing_2>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Servicing_EnhancedAudioTracing_2>::GetImpl'::`2'::impl) )
    return CVolumeSoftware::InitializeAPOs_old(v6, v7, a3, a4);
  if ( a3 )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)v6 + 256));
    v25 = (struct _RTL_CRITICAL_SECTION *)((char *)v6 + 256);
    v22 = 0;
    v8 = 0LL;
    while ( 1 )
    {
      ATL::CComPtrBase<IPart>::Release((_QWORD *)v6 + 31);
      if ( wil::try_com_query_to<IAudioVolume,IAudioProcessingObject * &>(&a4[v8], (__int64)v6 + 248) )
        break;
      v8 = (unsigned int)(v8 + 1);
      if ( (unsigned int)v8 >= a3 )
        goto LABEL_6;
    }
    v11 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(**((_QWORD **)v6 + 31) + 40LL))(
            *((_QWORD *)v6 + 31),
            &v22);
    v10 = v11;
    if ( v11 < 0 )
    {
      v12 = (unsigned int)v11;
      v13 = 2353LL;
LABEL_17:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v13,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\volumecontrol.cpp",
        (const char *)v12);
      goto LABEL_18;
    }
LABEL_6:
    v9 = v22;
    if ( !*((_QWORD *)v6 + 31) )
    {
      v10 = -2147467262;
      wil::details::in1diag3::Return_HrMsg(
        retaddr,
        (void *)0x93B,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\volumecontrol.cpp",
        (const char *)0x80004002LL,
        (__int64)"CVolumeSoftware::InitializeAPOs: IAudioVolume interface is not present on any APO!",
        v21);
LABEL_18:
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v25);
      return v10;
    }
    v14 = (unsigned int *)((char *)v6 + 116);
    v26 = (unsigned int *)((char *)v6 + 116);
    if ( *((_DWORD *)v6 + 29) != v22 && *v14 )
    {
      for ( i = 1; ; ++i )
      {
        v23 = i;
        if ( i >= v9 )
          break;
        v16 = (_OWORD *)ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::operator[]((_QWORD *)v6 + 10, 0LL);
        v28[0] = *v16;
        v28[1] = v16[1];
        v28[2] = v16[2];
        v28[3] = v16[3];
        try
        {
          ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::SetAtGrow((_QWORD *)v6 + 10, i, (__int64)v28);
        }
        catch ( ATL::CAtlException *v27 )
        {
          v20 = v27;
          if ( *(_DWORD *)v27 == -1073741571 )
            _o__resetstkoflw();
          LODWORD(v24) = *(_DWORD *)v20;
          v10 = (unsigned int)v24;
          if ( (int)v24 < 0 )
          {
            v12 = (unsigned int)v24;
            v13 = 2378LL;
            goto LABEL_17;
          }
          v6 = this;
          i = v23;
          v14 = v26;
        }
        v9 = v22;
      }
      *v14 = v9;
    }
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v25);
    LOBYTE(v18) = 1;
    v19 = (*(__int64 (__fastcall **)(CVolumeSoftware *, __int64))(*(_QWORD *)v6 + 256LL))(v6, v18);
    v10 = v19;
    if ( v19 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x952,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\volumecontrol.cpp",
        (const char *)(unsigned int)v19);
      return v10;
    }
  }
  return 0LL;
}
