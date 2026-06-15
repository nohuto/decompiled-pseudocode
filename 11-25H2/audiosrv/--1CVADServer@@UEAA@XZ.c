/*
 * XREFs of ??1CVADServer@@UEAA@XZ @ 0x180016878
 * Callers:
 *     ??_GCVADServer@@UEAAPEAXI@Z @ 0x1800160A0 (--_GCVADServer@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?RemoveAt@?$CAtlList@PEAVCVADServer@@V?$CElementTraits@PEAVCVADServer@@@ATL@@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x1800160DC (-RemoveAt@-$CAtlList@PEAVCVADServer@@V-$CElementTraits@PEAVCVADServer@@@ATL@@@ATL@@QEAAXPEAU__PO.c)
 *     ?RemoveClientReference@CServerAudioSessionControl@@QEAAJXZ @ 0x1800161B0 (-RemoveClientReference@CServerAudioSessionControl@@QEAAJXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180017580 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??1CAudioSessionInstanceId@@QEAA@XZ @ 0x1800181E4 (--1CAudioSessionInstanceId@@QEAA@XZ.c)
 *     ?RemoveStream@CAudioSession@@QEAAJPEAVCAudioStream@@_N@Z @ 0x18001D668 (-RemoveStream@CAudioSession@@QEAAJPEAVCAudioStream@@_N@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIWeakReference@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180026600 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIWeakReference@@.c)
 *     ?reset@?$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18005B488 (-reset@-$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800A7F7C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CVADServer::~CVADServer(CVADServer *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbp
  std::_Ref_count_base *v3; // rdi
  CServerAudioSessionControl *v4; // rcx
  struct CAudioStream **v5; // rdi
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 i; // rdx
  __int64 v9; // rcx
  __int64 v10; // rcx
  void *v11; // rcx
  __int64 v12; // rcx
  std::_Ref_count_base *v13; // rcx
  void *v14; // rcx
  __int64 v15; // rcx

  *(_QWORD *)this = &CVADServer::`vftable';
  *((_QWORD *)this + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IUnknown>::`vftable'{for `IUnknown'};
  *((_QWORD *)this + 2) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IUnknown>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource>'};
  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 440);
  EnterCriticalSection((LPCRITICAL_SECTION)this + 11);
  v3 = (std::_Ref_count_base *)*((_QWORD *)this + 61);
  *((_QWORD *)this + 60) = 0LL;
  *((_QWORD *)this + 61) = 0LL;
  if ( v2 )
    LeaveCriticalSection(v2);
  if ( v3 )
    std::_Ref_count_base::_Decref(v3);
  v4 = (CServerAudioSessionControl *)*((_QWORD *)this + 17);
  if ( v4 )
    CServerAudioSessionControl::RemoveClientReference(v4);
  v5 = (struct CAudioStream **)((char *)this + 176);
  if ( *((_QWORD *)this + 22) )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)this + 5);
    if ( *((_QWORD *)*v5 + 6) )
    {
      if ( *((_DWORD *)this + 42) == 1 )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 18) + 232LL))(*((_QWORD *)this + 18));
      CAudioSession::RemoveStream(*((CAudioSession **)this + 18), *v5, 1);
    }
    wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::reset((char *)this + 176);
    if ( this != (CVADServer *)-200LL )
      LeaveCriticalSection((LPCRITICAL_SECTION)this + 5);
  }
  v6 = *((_QWORD *)this + 18);
  if ( v6 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    *((_QWORD *)this + 18) = 0LL;
  }
  *((_QWORD *)this + 16) = 0LL;
  EnterCriticalSection(&g_csVadList);
  for ( i = g_VADServerList; i; i = *(_QWORD *)i )
  {
    if ( *(CVADServer **)(i + 16) == this )
    {
      ATL::CAtlList<CVADServer *,ATL::CElementTraits<CVADServer *>>::RemoveAt(v7, (__int64 *)i);
      break;
    }
  }
  LeaveCriticalSection(&g_csVadList);
  v9 = *((_QWORD *)this + 70);
  if ( v9 )
  {
    *((_QWORD *)this + 70) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  v10 = *((_QWORD *)this + 65);
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  v11 = (void *)*((_QWORD *)this + 63);
  if ( v11 )
    operator delete(v11, (const struct std::nothrow_t *)1);
  v12 = *((_QWORD *)this + 62);
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  v13 = (std::_Ref_count_base *)*((_QWORD *)this + 61);
  if ( v13 )
    std::_Ref_count_base::_Decref(v13);
  DeleteCriticalSection(v2);
  DeleteCriticalSection((LPCRITICAL_SECTION)this + 5);
  v14 = (void *)*((_QWORD *)this + 24);
  if ( v14 )
    CoTaskMemFree(v14);
  v15 = *((_QWORD *)this + 22);
  if ( v15 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  CoTaskMemFree(*((LPVOID *)this + 19));
  *((_QWORD *)this + 19) = 0LL;
  CAudioSessionInstanceId::~CAudioSessionInstanceId((CVADServer *)((char *)this + 48));
  if ( *((__int64 *)this + 4) < 0 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IWeakReference>::Release(2LL * *((_QWORD *)this + 4));
}
