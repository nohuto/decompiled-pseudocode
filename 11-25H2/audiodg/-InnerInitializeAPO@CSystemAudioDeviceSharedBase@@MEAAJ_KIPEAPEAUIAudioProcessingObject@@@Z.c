/*
 * XREFs of ?InnerInitializeAPO@CSystemAudioDeviceSharedBase@@MEAAJ_KIPEAPEAUIAudioProcessingObject@@@Z @ 0x140043270
 * Callers:
 *     <none>
 * Callees:
 *     ?Provider@AudioDgTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ @ 0x1400073B4 (-Provider@AudioDgTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ??1CPerfTracker@@QEAA@XZ @ 0x14000761C (--1CPerfTracker@@QEAA@XZ.c)
 *     ??0CPerfTracker@@QEAA@PEBU_tlgProvider_t@@QEBD1@Z @ 0x1400079B0 (--0CPerfTracker@@QEAA@PEBU_tlgProvider_t@@QEBD1@Z.c)
 *     __security_check_cookie @ 0x140058DE0 (__security_check_cookie.c)
 *     WPP_SF_D @ 0x140065A6C (WPP_SF_D.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140065D4C (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CSystemAudioDeviceSharedBase::InnerInitializeAPO(
        CSystemAudioDeviceSharedBase *this,
        __int64 a2,
        unsigned int a3,
        struct IAudioProcessingObject **a4)
{
  __int64 v8; // rcx
  const struct _tlgProvider_t *v9; // rax
  int v10; // ebx
  __int128 v12; // [rsp+40h] [rbp-138h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+50h] [rbp-128h] BYREF

  v12 = *(_OWORD *)((char *)this + 104);
  EtwEventActivityIdControl(4LL, &v12);
  v9 = AudioDgTelemetryProvider::Provider(v8);
  CPerfTracker::CPerfTracker(&PerformanceCount, v9, "SaDevice_InitializeAPOs", 0LL);
  v10 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, struct IAudioProcessingObject **))(**((_QWORD **)this + 22)
                                                                                             + 24LL))(
          *((_QWORD *)this + 22),
          a2,
          a3,
          a4);
  if ( v10 < 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 10LL, &WPP_14fbdab4759831348651410bb2c6c307_Traceguids);
    }
    AudDGTraceLoggingErrorHelper("CSystemAudioDeviceSharedBase::InnerInitializeAPO", 0x33u, v10);
  }
  else
  {
    *((_QWORD *)this + 21) = a2;
  }
  CPerfTracker::~CPerfTracker((CPerfTracker *)&PerformanceCount);
  EtwEventActivityIdControl(4LL, &v12);
  return (unsigned int)v10;
}
