/*
 * XREFs of ?Initialize@CSystemAudioDeviceSharedBase@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K@Z @ 0x140050BB0
 * Callers:
 *     ?Initialize@CSystemAudioDeviceOffloadGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K@Z @ 0x14004D7B0 (-Initialize@CSystemAudioDeviceOffloadGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGra.c)
 * Callees:
 *     ?Provider@AudioDgTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ @ 0x1400073B4 (-Provider@AudioDgTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ??1CPerfTracker@@QEAA@XZ @ 0x14000761C (--1CPerfTracker@@QEAA@XZ.c)
 *     ??0CPerfTracker@@QEAA@PEBU_tlgProvider_t@@QEBD1@Z @ 0x1400079B0 (--0CPerfTracker@@QEAA@PEBU_tlgProvider_t@@QEBD1@Z.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x14000E2F0 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ?PublishDeviceGraphWnfState@@YAXXZ @ 0x1400298F4 (-PublishDeviceGraphWnfState@@YAXXZ.c)
 *     ?Add@CSystemAudioDeviceCollection@@SAHPEBGPEAVCSystemAudioDeviceBase@@@Z @ 0x14002A668 (-Add@CSystemAudioDeviceCollection@@SAHPEBGPEAVCSystemAudioDeviceBase@@@Z.c)
 *     ??1?$CSAutoLock@$00@@QEAA@XZ @ 0x14002CC20 (--1-$CSAutoLock@$00@@QEAA@XZ.c)
 *     ?SetGraphState@CSystemAudioDeviceSharedBase@@IEAAJW4GRAPH_STATE@@@Z @ 0x14003ACD8 (-SetGraphState@CSystemAudioDeviceSharedBase@@IEAAJW4GRAPH_STATE@@@Z.c)
 *     ?ApplyFxStateSettings@CSystemAudioDeviceBase@@IEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@H@Z @ 0x140050A30 (-ApplyFxStateSettings@CSystemAudioDeviceBase@@IEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@H@Z.c)
 *     __security_check_cookie @ 0x140058DE0 (__security_check_cookie.c)
 *     WPP_SF_D @ 0x140065A6C (WPP_SF_D.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140065D4C (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?AEWMILOG_PERFORMANCE@@YAXKPEAXEE_K1@Z @ 0x14009801C (-AEWMILOG_PERFORMANCE@@YAXKPEAXEE_K1@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CSystemAudioDeviceSharedBase::Initialize(
        CSystemAudioDeviceSharedBase *this,
        struct AUDIO_DEVICE_PIPE_DESCRIPTOR *a2,
        struct IUnknown *a3,
        int a4)
{
  __int128 v4; // xmm0
  __int64 v9; // rcx
  const struct _tlgProvider_t *v10; // rax
  void *v11; // rdx
  unsigned int v12; // ecx
  unsigned __int8 v13; // r8
  HRESULT Instance; // ebx
  __int64 v15; // rcx
  __int64 v16; // r9
  int v17; // eax
  void *v18; // rdx
  unsigned int v19; // ecx
  unsigned __int8 v20; // r8
  LPVOID *ppv; // [rsp+20h] [rbp-168h]
  LPVOID *ppva; // [rsp+20h] [rbp-168h]
  unsigned __int64 v24; // [rsp+28h] [rbp-160h]
  unsigned __int64 v25; // [rsp+28h] [rbp-160h]
  struct _RTL_CRITICAL_SECTION *v26; // [rsp+30h] [rbp-158h] BYREF
  __int128 v27; // [rsp+38h] [rbp-150h]
  __int128 v28; // [rsp+48h] [rbp-140h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+60h] [rbp-128h] BYREF

  v4 = *(_OWORD *)((char *)a2 + 148);
  *(_OWORD *)((char *)this + 104) = v4;
  v27 = v4;
  v28 = v4;
  EtwEventActivityIdControl(4LL, &v28);
  v10 = AudioDgTelemetryProvider::Provider(v9);
  CPerfTracker::CPerfTracker(&PerformanceCount, v10, "SaDevice_Initialize", 0LL);
  AEWMILOG_PERFORMANCE(v12, v11, v13, 9u, (unsigned __int64)ppv, v24);
  EnterCriticalSection((LPCRITICAL_SECTION)this + 1);
  v26 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 40);
  if ( !a3 )
  {
    Instance = -2147024809;
    goto LABEL_12;
  }
  Instance = CoCreateInstance(
               &GUID_add18bf7_ab60_4283_a580_d7544dd255d2,
               0LL,
               0x17u,
               &GUID_fe4e568f_9ad2_4ead_a0f0_e216fd02b1e7,
               (LPVOID *)this + 23);
  if ( Instance < 0 )
    goto LABEL_12;
  *((_DWORD *)this + 20) = a4;
  if ( *((struct IUnknown **)this + 22) != a3 )
    ATL::AtlComPtrAssign((struct IUnknown **)this + 22, a3);
  v15 = *((_QWORD *)this + 23);
  v16 = *((unsigned int *)this + 20);
  *((_DWORD *)this + 24) = *((_DWORD *)a2 + 34);
  Instance = (*(__int64 (__fastcall **)(__int64, struct AUDIO_DEVICE_PIPE_DESCRIPTOR *, char *, __int64))(*(_QWORD *)v15 + 24LL))(
               v15,
               a2,
               (char *)this + 8,
               v16);
  if ( Instance < 0 )
    goto LABEL_12;
  *((_DWORD *)this + 8) = *((_DWORD *)a2 + 18);
  *((_DWORD *)this + 52) = *((_DWORD *)a2 + 25);
  v17 = CSystemAudioDeviceCollection::Add(*((const unsigned __int16 **)a2 + 7), this);
  *((_DWORD *)this + 49) = v17;
  if ( !v17 )
  {
    Instance = -2147024882;
LABEL_12:
    (*(void (__fastcall **)(CSystemAudioDeviceSharedBase *))(*(_QWORD *)this + 184LL))(this);
    goto LABEL_13;
  }
  Instance = CSystemAudioDeviceBase::ApplyFxStateSettings(this, a2, 1);
  if ( Instance < 0 )
    goto LABEL_12;
  if ( *((_DWORD *)this + 52) == 1 )
    CSystemAudioDeviceSharedBase::SetGraphState((unsigned __int64)this, 3);
LABEL_13:
  AEWMILOG_PERFORMANCE(v19, v18, v20, 0xAu, (unsigned __int64)ppva, v25);
  if ( Instance < 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 16LL, &WPP_14fbdab4759831348651410bb2c6c307_Traceguids);
    }
    AudDGTraceLoggingErrorHelper("CSystemAudioDeviceSharedBase::Initialize", 0xBFu, Instance);
  }
  PublishDeviceGraphWnfState();
  CSAutoLock<1>::~CSAutoLock<1>(&v26);
  CPerfTracker::~CPerfTracker((CPerfTracker *)&PerformanceCount);
  EtwEventActivityIdControl(4LL, &v28);
  return (unsigned int)Instance;
}
