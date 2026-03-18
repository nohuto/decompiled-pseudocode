/*
 * XREFs of xxxInternalToUnicode @ 0x140097BA0
 * Callers:
 *     xxxToUnicodeEx @ 0x140097A90 (xxxToUnicodeEx.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14005DD80 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     InternalVkKeyScanEx @ 0x140096630 (InternalVkKeyScanEx.c)
 *     WPP_RECORDER_AND_TRACE_SF_hDhD @ 0x140097080 (WPP_RECORDER_AND_TRACE_SF_hDhD.c)
 *     ?ComposeDeadKeys@@YAHPEAUtagKL@@PEAUDEADKEY@@GPEAGHIH@Z @ 0x1400971C0 (-ComposeDeadKeys@@YAHPEAUtagKL@@PEAUDEADKEY@@GPEAGHIH@Z.c)
 *     ?NumPadScanCodeToHex@@YAHII@Z @ 0x140097908 (-NumPadScanCodeToHex@@YAHII@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_hD @ 0x140097974 (WPP_RECORDER_AND_TRACE_SF_hD.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140099660 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1400C0560 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     ApiSetEditionClientCharToWchar @ 0x1401914B8 (ApiSetEditionClientCharToWchar.c)
 *     ApiSetEditionMessageBeep @ 0x1401927A4 (ApiSetEditionMessageBeep.c)
 *     W32GetCurrentThreadNonPaged @ 0x1401A2438 (W32GetCurrentThreadNonPaged.c)
 *     ??B?$SGKEYBOARDgfEnableHexNumpad@I@@QEBAIXZ @ 0x140213FF8 (--B-$SGKEYBOARDgfEnableHexNumpad@I@@QEBAIXZ.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall xxxInternalToUnicode(
        __int64 a1,
        __int16 a2,
        __int64 a3,
        unsigned __int16 *a4,
        int a5,
        char a6,
        int *a7,
        __int64 a8)
{
  unsigned int v9; // r15d
  __int64 *CurrentThreadNonPaged; // rax
  __int64 v11; // rbp
  _QWORD *v12; // rcx
  char v13; // si
  _QWORD *v14; // rdi
  int v15; // ebx
  __int64 v16; // r13
  __int64 v17; // rcx
  _BYTE *v18; // r14
  char v19; // r11
  unsigned __int16 v20; // bp
  unsigned __int8 *v21; // r8
  unsigned __int8 i; // al
  __int64 v23; // rdx
  __int64 v24; // r8
  _BYTE *v25; // r14
  int v26; // r12d
  __int64 v27; // rcx
  __int64 result; // rax
  __int64 v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // rax
  _QWORD *v32; // rax
  unsigned __int16 v33; // cx
  unsigned __int8 v34; // r10
  _BYTE *v35; // rdx
  char v36; // al
  unsigned __int8 **v37; // rcx
  __int64 v38; // r12
  __int16 v39; // bx
  char v40; // bp
  char v41; // r15
  __int64 v42; // rax
  struct DEADKEY *v43; // rdx
  char v44; // bp
  __int64 v45; // rax
  unsigned __int16 v46; // dx
  __int64 v47; // rcx
  __int64 v48; // rcx
  unsigned __int16 v49; // bp
  __int64 v50; // rax
  __int64 v51; // rcx
  bool v52; // r14
  _UNKNOWN **v53; // rcx
  bool v54; // r13
  __int16 v55; // bx
  __int64 v56; // rcx
  __int64 v57; // rax
  int v58; // r8d
  int v59; // edx
  CTouchProcessor *v60; // rcx
  char v61; // bp
  char v62; // r15
  __int64 v63; // rax
  __int64 (__fastcall *v64)(__int64); // rax
  CTouchProcessor *v65; // rcx
  char v66; // bl
  bool v67; // r14
  int v68; // edx
  int v69; // r8d
  __int64 v70; // r9
  __int64 v71; // rax
  unsigned int v72; // eax
  __int64 v73; // rcx
  __int64 v74; // rcx
  unsigned __int16 v75; // bx
  __int64 v76; // rcx
  __int16 v77; // di
  __int64 v78; // rcx
  __int64 v79; // rcx
  __int64 UserSessionState; // rax
  unsigned __int16 v81; // ax
  __int64 v82; // rcx
  __int64 v83; // rcx
  __int64 v84; // rcx
  int v85; // ebp
  int v86; // ebx
  unsigned __int16 *v87; // r14
  unsigned __int16 v88; // dx
  __int16 v89; // bx
  __int64 v90; // rcx
  bool v91; // r14
  bool v92; // r12
  __int16 v93; // bx
  __int64 v94; // rcx
  __int64 v95; // rcx
  __int64 v96; // rax
  __int16 v97; // bx
  __int64 v98; // rcx
  __int64 v99; // rax
  int v100; // r8d
  int v101; // edx
  int v102; // eax
  int v103; // [rsp+20h] [rbp-88h]
  int v104; // [rsp+28h] [rbp-80h]
  __int16 v105; // [rsp+30h] [rbp-78h]
  int v106; // [rsp+38h] [rbp-70h]
  __int64 v107; // [rsp+60h] [rbp-48h]

  v9 = a1;
  CurrentThreadNonPaged = (__int64 *)W32GetCurrentThreadNonPaged(a1);
  if ( CurrentThreadNonPaged )
    v11 = *CurrentThreadNonPaged;
  else
    v11 = 0LL;
  *a7 = a2 & 0x8000;
  if ( (_BYTE)v9 == 0xFF )
    return 0LL;
  v12 = (_QWORD *)(v11 + 480);
  v13 = 1;
  if ( a8 || (v14 = (_QWORD *)*v12) == 0LL )
  {
    v12 = (_QWORD *)*v12;
    v32 = 0LL;
    if ( !v12 )
      return 0LL;
    v14 = v12;
    if ( a8 )
    {
      if ( a8 == 1 )
      {
        while ( 1 )
        {
          v14 = (_QWORD *)v14[2];
          if ( (v14[4] & 0x20000000) == 0 )
            break;
          if ( v14 == v12 )
            return 0LL;
        }
      }
      else
      {
        if ( (a8 & 0xFFFF0000) != 0 )
        {
          do
          {
            if ( v14[5] == a8 )
            {
              if ( *((int *)v14 + 8) >= 0 )
                goto LABEL_37;
              v32 = v14;
            }
            v14 = (_QWORD *)v14[2];
          }
          while ( v14 != v12 );
        }
        else
        {
          do
          {
            if ( *((_WORD *)v14 + 20) == (_WORD)a8 )
            {
              if ( *((int *)v14 + 8) >= 0 )
                goto LABEL_37;
              v32 = v14;
            }
            v14 = (_QWORD *)v14[2];
          }
          while ( v14 != v12 );
        }
        v14 = v32;
      }
    }
    else
    {
      while ( 1 )
      {
        v14 = (_QWORD *)v14[3];
        if ( (v14[4] & 0x20000000) == 0 )
          break;
        if ( v14 == v12 )
          return 0LL;
      }
    }
LABEL_37:
    if ( !v14 )
      return 0LL;
  }
  v15 = a2 & 0x1FF;
  v16 = *(_QWORD *)(v14[6] + 32LL);
  v107 = v16;
  v18 = (_BYTE *)(W32GetUserSessionState(v12) + 14704);
  if ( (*a7 & 0x8000) != 0 )
  {
    if ( v9 == 18 )
    {
      if ( *(_WORD *)(W32GetUserSessionState(v17) + 14506) )
      {
        if ( *(_BYTE *)(W32GetUserSessionState(0LL) + 14510) == 3 )
        {
          v81 = *(_WORD *)(W32GetUserSessionState(v47) + 14506);
        }
        else if ( *(_BYTE *)(W32GetUserSessionState(v47) + 14510)
               || (v48 = 8LL, (_InterlockedCompareExchange((volatile signed __int32 *)(v11 + 528), 0, 0) & 8) == 0) )
        {
          if ( *(_BYTE *)(W32GetUserSessionState(v48) + 14510) )
            v49 = *((_WORD *)v14 + 36);
          else
            v49 = NlsOemCodePage;
          v72 = v49;
          v73 = 18LL;
          if ( (unsigned __int16)(v49 - 932) <= 0x12u
            && (v73 = 393233LL, LOWORD(v72) = v49 - 932, _bittest((const int *)&v73, v72)) )
          {
            v74 = *(unsigned __int16 *)(W32GetUserSessionState(393233LL) + 14506);
            if ( (v74 & 0xFF00) != 0 )
            {
              v75 = *(_WORD *)(W32GetUserSessionState(v74) + 14506);
              v77 = HIBYTE(v75) | (*(unsigned __int8 *)(W32GetUserSessionState(v76) + 14506) << 8);
              *(_WORD *)(W32GetUserSessionState(v78) + 14506) = v77;
            }
            else
            {
              v79 = *(unsigned __int16 *)(W32GetUserSessionState(v74) + 14506);
              if ( v49 != 932 || (unsigned __int16)(v79 - 161) > 0x3Eu )
              {
                LOWORD(v79) = v79 - 128;
                if ( (unsigned __int16)v79 <= 0x7Fu )
                  v49 = 1252;
              }
            }
          }
          else
          {
            *(_BYTE *)(W32GetUserSessionState(v73) + 14507) = 0;
          }
          UserSessionState = W32GetUserSessionState(v79);
          v81 = ApiSetEditionClientCharToWchar(v49, *(unsigned __int16 *)(UserSessionState + 14506));
        }
        else
        {
          *a7 |= 0x4000000u;
          v81 = *(_WORD *)(W32GetUserSessionState(8LL) + 14506);
        }
        *a4 = v81;
        *(_WORD *)(W32GetUserSessionState(v82) + 14508) = 0;
        *(_BYTE *)(W32GetUserSessionState(v83) + 14510) = 0;
        *(_WORD *)(W32GetUserSessionState(v84) + 14506) = 0;
        *v18 &= ~2u;
        return 1LL;
      }
      if ( *(_BYTE *)(W32GetUserSessionState(0LL) + 14510) )
        *(_BYTE *)(W32GetUserSessionState(v17) + 14510) = 0;
    }
    else
    {
      v17 = *(unsigned __int16 *)(W32GetUserSessionState(v17) + 14508);
      if ( v9 == (_DWORD)v17 )
        *(_WORD *)(W32GetUserSessionState(v17) + 14508) = 0;
    }
  }
  v19 = a6;
  LOBYTE(v17) = (*a7 & 0x8000) != 0;
  if ( ((unsigned __int8)v17 & ((a6 & 2) == 0)) != 0 )
    return 0LL;
  v20 = 0;
  v21 = **(unsigned __int8 ***)v16;
  for ( i = *v21; *v21; i = *v21 )
  {
    v17 = 2 * (i & 3u);
    if ( ((unsigned __int8)(1 << (2 * (i & 3))) & *(_BYTE *)(((unsigned __int64)i >> 2) + a3)) != 0 )
      v20 |= v21[1];
    v21 += 2;
  }
  if ( (*a7 & 0x8000) == 0 && (v20 & 0xFFF7u) - 4 <= 1 )
  {
    if ( (a6 & 1) != 0 )
      goto LABEL_30;
    if ( (unsigned int)SGKEYBOARDgfEnableHexNumpad<unsigned int>::operator unsigned int() && v15 == 83 )
    {
      if ( (*v18 & 2) != 0 )
        goto LABEL_30;
      *(_BYTE *)(W32GetUserSessionState(v17) + 14510) = 2;
      *v18 |= 2u;
      v65 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x40) == 0
        || (v66 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
      {
        v66 = 0;
      }
      v67 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v66 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v70 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control) + 69400);
        v105 = 18;
LABEL_133:
        LOBYTE(v69) = v67;
        LOBYTE(v68) = v66;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v68,
          v69,
          v70,
          4,
          7,
          v105,
          (__int64)&WPP_5fbfae4165f0392cbd36d51c18a80319_Traceguids);
      }
    }
    else if ( (unsigned int)SGKEYBOARDgfEnableHexNumpad<unsigned int>::operator unsigned int() && v15 == 78 )
    {
      if ( (*v18 & 2) != 0 )
        goto LABEL_30;
      *(_BYTE *)(W32GetUserSessionState(v17) + 14510) = 3;
      *v18 |= 2u;
      v65 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x40) == 0
        || (v66 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
      {
        v66 = 0;
      }
      v67 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v66 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v70 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control) + 69400);
        v105 = 19;
        goto LABEL_133;
      }
    }
    else
    {
      v26 = NumPadScanCodeToHex(a2 & 0x1FF, v9);
      if ( v26 < 0 )
      {
LABEL_30:
        *(_WORD *)(W32GetUserSessionState(v17) + 14508) = 0;
        *(_BYTE *)(W32GetUserSessionState(v29) + 14510) = 0;
        v31 = W32GetUserSessionState(v30);
        v19 = a6;
        *(_WORD *)(v31 + 14506) = 0;
        v20 &= ~4u;
        *v18 &= ~2u;
        goto LABEL_13;
      }
      v27 = *(unsigned __int16 *)(W32GetUserSessionState(v17) + 14508);
      if ( (_DWORD)v27 == v9 )
        return 0LL;
      v50 = W32GetUserSessionState(v27);
      if ( *(_BYTE *)(v50 + 14510) == 2 || *(_BYTE *)(v50 + 14510) == 3 )
      {
        v52 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
           && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x40) != 0
           && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
        v53 = &WPP_RECORDER_INITIALIZED;
        v54 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v52 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v55 = *(_WORD *)(W32GetUserSessionState(&WPP_RECORDER_INITIALIZED) + 14506);
          v57 = W32GetUserSessionState(v56);
          LOBYTE(v58) = v54;
          LOBYTE(v59) = v52;
          WPP_RECORDER_AND_TRACE_SF_D(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v59,
            v58,
            *(_QWORD *)(v57 + 69400),
            4,
            7,
            20,
            (__int64)&WPP_5fbfae4165f0392cbd36d51c18a80319_Traceguids,
            v55);
        }
        v89 = v26 + 16 * *(_WORD *)(W32GetUserSessionState(v53) + 14506);
        *(_WORD *)(W32GetUserSessionState(v90) + 14506) = v89;
        v91 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
           && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x40) != 0
           && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
        v65 = (CTouchProcessor *)&WPP_RECORDER_INITIALIZED;
        v92 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v91 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v97 = *(_WORD *)(W32GetUserSessionState(&WPP_RECORDER_INITIALIZED) + 14506);
          v99 = W32GetUserSessionState(v98);
          LOBYTE(v100) = v92;
          LOBYTE(v101) = v91;
          WPP_RECORDER_AND_TRACE_SF_D(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v101,
            v100,
            *(_QWORD *)(v99 + 69400),
            4,
            7,
            21,
            (__int64)&WPP_5fbfae4165f0392cbd36d51c18a80319_Traceguids,
            v97);
        }
        v16 = v107;
      }
      else
      {
        v93 = v26 + 10 * *(_WORD *)(W32GetUserSessionState(v51) + 14506);
        *(_WORD *)(W32GetUserSessionState(v94) + 14506) = v93;
        v96 = W32GetUserSessionState(v95);
        v65 = 0LL;
        if ( !*(_WORD *)(v96 + 14506) && !v26 )
          *(_BYTE *)(W32GetUserSessionState(0LL) + 14510) = 1;
      }
    }
    v71 = W32GetUserSessionState(v65);
    LOBYTE(v15) = a2;
    v19 = a6;
    *(_WORD *)(v71 + 14508) = v9;
  }
LABEL_13:
  if ( v9 == 8 && (*(_DWORD *)(v16 + 80) & 4) != 0 )
  {
    v23 = a3;
    v36 = *(_BYTE *)(a3 + 40);
    if ( (v36 & 1) != 0 )
    {
      *a4 = 8206;
      return 1LL;
    }
    if ( (v36 & 4) != 0 )
    {
      *a4 = 8207;
      return 1LL;
    }
  }
  else
  {
    if ( (_WORD)v9 == 231 && !(_BYTE)v15 )
    {
      v33 = *((_WORD *)PtiCurrent() + 461);
      goto LABEL_41;
    }
    v23 = a3;
  }
  v24 = *(_QWORD *)(v16 + 8);
  if ( !v24 )
    return 0LL;
LABEL_17:
  v25 = *(_BYTE **)v24;
  if ( !*(_QWORD *)v24 )
    return 0LL;
  while ( 1 )
  {
    if ( !*v25 )
    {
      v24 += 16LL;
      goto LABEL_17;
    }
    if ( *v25 == (_BYTE)v9 )
      break;
    v25 += *(unsigned __int8 *)(v24 + 9);
  }
  v34 = v25[1];
  v35 = (_BYTE *)(v23 + 5);
  if ( (v34 & 8) != 0 && (*v35 & 8) != 0 )
  {
    v20 |= 8u;
  }
  else if ( (((v20 & 0xFFFE) == 0) & v34) != 0 && (*v35 & 2) != 0
         || ((v34 >> 2) & ((v20 & 6) == 6)) != 0 && (*v35 & 2) != 0 )
  {
    v20 ^= 1u;
  }
  if ( ((v34 >> 1) & ((v20 & 0xFFFE) == 0)) != 0 && (*v35 & 2) != 0 )
    v25 += *(unsigned __int8 *)(v24 + 9);
  v37 = *(unsigned __int8 ***)v16;
  if ( v20 > *(_WORD *)(*(_QWORD *)v16 + 8LL) )
    return 0LL;
  _mm_lfence();
  v38 = *((unsigned __int8 *)v37 + v20 + 10);
  if ( (_DWORD)v38 == 15 )
    return 0LL;
  if ( (unsigned __int16)v38 >= *(unsigned __int8 *)(v24 + 8) || (v39 = *(_WORD *)&v25[2 * v38 + 2], v39 == -4096) )
  {
    if ( ((v20 - 2) & 0xFFF6) == 0 )
    {
      if ( v9 <= 0x5A && v9 >= 0x41 )
      {
        *a4 = v9 & 0x1F;
        return 1LL;
      }
      if ( v9 >= 0xFF61 && v9 <= 0xFF91 )
      {
        *a4 = InternalVkKeyScanEx((unsigned __int16)v9, (_QWORD *)v16) & 0x1F;
        return 1LL;
      }
    }
    return 0LL;
  }
  if ( v39 != -4095 )
  {
    if ( v39 != -4094 )
    {
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x40) == 0
        || (v40 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
      {
        v40 = 0;
      }
      v41 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v40 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v42 = W32GetUserSessionState(WPP_GLOBAL_Control);
        WPP_RECORDER_AND_TRACE_SF_hD(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v40,
          v41,
          *(_QWORD *)(v42 + 69400),
          v103,
          v104,
          0x18u,
          v106);
      }
      goto LABEL_64;
    }
    if ( *(_WORD *)(v16 + 82) )
    {
      v37 = *(unsigned __int8 ***)(v16 + 88);
      if ( v37 )
      {
        while ( *(_BYTE *)v37 )
        {
          v85 = 0;
          v86 = 0;
          if ( *(_BYTE *)v37 == *v25 && *((_WORD *)v37 + 1) == (_WORD)v38 )
          {
            if ( *(_BYTE *)(v16 + 84) )
            {
              v87 = (unsigned __int16 *)v37 + 2;
              do
              {
                if ( v86 >= a5 )
                  break;
                v88 = *v87;
                if ( *v87 == 0xF000 )
                  break;
                if ( *((_WORD *)v14 + 37) )
                {
                  v102 = ComposeDeadKeys(
                           (struct tagKL *)v14,
                           *(struct DEADKEY **)(v16 + 16),
                           v88,
                           &a4[v86],
                           a5 - v86,
                           v19,
                           *a7 & 0x8000);
                  if ( v102 > 0 )
                    v86 += v102;
                }
                else
                {
                  a4[v86++] = v88;
                }
                ++v85;
                v19 = a6;
                ++v87;
              }
              while ( v85 < *(unsigned __int8 *)(v16 + 84) );
              if ( v86 )
                *a7 |= 0x8000000u;
            }
            return (unsigned int)v86;
          }
          v37 = (unsigned __int8 **)((char *)v37 + *(unsigned __int8 *)(v16 + 85));
        }
      }
    }
    ApiSetEditionMessageBeep(v37, v35, v24, 0LL);
    return 0LL;
  }
  v25 += *(unsigned __int8 *)(v24 + 9);
  if ( *((_WORD *)v14 + 37) )
  {
    v60 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x40) == 0
      || (v61 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
    {
      v61 = 0;
    }
    v62 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v61 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v63 = W32GetUserSessionState(WPP_GLOBAL_Control);
      WPP_RECORDER_AND_TRACE_SF_hDhD(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v61,
        v62,
        *(_QWORD *)(v63 + 69400),
        v103,
        v104,
        0x17u,
        v106);
    }
    v64 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v60, v35) + 48) + 4080LL);
    if ( !v64 || (v64(1024LL) & 0x8000) == 0 )
    {
      v16 = v107;
LABEL_64:
      v43 = *(struct DEADKEY **)(v16 + 16);
      if ( v43 && *((_WORD *)v14 + 37) )
      {
        result = ComposeDeadKeys((struct tagKL *)v14, v43, *(_WORD *)&v25[2 * v38 + 2], a4, a5, a6, *a7 & 0x8000);
        if ( (_DWORD)result )
          *a7 |= 0x8000000u;
        return result;
      }
      v33 = *(_WORD *)&v25[2 * v38 + 2];
LABEL_41:
      *a4 = v33;
      return 1LL;
    }
  }
  else
  {
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x40) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
    {
      v13 = 0;
    }
    v44 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v13 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v45 = W32GetUserSessionState(WPP_GLOBAL_Control);
      WPP_RECORDER_AND_TRACE_SF_hD(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v13,
        v44,
        *(_QWORD *)(v45 + 69400),
        v103,
        v104,
        0x16u,
        v106);
    }
  }
  v46 = *(_WORD *)&v25[2 * v38 + 2];
  *a4 = v46;
  if ( (*a7 & 0x8000) == 0 && (a6 & 4) == 0 )
    *((_WORD *)v14 + 37) = v46;
  return 0xFFFFFFFFLL;
}
