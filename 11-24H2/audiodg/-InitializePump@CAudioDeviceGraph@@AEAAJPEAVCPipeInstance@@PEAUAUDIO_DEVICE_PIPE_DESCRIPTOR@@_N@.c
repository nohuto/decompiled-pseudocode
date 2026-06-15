/*
 * XREFs of ?InitializePump@CAudioDeviceGraph@@AEAAJPEAVCPipeInstance@@PEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@_N@Z @ 0x140013934
 * Callers:
 *     ?Initialize@CAudioDeviceGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K@Z @ 0x14004F3D0 (-Initialize@CAudioDeviceGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K.c)
 * Callees:
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140006CB0 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ?Provider@AudioDgTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ @ 0x1400073E4 (-Provider@AudioDgTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000AC24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetTail@?$CAtlList@PEAVCConnectionInstance@@V?$CElementTraits@PEAVCConnectionInstance@@@ATL@@@ATL@@QEAAAEAPEAVCConnectionInstance@@XZ @ 0x140014310 (-GetTail@-$CAtlList@PEAVCConnectionInstance@@V-$CElementTraits@PEAVCConnectionInstance@@@ATL@@@A.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall CAudioDeviceGraph::InitializePump(
        CAudioDeviceGraph *this,
        struct CPipeInstance *a2,
        struct AUDIO_DEVICE_PIPE_DESCRIPTOR *a3,
        unsigned __int8 a4)
{
  int v4; // r14d
  __int64 v7; // rdi
  int v8; // eax
  unsigned int v9; // ebx
  int v10; // r9d
  int v11; // r8d
  __int64 v12; // rdx
  int v13; // eax
  __int64 v14; // rbx
  __int64 (__fastcall *v15)(__int64, const struct _tlgProvider_t *, __int128 *, __int64); // r14
  __int64 v16; // rsi
  __int128 v17; // xmm6
  __int64 v18; // rcx
  const struct _tlgProvider_t *v19; // rax
  int v20; // eax
  __int64 v22; // [rsp+40h] [rbp-30h] BYREF
  __int64 v23; // [rsp+48h] [rbp-28h] BYREF
  __int128 v24; // [rsp+50h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]
  __int64 v26; // [rsp+A8h] [rbp+38h] BYREF

  v4 = a4;
  v7 = **(_QWORD **)(*(_QWORD *)ATL::CAtlList<CConnectionInstance *,ATL::CElementTraits<CConnectionInstance *>>::GetTail((char *)a2 + 16)
                   + 32LL);
  v23 = v7;
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
  v26 = 0LL;
  v8 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 18))(
         *((_QWORD *)this + 18),
         &GUID_1b8969bf_17f7_48d1_89bc_fccafb532af5,
         &v26);
  v9 = v8;
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x406,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp",
      (const char *)(unsigned int)v8);
    goto LABEL_24;
  }
  v10 = *((_DWORD *)this + 35);
  v11 = 8;
  if ( (unsigned int)(*((_DWORD *)a3 + 25) - 2) > 2 )
    v11 = 0;
  v12 = v11 | (4 * v4) | ((unsigned int)(v10 == 0) + 1);
  if ( (*((_BYTE *)a3 + 212) & 1) != 0 )
    v12 = v11 | (4 * v4) | (10 - (unsigned int)(v10 != 0));
  v13 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, __int64, __int64, _QWORD))(**((_QWORD **)this + 19) + 24LL))(
          *((_QWORD *)this + 19),
          v12,
          *((unsigned int *)this + 32),
          v26,
          v7,
          *((_QWORD *)this + 49));
  v9 = v13;
  if ( v13 >= 0 )
  {
    v22 = 0LL;
    (***((void (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 19))(
      *((_QWORD *)this + 19),
      &GUID_00aa665f_84cd_47e3_9b9a_fbf6e17686eb,
      &v22);
    v14 = v22;
    v15 = *(__int64 (__fastcall **)(__int64, const struct _tlgProvider_t *, __int128 *, __int64))(*(_QWORD *)v22 + 24LL);
    v16 = *((_QWORD *)this + 48);
    v17 = *(_OWORD *)((char *)this + 344);
    v19 = AudioDgTelemetryProvider::Provider(v18);
    v24 = v17;
    v20 = v15(v14, v19, &v24, v16);
    v9 = v20;
    if ( v20 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x41D,
        (int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp",
        (const char *)(unsigned int)v20);
      if ( v22 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
      if ( v26 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
      if ( v7 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
      return v9;
    }
    ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v22);
    v9 = 0;
LABEL_24:
    ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v26);
    ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v23);
    return v9;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x418,
    (int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp",
    (const char *)(unsigned int)v13);
  if ( v26 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  return v9;
}
