/*
 * XREFs of ?CreateStream@CExclusiveStreamGroupProxy@@UEAAJPEAUIAudioStreamInfo@@PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@KPEAUSystemAudioStream@@@Z @ 0x1800F02B0
 * Callers:
 *     <none>
 * Callees:
 *     ??0CPerfTracker@@QEAA@PEBU_tlgProvider_t@@QEBD1@Z @ 0x18000C640 (--0CPerfTracker@@QEAA@PEBU_tlgProvider_t@@QEBD1@Z.c)
 *     ??1CPerfTracker@@QEAA@XZ @ 0x18000C978 (--1CPerfTracker@@QEAA@XZ.c)
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x18000F7B0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001AC8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AddStream@CBaseStreamGroupProxy@@IEAAJPEAUIAudioStreamInfo@@@Z @ 0x1800620C0 (-AddStream@CBaseStreamGroupProxy@@IEAAJPEAUIAudioStreamInfo@@@Z.c)
 *     ??4?$com_ptr_t@UIAudioMediaType@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUIAudioMediaType@@@Z @ 0x1800661B8 (--4-$com_ptr_t@UIAudioMediaType@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUIAudioMediaTyp.c)
 *     __security_check_cookie @ 0x1800A7AB0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800A8BC4 (memset_0.c)
 *     ?SetAudioHandle@CAudioStream@@QEAAJPEAUSystemAudioStream@@KPEAUIStreamInstanceProxy@@@Z @ 0x1800CA6D4 (-SetAudioHandle@CAudioStream@@QEAAJPEAUSystemAudioStream@@KPEAUIStreamInstanceProxy@@@Z.c)
 *     ?move_initialize_from@SystemAudioStream@@QEAAJKPEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x180108BB4 (-move_initialize_from@SystemAudioStream@@QEAAJKPEAUSYSTEM_AUDIO_STREAM@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CExclusiveStreamGroupProxy::CreateStream(
        unsigned __int64 this,
        struct IAudioStreamInfo *a2,
        struct SYSTEM_AUDIO_STREAM_DESCRIPTOR *a3,
        struct IAudioGraphCallback *a4,
        unsigned int a5,
        struct SystemAudioStream *a6)
{
  struct AudioSrvTelemetryProvider *v10; // rax
  int v11; // eax
  unsigned int v12; // ebp
  int v14; // eax
  _OWORD *v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rcx
  int v20; // eax
  unsigned int v21; // ebx
  LARGE_INTEGER PerformanceCount; // [rsp+20h] [rbp-618h] BYREF
  _BYTE v23[1264]; // [rsp+110h] [rbp-528h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+638h] [rbp+0h]

  memset_0(v23, 0, 0x4E8uLL);
  v10 = AudioSrvTelemetryProvider::Instance();
  CPerfTracker::CPerfTracker(
    &PerformanceCount,
    *((const struct _tlgProvider_t **)v10 + 1),
    "ExclusiveStreamGroup_CreateStream",
    0LL);
  v11 = (*(__int64 (__fastcall **)(_QWORD, struct SYSTEM_AUDIO_STREAM_DESCRIPTOR *, _BYTE *))(**(_QWORD **)(this + 80)
                                                                                            + 40LL))(
          *(_QWORD *)(this + 80),
          a3,
          v23);
  v12 = v11;
  if ( v11 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x87B,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
      (const char *)(unsigned int)v11);
    CPerfTracker::~CPerfTracker((CPerfTracker *)&PerformanceCount);
    return v12;
  }
  CPerfTracker::~CPerfTracker((CPerfTracker *)&PerformanceCount);
  v14 = SystemAudioStream::move_initialize_from(a6, 0xFFFFFFFF, (struct SYSTEM_AUDIO_STREAM *)v23);
  v12 = v14;
  if ( v14 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x87F,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
      (const char *)(unsigned int)v14);
    return v12;
  }
  v15 = (_OWORD *)(this + 352);
  v16 = 2LL;
  v17 = 128LL;
  do
  {
    *v15 = *(_OWORD *)a3;
    v15[1] = *((_OWORD *)a3 + 1);
    v15[2] = *((_OWORD *)a3 + 2);
    v15[3] = *((_OWORD *)a3 + 3);
    v15[4] = *((_OWORD *)a3 + 4);
    v15[5] = *((_OWORD *)a3 + 5);
    v15[6] = *((_OWORD *)a3 + 6);
    v15 += 8;
    *(v15 - 1) = *((_OWORD *)a3 + 7);
    a3 = (struct SYSTEM_AUDIO_STREAM_DESCRIPTOR *)((char *)a3 + 128);
    --v16;
  }
  while ( v16 );
  *v15 = *(_OWORD *)a3;
  v15[1] = *((_OWORD *)a3 + 1);
  v15[2] = *((_OWORD *)a3 + 2);
  v15[3] = *((_OWORD *)a3 + 3);
  v15[4] = *((_OWORD *)a3 + 4);
  v18 = *(_QWORD *)(this + 48);
  *(_QWORD *)(this + 480) = v18;
  *(_DWORD *)(this + 472) = *(unsigned __int16 *)(v18 + 16) + 18;
  *(_QWORD *)(this + 496) = *(_QWORD *)(this + 56);
  if ( *(struct IAudioGraphCallback **)(this + 688) != a4 )
  {
    if ( a4 )
      (*(void (__fastcall **)(struct IAudioGraphCallback *, __int64))(*(_QWORD *)a4 + 8LL))(a4, 128LL);
    v19 = *(_QWORD *)(this + 688);
    *(_QWORD *)(this + 688) = a4;
    if ( v19 )
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v19 + 16LL))(v19, v17);
  }
  wil::com_ptr_t<IAudioMediaType,wil::err_returncode_policy>::operator=(
    (__int64 *)a6 + 5,
    this & ((unsigned __int128)-(__int128)(this - 8) >> 64));
  CAudioStream::SetAudioHandle((CAudioStream *)(((unsigned __int64)a2 - 8) & -(__int64)(a2 != 0LL)), a6, a5, 0LL);
  v20 = CBaseStreamGroupProxy::AddStream((CBaseStreamGroupProxy *)this, a2);
  v21 = v20;
  if ( v20 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x891,
    (int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
    (const char *)(unsigned int)v20);
  return v21;
}
