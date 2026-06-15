/*
 * XREFs of ?OnStreamDisconnectedFromSaDevice@CSpatialAudioResourceManager@Sarm@@UEAAXPEAUIAudioStreamInfo@@@Z @ 0x18004DCF0
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$03@@U3@U3@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$03@@553@Z @ 0x1800047F0 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWrapperByVal@$03@@U3@U3@U1@@.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180011640 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?SarmTraceLoggingTracer@@YAXPEBDI@Z @ 0x18004DFD0 (-SarmTraceLoggingTracer@@YAXPEBDI@Z.c)
 *     ?RemoveStream@CSpatialAudioResourceManager@Sarm@@AEAAXPEAVCStreamResource@2@@Z @ 0x18004E0E4 (-RemoveStream@CSpatialAudioResourceManager@Sarm@@AEAAXPEAVCStreamResource@2@@Z.c)
 *     ?ScheduleWorkItem@CWorkFifo@@QEAAJV?$function@$$A6AXXZ@std@@@Z @ 0x180070498 (-ScheduleWorkItem@CWorkFifo@@QEAAJV-$function@$$A6AXXZ@std@@@Z.c)
 *     __security_check_cookie @ 0x1800A3DA0 (__security_check_cookie.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B096C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800BFF5C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?RemoveAtPos@?$CAtlMap@PEAUISaDeviceProxy@@VCEndpointResourcePool@Sarm@@V?$CElementTraits@PEAUISaDeviceProxy@@@ATL@@V?$CElementTraits@VCEndpointResourcePool@Sarm@@@5@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x180121FF4 (-RemoveAtPos@-$CAtlMap@PEAUISaDeviceProxy@@VCEndpointResourcePool@Sarm@@V-$CElementTraits@PEAUIS.c)
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180123098 (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Sarm::CSpatialAudioResourceManager::OnStreamDisconnectedFromSaDevice(
        Sarm::CSpatialAudioResourceManager *this,
        struct IAudioStreamInfo *a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  __int64 v5; // r8
  const char *v6; // r9
  __int64 v7; // rsi
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 i; // rdx
  __int64 v11; // r14
  int v12; // r15d
  char v13; // r12
  __int64 v14; // rax
  int v15; // esi
  std::_Ref_count_base *v16; // rcx
  int v17; // eax
  int v18; // [rsp+20h] [rbp-89h]
  int v19; // [rsp+50h] [rbp-59h] BYREF
  int v20; // [rsp+54h] [rbp-55h] BYREF
  int v21; // [rsp+58h] [rbp-51h] BYREF
  __int64 v22; // [rsp+60h] [rbp-49h] BYREF
  __int128 v23; // [rsp+68h] [rbp-41h] BYREF
  __int64 v24; // [rsp+78h] [rbp-31h] BYREF
  __int128 *v25; // [rsp+80h] [rbp-29h] BYREF
  __int64 (__fastcall **v26)(); // [rsp+88h] [rbp-21h] BYREF
  __int128 v27; // [rsp+90h] [rbp-19h]
  __int64 (__fastcall ***v28)(); // [rsp+C0h] [rbp+17h]
  __int128 v29; // [rsp+C8h] [rbp+1Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+108h] [rbp+5Fh]

  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 64);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 64));
  SarmTraceLoggingTracer("Sarm::CSpatialAudioResourceManager::OnStreamDisconnectedFromSaDevice", 0x192u);
  v7 = 0LL;
  v8 = 0LL;
  v22 = 0LL;
  if ( a2 )
  {
    (**(void (__fastcall ***)(struct IAudioStreamInfo *, GUID *, __int64 *))a2)(
      a2,
      &GUID_04c50d49_105a_4a6b_8af7_0de59e20ce12,
      &v22);
    v8 = v22;
  }
  if ( v8 )
  {
    v5 = (unsigned int)v8 % *((_DWORD *)this + 52);
    v9 = *((_QWORD *)this + 24);
    if ( v9 )
    {
      for ( i = *(_QWORD *)(v9 + 8 * v5); i; i = *(_QWORD *)(i + 104) )
      {
        if ( *(_DWORD *)(i + 112) == (_DWORD)v8 && *(_QWORD *)i == v8 )
        {
          v7 = i + 8;
          break;
        }
      }
    }
  }
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  if ( v7 )
  {
    v11 = *(_QWORD *)(v7 + 8);
    if ( !v11 )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x19C,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\spatialaudioresourcemanager.cpp",
        v6);
    v12 = *(_DWORD *)(v7 + 52);
    if ( (unsigned int)dword_1801D82B0 > 4 )
    {
      v24 = *(_QWORD *)(v7 + 8);
      v19 = v12;
      v20 = *(_DWORD *)(v7 + 80);
      v21 = *(_DWORD *)(v7 + 84);
      v29 = *(_OWORD *)(v7 + 16);
      v25 = &v29;
      *(_QWORD *)&v23 = *(_QWORD *)(v7 + 40);
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
        v8,
        (__int64)&unk_1801AE2F2,
        v5,
        (__int64)v6,
        (__int64)&v23,
        (__int64 *)&v25,
        (__int64)&v21,
        (__int64)&v20,
        (__int64)&v19,
        (__int64)&v24);
    }
    Sarm::CSpatialAudioResourceManager::RemoveStream(this, (struct Sarm::CStreamResource *)v7);
    v13 = *(_BYTE *)(v11 + 8);
    v14 = *(_QWORD *)(v11 + 16);
    if ( !v14 )
      wil::details::in1diag3::_FailFast_Hr(
        retaddr,
        (void *)0x8F,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\endpointresourcepool.cpp",
        (const char *)0x887C0100LL,
        v18);
    v15 = *(_DWORD *)(v14 + 20) - *(_DWORD *)(v14 + 24);
    if ( *(_DWORD *)(v11 + 12) )
      goto LABEL_36;
    if ( *(_QWORD *)v11 )
      ATL::CAtlMap<ISaDeviceProxy *,Sarm::CEndpointResourcePool,ATL::CElementTraits<ISaDeviceProxy *>,ATL::CElementTraits<Sarm::CEndpointResourcePool>>::RemoveAtPos((char *)this + 112);
    if ( *((_QWORD *)this + 15) )
    {
LABEL_36:
      if ( *((_QWORD *)this + 25) )
      {
        if ( v13 )
        {
          if ( v15 )
          {
            *(_QWORD *)&v23 = this;
            DWORD2(v23) = v12;
            v26 = off_18017E3E0;
            v27 = v23;
            v28 = &v26;
            v17 = CWorkFifo::ScheduleWorkItem((Sarm::CSpatialAudioResourceManager *)((char *)this + 304));
            if ( v17 < 0 )
              wil::details::in1diag3::_Log_Hr(
                retaddr,
                (void *)0x1C5,
                (unsigned int)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\spatialaudioresourcemanager.cpp",
                (const char *)(unsigned int)v17,
                v18);
          }
        }
      }
    }
    else
    {
      Sarm::CEndpointResourcePool::s_sharedPool = 0LL;
      v16 = qword_1801DCF20;
      qword_1801DCF20 = 0LL;
      if ( v16 )
        std::_Ref_count_base::_Decref(v16);
    }
  }
  if ( v4 )
    LeaveCriticalSection(v4);
}
