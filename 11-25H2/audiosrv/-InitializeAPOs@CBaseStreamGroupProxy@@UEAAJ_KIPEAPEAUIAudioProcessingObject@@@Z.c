/*
 * XREFs of ?InitializeAPOs@CBaseStreamGroupProxy@@UEAAJ_KIPEAPEAUIAudioProcessingObject@@@Z @ 0x180079C00
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Emplace_reallocate@AEBV?$com_ptr_t@UIAPOWrapperSrv@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@UIAPOWrapperSrv@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIAPOWrapperSrv@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAAPEAV?$com_ptr_t@UIAPOWrapperSrv@@Uerr_returncode_policy@wil@@@wil@@QEAV23@AEBV23@@Z @ 0x18000BCB8 (--$_Emplace_reallocate@AEBV-$com_ptr_t@UIAPOWrapperSrv@@Uerr_returncode_policy@wil@@@wil@@@-$vec.c)
 *     ??0CPerfTracker@@QEAA@PEBU_tlgProvider_t@@QEBD1@Z @ 0x18000C640 (--0CPerfTracker@@QEAA@PEBU_tlgProvider_t@@QEBD1@Z.c)
 *     ??1CPerfTracker@@QEAA@XZ @ 0x18000C978 (--1CPerfTracker@@QEAA@XZ.c)
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x18000F7B0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x1800263DC (--$_Destroy_range@V-$allocator@V-$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@@.c)
 *     ??$_Construct_in_place@V?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@AEBV12@@std@@YAXAEAV?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@AEBV12@@Z @ 0x18009F2E0 (--$_Construct_in_place@V-$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@AEBV12@@st.c)
 *     __security_check_cookie @ 0x1800A7AB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4 #try_helpers=1
__int64 __fastcall CBaseStreamGroupProxy::InitializeAPOs(
        CBaseStreamGroupProxy *this,
        __int64 a2,
        unsigned int a3,
        struct IAudioProcessingObject **a4)
{
  struct AudioSrvTelemetryProvider *v7; // rax
  char *v8; // rbx
  __int64 *v9; // rdx
  __int64 i; // rdi
  _QWORD v12[2]; // [rsp+20h] [rbp-128h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+30h] [rbp-118h] BYREF

  v7 = AudioSrvTelemetryProvider::Instance();
  CPerfTracker::CPerfTracker(
    &PerformanceCount,
    *((const struct _tlgProvider_t **)v7 + 1),
    "StreamGroup_InitializeAPOs",
    0LL);
  v8 = (char *)this + 232;
  v9 = (__int64 *)*((_QWORD *)v8 + 1);
  if ( *(__int64 **)v8 != v9 )
  {
    std::_Destroy_range<std::allocator<wil::com_ptr_t<IWeakReference,wil::err_returncode_policy>>>(*(__int64 **)v8, v9);
    *((_QWORD *)v8 + 1) = *(_QWORD *)v8;
  }
  for ( i = 0LL; (unsigned int)i < a3; i = (unsigned int)(i + 1) )
  {
    v12[0] = 0LL;
    if ( ((__int64 (__fastcall *)(struct IAudioProcessingObject *, GUID *, _QWORD *))a4[i]->lpVtbl->QueryInterface)(
           a4[i],
           &GUID_67309ffa_1e7c_48f2_b96f_9b25b183ba25,
           v12) >= 0 )
    {
      if ( *((_QWORD *)v8 + 1) == *((_QWORD *)v8 + 2) )
      {
        std::vector<wil::com_ptr_t<IAPOWrapperSrv,wil::err_returncode_policy>>::_Emplace_reallocate<wil::com_ptr_t<IAPOWrapperSrv,wil::err_returncode_policy> const &>(
          (__int64 *)v8,
          *((_QWORD *)v8 + 1),
          (__int64)v12);
      }
      else
      {
        std::_Construct_in_place<wil::com_ptr_t<IAudioProcess,wil::err_returncode_policy>,wil::com_ptr_t<IAudioProcess,wil::err_returncode_policy> const &>(
          *((_QWORD *)v8 + 1),
          v12);
        *((_QWORD *)v8 + 1) += 8LL;
      }
    }
    if ( v12[0] )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v12[0] + 16LL))(v12[0]);
  }
  CPerfTracker::~CPerfTracker((CPerfTracker *)&PerformanceCount);
  return 0LL;
}
