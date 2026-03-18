/*
 * XREFs of NVMeMapError @ 0x1400097F0
 * Callers:
 *     WaitForCommandCompleteWithCustomTimeout @ 0x140008650 (WaitForCommandCompleteWithCustomTimeout.c)
 *     NVMeCompletionDpcRoutine @ 0x140012F10 (NVMeCompletionDpcRoutine.c)
 * Callees:
 *     NVMeAdminCommandErrorLog @ 0x140005E90 (NVMeAdminCommandErrorLog.c)
 *     NVMeIsAllowedWithinThrottleLimit @ 0x14000C080 (NVMeIsAllowedWithinThrottleLimit.c)
 *     CalculateTimeDurationIn100ns @ 0x14000C8D0 (CalculateTimeDurationIn100ns.c)
 *     GetLunExtension @ 0x14000D4F0 (GetLunExtension.c)
 *     __security_check_cookie @ 0x140030FC0 (__security_check_cookie.c)
 *     memmove @ 0x1400311C0 (memmove.c)
 *     memset @ 0x1400314C0 (memset.c)
 */

char __fastcall NVMeMapError(__int64 a1, __int64 a2, __int64 a3, char a4, int a5, unsigned __int16 a6, char *a7)
{
  char v8; // r14
  unsigned __int8 v9; // di
  __int64 v11; // r12
  char *v12; // rsi
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int64 LunExtension; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rdi
  int v19; // edi
  __int64 v20; // rsi
  __int64 v21; // rax
  __int64 v22; // rdx
  unsigned int v23; // edx
  unsigned int v24; // ecx
  __int64 *v25; // rax
  __int64 v26; // r10
  __int64 v27; // rsi
  __int64 v28; // rax
  __int64 v29; // rdx
  unsigned int v30; // edx
  unsigned int v31; // ecx
  __int64 *v32; // rax
  __int64 v33; // rsi
  __int64 v34; // rax
  __int64 v35; // rdx
  unsigned int v36; // edx
  unsigned int v37; // ecx
  __int64 *v38; // rax
  int v39; // ecx
  char v41; // bl
  char v42; // r12
  char v43; // al
  char v44; // r8
  unsigned int v45; // eax
  unsigned int *v46; // r9
  __int64 v47; // r10
  __int64 v48; // rax
  __int64 v49; // rcx
  char *v50; // r15
  unsigned int v51; // esi
  unsigned int v52; // edi
  char *v53; // rcx
  unsigned int v54; // edi
  __int128 Src; // [rsp+D0h] [rbp-80h] BYREF
  __int16 v56; // [rsp+E0h] [rbp-70h]
  __int64 v57; // [rsp+E8h] [rbp-68h] BYREF
  char v58; // [rsp+F0h] [rbp-60h]
  char *v59; // [rsp+F8h] [rbp-58h]
  char *v60; // [rsp+100h] [rbp-50h]
  __int128 v61; // [rsp+110h] [rbp-40h]
  __int128 v62; // [rsp+130h] [rbp-20h]
  __int128 v63; // [rsp+140h] [rbp-10h]
  __int64 v64; // [rsp+150h] [rbp+0h]
  char *v65; // [rsp+158h] [rbp+8h]
  __int128 *v66; // [rsp+160h] [rbp+10h]
  __int64 v67; // [rsp+168h] [rbp+18h]
  __int128 v68; // [rsp+170h] [rbp+20h]
  __int128 v69; // [rsp+180h] [rbp+30h]
  __int128 v70; // [rsp+190h] [rbp+40h]
  __int128 v71; // [rsp+1A0h] [rbp+50h] BYREF

  v65 = a7;
  v58 = a4;
  v8 = 0;
  v56 = 0;
  v9 = 0;
  v64 = a3;
  v59 = 0LL;
  v60 = 0LL;
  LODWORD(v57) = 0;
  v11 = 0LL;
  v12 = 0LL;
  v61 = 0LL;
  v62 = 0LL;
  v63 = 0LL;
  Src = 0LL;
  if ( !a2 )
  {
    if ( a3 )
    {
      v67 = 0LL;
      v71 = 0LL;
      DWORD1(v71) = 4;
      BYTE10(v71) = *(_BYTE *)(a3 + 3);
      v68 = 0LL;
      v66 = &v71;
      v69 = 0LL;
      v70 = 0LL;
      LOWORD(v71) = 1;
      StorPortNotification(8193LL, a1, a3);
      LODWORD(v61) = 2;
      v17 = *(unsigned __int8 *)(v64 + 3);
      if ( (unsigned int)v17 < *(_DWORD *)(a1 + 224) && (_mm_lfence(), (v18 = *(_QWORD *)(a1 + 8 * v17 + 1672)) != 0) )
        v19 = *(_DWORD *)(v18 + 16);
      else
        v19 = 0;
LABEL_38:
      if ( (_BYTE)v61 )
      {
        if ( (unsigned __int8)v61 == 1 )
        {
          v27 = *(_QWORD *)(a1 + 3840);
          v57 = 0LL;
          *(_QWORD *)&v71 = 0LL;
          if ( v27 )
          {
            StorPortExtendedFunction(47LL, a1, &v71, &v57);
            v28 = CalculateTimeDurationIn100ns(v57, v71);
            v29 = *(_QWORD *)(v27 + 8);
            if ( (unsigned __int64)(v28 - v29) < *(_QWORD *)(v27 + 16) && v29 )
            {
              ++*(_DWORD *)(v27 + 24);
              goto LABEL_83;
            }
            *(_DWORD *)(v27 + 24) = 0;
            *(_QWORD *)(v27 + 8) = v28;
          }
          if ( (*(_BYTE *)(a1 + 21) & 2) == 0 )
            goto LABEL_83;
          if ( v19 == -1 || (v30 = *(_DWORD *)(a1 + 224), v31 = 0, !v30) )
          {
LABEL_67:
            v26 = 0LL;
          }
          else
          {
            v32 = (__int64 *)(a1 + 1672);
            while ( 1 )
            {
              v26 = *v32;
              if ( *v32 )
              {
                if ( *(_DWORD *)(v26 + 16) == v19 )
                  break;
              }
              ++v31;
              ++v32;
              if ( v31 >= v30 )
                goto LABEL_67;
            }
          }
        }
        else
        {
          if ( (unsigned __int8)v61 != 2 )
          {
LABEL_84:
            v9 = 0;
            goto LABEL_85;
          }
          v20 = *(_QWORD *)(a1 + 3832);
          *(_QWORD *)&v71 = 0LL;
          v57 = 0LL;
          if ( v20 )
          {
            StorPortExtendedFunction(47LL, a1, &v57, &v71);
            v21 = CalculateTimeDurationIn100ns(v71, v57);
            v22 = *(_QWORD *)(v20 + 8);
            if ( (unsigned __int64)(v21 - v22) < *(_QWORD *)(v20 + 16) && v22 )
            {
              ++*(_DWORD *)(v20 + 24);
LABEL_83:
              v12 = v59;
              goto LABEL_84;
            }
            *(_DWORD *)(v20 + 24) = 0;
            *(_QWORD *)(v20 + 8) = v21;
          }
          if ( (*(_BYTE *)(a1 + 21) & 2) == 0 )
            goto LABEL_83;
          if ( v19 == -1 || (v23 = *(_DWORD *)(a1 + 224), v24 = 0, !v23) )
          {
LABEL_53:
            v26 = 0LL;
          }
          else
          {
            v25 = (__int64 *)(a1 + 1672);
            while ( 1 )
            {
              v26 = *v25;
              if ( *v25 )
              {
                if ( *(_DWORD *)(v26 + 16) == v19 )
                  break;
              }
              ++v24;
              ++v25;
              if ( v24 >= v23 )
                goto LABEL_53;
            }
          }
        }
      }
      else
      {
        v33 = *(_QWORD *)(a1 + 3824);
        v57 = 0LL;
        *(_QWORD *)&v71 = 0LL;
        if ( v33 )
        {
          StorPortExtendedFunction(47LL, a1, &v71, &v57);
          v34 = CalculateTimeDurationIn100ns(v57, v71);
          v35 = *(_QWORD *)(v33 + 8);
          if ( (unsigned __int64)(v34 - v35) < *(_QWORD *)(v33 + 16) && v35 )
          {
            ++*(_DWORD *)(v33 + 24);
            goto LABEL_83;
          }
          *(_DWORD *)(v33 + 24) = 0;
          *(_QWORD *)(v33 + 8) = v34;
        }
        if ( (*(_BYTE *)(a1 + 21) & 2) == 0 )
          goto LABEL_83;
        if ( v19 == -1 || (v36 = *(_DWORD *)(a1 + 224), v37 = 0, !v36) )
        {
LABEL_81:
          v26 = 0LL;
        }
        else
        {
          v38 = (__int64 *)(a1 + 1672);
          while ( 1 )
          {
            v26 = *v38;
            if ( *v38 )
            {
              if ( *(_DWORD *)(v26 + 16) == v19 )
                break;
            }
            ++v37;
            ++v38;
            if ( v37 >= v36 )
              goto LABEL_81;
          }
        }
      }
      StorPortExtendedFunction(86LL, a1, v26, 1LL);
      goto LABEL_83;
    }
LABEL_37:
    v19 = DWORD1(v61);
    goto LABEL_38;
  }
  if ( *(_BYTE *)(a2 + 2) == 40 )
    v11 = *(_QWORD *)(a2 + 104);
  else
    v11 = *(_QWORD *)(a2 + 56);
  if ( (v11 & 0xFFF) != 0 )
    v11 = v11 - (v11 & 0xFFF) + 4096;
  v13 = *(_OWORD *)(v11 + 4144);
  v61 = *(_OWORD *)(v11 + 4096);
  v14 = *(_OWORD *)(v11 + 4128);
  v63 = v13;
  v62 = v14;
  if ( (*(_BYTE *)(v11 + 4225) & 1) == 0 )
    goto LABEL_37;
  switch ( (char)v61 )
  {
    case 2:
      if ( (unsigned int)BYTE8(v62) - 192 > 5
        && (unsigned int)BYTE8(v62) - 200 > 1
        && (BYTE8(v62) != 2 || (unsigned __int8)NVMeIsAllowedWithinThrottleLimit(a1, 6LL, &v57, 0LL)) )
      {
        goto LABEL_31;
      }
      break;
    case 9:
      if ( BYTE8(v62) != 2 || (unsigned __int8)NVMeIsAllowedWithinThrottleLimit(a1, 7LL, &v57, 0LL) )
        goto LABEL_31;
      break;
    case 10:
      if ( BYTE8(v62) != 208 && BYTE8(v62) != 2 )
        NVMeAdminCommandErrorLog(a1, a2);
      break;
    case 16:
      if ( (*(_BYTE *)(a1 + 21) & 2) != 0 )
        goto LABEL_16;
      break;
    case 17:
      if ( (*(_BYTE *)(a1 + 21) & 2) != 0 )
LABEL_16:
        StorPortExtendedFunction(87LL, a1, 0LL, 1LL);
      break;
    case 25:
    case 26:
      if ( (unsigned __int8)NVMeIsAllowedWithinThrottleLimit(a1, 3LL, &v57, 0LL) && (*(_BYTE *)(a1 + 21) & 2) != 0 )
      {
        LunExtension = GetLunExtension(a1, DWORD1(v61));
        StorPortExtendedFunction(87LL, a1, LunExtension, 1LL);
        goto LABEL_83;
      }
      break;
    case -128:
      if ( (*(_BYTE *)(a1 + 21) & 2) != 0 )
      {
        StorPortExtendedFunction(87LL, a1, 0LL, 1LL);
        goto LABEL_84;
      }
      break;
    case -127:
    case -126:
      if ( (unsigned __int8)NVMeIsAllowedWithinThrottleLimit(a1, 4LL, &v57, 0LL) && (*(_BYTE *)(a1 + 21) & 2) != 0 )
      {
        v16 = GetLunExtension(a1, DWORD1(v61));
        StorPortExtendedFunction(87LL, a1, v16, 1LL);
        goto LABEL_84;
      }
      break;
    default:
LABEL_31:
      NVMeAdminCommandErrorLog(a1, a2);
      break;
  }
LABEL_85:
  v39 = *(_DWORD *)(*(_QWORD *)(a1 + 176) + 28LL);
  if ( v39 == -1 || *(_DWORD *)(*(_QWORD *)(a1 + 176) + 20LL) == -1 )
  {
    if ( (*(_BYTE *)(a1 + 21) & 2) != 0 )
      StorPortExtendedFunction(85LL, a1, 0LL, 1LL);
  }
  else
  {
    LODWORD(v57) = *(_DWORD *)(*(_QWORD *)(a1 + 176) + 28LL);
    if ( (v39 & 2) != 0 )
      StorPortExtendedFunction(98LL, a1, 0LL, 7LL);
  }
  if ( v58 )
    return 1;
  if ( ((a6 >> 9) & 7) != 0 )
  {
    if ( ((a6 >> 9) & 7) == 1 )
    {
      switch ( (unsigned __int8)(a6 >> 1) )
      {
        case 0u:
        case 2u:
        case 3u:
        case 5u:
        case 7u:
        case 0x18u:
        case 0x19u:
          goto LABEL_107;
        case 1u:
          v8 = 2;
          WORD6(Src) = 38;
          BYTE2(Src) = BYTE2(Src) & 0xF0 | 5;
          goto LABEL_137;
        case 6u:
        case 8u:
        case 9u:
        case 0xCu:
        case 0xDu:
        case 0xEu:
        case 0xFu:
        case 0x13u:
        case 0x14u:
        case 0x15u:
        case 0x16u:
        case 0x1Bu:
        case 0x1Cu:
        case 0x1Eu:
        case 0x1Fu:
        case 0x20u:
        case 0x21u:
        case 0x22u:
        case 0x80u:
        case 0x81u:
        case 0x83u:
          goto LABEL_109;
        case 0xAu:
          v8 = 2;
          WORD6(Src) = 305;
          BYTE2(Src) = BYTE2(Src) & 0xF0 | 5;
          goto LABEL_137;
        case 0xBu:
        case 0x10u:
        case 0x11u:
        case 0x12u:
        case 0x1Au:
          v8 = 2;
          BYTE2(Src) = BYTE2(Src) & 0xF0 | 6;
          goto LABEL_136;
        case 0x82u:
          v8 = 2;
          WORD6(Src) = 36;
          BYTE2(Src) = BYTE2(Src) & 0xF0 | 7;
          goto LABEL_137;
        default:
          break;
      }
    }
    else if ( ((a6 >> 9) & 7) == 2 )
    {
      switch ( (unsigned __int8)(a6 >> 1) )
      {
        case 0x80u:
          v8 = 2;
          WORD6(Src) = 3;
          BYTE2(Src) = BYTE2(Src) & 0xF0 | 3;
          goto LABEL_137;
        case 0x81u:
          v8 = 2;
          WORD6(Src) = 17;
          BYTE2(Src) = BYTE2(Src) & 0xF0 | 3;
          goto LABEL_137;
        case 0x82u:
          v8 = 2;
          WORD6(Src) = 272;
          BYTE2(Src) = BYTE2(Src) & 0xF0 | 3;
          goto LABEL_137;
        case 0x83u:
          v8 = 2;
          WORD6(Src) = 528;
          BYTE2(Src) = BYTE2(Src) & 0xF0 | 3;
          goto LABEL_137;
        case 0x84u:
          v8 = 2;
          WORD6(Src) = 784;
          BYTE2(Src) = BYTE2(Src) & 0xF0 | 3;
          goto LABEL_137;
        case 0x85u:
          v8 = 2;
          WORD6(Src) = 29;
          BYTE2(Src) = BYTE2(Src) & 0xF0 | 0xE;
          goto LABEL_137;
        case 0x86u:
          v41 = 23;
          LOBYTE(Src) = -16;
          BYTE7(Src) = 10;
          v8 = 2;
          BYTE2(Src) = BYTE2(Src) & 0xF0 | 7;
          if ( !v64 )
            v41 = 4;
          WORD6(Src) = 2336;
          break;
        default:
          goto LABEL_138;
      }
      goto LABEL_139;
    }
LABEL_138:
    v41 = 4;
LABEL_139:
    v42 = 0;
    goto LABEL_140;
  }
  switch ( (unsigned __int8)(a6 >> 1) )
  {
    case 0u:
      v41 = 1;
      goto LABEL_139;
    case 1u:
    case 0x12u:
    case 0x15u:
      v8 = 2;
      WORD6(Src) = 32;
      BYTE2(Src) = BYTE2(Src) & 0xF0 | 5;
      goto LABEL_137;
    case 2u:
    case 0x13u:
    case 0x14u:
    case 0x16u:
    case 0x18u:
    case 0x1Au:
    case 0x1Eu:
LABEL_109:
      v8 = 2;
      WORD6(Src) = 36;
      BYTE2(Src) = BYTE2(Src) & 0xF0 | 5;
      goto LABEL_137;
    case 3u:
      v8 = 2;
      WORD6(Src) = 35;
      BYTE2(Src) = BYTE2(Src) & 0xF0 | 5;
      goto LABEL_137;
    case 4u:
    case 0x81u:
      v8 = 2;
      BYTE2(Src) = BYTE2(Src) & 0xF0 | 3;
      goto LABEL_136;
    case 5u:
      v41 = 4;
      LOBYTE(Src) = -16;
      BYTE7(Src) = 10;
      BYTE2(Src) = BYTE2(Src) & 0xF0 | 0xB;
      v8 = 64;
      v42 = 1;
      WORD6(Src) = 2059;
      break;
    case 6u:
      v41 = 4;
      LOBYTE(Src) = -16;
      BYTE7(Src) = 10;
      BYTE2(Src) = BYTE2(Src) & 0xF0 | 4;
      v8 = 2;
      WORD6(Src) = 68;
      goto LABEL_139;
    case 7u:
    case 9u:
    case 0xAu:
      v41 = 4;
      LOBYTE(Src) = -16;
      BYTE7(Src) = 10;
      BYTE2(Src) = BYTE2(Src) & 0xF0 | 0xB;
      v8 = 64;
      v42 = 1;
      WORD6(Src) = 0;
      break;
    case 8u:
      v8 = 64;
      BYTE2(Src) = BYTE2(Src) & 0xF0 | 0xB;
      goto LABEL_136;
    case 0xBu:
      v8 = 2;
      WORD6(Src) = 2336;
      BYTE2(Src) = BYTE2(Src) & 0xF0 | 5;
      goto LABEL_137;
    case 0xCu:
      v8 = 2;
      WORD6(Src) = 44;
      BYTE2(Src) = BYTE2(Src) & 0xF0 | 5;
      goto LABEL_137;
    case 0xDu:
    case 0xEu:
    case 0xFu:
    case 0x10u:
    case 0x11u:
LABEL_107:
      v8 = 2;
      BYTE2(Src) = BYTE2(Src) & 0xF0 | 5;
      goto LABEL_136;
    case 0x19u:
      v8 = 2;
      WORD6(Src) = 42;
      BYTE2(Src) = BYTE2(Src) & 0xF0 | 5;
      goto LABEL_137;
    case 0x1Bu:
      v41 = 4;
      LOBYTE(Src) = -16;
      BYTE7(Src) = 10;
      BYTE2(Src) = BYTE2(Src) & 0xF0 | 0xB;
      v8 = 34;
      v42 = 1;
      WORD6(Src) = 0;
      break;
    case 0x1Cu:
      v41 = 4;
      LOBYTE(Src) = -16;
      BYTE7(Src) = 10;
      BYTE2(Src) = BYTE2(Src) & 0xF0 | 4;
      v8 = 2;
      WORD6(Src) = 0;
      goto LABEL_139;
    case 0x1Du:
      v8 = 2;
      LOBYTE(Src) = -16;
      BYTE7(Src) = 10;
      BYTE2(Src) = BYTE2(Src) & 0xF0 | 2;
      v41 = 24;
      WORD6(Src) = 1028;
      goto LABEL_139;
    case 0x23u:
      v41 = 23;
      LOBYTE(Src) = -16;
      BYTE7(Src) = 10;
      BYTE2(Src) = BYTE2(Src) & 0xF0 | 5;
      v8 = 2;
      WORD6(Src) = 544;
      goto LABEL_139;
    case 0x80u:
      v8 = 2;
      WORD6(Src) = 33;
      BYTE2(Src) = BYTE2(Src) & 0xF0 | 5;
      goto LABEL_137;
    case 0x82u:
      v8 = 2;
      LOBYTE(Src) = -16;
      BYTE7(Src) = 10;
      BYTE2(Src) = BYTE2(Src) & 0xF0 | 2;
      v41 = 4;
      if ( !v11 )
      {
        WORD6(Src) = 4;
        goto LABEL_139;
      }
      if ( _bittest16((const signed __int16 *)(v11 + 4218), 0xFu) )
      {
        WORD6(Src) = 4;
        goto LABEL_139;
      }
      WORD6(Src) = 260;
      v42 = 1;
      break;
    case 0x83u:
      BYTE2(Src) &= 0xF0u;
      v8 = 24;
LABEL_136:
      WORD6(Src) = 0;
LABEL_137:
      LOBYTE(Src) = -16;
      BYTE7(Src) = 10;
      goto LABEL_138;
    default:
      goto LABEL_138;
  }
LABEL_140:
  if ( !a2 )
    goto LABEL_172;
  v43 = *(_BYTE *)(a2 + 2);
  v44 = 0;
  *(_BYTE *)(a2 + 3) = v41;
  if ( v43 != 40 )
  {
    if ( !v43 )
    {
      v50 = *(char **)(a2 + 32);
      v12 = (char *)(a2 + 4);
      v9 = *(_BYTE *)(a2 + 11);
      goto LABEL_163;
    }
    goto LABEL_155;
  }
  if ( *(_DWORD *)(a2 + 20) || (v45 = *(_DWORD *)(a2 + 56)) == 0 )
  {
LABEL_155:
    v50 = 0LL;
    v9 = 0;
    goto LABEL_156;
  }
  v46 = (unsigned int *)(a2 + 120);
  v47 = v45;
  do
  {
    v48 = *v46;
    if ( (unsigned int)v48 >= 0x80 && (unsigned int)v48 <= *(_DWORD *)(a2 + 16) )
    {
      v49 = v48 + a2;
      if ( *(_DWORD *)(v48 + a2) == 64 || *(_DWORD *)(v48 + a2) == 65 )
      {
        v50 = *(char **)(v49 + 16);
        v12 = (char *)(v49 + 8);
        v9 = *(_BYTE *)(v49 + 9);
        v44 = 1;
        v60 = v50;
        goto LABEL_153;
      }
      if ( *(_DWORD *)(v48 + a2) == 66 )
      {
        v50 = *(char **)(v49 + 24);
        v12 = (char *)(v49 + 8);
        v9 = *(_BYTE *)(v49 + 9);
        v44 = 1;
        v60 = v50;
        goto LABEL_153;
      }
    }
    v50 = v60;
LABEL_153:
    ++v46;
    --v47;
  }
  while ( v47 );
  if ( !v44 )
    goto LABEL_155;
LABEL_163:
  if ( v12 )
    *v12 = v8;
LABEL_156:
  if ( (Src & 0x80u) != 0LL && v50 && v9 )
  {
    v51 = v9 <= 0x12u ? v9 : 18;
    memmove(v50, &Src, v51);
    *(_BYTE *)(a2 + 3) |= 0x80u;
    if ( v9 > v51 )
    {
      v52 = v9 - v51;
      v53 = &v50[v51];
      if ( (v52 & 3) != 0 )
      {
        if ( v52 )
          memset(v53, 0, v52);
      }
      else
      {
        v54 = v52 >> 2;
        if ( v54 )
          memset(v53, 0, 4LL * v54);
      }
    }
  }
LABEL_172:
  if ( v65 )
    *v65 = v42;
  return v41;
}
