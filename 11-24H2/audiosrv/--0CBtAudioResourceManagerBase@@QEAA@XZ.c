/*
 * XREFs of ??0CBtAudioResourceManagerBase@@QEAA@XZ @ 0x1800F14F4
 * Callers:
 *     ??0CBtAudioResourceManager@@QEAA@XZ @ 0x1800F1454 (--0CBtAudioResourceManager@@QEAA@XZ.c)
 *     ??0CBtLeAudioResourceManager@@QEAA@XZ @ 0x1800F1674 (--0CBtLeAudioResourceManager@@QEAA@XZ.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18002A5BC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??0_Mutex_base@std@@QEAA@H@Z @ 0x1800CB71C (--0_Mutex_base@std@@QEAA@H@Z.c)
 */

// Hidden C++ exception states: #wind=10
CBtAudioResourceManagerBase *__fastcall CBtAudioResourceManagerBase::CBtAudioResourceManagerBase(
        CBtAudioResourceManagerBase *this)
{
  _QWORD *v2; // rax
  _QWORD *v3; // rax

  *(_QWORD *)this = &CBtAudioResourceManagerBase::`vftable'{for `ISaDeviceResourceManager'};
  *((_QWORD *)this + 1) = &CBtAudioResourceManagerBase::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IBtAudioResourceManager,ISessionInternalEvents,IEndpointCustomFormatHandler>'};
  *((_QWORD *)this + 2) = &CBtAudioResourceManagerBase::`vftable'{for `ISessionInternalEvents'};
  *((_QWORD *)this + 3) = &CBtAudioResourceManagerBase::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IEndpointCustomFormatHandler>'};
  *(GUID *)((char *)this + 40) = GUID_00000000_0000_0000_0000_000000000000;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_DWORD *)this + 24) = 0;
  *((_QWORD *)this + 13) = 0LL;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)((char *)this + 112), 0, 0);
  *((_QWORD *)this + 19) = 0LL;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)this + 4, 0, 0);
  *((_QWORD *)this + 25) = 0LL;
  *((_DWORD *)this + 52) = 0;
  *((_QWORD *)this + 27) = 0LL;
  *((_QWORD *)this + 28) = 0LL;
  v2 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x68uLL);
  *v2 = v2;
  v2[1] = v2;
  v2[2] = v2;
  *((_WORD *)v2 + 12) = 257;
  *((_QWORD *)this + 27) = v2;
  *((_DWORD *)this + 58) = 0;
  *((_QWORD *)this + 30) = 0LL;
  *((_QWORD *)this + 31) = 0LL;
  v3 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x68uLL);
  *v3 = v3;
  v3[1] = v3;
  v3[2] = v3;
  *((_WORD *)v3 + 12) = 257;
  *((_QWORD *)this + 30) = v3;
  *((_QWORD *)this + 32) = 0LL;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)((char *)this + 264), 0, 0);
  *((_QWORD *)this + 62) = 0LL;
  *((_DWORD *)this + 126) = 0;
  *(_QWORD *)((char *)this + 508) = 0LL;
  *((_WORD *)this + 258) = 1;
  std::_Mutex_base::_Mutex_base((CBtAudioResourceManagerBase *)((char *)this + 520), 0);
  *((_DWORD *)this + 138) = 0;
  return this;
}
