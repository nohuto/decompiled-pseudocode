/*
 * XREFs of ??0CProcess@@QEAA@XZ @ 0x180036168
 * Callers:
 *     ?RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z @ 0x1800060D0 (-RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIAudioProcess@@UIAudioProcessInternal@@@WRL@Microsoft@@QEAA@XZ @ 0x1800199BC (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIAudioProcess@@UIAudioProcessInternal.c)
 *     ??0?$CAtlMap@PEAUIUnknown@@V?$com_ptr_t@UIAudioProcessNotification@@Uerr_returncode_policy@wil@@@wil@@V?$CElementTraits@PEAUIUnknown@@@ATL@@V?$CElementTraits@V?$com_ptr_t@UIAudioProcessNotification@@Uerr_returncode_policy@wil@@@wil@@@5@@ATL@@QEAA@IMMMI@Z @ 0x18001D73C (--0-$CAtlMap@PEAUIUnknown@@V-$com_ptr_t@UIAudioProcessNotification@@Uerr_returncode_policy@wil@@.c)
 *     ??0?$_Hash@V?$_Umap_traits@PEAXV?$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@V?$_Uhash_compare@PEAXU?$hash@PEAX@std@@U?$equal_to@PEAX@2@@std@@V?$allocator@U?$pair@QEAXV?$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@@std@@@4@$0A@@std@@@std@@IEAA@AEBV?$_Uhash_compare@PEAXU?$hash@PEAX@std@@U?$equal_to@PEAX@2@@1@AEBV?$allocator@U?$pair@QEAXV?$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@@std@@@1@@Z @ 0x180035EBC (--0-$_Hash@V-$_Umap_traits@PEAXV-$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@V.c)
 */

// Hidden C++ exception states: #wind=2
CProcess *__fastcall CProcess::CProcess(CProcess *this)
{
  __int64 v2; // rdx
  int v4; // [rsp+48h] [rbp+10h] BYREF
  int v5; // [rsp+4Ch] [rbp+14h]

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAudioProcess,IAudioProcessInternal>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAudioProcess,IAudioProcessInternal>(this);
  *(_QWORD *)this = &CProcess::`vftable'{for `IAudioProcess'};
  *((_QWORD *)this + 1) = &CProcess::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IAudioProcessInternal>'};
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)((char *)this + 24), 0, 0);
  v5 = ((unsigned __int64)this + 64) >> 32;
  v4 = 0;
  std::_Hash<std::_Umap_traits<void *,wil::com_ptr_t<IWeakReference,wil::err_returncode_policy>,std::_Uhash_compare<void *,std::hash<void *>,std::equal_to<void *>>,std::allocator<std::pair<void * const,wil::com_ptr_t<IWeakReference,wil::err_returncode_policy>>>,0>>::_Hash<std::_Umap_traits<void *,wil::com_ptr_t<IWeakReference,wil::err_returncode_policy>,std::_Uhash_compare<void *,std::hash<void *>,std::equal_to<void *>>,std::allocator<std::pair<void * const,wil::com_ptr_t<IWeakReference,wil::err_returncode_policy>>>,0>>(
    (__int64)this + 64,
    &v4);
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 19) = 0LL;
  *((_QWORD *)this + 20) = 0LL;
  *((_QWORD *)this + 21) = 0LL;
  *((_QWORD *)this + 22) = 0LL;
  *((_QWORD *)this + 23) = 0LL;
  *((_DWORD *)this + 48) = 0;
  *((_QWORD *)this + 25) = 0LL;
  *((_QWORD *)this + 28) = 0LL;
  *((_QWORD *)this + 29) = 0LL;
  *((_QWORD *)this + 30) = 0LL;
  *((_QWORD *)this + 31) = 0LL;
  *((_QWORD *)this + 32) = 0LL;
  *((_QWORD *)this + 33) = 0LL;
  *((_DWORD *)this + 68) = 0;
  *((_QWORD *)this + 35) = 0LL;
  *((_QWORD *)this + 36) = 0LL;
  *((_DWORD *)this + 74) = 0;
  *((_QWORD *)this + 38) = 0LL;
  *((_DWORD *)this + 78) = 4;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)this + 8, 0, 0);
  *((_QWORD *)this + 45) = 0LL;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)((char *)this + 368), 0, 0);
  *((_QWORD *)this + 51) = 0LL;
  *((_QWORD *)this + 52) = 0LL;
  *((_QWORD *)this + 53) = 0LL;
  *((_QWORD *)this + 54) = 0LL;
  *((_QWORD *)this + 55) = 0LL;
  *((_QWORD *)this + 56) = 0LL;
  *((_QWORD *)this + 57) = 0LL;
  *((_QWORD *)this + 58) = 0LL;
  *((_QWORD *)this + 59) = 0LL;
  *((_DWORD *)this + 120) = 0;
  *(_QWORD *)((char *)this + 484) = 4LL;
  *((_DWORD *)this + 123) = 1;
  *((_QWORD *)this + 63) = 0LL;
  *((_QWORD *)this + 64) = 0LL;
  *(GUID *)((char *)this + 520) = GUID_00000000_0000_0000_0000_000000000000;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)((char *)this + 536), 0, 0);
  *((_QWORD *)this + 72) = 0LL;
  *((_QWORD *)this + 73) = 0LL;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)((char *)this + 592), 0, 0);
  ATL::CAtlMap<IUnknown *,wil::com_ptr_t<IAudioProcessNotification,wil::err_returncode_policy>,ATL::CElementTraits<IUnknown *>,ATL::CElementTraits<wil::com_ptr_t<IAudioProcessNotification,wil::err_returncode_policy>>>::CAtlMap<IUnknown *,wil::com_ptr_t<IAudioProcessNotification,wil::err_returncode_policy>,ATL::CElementTraits<IUnknown *>,ATL::CElementTraits<wil::com_ptr_t<IAudioProcessNotification,wil::err_returncode_policy>>>(
    (__int64)this + 632,
    v2,
    0.75,
    0.25,
    SLODWORD(FLOAT_2_25));
  *((_QWORD *)this + 88) = 0LL;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)((char *)this + 712), 0, 0);
  *((_DWORD *)this + 188) = 0;
  *((_QWORD *)this + 95) = 0LL;
  *((_QWORD *)this + 96) = 0LL;
  *((_QWORD *)this + 97) = 0LL;
  *((_WORD *)this + 392) = 0;
  *((_BYTE *)this + 786) = 0;
  return this;
}
