/*
 * XREFs of _lambda_baabfe6539d220bfd12b707881e6aaaa_::operator() @ 0x1800F4404
 * Callers:
 *     ?RuntimeClassInitialize@CStreamInstanceProxy@@QEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@_JPEAUSystemAudioStream@@@Z @ 0x1800F8718 (-RuntimeClassInitialize@CStreamInstanceProxy@@QEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudi.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180014EAC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x180023E20 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ??0CPerfTracker@@QEAA@PEBU_tlgProvider_t@@QEBD1@Z @ 0x180024FB0 (--0CPerfTracker@@QEAA@PEBU_tlgProvider_t@@QEBD1@Z.c)
 *     ??1CPerfTracker@@QEAA@XZ @ 0x1800252E8 (--1CPerfTracker@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1800A3DA0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800A4EB4 (memset_0.c)
 *     ?move_initialize_from@SystemAudioStream@@QEAAJKPEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x18010F338 (-move_initialize_from@SystemAudioStream@@QEAAJKPEAUSYSTEM_AUDIO_STREAM@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_baabfe6539d220bfd12b707881e6aaaa_::operator()(__int64 *a1)
{
  __int64 v2; // rsi
  HRESULT v3; // eax
  unsigned int v4; // ebx
  struct AudioSrvTelemetryProvider *v5; // rax
  __int64 v6; // rcx
  _QWORD *v7; // rsi
  int v8; // eax
  __int64 v9; // rdx
  LARGE_INTEGER PerformanceCount; // [rsp+40h] [rbp-5F8h] BYREF
  _BYTE v12[1264]; // [rsp+130h] [rbp-508h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+638h] [rbp+0h]

  v2 = *a1;
  v3 = CoSetProxyBlanket(*(IUnknown **)(*a1 + 16), 0xFFFFFFFF, 0xFFFFFFFF, 0LL, 6u, 3u, 0LL, 0x40u);
  v4 = v3;
  if ( v3 >= 0 )
  {
    memset_0(v12, 0, 0x4E8uLL);
    v5 = AudioSrvTelemetryProvider::Instance();
    CPerfTracker::CPerfTracker(
      &PerformanceCount,
      *((const struct _tlgProvider_t **)v5 + 1),
      "StreamInstance_CreateStream",
      0LL);
    v6 = *(_QWORD *)(v2 + 16);
    v7 = (_QWORD *)a1[1];
    v8 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _BYTE *))(*(_QWORD *)v6 + 24LL))(
           v6,
           *v7,
           *(_QWORD *)a1[2],
           v12);
    v4 = v8;
    if ( v8 >= 0 )
    {
      v8 = SystemAudioStream::move_initialize_from(
             *(SystemAudioStream **)a1[3],
             *(_DWORD *)(*v7 + 312LL),
             (struct SYSTEM_AUDIO_STREAM *)v12);
      v4 = v8;
      if ( v8 >= 0 )
      {
        v4 = 0;
        goto LABEL_9;
      }
      v9 = 4015LL;
    }
    else
    {
      v9 = 4013LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
      (const char *)(unsigned int)v8);
LABEL_9:
    CPerfTracker::~CPerfTracker((CPerfTracker *)&PerformanceCount);
    return v4;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xFA9,
    (int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
    (const char *)(unsigned int)v3);
  return v4;
}
