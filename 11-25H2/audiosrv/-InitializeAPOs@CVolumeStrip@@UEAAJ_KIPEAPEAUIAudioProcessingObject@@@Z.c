/*
 * XREFs of ?InitializeAPOs@CVolumeStrip@@UEAAJ_KIPEAPEAUIAudioProcessingObject@@@Z @ 0x18000A890
 * Callers:
 *     <none>
 * Callees:
 *     ??0CPerfTracker@@QEAA@PEBU_tlgProvider_t@@QEBD1@Z @ 0x18000C640 (--0CPerfTracker@@QEAA@PEBU_tlgProvider_t@@QEBD1@Z.c)
 *     ??1CPerfTracker@@QEAA@XZ @ 0x18000C978 (--1CPerfTracker@@QEAA@XZ.c)
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x18000F7B0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001AC8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1800A7AB0 (__security_check_cookie.c)
 *     WPP_SF_q @ 0x1800C480C (WPP_SF_q.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CVolumeStrip::InitializeAPOs(
        CVolumeStrip *this,
        __int64 a2,
        unsigned int a3,
        struct IAudioProcessingObject **a4)
{
  struct AudioSrvTelemetryProvider *v8; // rax
  __int64 v9; // rcx
  int v10; // eax
  unsigned int v11; // ebx
  __int64 v12; // rdx
  __int64 v13; // r9
  __int64 v15; // rcx
  __int64 v16; // rcx
  int v17; // [rsp+20h] [rbp-138h]
  LARGE_INTEGER PerformanceCount; // [rsp+30h] [rbp-128h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+158h] [rbp+0h]

  v8 = AudioSrvTelemetryProvider::Instance();
  CPerfTracker::CPerfTracker(
    &PerformanceCount,
    *((const struct _tlgProvider_t **)v8 + 1),
    "VolumeStrip_InitializeAPOs",
    0LL);
  if ( a4 || !a3 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 18LL, &WPP_ffca69456fc43fc517c726147dcc355b_Traceguids, this);
    }
    v9 = *((_QWORD *)this + 21);
    if ( v9
      && (v10 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, struct IAudioProcessingObject **))(*(_QWORD *)v9 + 72LL))(
                  v9,
                  a2,
                  a3,
                  a4),
          v11 = v10,
          v10 < 0) )
    {
      v12 = 617LL;
    }
    else
    {
      v15 = *((_QWORD *)this + 23);
      if ( v15
        && (v10 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, struct IAudioProcessingObject **))(*(_QWORD *)v15 + 64LL))(
                    v15,
                    a2,
                    a3,
                    a4),
            v11 = v10,
            v10 < 0) )
      {
        v12 = 621LL;
      }
      else
      {
        v16 = *((_QWORD *)this + 22);
        if ( !v16
          || (v10 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, struct IAudioProcessingObject **))(*(_QWORD *)v16 + 64LL))(
                      v16,
                      a2,
                      a3,
                      a4),
              v11 = v10,
              v10 >= 0) )
        {
          v11 = 0;
          goto LABEL_9;
        }
        v12 = 626LL;
      }
    }
    v13 = (unsigned int)v10;
  }
  else
  {
    v11 = -2147467261;
    v12 = 607LL;
    v13 = 2147500035LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v12,
    (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\volumestrip.cpp",
    (const char *)v13,
    v17);
LABEL_9:
  CPerfTracker::~CPerfTracker((CPerfTracker *)&PerformanceCount);
  return v11;
}
