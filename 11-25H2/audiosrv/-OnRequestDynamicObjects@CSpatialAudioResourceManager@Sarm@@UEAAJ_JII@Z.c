/*
 * XREFs of ?OnRequestDynamicObjects@CSpatialAudioResourceManager@Sarm@@UEAAJ_JII@Z @ 0x1801192E0
 * Callers:
 *     ?OnStreamConnectedToSaDevice@CSpatialAudioResourceManager@Sarm@@UEAAJPEAUIAudioStreamInfo@@KPEBU_GUID@@PEBUSPATIAL_STREAM_PROPERTIES@@@Z @ 0x180119530 (-OnStreamConnectedToSaDevice@CSpatialAudioResourceManager@Sarm@@UEAAJPEAUIAudioStreamInfo@@KPEBU.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001AC8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ScheduleWorkItem@CWorkFifo@@QEAAJV?$function@$$A6AXXZ@std@@@Z @ 0x180082958 (-ScheduleWorkItem@CWorkFifo@@QEAAJV-$function@$$A6AXXZ@std@@@Z.c)
 *     ?load@?$_Atomic_storage@_N$00@std@@QEBA_NW4memory_order@2@@Z @ 0x1800B51EC (-load@-$_Atomic_storage@_N$00@std@@QEBA_NW4memory_order@2@@Z.c)
 *     ?wait@?$event_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@QEBA_NKH@Z @ 0x1800CB2BC (-wait@-$event_t@V-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@_E$1-CloseHandle@details@wil@@.c)
 *     ?FindStream@CSpatialAudioResourceManager@Sarm@@AEAAPEAVCStreamResource@2@_J@Z @ 0x180118720 (-FindStream@CSpatialAudioResourceManager@Sarm@@AEAAPEAVCStreamResource@2@_J@Z.c)
 *     ?ValidateDynamicObjectRequest@CStreamResource@Sarm@@QEBAJII@Z @ 0x18011C094 (-ValidateDynamicObjectRequest@CStreamResource@Sarm@@QEBAJII@Z.c)
 *     ?LogRequestDynamicObjects@CSpatialAudioResourceManagerTraceLogger@@QEAAX_JII@Z @ 0x18011C6D4 (-LogRequestDynamicObjects@CSpatialAudioResourceManagerTraceLogger@@QEAAX_JII@Z.c)
 */

__int64 __fastcall Sarm::CSpatialAudioResourceManager::OnRequestDynamicObjects(
        Sarm::CSpatialAudioResourceManager *this,
        __int64 a2,
        unsigned int a3,
        unsigned int a4)
{
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  CSpatialAudioResourceManagerTraceLogger *v9; // rcx
  Sarm::CStreamResource *Stream; // rax
  __int64 v11; // rdx
  int v12; // esi
  __int64 v13; // rdx
  struct Sarm::CStreamResource *v15; // rax
  __int128 v16; // [rsp+20h] [rbp-60h]
  __int64 (__fastcall **v17)(); // [rsp+38h] [rbp-48h] BYREF
  __int128 v18; // [rsp+40h] [rbp-40h]
  unsigned __int64 v19; // [rsp+50h] [rbp-30h]
  __int64 (__fastcall ***v20)(); // [rsp+70h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]

  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 64);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 64));
  CSpatialAudioResourceManagerTraceLogger::LogRequestDynamicObjects(v9, a2, a3, a4);
  Stream = Sarm::CSpatialAudioResourceManager::FindStream(this, a2);
  if ( !Stream )
  {
    v11 = 474LL;
LABEL_18:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (int)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\spatialaudioresourcemanager.cpp",
      (const char *)0x887C0109LL);
    if ( v4 )
      LeaveCriticalSection(v4);
    return 2289828105LL;
  }
  v12 = Sarm::CStreamResource::ValidateDynamicObjectRequest(Stream, a3, a4);
  if ( v12 >= 0 )
  {
    *(_QWORD *)&v16 = this;
    v17 = off_180174028;
    *((_QWORD *)&v16 + 1) = a2;
    v18 = v16;
    v20 = &v17;
    v19 = __PAIR64__(a4, a3);
    v12 = CWorkFifo::ScheduleWorkItem((PTP_WORK *)this + 38, (__int64)&v17);
    if ( v12 < 0 )
    {
      v13 = 481LL;
      goto LABEL_5;
    }
    if ( v4 )
      LeaveCriticalSection(v4);
    if ( a3 )
    {
      if ( !*((_QWORD *)this + 60)
        || !_wait___event_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__Uerr_returncode_policy_3__wil__QEBA_NKH_Z(
              (HANDLE *)this + 60,
              0xFFFFFFFF)
        || std::_Atomic_storage<bool,1>::load((__int64)this + 440) )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x1E6,
          (int)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\spatialaudioresourcemanager.cpp",
          (const char *)0x887C010CLL);
        return 2289828108LL;
      }
      EnterCriticalSection(v4);
      v15 = Sarm::CSpatialAudioResourceManager::FindStream(this, a2);
      if ( !v15 )
      {
        v11 = 491LL;
        goto LABEL_18;
      }
      if ( *((_DWORD *)v15 + 20) < a3 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x1EE,
          (int)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\spatialaudioresourcemanager.cpp",
          (const char *)0x887C010CLL);
        if ( v4 )
          LeaveCriticalSection(v4);
        return 2289828108LL;
      }
      if ( v4 )
        LeaveCriticalSection(v4);
    }
    return 0LL;
  }
  v13 = 477LL;
LABEL_5:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v13,
    (int)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\spatialaudioresourcemanager.cpp",
    (const char *)(unsigned int)v12);
  if ( v4 )
    LeaveCriticalSection(v4);
  return (unsigned int)v12;
}
