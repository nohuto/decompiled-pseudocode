/*
 * XREFs of ?DestroyStream@CVADServer@@UEAAJ_K@Z @ 0x180012670
 * Callers:
 *     AudioServerDestroyStream @ 0x1800124C0 (AudioServerDestroyStream.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180017580 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001AC8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RemoveStream@CAudioSession@@QEAAJPEAVCAudioStream@@_N@Z @ 0x18001D668 (-RemoveStream@CAudioSession@@QEAAJPEAVCAudioStream@@_N@Z.c)
 *     ??4?$com_ptr_t@UIAudioStreamVolumeCallback@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x18001D92C (--4-$com_ptr_t@UIAudioStreamVolumeCallback@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@$$QEAV0.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001D964 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18001EBF0 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?reset@?$shared_ptr@VCPowerReference@@@std@@QEAAXXZ @ 0x180055AC4 (-reset@-$shared_ptr@VCPowerReference@@@std@@QEAAXXZ.c)
 *     ?reset@?$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18005B488 (-reset@-$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??4?$shared_ptr@V?$function@$$A6AXXZ@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18005DEC4 (--4-$shared_ptr@V-$function@$$A6AXXZ@std@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?ValidateStreamHandle@CVADServer@@IEAAJ_K@Z @ 0x180064C38 (-ValidateStreamHandle@CVADServer@@IEAAJ_K@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_ForEachStreamHang@@@details@wil@@QEAA_NXZ @ 0x180108A00 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_ForEachStreamHang@@@det.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CVADServer::DestroyStream(CAudioSession **this, unsigned __int64 a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rsi
  struct _RTL_CRITICAL_SECTION *v5; // r14
  char *v6; // r15
  __int64 v7; // rdx
  unsigned int v8; // ebx
  int v9; // eax
  unsigned int v10; // edi
  std::_Ref_count_base *v12; // rcx
  __int64 v13; // rdx
  struct CAudioStream **v14; // rsi
  int v15; // eax
  unsigned int v16; // edi
  std::_Ref_count_base *v17; // rcx
  struct _RTL_CRITICAL_SECTION *v18; // [rsp+20h] [rbp-20h] BYREF
  std::_Ref_count_base *v19[2]; // [rsp+28h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  struct CAudioStream *v21; // [rsp+80h] [rbp+40h] BYREF
  struct _RTL_CRITICAL_SECTION *v22; // [rsp+88h] [rbp+48h] BYREF

  v4 = (struct _RTL_CRITICAL_SECTION *)(this + 25);
  v5 = (struct _RTL_CRITICAL_SECTION *)(this + 55);
  v6 = (char *)(this + 60);
  if ( !(unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_ForEachStreamHang>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Servicing_ForEachStreamHang>::GetImpl'::`2'::impl) )
  {
    EnterCriticalSection(v4);
    v21 = (struct CAudioStream *)v4;
    *(_OWORD *)v19 = 0LL;
    EnterCriticalSection(v5);
    v22 = v5;
    std::shared_ptr<std::function<void (void)>>::operator=(v19, v6);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v22);
    std::shared_ptr<CPowerReference>::reset(v19);
    if ( *((_DWORD *)this + 40) )
    {
      v14 = this + 22;
      if ( this[22] )
      {
        v15 = CVADServer::ValidateStreamHandle((CVADServer *)this, a2);
        v16 = v15;
        if ( v15 >= 0 )
        {
          if ( *((_DWORD *)this + 42) == 1 )
          {
            (*(void (__fastcall **)(CAudioSession *, struct CAudioStream *))(*(_QWORD *)this[18] + 232LL))(
              this[18],
              *v14);
            *((_DWORD *)this + 42) = 0;
          }
          CAudioSession::RemoveStream(this[18], *v14, 1);
          wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::reset(this + 22);
          v17 = v19[1];
          *((_DWORD *)this + 40) = 0;
          if ( v17 )
            std::_Ref_count_base::_Decref(v17);
          wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v21);
          return 0LL;
        }
        v8 = -2005139336;
        if ( v15 != -2005139336 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x809,
            (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
            (const char *)(unsigned int)v15,
            (int)v18);
          if ( v19[1] )
            std::_Ref_count_base::_Decref(v19[1]);
          v8 = v16;
          goto LABEL_33;
        }
LABEL_28:
        if ( v19[1] )
          std::_Ref_count_base::_Decref(v19[1]);
LABEL_33:
        wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v21);
        return v8;
      }
      v13 = 2056LL;
    }
    else
    {
      v13 = 2055LL;
    }
    v8 = -2004287487;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)0x88890001LL,
      (int)v18);
    goto LABEL_28;
  }
  v21 = 0LL;
  EnterCriticalSection(v4);
  v22 = v4;
  *(_OWORD *)v19 = 0LL;
  EnterCriticalSection(v5);
  v18 = v5;
  std::shared_ptr<std::function<void (void)>>::operator=(v19, v6);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v18);
  std::shared_ptr<CPowerReference>::reset(v19);
  if ( !*((_DWORD *)this + 40) )
  {
    v7 = 2021LL;
LABEL_6:
    v8 = -2004287487;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)0x88890001LL,
      (int)v18);
    goto LABEL_9;
  }
  if ( !this[22] )
  {
    v7 = 2022LL;
    goto LABEL_6;
  }
  v9 = CVADServer::ValidateStreamHandle((CVADServer *)this, a2);
  v10 = v9;
  if ( v9 < 0 )
  {
    v8 = -2005139336;
    if ( v9 != -2005139336 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x7E7,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
        (const char *)(unsigned int)v9,
        (int)v18);
      if ( v19[1] )
        std::_Ref_count_base::_Decref(v19[1]);
      v8 = v10;
      goto LABEL_14;
    }
LABEL_9:
    if ( v19[1] )
      std::_Ref_count_base::_Decref(v19[1]);
LABEL_14:
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v22);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v21);
    return v8;
  }
  if ( *((_DWORD *)this + 42) == 1 )
  {
    (*(void (__fastcall **)(CAudioSession *, CAudioSession *))(*(_QWORD *)this[18] + 232LL))(this[18], this[22]);
    *((_DWORD *)this + 42) = 0;
  }
  wil::com_ptr_t<IAudioStreamVolumeCallback,wil::err_returncode_policy>::operator=(&v21, this + 22);
  v12 = v19[1];
  *((_DWORD *)this + 40) = 0;
  if ( v12 )
    std::_Ref_count_base::_Decref(v12);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v22);
  CAudioSession::RemoveStream(this[18], v21, 1);
  wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::reset(&v21);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v21);
  return 0LL;
}
