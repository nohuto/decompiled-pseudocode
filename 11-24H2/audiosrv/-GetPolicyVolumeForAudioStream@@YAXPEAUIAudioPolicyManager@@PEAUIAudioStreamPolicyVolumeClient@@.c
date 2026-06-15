/*
 * XREFs of ?GetPolicyVolumeForAudioStream@@YAXPEAUIAudioPolicyManager@@PEAUIAudioStreamPolicyVolumeClient@@PEBU_tlgProvider_t@@PEAMPEA_JW4GPV_REASON@@@Z @ 0x180023EE0
 * Callers:
 *     ?AddStream@CPerEndpointVolumeAudioSession@@EEAAJPEAVCAudioStream@@@Z @ 0x180020730 (-AddStream@CPerEndpointVolumeAudioSession@@EEAAJPEAVCAudioStream@@@Z.c)
 *     ?AddStream@CPerStreamVolumeAudioSession@@EEAAJPEAVCAudioStream@@@Z @ 0x1800230D0 (-AddStream@CPerStreamVolumeAudioSession@@EEAAJPEAVCAudioStream@@@Z.c)
 *     ?SetVolumeAllStreams@CAudioSession@@IEAAXW4AudioVolumeChangeType@@_NMIPEAM_J@Z @ 0x180023938 (-SetVolumeAllStreams@CAudioSession@@IEAAXW4AudioVolumeChangeType@@_NMIPEAM_J@Z.c)
 *     ?CapturePolicyVolumeState@CAudioStream@@QEAAXXZ @ 0x18005B168 (-CapturePolicyVolumeState@CAudioStream@@QEAAXXZ.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@G@@U2@U?$_tlgWrapperByVal@$03@@U3@U3@U3@U3@U3@U3@U3@U3@U3@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@G@@4AEBU?$_tlgWrapperByVal@$03@@55555555555@Z @ 0x18004C830 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@G@@U2@U-$_tlgWrapperByVal@$03@@U3@U3@U3@U3@U3@U3.c)
 *     __security_check_cookie @ 0x1800A3DA0 (__security_check_cookie.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B096C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall GetPolicyVolumeForAudioStream(
        __int64 a1,
        __int64 *a2,
        unsigned int *a3,
        float *a4,
        __int64 *a5,
        int a6)
{
  float v10; // xmm12_4
  float v11; // xmm9_4
  float v12; // xmm10_4
  float v13; // xmm11_4
  float v14; // xmm14_4
  float v15; // xmm13_4
  float v16; // xmm8_4
  __int64 v17; // rax
  int v18; // eax
  __int64 v19; // rax
  float v20; // xmm15_4
  float v21; // xmm0_4
  double v22; // xmm0_8
  double v23; // xmm0_8
  double v24; // xmm0_8
  float v25; // xmm1_4
  double (__fastcall *v26)(__int64, __int64, _QWORD); // rdi
  unsigned int v27; // ebx
  __int64 v28; // rax
  double v29; // xmm0_8
  unsigned int (__fastcall *v30)(__int64, _QWORD); // rbx
  unsigned int v31; // eax
  __int64 v32; // rbx
  double (__fastcall *v33)(__int64, __int64); // rdi
  __int64 v34; // rax
  double v35; // xmm0_8
  unsigned int (__fastcall *v36)(__int64, _QWORD); // rbx
  unsigned int v37; // eax
  __int64 v38; // rbx
  double (__fastcall *v39)(__int64, __int64); // rdi
  __int64 v40; // rax
  double v41; // xmm0_8
  __int64 v42; // rax
  float v43; // xmm0_4
  __int64 result; // rax
  float v45; // xmm0_4
  int v46; // r8d
  int v47; // r9d
  int v48; // r8d
  int v49; // r9d
  int v50; // [rsp+28h] [rbp-100h]
  __int64 v51; // [rsp+A8h] [rbp-80h] BYREF
  float v52; // [rsp+B0h] [rbp-78h] BYREF
  __int64 v53; // [rsp+B8h] [rbp-70h] BYREF
  int v54; // [rsp+C0h] [rbp-68h] BYREF
  float v55; // [rsp+C4h] [rbp-64h] BYREF
  float v56; // [rsp+C8h] [rbp-60h] BYREF
  float v57; // [rsp+CCh] [rbp-5Ch] BYREF
  float v58; // [rsp+D0h] [rbp-58h] BYREF
  float v59; // [rsp+D4h] [rbp-54h] BYREF
  float v60; // [rsp+D8h] [rbp-50h] BYREF
  float v61; // [rsp+DCh] [rbp-4Ch] BYREF
  float v62; // [rsp+E0h] [rbp-48h] BYREF
  float v63; // [rsp+E4h] [rbp-44h] BYREF
  float v64; // [rsp+E8h] [rbp-40h] BYREF
  int v65; // [rsp+ECh] [rbp-3Ch] BYREF
  __int64 v66; // [rsp+F0h] [rbp-38h] BYREF
  __int64 v67; // [rsp+F8h] [rbp-30h] BYREF
  __int64 v68; // [rsp+100h] [rbp-28h] BYREF
  __int64 v69; // [rsp+108h] [rbp-20h] BYREF
  __int128 v70; // [rsp+110h] [rbp-18h] BYREF
  __int64 v71; // [rsp+120h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+220h] [rbp+F8h]

  *(float *)&v53 = FLOAT_1_0;
  v10 = FLOAT_1_0;
  v11 = FLOAT_1_0;
  v12 = FLOAT_1_0;
  v13 = FLOAT_1_0;
  v14 = FLOAT_1_0;
  v15 = FLOAT_1_0;
  v52 = 1.0;
  *(float *)&v66 = FLOAT_1_0;
  v16 = FLOAT_1_0;
  *a4 = 1.0;
  v17 = *a2;
  v51 = 0LL;
  v18 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v17 + 24))(a2, &v51);
  if ( v18 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x20,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\policyvolumehelpers\\policyvolumehelpers.cpp",
      (const char *)(unsigned int)v18,
      v50);
  v19 = *a2;
  v67 = 0LL;
  (*(void (__fastcall **)(__int64 *, __int64 *))(v19 + 32))(a2, &v67);
  if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v51 + 120LL))(v51) )
    v20 = 0.0;
  else
    v20 = FLOAT_1_0;
  v21 = v20 * *a4;
  *a4 = v21;
  if ( v21 > 0.0 && (*(unsigned int (__fastcall **)(__int64 *))(*a2 + 72))(a2) != 2 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(__int64 *))(*a2 + 64))(a2) )
    {
      v10 = FLOAT_1_0;
    }
    else
    {
      v22 = (*(double (__fastcall **)(__int64))(*(_QWORD *)v51 + 200LL))(v51);
      v10 = *(float *)&v22;
    }
    *a4 = v10 * *a4;
    if ( v67
      && !(*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v67 + 48LL))(v67)
      && !(*(unsigned __int8 (__fastcall **)(__int64 *))(*a2 + 64))(a2)
      && !(*(unsigned __int8 (__fastcall **)(__int64 *))(*a2 + 48))(a2) )
    {
      (*(void (__fastcall **)(__int64, float *, __int64 *))(*(_QWORD *)v67 + 88LL))(v67, &v52, a5);
    }
    if ( (*(unsigned __int8 (__fastcall **)(__int64 *))(*a2 + 64))(a2)
      && (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v51 + 472LL))(v51)
      || !(*(unsigned __int8 (__fastcall **)(__int64 *))(*a2 + 64))(a2)
      && (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v51 + 480LL))(v51) )
    {
      *a4 = *a4 * 0.0;
    }
  }
  if ( *a4 > 0.0 && (*(unsigned int (__fastcall **)(__int64 *))(*a2 + 56))(a2) != 24 )
  {
    v11 = (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a1 + 272LL))(a1)
       && !(*(unsigned __int8 (__fastcall **)(__int64 *))(*a2 + 64))(a2)
       && dword_18019B260[(*(unsigned int (__fastcall **)(__int64 *))(*a2 + 56))(a2)]
        ? 0.0
        : FLOAT_1_0;
    *a4 = v11 * *a4;
    if ( (*(unsigned int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a1 + 72LL))(a1, a2) )
    {
      v23 = (*(double (__fastcall **)(__int64))(*(_QWORD *)v51 + 208LL))(v51);
      v13 = *(float *)&v23;
    }
    else
    {
      v13 = FLOAT_1_0;
    }
    *a4 = v13 * *a4;
    v24 = (*(double (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a1 + 280LL))(a1, a2);
    LODWORD(v53) = LODWORD(v24);
    v25 = *(float *)&v24 * *a4;
    *a4 = v25;
    if ( v25 > 0.0 )
    {
      if ( (*(__int64 (__fastcall **)(__int64 *))(*a2 + 40))(a2) )
      {
        v26 = *(double (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)a1 + 352LL);
        v27 = (*(__int64 (__fastcall **)(__int64 *))(*a2 + 56))(a2);
        v28 = (*(__int64 (__fastcall **)(__int64 *))(*a2 + 40))(a2);
        v29 = v26(a1, v28, v27);
        LODWORD(v66) = LODWORD(v29);
        *a4 = *(float *)&v29 * *a4;
        v30 = *(unsigned int (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 80LL);
        v31 = (*(__int64 (__fastcall **)(__int64 *))(*a2 + 56))(a2);
        if ( v30(a1, v31) )
        {
          v14 = FLOAT_1_0;
        }
        else
        {
          v32 = v51;
          v33 = *(double (__fastcall **)(__int64, __int64))(*(_QWORD *)v51 + 216LL);
          v34 = (*(__int64 (__fastcall **)(__int64 *))(*a2 + 40))(a2);
          v35 = v33(v32, v34);
          v14 = *(float *)&v35;
        }
        *a4 = v14 * *a4;
        if ( (*(unsigned __int8 (__fastcall **)(__int64 *))(*a2 + 64))(a2)
          || (v36 = *(unsigned int (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 88LL),
              v37 = (*(__int64 (__fastcall **)(__int64 *))(*a2 + 56))(a2),
              !v36(a1, v37)) )
        {
          v15 = FLOAT_1_0;
        }
        else
        {
          v38 = v51;
          v39 = *(double (__fastcall **)(__int64, __int64))(*(_QWORD *)v51 + 224LL);
          v40 = (*(__int64 (__fastcall **)(__int64 *))(*a2 + 40))(a2);
          v41 = v39(v38, v40);
          v15 = *(float *)&v41;
        }
        *a4 = v15 * *a4;
        v70 = 0LL;
        v71 = 0LL;
        (*(void (__fastcall **)(__int64, __int64 *, __int128 *))(*(_QWORD *)a1 + 64LL))(a1, a2, &v70);
        if ( !(*(unsigned __int8 (__fastcall **)(__int64 *))(*a2 + 48))(a2)
          && ((*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v51 + 184LL))(v51)
           || v67 && (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v67 + 128LL))(v67)) )
        {
          v12 = (_BYTE)v70 ? 0.0 : *((float *)&v70 + 1);
          if ( a5 )
          {
            v42 = v71;
            if ( *a5 > v71 )
              v42 = *a5;
            *a5 = v42;
          }
        }
        v43 = fminf(v12, v52) * *a4;
        if ( BYTE8(v70) )
          v16 = 0.0;
        else
          v16 = *((float *)&v70 + 3);
        *a4 = v43 * v16;
      }
    }
  }
  result = (*(__int64 (__fastcall **)(__int64 *))(*a2 + 64))(a2);
  if ( (_BYTE)result )
  {
    v45 = *a4;
    if ( *a4 != 0.0 )
      v45 = FLOAT_1_0;
    *a4 = v45;
  }
  if ( a3 )
  {
    result = *a3;
    if ( a6 == 2 )
    {
      if ( (unsigned int)result > 4 && (a3[4] & 6) != 0 )
      {
        result = *((_QWORD *)a3 + 3) & 6LL;
        if ( result == *((_QWORD *)a3 + 3) )
        {
          v65 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v51 + 40LL))(v51);
          v64 = v16;
          v63 = v12;
          v62 = v15;
          v61 = v14;
          v60 = *(float *)&v66;
          v59 = v13;
          v58 = v11;
          v57 = v52;
          v56 = v10;
          v55 = v20;
          v54 = v53;
          v68 = (*(__int64 (__fastcall **)(__int64 *))(*a2 + 40))(a2);
          v53 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v51 + 72LL))(v51);
          v69 = (*(__int64 (__fastcall **)(__int64 *))(*a2 + 80))(a2);
          result = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
                     (_DWORD)a3,
                     (unsigned int)&unk_1801AEBE3,
                     v48,
                     v49,
                     (__int64)&v69,
                     (__int64)&v53,
                     (__int64)&v68,
                     (__int64)&v54,
                     (__int64)&v55,
                     (__int64)&v56,
                     (__int64)&v57,
                     (__int64)&v58,
                     (__int64)&v59,
                     (__int64)&v60,
                     (__int64)&v61,
                     (__int64)&v62,
                     (__int64)&v63,
                     (__int64)&v64,
                     (__int64)&v65);
        }
      }
    }
    else if ( (unsigned int)result > 4 && (a3[4] & 2) != 0 )
    {
      result = *((_QWORD *)a3 + 3) & 2LL;
      if ( result == *((_QWORD *)a3 + 3) )
      {
        v54 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v51 + 40LL))(v51);
        v55 = v16;
        v56 = v12;
        v57 = v15;
        v58 = v14;
        v59 = *(float *)&v66;
        v60 = v13;
        v61 = v11;
        v62 = v52;
        v63 = v10;
        v64 = v20;
        v65 = v53;
        v53 = (*(__int64 (__fastcall **)(__int64 *))(*a2 + 40))(a2);
        v66 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v51 + 72LL))(v51);
        v68 = (*(__int64 (__fastcall **)(__int64 *))(*a2 + 80))(a2);
        result = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
                   (_DWORD)a3,
                   (unsigned int)&unk_1801AEAA1,
                   v46,
                   v47,
                   (__int64)&v68,
                   (__int64)&v66,
                   (__int64)&v53,
                   (__int64)&v65,
                   (__int64)&v64,
                   (__int64)&v63,
                   (__int64)&v62,
                   (__int64)&v61,
                   (__int64)&v60,
                   (__int64)&v59,
                   (__int64)&v58,
                   (__int64)&v57,
                   (__int64)&v56,
                   (__int64)&v55,
                   (__int64)&v54);
      }
    }
  }
  if ( v67 )
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v67 + 16LL))(v67);
  if ( v51 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v51 + 16LL))(v51);
  return result;
}
