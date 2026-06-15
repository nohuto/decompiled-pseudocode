/*
 * XREFs of _lambda_a4cb84fa65d51627a0f7f0ac7469365e_::operator() @ 0x1800EF1F4
 * Callers:
 *     ?RuntimeClassInitialize@CBridgeStreamInstanceProxy@@QEAAJPEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIStreamGroupProxy@@_J@Z @ 0x1800F337C (-RuntimeClassInitialize@CBridgeStreamInstanceProxy@@QEAAJPEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIStre.c)
 * Callees:
 *     ??0CPerfTracker@@QEAA@PEBU_tlgProvider_t@@QEBD1@Z @ 0x18000C640 (--0CPerfTracker@@QEAA@PEBU_tlgProvider_t@@QEBD1@Z.c)
 *     ??1CPerfTracker@@QEAA@XZ @ 0x18000C978 (--1CPerfTracker@@QEAA@XZ.c)
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x18000F7B0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001AC8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001D964 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??1SystemAudioStream@@QEAA@XZ @ 0x18002682C (--1SystemAudioStream@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1800A7AB0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800A8BC4 (memset_0.c)
 *     ?move_initialize_from@SystemAudioStream@@QEAAJKPEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x180108BB4 (-move_initialize_from@SystemAudioStream@@QEAAJKPEAUSYSTEM_AUDIO_STREAM@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall lambda_a4cb84fa65d51627a0f7f0ac7469365e_::operator()(_QWORD **a1)
{
  HRESULT v2; // eax
  unsigned int v3; // ebx
  __int64 v4; // rdx
  _QWORD *v5; // rsi
  struct AudioSrvTelemetryProvider *v6; // rax
  int v7; // eax
  __int64 v8; // rdx
  __int64 v10[2]; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v11; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v12; // [rsp+60h] [rbp-A0h]
  __int64 v13; // [rsp+68h] [rbp-98h]
  __int64 v14; // [rsp+70h] [rbp-90h]
  __int64 v15; // [rsp+78h] [rbp-88h]
  __int64 v16; // [rsp+80h] [rbp-80h]
  _BYTE v17[296]; // [rsp+88h] [rbp-78h] BYREF
  __int64 v18; // [rsp+1B0h] [rbp+B0h]
  _BYTE v19[296]; // [rsp+1B8h] [rbp+B8h] BYREF
  __int64 v20; // [rsp+2E0h] [rbp+1E0h]
  _BYTE v21[296]; // [rsp+2E8h] [rbp+1E8h] BYREF
  __int64 v22; // [rsp+410h] [rbp+310h]
  __int64 v23; // [rsp+418h] [rbp+318h]
  _BYTE v24[296]; // [rsp+420h] [rbp+320h] BYREF
  __int64 v25; // [rsp+548h] [rbp+448h]
  int v26; // [rsp+550h] [rbp+450h]
  int v27; // [rsp+554h] [rbp+454h]
  LARGE_INTEGER PerformanceCount; // [rsp+560h] [rbp+460h] BYREF
  _BYTE v29[1264]; // [rsp+650h] [rbp+550h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B68h] [rbp+A68h]

  v10[0] = 0LL;
  v2 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)**a1 + 272LL))(**a1, v10);
  v3 = v2;
  if ( v2 >= 0 )
  {
    if ( v10[0] )
    {
      v5 = a1[1];
      v2 = CoSetProxyBlanket((IUnknown *)v5[2], 0xFFFFFFFF, 0xFFFFFFFF, 0LL, 6u, 3u, 0LL, 0x40u);
      v3 = v2;
      if ( v2 < 0 )
      {
        v4 = 4153LL;
        goto LABEL_6;
      }
      memset_0(v29, 0, 0x4E8uLL);
      v6 = AudioSrvTelemetryProvider::Instance();
      CPerfTracker::CPerfTracker(
        &PerformanceCount,
        *((const struct _tlgProvider_t **)v6 + 1),
        "BridgeStreamInstance_Create",
        0LL);
      v11 = 0LL;
      v12 = 0LL;
      v13 = 0LL;
      v14 = 0LL;
      v15 = 0LL;
      v16 = 0LL;
      memset_0(v17, 0, sizeof(v17));
      v18 = 0LL;
      memset_0(v19, 0, sizeof(v19));
      v20 = 0LL;
      memset_0(v21, 0, sizeof(v21));
      v22 = 0LL;
      v23 = 0LL;
      memset_0(v24, 0, sizeof(v24));
      v25 = 0LL;
      v26 = 0;
      v27 = 0;
      v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, _BYTE *))(*(_QWORD *)v5[2] + 88LL))(
             v5[2],
             *a1[2],
             v10[0],
             v29);
      v3 = v7;
      if ( v7 < 0 )
      {
        v8 = 4158LL;
LABEL_9:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v8,
          (int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
          (const char *)(unsigned int)v7);
        SystemAudioStream::~SystemAudioStream((SystemAudioStream *)&v11);
        CPerfTracker::~CPerfTracker((CPerfTracker *)&PerformanceCount);
        goto LABEL_14;
      }
      v7 = SystemAudioStream::move_initialize_from(
             (SystemAudioStream *)&v11,
             0xFFFFFFFF,
             (struct SYSTEM_AUDIO_STREAM *)v29);
      v3 = v7;
      if ( v7 < 0 )
      {
        v8 = 4160LL;
        goto LABEL_9;
      }
      SystemAudioStream::~SystemAudioStream((SystemAudioStream *)&v11);
      CPerfTracker::~CPerfTracker((CPerfTracker *)&PerformanceCount);
    }
    v3 = 0;
    goto LABEL_14;
  }
  v4 = 4147LL;
LABEL_6:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v4,
    (int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
    (const char *)(unsigned int)v2);
LABEL_14:
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(v10);
  return v3;
}
