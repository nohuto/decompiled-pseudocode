/*
 * XREFs of ?ActivateAPOs@CPipeInstance@@AEAAJ_K@Z @ 0x140006DF0
 * Callers:
 *     ?AddConnectionsAndActivateAPOs@CPipeInstance@@QEAAJPEAUIAudioDeviceModulesManager@Devices@Media@Windows@@@Z @ 0x14002E5E8 (-AddConnectionsAndActivateAPOs@CPipeInstance@@QEAAJPEAUIAudioDeviceModulesManager@Devices@Media@.c)
 * Callees:
 *     ?Provider@AudioDgTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ @ 0x1400073B4 (-Provider@AudioDgTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ??0CPerfTracker@@QEAA@PEBU_tlgProvider_t@@QEBDU_GUID@@@Z @ 0x140007490 (--0CPerfTracker@@QEAA@PEBU_tlgProvider_t@@QEBDU_GUID@@@Z.c)
 *     ??1CPerfTracker@@QEAA@XZ @ 0x14000761C (--1CPerfTracker@@QEAA@XZ.c)
 *     ?TrackSystemEffectBehavior@@YAJPEBGW4APO_TYPE@@J_NAEBU_GUID@@M@Z @ 0x1400077C4 (-TrackSystemEffectBehavior@@YAJPEBGW4APO_TYPE@@J_NAEBU_GUID@@M@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1400089C8 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000ABF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _lambda_3b3601bdb13de8ff4c7b45429a3c26db_::operator() @ 0x140054594 (_lambda_3b3601bdb13de8ff4c7b45429a3c26db_--operator().c)
 *     __security_check_cookie @ 0x140058DE0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CPipeInstance::ActivateAPOs(CPipeInstance *this, __int64 a2)
{
  __int64 v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rdx
  __int64 v6; // rcx
  struct _GUID v7; // xmm6
  const struct _tlgProvider_t *v8; // rax
  unsigned int v9; // edi
  __int64 v10; // rdx
  int v11; // eax
  int v13; // [rsp+20h] [rbp-E0h]
  __int64 v14; // [rsp+28h] [rbp-D8h]
  __int64 v15; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v16; // [rsp+38h] [rbp-C8h] BYREF
  struct _GUID v17; // [rsp+40h] [rbp-C0h] BYREF
  __int64 *v18; // [rsp+50h] [rbp-B0h]
  __int64 *v19; // [rsp+58h] [rbp-A8h]
  _BYTE v20[240]; // [rsp+60h] [rbp-A0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+198h] [rbp+98h]
  __int64 v22; // [rsp+1A8h] [rbp+A8h] BYREF

  v22 = a2;
  v3 = *((_QWORD *)this + 3);
  while ( 1 )
  {
    do
    {
      if ( !v3 )
        return 0LL;
      v4 = *(_QWORD *)(v3 + 16);
      v3 = *(_QWORD *)(v3 + 8);
    }
    while ( *(_DWORD *)(v4 + 40) != 2 );
    v5 = *(_QWORD *)(v4 + 32);
    v16 = v5;
    v15 = 0LL;
    v15 = *(_QWORD *)(v5 + 40);
    v6 = *(_QWORD *)(v5 + 40);
    if ( v6 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
      v5 = v16;
    }
    v7 = *(struct _GUID *)(v5 + 8);
    v8 = AudioDgTelemetryProvider::Provider();
    v17 = v7;
    CPerfTracker::CPerfTracker((CPerfTracker *)v20, v8, "ActivateApo", &v17);
    *(_QWORD *)&v17.Data1 = this;
    *(_QWORD *)v17.Data4 = &v22;
    v18 = &v15;
    v19 = &v16;
    v9 = lambda_3b3601bdb13de8ff4c7b45429a3c26db_::operator()(&v17);
    CPerfTracker::~CPerfTracker((CPerfTracker *)v20);
    v10 = *(unsigned int *)(v16 + 4);
    if ( (_DWORD)v10 )
    {
      *(float *)&v14 = FLOAT_1_0;
      v11 = TrackSystemEffectBehavior(*((_QWORD *)this + 24), v10, v9, 0LL, v16 + 8, v14);
      if ( v11 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0xBF6,
          (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\pipeinstance.cpp",
          (const char *)(unsigned int)v11,
          v13);
    }
    if ( (v9 & 0x80000000) != 0 )
      break;
    if ( v15 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xBF8,
    (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\pipeinstance.cpp",
    (const char *)v9,
    v13);
  if ( v15 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  return v9;
}
