/*
 * XREFs of ?SetVolumeAllStreams@CAudioSession@@IEAAXW4AudioVolumeChangeType@@_NMIPEAM_J@Z @ 0x180023938
 * Callers:
 *     ?UpdateAudioVolume@CPerEndpointVolumeAudioSession@@EEAAJW4AudioVolumeChangeType@@_NMIPEAM_J@Z @ 0x1800220F0 (-UpdateAudioVolume@CPerEndpointVolumeAudioSession@@EEAAJW4AudioVolumeChangeType@@_NMIPEAM_J@Z.c)
 *     ?UpdateAudioVolume@CPerStreamVolumeAudioSession@@EEAAJW4AudioVolumeChangeType@@_NMIPEAM_J@Z @ 0x180023900 (-UpdateAudioVolume@CPerStreamVolumeAudioSession@@EEAAJW4AudioVolumeChangeType@@_NMIPEAM_J@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180014EAC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RecalculateVolume@CAudioStream@@QEAAJ_N_J@Z @ 0x180021574 (-RecalculateVolume@CAudioStream@@QEAAJ_N_J@Z.c)
 *     ?SetPolicyVolume@CAudioStream@@QEAAJM_J_N@Z @ 0x180023CE8 (-SetPolicyVolume@CAudioStream@@QEAAJM_J_N@Z.c)
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x180023E20 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ?GetPolicyVolumeForAudioStream@@YAXPEAUIAudioPolicyManager@@PEAUIAudioStreamPolicyVolumeClient@@PEBU_tlgProvider_t@@PEAMPEA_JW4GPV_REASON@@@Z @ 0x180023EE0 (-GetPolicyVolumeForAudioStream@@YAXPEAUIAudioPolicyManager@@PEAUIAudioStreamPolicyVolumeClient@@.c)
 *     ?UpdateStreamPriority@CAudioStream@@QEAAJXZ @ 0x1800247B8 (-UpdateStreamPriority@CAudioStream@@QEAAJXZ.c)
 *     WPP_SF_qq @ 0x1800A21B4 (WPP_SF_qq.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B096C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     WPP_SF_q @ 0x1800C34E4 (WPP_SF_q.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CAudioSession::SetVolumeAllStreams(__int64 a1, int a2, char a3, float a4, unsigned int a5, float *a6)
{
  struct _RTL_CRITICAL_SECTION *v8; // rsi
  CAudioStream **v9; // rdi
  CAudioStream **v10; // r12
  float *v11; // r13
  bool v12; // si
  CAudioStream *v13; // rbx
  struct AudioSrvTelemetryProvider *v14; // rax
  __int64 v15; // rbx
  int v16; // eax
  wil::details::in1diag3 *v17; // rcx
  CAudioStream *v18; // r9
  __int64 v19; // rdx
  unsigned int v20; // eax
  _QWORD *v21; // r8
  __int64 v22; // rdx
  int v23; // eax
  int v24; // ebx
  int updated; // eax
  unsigned __int64 v26; // r9
  __int64 v27; // rdx
  float v28; // xmm1_4
  float *v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // r8
  int v32[2]; // [rsp+20h] [rbp-68h]
  int v33[2]; // [rsp+30h] [rbp-58h] BYREF
  struct _RTL_CRITICAL_SECTION *v34; // [rsp+38h] [rbp-50h]
  LPCRITICAL_SECTION lpCriticalSection[2]; // [rsp+40h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]
  float v37; // [rsp+90h] [rbp+8h] BYREF
  char v38; // [rsp+A0h] [rbp+18h]

  v38 = a3;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 66LL, &WPP_ea93f1868512325b454513e390c361b8_Traceguids, a1);
  }
  (*(void (__fastcall **)(struct IAudioPolicyManager *, LPCRITICAL_SECTION *))(*(_QWORD *)g_PolicyManager + 184LL))(
    g_PolicyManager,
    lpCriticalSection);
  v8 = (struct _RTL_CRITICAL_SECTION *)(a1 + 64);
  v34 = (struct _RTL_CRITICAL_SECTION *)(a1 + 64);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 64));
  lpCriticalSection[1] = (LPCRITICAL_SECTION)(a1 + 64);
  v9 = *(CAudioStream ***)(a1 + 112);
  v10 = *(CAudioStream ***)(a1 + 120);
  if ( v9 != v10 )
  {
    LOBYTE(v37) = a5 == 0;
    v11 = a6;
    v12 = a5 == 0;
    while ( 1 )
    {
      v13 = *v9;
      v37 = 1.0;
      *(_QWORD *)v33 = 0LL;
      v14 = AudioSrvTelemetryProvider::Instance();
      GetPolicyVolumeForAudioStream(
        g_PolicyManager,
        ((unsigned __int64)v13 + 16) & -(__int64)(v13 != 0LL),
        *((_QWORD *)v14 + 1),
        &v37,
        v33,
        0);
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
      {
        *(_QWORD *)v32 = *v9;
        WPP_SF_qq(*((_QWORD *)WPP_GLOBAL_Control + 2), 67LL, &WPP_ea93f1868512325b454513e390c361b8_Traceguids, a1);
      }
      if ( a2 == 3 )
      {
        v15 = *((_BYTE *)*v9 + 256) != 0 ? 0x3D0900 : 0;
      }
      else if ( a2 == 4 )
      {
        v15 = *((_BYTE *)*v9 + 256) != 0 ? 0x2710 : 0;
      }
      else
      {
        v15 = *(_QWORD *)v33;
      }
      v16 = CAudioStream::SetPolicyVolume(*v9, v37, v15, v12);
      v17 = retaddr;
      if ( v16 < 0 )
      {
        v26 = (unsigned int)v16;
        v27 = 3838LL;
      }
      else
      {
        if ( !a5 )
          goto LABEL_19;
        *((_BYTE *)*v9 + 552) = v38;
        v18 = *v9;
        v19 = 0LL;
        v20 = *((_DWORD *)*v9 + 24);
        v21 = (_QWORD *)((char *)*v9 + 536);
        if ( v20 )
        {
          do
          {
            *(float *)(*v21 + 4 * v19) = a4;
            v19 = (unsigned int)(v19 + 1);
            v20 = *((_DWORD *)v18 + 24);
          }
          while ( (unsigned int)v19 < v20 );
        }
        if ( a5 < v20 )
        {
          v28 = 0.0;
          if ( a5 )
          {
            v29 = v11;
            v30 = a5;
            do
            {
              v28 = fmaxf(v28, *v29++);
              --v30;
            }
            while ( v30 );
          }
          v31 = 0LL;
          if ( v20 )
          {
            do
            {
              *(float *)(*((_QWORD *)v18 + 67) + 4 * v31) = v28 * *(float *)(*((_QWORD *)v18 + 67) + 4 * v31);
              v31 = (unsigned int)(v31 + 1);
            }
            while ( (unsigned int)v31 < *((_DWORD *)v18 + 24) );
          }
        }
        else
        {
          v22 = 0LL;
          if ( v20 )
          {
            do
            {
              *(float *)(*v21 + 4 * v22) = v11[v22] * *(float *)(*v21 + 4 * v22);
              v22 = (unsigned int)(v22 + 1);
            }
            while ( (unsigned int)v22 < *((_DWORD *)v18 + 24) );
          }
        }
        *((_QWORD *)v18 + 68) = v15;
        v23 = CAudioStream::RecalculateVolume(v18, 0, 0LL);
        v24 = v23;
        if ( v23 < 0 )
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x5EB,
            (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
            (const char *)(unsigned int)v23);
        else
          v24 = 0;
        v17 = retaddr;
        if ( v24 >= 0 )
          goto LABEL_19;
        v26 = (unsigned int)v24;
        v27 = 3846LL;
      }
      wil::details::in1diag3::_Log_Hr(
        v17,
        (void *)v27,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
        (const char *)v26,
        v32[0]);
LABEL_19:
      updated = CAudioStream::UpdateStreamPriority(*v9);
      if ( updated < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0xF0C,
          (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
          (const char *)(unsigned int)updated,
          v32[0]);
      if ( ++v9 == v10 )
      {
        v8 = v34;
        break;
      }
    }
  }
  if ( v8 )
    LeaveCriticalSection(v8);
  if ( lpCriticalSection[0] )
    LeaveCriticalSection(lpCriticalSection[0]);
}
