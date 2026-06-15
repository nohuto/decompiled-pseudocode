/*
 * XREFs of ?InitializeAPOs@CMuteSoftware@@UEAAJ_KIPEAPEAUIAudioProcessingObject@@@Z @ 0x18007D590
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180014EAC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180020710 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x180043528 (-Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
 *     ??$try_com_query_to@UIAudioMuteAPO@@AEAPEAUIAudioProcessingObject@@@wil@@YA_NAEAPEAUIAudioProcessingObject@@PEAPEAUIAudioMuteAPO@@@Z @ 0x180059A10 (--$try_com_query_to@UIAudioMuteAPO@@AEAPEAUIAudioProcessingObject@@@wil@@YA_NAEAPEAUIAudioProces.c)
 *     ?Release@?$CComPtrBase@UIPart@@@ATL@@QEAAXXZ @ 0x180060D98 (-Release@-$CComPtrBase@UIPart@@@ATL@@QEAAXXZ.c)
 *     ?InitializeAPOs_old@CMuteSoftware@@QEAAJ_KIPEAPEAUIAudioProcessingObject@@@Z @ 0x1801020D0 (-InitializeAPOs_old@CMuteSoftware@@QEAAJ_KIPEAPEAUIAudioProcessingObject@@@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_EnhancedAudioTracing_2@@@details@wil@@QEAA_NXZ @ 0x180103030 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_EnhancedAudioTracing_2@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CMuteSoftware::InitializeAPOs(
        CMuteSoftware *this,
        __int64 a2,
        unsigned int a3,
        struct IAudioProcessingObject **a4)
{
  unsigned __int64 v7; // rdx
  __int64 v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned int v11; // ebx
  bool v12; // zf
  int v13; // eax
  const char *v15; // [rsp+28h] [rbp-20h]
  int v16[2]; // [rsp+30h] [rbp-18h] BYREF
  struct _RTL_CRITICAL_SECTION *v17; // [rsp+38h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_EnhancedAudioTracing_2>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Servicing_EnhancedAudioTracing_2>::GetImpl'::`2'::impl) )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 56));
    v17 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 56);
    if ( a3 )
    {
      v8 = 0LL;
      do
      {
        ATL::CComPtrBase<IPart>::Release((_QWORD *)this + 6);
        if ( wil::try_com_query_to<IAudioMuteAPO,IAudioProcessingObject * &>(&a4[v8], (__int64)this + 48) )
          break;
        v8 = (unsigned int)(v8 + 1);
      }
      while ( (unsigned int)v8 < a3 );
      v10 = *((_QWORD *)this + 6);
      if ( !v10 )
      {
        v11 = -2147467262;
        wil::details::in1diag3::Return_HrMsg(
          retaddr,
          (void *)0x47E,
          (int)"avcore\\audiocore\\server\\audiosrv\\dll\\mutecontrol.cpp",
          (const char *)0x80004002LL,
          (__int64)"CMuteSoftware::InitializeAPOs: IAudioMuteAPO interface is not present on any APO!",
          v15);
LABEL_11:
        wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v17);
        return v11;
      }
      v12 = *((_DWORD *)this + 6) == 0;
      *(_QWORD *)v16 = 50000LL;
      LOBYTE(v9) = !v12;
      v13 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64, int *))(*(_QWORD *)v10 + 32LL))(
              v10,
              v9,
              0LL,
              1LL,
              v16);
      v11 = v13;
      if ( v13 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x482,
          (int)"avcore\\audiocore\\server\\audiosrv\\dll\\mutecontrol.cpp",
          (const char *)(unsigned int)v13);
        goto LABEL_11;
      }
    }
    v11 = 0;
    goto LABEL_11;
  }
  return CMuteSoftware::InitializeAPOs_old(this, v7, a3, a4);
}
