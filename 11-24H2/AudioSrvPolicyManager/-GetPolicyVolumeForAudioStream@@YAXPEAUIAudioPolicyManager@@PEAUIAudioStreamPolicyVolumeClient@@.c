/*
 * XREFs of ?GetPolicyVolumeForAudioStream@@YAXPEAUIAudioPolicyManager@@PEAUIAudioStreamPolicyVolumeClient@@PEBU_tlgProvider_t@@PEAMPEA_JW4GPV_REASON@@@Z @ 0x18000DBD0
 * Callers:
 *     ?GetSoundLevel@AudioStateMonitorManager@@QEAA?AW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@PEAW4AUDIO_DIRECTION@@PEAW4_AUDIO_STREAM_CATEGORY@@PEBG@Z @ 0x18000DA54 (-GetSoundLevel@AudioStateMonitorManager@@QEAA-AW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@PEAW.c)
 *     ?GetSoundLevelForExtendedAudioCategory@AudioStateMonitorManager@@AEAA?AW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@PEAW4AUDIO_DIRECTION@@PEAKPEBG@Z @ 0x18000DB30 (-GetSoundLevelForExtendedAudioCategory@AudioStateMonitorManager@@AEAA-AW4__MIDL___MIDL_itf_audio.c)
 * Callees:
 *     __security_check_cookie @ 0x1800201B0 (__security_check_cookie.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002B05C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18004C010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall GetPolicyVolumeForAudioStream(__int64 a1, __int64 *a2, __int64 a3, float *a4)
{
  float v7; // xmm8_4
  __int64 v8; // rax
  int v9; // eax
  __int64 v10; // rax
  float v11; // xmm0_4
  float v12; // xmm0_4
  float v13; // xmm0_4
  float v14; // xmm0_4
  float v15; // xmm0_4
  float v16; // xmm0_4
  float (__fastcall *v17)(__int64, __int64, _QWORD); // rdi
  unsigned int v18; // ebx
  __int64 v19; // rax
  float v20; // xmm0_4
  unsigned int (__fastcall *v21)(__int64, _QWORD); // rbx
  unsigned int v22; // eax
  __int64 v23; // rbx
  void (__fastcall *v24)(__int64, __int64); // rdi
  __int64 v25; // rax
  float v26; // xmm0_4
  unsigned int (__fastcall *v27)(__int64, _QWORD); // rbx
  unsigned int v28; // eax
  __int64 v29; // rbx
  void (__fastcall *v30)(__int64, __int64); // rdi
  __int64 v31; // rax
  __int64 result; // rax
  float v33; // xmm0_4
  __int64 v34; // [rsp+28h] [rbp-49h] BYREF
  float v35; // [rsp+30h] [rbp-41h] BYREF
  __int64 v36; // [rsp+38h] [rbp-39h] BYREF
  __int128 v37; // [rsp+40h] [rbp-31h] BYREF
  __int64 v38; // [rsp+50h] [rbp-21h]
  wil::details::in1diag3 *retaddr; // [rsp+C0h] [rbp+4Fh]

  v7 = FLOAT_1_0;
  v35 = 1.0;
  *a4 = 1.0;
  v8 = *a2;
  v34 = 0LL;
  v9 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v8 + 24))(a2, &v34);
  if ( v9 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x20,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\policyvolumehelpers\\policyvolumehelpers.cpp",
      (const char *)(unsigned int)v9,
      v34);
  v10 = *a2;
  v36 = 0LL;
  (*(void (__fastcall **)(__int64 *, __int64 *))(v10 + 32))(a2, &v36);
  if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v34 + 120LL))(v34) )
    v11 = 0.0;
  else
    v11 = FLOAT_1_0;
  v12 = v11 * *a4;
  *a4 = v12;
  if ( v12 > 0.0 && (*(unsigned int (__fastcall **)(__int64 *))(*a2 + 72))(a2) != 2 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(__int64 *))(*a2 + 64))(a2) )
      v13 = FLOAT_1_0;
    else
      v13 = (*(float (__fastcall **)(__int64))(*(_QWORD *)v34 + 200LL))(v34);
    *a4 = v13 * *a4;
    if ( v36
      && !(*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v36 + 48LL))(v36)
      && !(*(unsigned __int8 (__fastcall **)(__int64 *))(*a2 + 64))(a2)
      && !(*(unsigned __int8 (__fastcall **)(__int64 *))(*a2 + 48))(a2) )
    {
      (*(void (__fastcall **)(__int64, float *, _QWORD))(*(_QWORD *)v36 + 88LL))(v36, &v35, 0LL);
    }
    if ( (*(unsigned __int8 (__fastcall **)(__int64 *))(*a2 + 64))(a2)
      && (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v34 + 472LL))(v34)
      || !(*(unsigned __int8 (__fastcall **)(__int64 *))(*a2 + 64))(a2)
      && (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v34 + 480LL))(v34) )
    {
      *a4 = *a4 * 0.0;
    }
  }
  if ( *a4 > 0.0 && (*(unsigned int (__fastcall **)(__int64 *))(*a2 + 56))(a2) != 24 )
  {
    v14 = (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a1 + 272LL))(a1)
       && !(*(unsigned __int8 (__fastcall **)(__int64 *))(*a2 + 64))(a2)
       && dword_180056A90[(*(unsigned int (__fastcall **)(__int64 *))(*a2 + 56))(a2)]
        ? 0.0
        : FLOAT_1_0;
    v15 = v14 * *a4;
    *a4 = v15;
    if ( (*(unsigned int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a1 + 72LL))(a1, a2) )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v34 + 208LL))(v34);
    else
      v15 = FLOAT_1_0;
    *a4 = v15 * *a4;
    v16 = (*(float (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a1 + 280LL))(a1, a2) * *a4;
    *a4 = v16;
    if ( v16 > 0.0 )
    {
      if ( (*(__int64 (__fastcall **)(__int64 *))(*a2 + 40))(a2) )
      {
        v17 = *(float (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)a1 + 352LL);
        v18 = (*(__int64 (__fastcall **)(__int64 *))(*a2 + 56))(a2);
        v19 = (*(__int64 (__fastcall **)(__int64 *))(*a2 + 40))(a2);
        v20 = v17(a1, v19, v18) * *a4;
        *a4 = v20;
        v21 = *(unsigned int (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 80LL);
        v22 = (*(__int64 (__fastcall **)(__int64 *))(*a2 + 56))(a2);
        if ( v21(a1, v22) )
        {
          v20 = FLOAT_1_0;
        }
        else
        {
          v23 = v34;
          v24 = *(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v34 + 216LL);
          v25 = (*(__int64 (__fastcall **)(__int64 *))(*a2 + 40))(a2);
          v24(v23, v25);
        }
        v26 = v20 * *a4;
        *a4 = v26;
        if ( (*(unsigned __int8 (__fastcall **)(__int64 *))(*a2 + 64))(a2)
          || (v27 = *(unsigned int (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 88LL),
              v28 = (*(__int64 (__fastcall **)(__int64 *))(*a2 + 56))(a2),
              !v27(a1, v28)) )
        {
          v26 = FLOAT_1_0;
        }
        else
        {
          v29 = v34;
          v30 = *(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v34 + 224LL);
          v31 = (*(__int64 (__fastcall **)(__int64 *))(*a2 + 40))(a2);
          v30(v29, v31);
        }
        *a4 = v26 * *a4;
        v37 = 0LL;
        v38 = 0LL;
        (*(void (__fastcall **)(__int64, __int64 *, __int128 *))(*(_QWORD *)a1 + 64LL))(a1, a2, &v37);
        if ( !(*(unsigned __int8 (__fastcall **)(__int64 *))(*a2 + 48))(a2)
          && ((*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v34 + 184LL))(v34)
           || v36 && (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v36 + 128LL))(v36)) )
        {
          if ( (_BYTE)v37 )
            v7 = 0.0;
          else
            v7 = *((float *)&v37 + 1);
        }
        *a4 = fminf(v7, v35) * *a4;
      }
    }
  }
  result = (*(__int64 (__fastcall **)(__int64 *))(*a2 + 64))(a2);
  if ( (_BYTE)result )
  {
    v33 = *a4;
    if ( *a4 != 0.0 )
      v33 = FLOAT_1_0;
    *a4 = v33;
  }
  if ( v36 )
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v36 + 16LL))(v36);
  if ( v34 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v34 + 16LL))(v34);
  return result;
}
