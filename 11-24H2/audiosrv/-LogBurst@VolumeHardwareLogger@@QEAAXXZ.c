/*
 * XREFs of ?LogBurst@VolumeHardwareLogger@@QEAAXXZ @ 0x1801146AC
 * Callers:
 *     ?ProviderFinalRelease@CVolumeHardware@@UEAAXXZ @ 0x180114C10 (-ProviderFinalRelease@CVolumeHardware@@UEAAXXZ.c)
 *     ?TimerCallback@VolumeHardwareLogger@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x180115620 (-TimerCallback@VolumeHardwareLogger@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@G@@U1@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U?$_tlgWrapperByVal@$07@@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@3AEBU?$_tlgWrapperByVal@$03@@444AEBU?$_tlgWrapperByVal@$07@@4444444444444@Z @ 0x1800042D8 (--$Write@U-$_tlgWrapSz@G@@U1@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U-$_tlgWrapperByVal@$07@@U2@U2@U2.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180020710 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x180023E20 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     _tlgKeywordOn @ 0x180048600 (_tlgKeywordOn.c)
 *     ?CurrentVolumeLevel@VolumeHardwareLogger@@AEAA?AUVolumeLevel@1@XZ @ 0x18006E3B0 (-CurrentVolumeLevel@VolumeHardwareLogger@@AEAA-AUVolumeLevel@1@XZ.c)
 *     ?ScheduleTimer@VolumeHardwareLogger@@AEAAXXZ @ 0x180114F60 (-ScheduleTimer@VolumeHardwareLogger@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall VolumeHardwareLogger::LogBurst(struct _RTL_CRITICAL_SECTION *this)
{
  HANDLE OwningThread; // rcx
  double DebugInfo; // xmm1_8
  double v4; // xmm6_8
  struct AudioSrvTelemetryProvider *v5; // rax
  __int64 v6; // r8
  __int64 v7; // r9
  _DWORD *LockSemaphore; // rcx
  int SpinCount_high; // [rsp+C8h] [rbp-80h] BYREF
  int SpinCount; // [rsp+CCh] [rbp-7Ch] BYREF
  int v11; // [rsp+D0h] [rbp-78h] BYREF
  LONG v12; // [rsp+D4h] [rbp-74h] BYREF
  LONG v13; // [rsp+D8h] [rbp-70h] BYREF
  int v14; // [rsp+DCh] [rbp-6Ch] BYREF
  int v15; // [rsp+E0h] [rbp-68h] BYREF
  int v16; // [rsp+E4h] [rbp-64h] BYREF
  int OwningThread_high; // [rsp+E8h] [rbp-60h] BYREF
  int v18; // [rsp+ECh] [rbp-5Ch] BYREF
  int v19; // [rsp+F0h] [rbp-58h] BYREF
  int v20; // [rsp+F4h] [rbp-54h] BYREF
  int v21; // [rsp+F8h] [rbp-50h] BYREF
  __int64 v22; // [rsp+100h] [rbp-48h] BYREF
  int v23; // [rsp+108h] [rbp-40h]
  LARGE_INTEGER PerformanceCount; // [rsp+110h] [rbp-38h] BYREF
  double v25; // [rsp+118h] [rbp-30h] BYREF
  const WCHAR *v26; // [rsp+120h] [rbp-28h] BYREF
  const WCHAR *v27; // [rsp+128h] [rbp-20h] BYREF
  __int128 v28; // [rsp+130h] [rbp-18h] BYREF
  LONG RecursionCount; // [rsp+168h] [rbp+20h] BYREF
  LONG LockCount; // [rsp+170h] [rbp+28h] BYREF
  int DebugInfo_high; // [rsp+178h] [rbp+30h] BYREF
  int v32; // [rsp+180h] [rbp+38h] BYREF

  EnterCriticalSection(this);
  *(_QWORD *)&v28 = this;
  if ( this[1].LockSemaphore && (__int64)this[1].DebugInfo > 0 && SHIDWORD(this[2].OwningThread) > 0 )
  {
    PerformanceCount.QuadPart = 0LL;
    QueryPerformanceCounter(&PerformanceCount);
    OwningThread = this[3].OwningThread;
    DebugInfo = (double)(int)this[1].DebugInfo;
    if ( LOBYTE(this[1].OwningThread) || (double)(PerformanceCount.LowPart - (int)OwningThread) / DebugInfo >= 30.0 )
    {
      v4 = (double)((int)OwningThread - LODWORD(this[2].LockSemaphore)) / DebugInfo;
      VolumeHardwareLogger::CurrentVolumeLevel((__int64)this, (float *)&v22);
      v5 = AudioSrvTelemetryProvider::Instance();
      if ( **((_DWORD **)v5 + 1) > 4u && tlgKeywordOn(*((_QWORD *)v5 + 1), 0x400000000000LL) )
      {
        RecursionCount = this[3].RecursionCount;
        LockCount = this[3].LockCount;
        DebugInfo_high = HIDWORD(this[3].DebugInfo);
        v32 = (int)this[3].DebugInfo;
        SpinCount_high = HIDWORD(this[2].SpinCount);
        SpinCount = this[2].SpinCount;
        v11 = (int)this[2].OwningThread;
        v12 = this[2].RecursionCount;
        v13 = this[2].LockCount;
        v14 = v23;
        v15 = HIDWORD(v22);
        v16 = v22;
        OwningThread_high = HIDWORD(this[2].OwningThread);
        v25 = v4;
        v18 = (int)this[2].DebugInfo;
        v19 = HIDWORD(this[1].SpinCount);
        v20 = this[1].SpinCount;
        LockSemaphore = this[1].LockSemaphore;
        v21 = LockSemaphore[18];
        v26 = (const WCHAR *)*((_QWORD *)LockSemaphore + 8);
        v27 = (const WCHAR *)*((_QWORD *)LockSemaphore + 7);
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
          v6,
          (int)&unk_1801ADF1A,
          v6,
          v7,
          &v27,
          &v26,
          (__int64)&v21,
          (__int64)&v20,
          (__int64)&v19,
          (__int64)&v18,
          (__int64)&v25,
          (__int64)&OwningThread_high,
          (__int64)&v16,
          (__int64)&v15,
          (__int64)&v14,
          (__int64)&v13,
          (__int64)&v12,
          (__int64)&v11,
          (__int64)&SpinCount,
          (__int64)&SpinCount_high,
          (__int64)&v32,
          (__int64)&DebugInfo_high,
          (__int64)&LockCount,
          (__int64)&RecursionCount);
      }
      HIDWORD(this[2].OwningThread) = 0;
      *(_QWORD *)&this[2].LockCount = v22;
      LODWORD(this[2].OwningThread) = v23;
    }
    else
    {
      VolumeHardwareLogger::ScheduleTimer((VolumeHardwareLogger *)this);
    }
  }
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>((struct _RTL_CRITICAL_SECTION **)&v28);
}
