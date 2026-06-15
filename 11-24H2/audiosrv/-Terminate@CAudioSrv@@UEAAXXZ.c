/*
 * XREFs of ?Terminate@CAudioSrv@@UEAAXXZ @ 0x1800CFB30
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180016CE8 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CancelADGTerminationTimer@CAudioDGProcess@@QEAAXXZ @ 0x18001F6B8 (-CancelADGTerminationTimer@CAudioDGProcess@@QEAAXXZ.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180020710 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?DoTerminateADG@CAudioDGProcess@@AEAAJXZ @ 0x1800A1420 (-DoTerminateADG@CAudioDGProcess@@AEAAJXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800A426C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CAudioDGProcess@@QEAA@XZ @ 0x1800CB964 (--1CAudioDGProcess@@QEAA@XZ.c)
 *     ?VAD_AudiosrvServiceStop@CAudioSrv@@AEAAJXZ @ 0x1800D092C (-VAD_AudiosrvServiceStop@CAudioSrv@@AEAAJXZ.c)
 *     ?reset@?$unique_ptr@VCPowerReferenceManager@@U?$default_delete@VCPowerReferenceManager@@@std@@@std@@QEAAXPEAVCPowerReferenceManager@@@Z @ 0x1800D0EE8 (-reset@-$unique_ptr@VCPowerReferenceManager@@U-$default_delete@VCPowerReferenceManager@@@std@@@s.c)
 *     ?MME_ServiceStop@@YAXXZ @ 0x1800FEEB0 (-MME_ServiceStop@@YAXXZ.c)
 *     ?KsNotifications_ServiceStop@@YAXXZ @ 0x18011EFCC (-KsNotifications_ServiceStop@@YAXXZ.c)
 *     ??4?$ComPtr@VAtmosCheck@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18014165C (--4-$ComPtr@VAtmosCheck@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?Uninitialize@AtmosCheck@@QEAAXXZ @ 0x18015EF40 (-Uninitialize@AtmosCheck@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CAudioSrv::Terminate(CAudioSrv *this)
{
  __int64 v2; // rcx
  AtmosCheck *v3; // rbx
  LPCRITICAL_SECTION v4; // rbx
  AtmosCheck *v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = 0LL;
  EnterCriticalSection(&CSpatialAudioTech::s_atmosLock);
  Microsoft::WRL::ComPtr<AtmosCheck>::operator=(&v5);
  LeaveCriticalSection(&CSpatialAudioTech::s_atmosLock);
  if ( v5 )
    AtmosCheck::Uninitialize(v5);
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v5);
  if ( g_ADGProcess )
    CAudioDGProcess::CancelADGTerminationTimer(g_ADGProcess);
  CAudioSrv::VAD_AudiosrvServiceStop(this);
  std::unique_ptr<CPowerReferenceManager>::reset(v2, 0LL);
  MME_ServiceStop();
  v3 = (AtmosCheck *)g_ADGProcess;
  if ( g_ADGProcess )
  {
    EnterCriticalSection(g_ADGProcess);
    v5 = v3;
    CAudioDGProcess::CancelADGTerminationTimer((struct _RTL_CRITICAL_SECTION *)v3);
    CAudioDGProcess::DoTerminateADG(v3);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>((struct _RTL_CRITICAL_SECTION **)&v5);
    v4 = g_ADGProcess;
    if ( g_ADGProcess )
    {
      CAudioDGProcess::~CAudioDGProcess((CAudioDGProcess *)g_ADGProcess);
      operator delete(v4, (const struct std::nothrow_t *)0xA0);
    }
    g_ADGProcess = 0LL;
  }
  KsNotifications_ServiceStop();
  if ( (char *)g_hCanAcceptMMCClientEvent - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
  {
    CloseHandle(g_hCanAcceptMMCClientEvent);
    g_hCanAcceptMMCClientEvent = 0LL;
  }
}
