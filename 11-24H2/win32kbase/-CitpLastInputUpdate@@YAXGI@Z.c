/*
 * XREFs of ?CitpLastInputUpdate@@YAXGI@Z @ 0x1400B4438
 * Callers:
 *     ?CitpSetOtherInputInfo@@YAJPEAT_CIT_SI_INFOFLAGS@@PEAT_CIT_SI_INFO@@@Z @ 0x1400B4164 (-CitpSetOtherInputInfo@@YAJPEAT_CIT_SI_INFOFLAGS@@PEAT_CIT_SI_INFO@@@Z.c)
 *     CitLastInputUpdate @ 0x1400B4340 (CitLastInputUpdate.c)
 * Callees:
 *     ?CitpInteractionSummaryEnsure@@YAPEAU_CIT_INTERACTION_SUMMARY@@PEAU_CIT_IMPACT_CONTEXT@@PEAU_CIT_PROCESS@@G@Z @ 0x140016D60 (-CitpInteractionSummaryEnsure@@YAPEAU_CIT_INTERACTION_SUMMARY@@PEAU_CIT_IMPACT_CONTEXT@@PEAU_CIT.c)
 *     ?CitpProcessEnsureContext@@YAPEAU_CIT_PROCESS@@PEAUtagPROCESSINFO@@@Z @ 0x1400B3D28 (-CitpProcessEnsureContext@@YAPEAU_CIT_PROCESS@@PEAUtagPROCESSINFO@@@Z.c)
 *     ?CitpStatIncrement@@YAXPEAGG@Z @ 0x1400B4140 (-CitpStatIncrement@@YAXPEAGG@Z.c)
 *     ?SetActive@CIT_USER_ACTIVITY_STAT@@QEAAXI@Z @ 0x1400E78D8 (-SetActive@CIT_USER_ACTIVITY_STAT@@QEAAXI@Z.c)
 */

void __fastcall CitpLastInputUpdate(__int64 a1, unsigned int a2)
{
  unsigned int v2; // ebp
  int v3; // r12d
  __int64 v4; // rcx
  __int64 UserSessionState; // rax
  unsigned __int64 v6; // rcx
  __int64 v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // rax
  unsigned int v10; // r13d
  __int64 v11; // rcx
  __int64 v12; // rbx
  unsigned __int64 v13; // rcx
  __int64 v14; // r15
  unsigned int v15; // eax
  unsigned int v16; // r14d
  int v17; // eax
  unsigned int v18; // r12d
  __int64 v19; // rcx
  __int64 v20; // r15
  unsigned int v21; // eax
  unsigned int v22; // r14d
  int v23; // eax
  unsigned __int64 *v24; // rdx
  unsigned __int64 v25; // rsi
  __int16 v26; // di
  unsigned __int16 v27; // ax
  __int16 v28; // cx
  unsigned __int64 v29; // rsi
  int v30; // r8d
  unsigned int v31; // edx
  unsigned __int64 v32; // rsi
  int v33; // r8d
  unsigned int v34; // edx
  unsigned int v35; // ecx
  unsigned int v36; // ecx
  unsigned __int64 v37; // rcx
  struct tagPROCESSINFO *v38; // rcx
  struct tagPROCESSINFO **v39; // rax
  struct tagPROCESSINFO **v40; // rsi
  struct _CIT_INTERACTION_SUMMARY *v41; // r14
  __int64 v42; // rcx
  unsigned __int16 v43; // ax
  int v44; // eax
  int v45; // eax
  unsigned int v46; // eax
  __int64 v47; // rax
  unsigned __int64 v48; // rdx
  unsigned int v49; // eax
  unsigned int v50; // eax
  __int64 v51; // r8
  unsigned int v52; // eax
  unsigned int v53; // [rsp+58h] [rbp+10h] BYREF

  v53 = a2;
  v2 = (unsigned __int16)a1;
  if ( (unsigned __int16)a1 == 32 )
  {
    v3 = 1;
  }
  else
  {
    v3 = 0;
    if ( a2 - MEMORY[0xFFFFF780000002E4] > 0x3E8 )
      RtlSetSystemGlobalData(13LL, &v53, 4LL);
  }
  v4 = *(_QWORD *)(W32GetUserSessionState(a1) + 18968);
  if ( *(_QWORD *)(v4 + 32) )
  {
    UserSessionState = W32GetUserSessionState(v4);
    v6 = v53;
    v7 = 40LL;
    v8 = *(_QWORD *)(UserSessionState + 18968);
    if ( v53 < *(_DWORD *)(v8 + 40) )
    {
      v6 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
      v53 = v6;
    }
    *(_DWORD *)(v8 + 40) = v6;
    v9 = W32GetUserSessionState(v6);
    v10 = v53;
    v11 = *(_QWORD *)(v9 + 18968);
    v12 = *(_QWORD *)(v11 + 32);
    v14 = W32GetUserSessionState(v11);
    if ( !*(_DWORD *)(v14 + 18976) )
    {
      v13 = *(_QWORD *)(W32GetUserSessionState(v13) + 18968);
      *(_DWORD *)(v14 + 18976) = *(_DWORD *)(v13 + 8);
    }
    v15 = *(_DWORD *)(v12 + 236);
    v16 = v10 - v15;
    if ( v10 != v15 )
    {
      LODWORD(v29) = v10;
      if ( v10 >= v15 )
        goto LABEL_136;
      v13 = 0xFFFFF78000000004uLL;
      v46 = *(_DWORD *)(v12 + 236);
      v29 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
      v16 = v29 - v46;
      if ( (unsigned int)v29 >= v46 )
        goto LABEL_136;
      v47 = W32GetUserSessionState(0xFFFFF78000000004uLL);
      v13 = 0xFFFFFFFFLL;
      v48 = ((((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
            * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64)
          - *(_QWORD *)(*(_QWORD *)(v47 + 18968) + 64LL);
      v49 = -1;
      if ( v48 <= 0xFFFFFFFF )
        v49 = v48;
      if ( v16 <= v49 && v16 <= 0x240C8400 )
      {
LABEL_136:
        if ( *(_DWORD *)(v12 + 228) )
        {
          *(_DWORD *)(v12 + 244) += v16;
        }
        else
        {
          v30 = *(_DWORD *)(v12 + 232);
          v31 = *(_DWORD *)(v12 + 236) - v30;
          v13 = *(unsigned int *)(v14 + 18976);
          if ( v31 < (unsigned int)v13 )
          {
            if ( (int)v29 - v30 > (unsigned int)v13 )
            {
              v44 = *(_DWORD *)(v12 + 248);
              v13 = (unsigned int)v13 - v31;
              if ( v44 < 0 )
                *(_DWORD *)(v12 + 248) = v44 & 0x7FFFFFFF;
            }
            else
            {
              v13 = v16;
            }
            *(_DWORD *)(v12 + 244) += v13;
          }
        }
        *(_DWORD *)(v12 + 236) = v29;
      }
      else
      {
        ++*(_DWORD *)(v12 + 240);
        *(_DWORD *)(v12 + 236) = v29;
        *(_DWORD *)(v12 + 232) = v29 - *(_DWORD *)(v14 + 18976);
        CIT_USER_ACTIVITY_STAT::SetActive((CIT_USER_ACTIVITY_STAT *)(v12 + 244), 0);
      }
    }
    v17 = *(_DWORD *)(v12 + 248);
    if ( v17 >= 0 )
      *(_DWORD *)(v12 + 248) = (v17 + 1) | 0x80000000;
    *(_DWORD *)(v12 + 232) = v10;
    if ( !v3 )
    {
      v18 = v53;
      v20 = W32GetUserSessionState(v13);
      if ( !*(_DWORD *)(v20 + 18976) )
        *(_DWORD *)(v20 + 18976) = *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v19) + 18968) + 8LL);
      v21 = *(_DWORD *)(v12 + 212);
      v22 = v18 - v21;
      if ( v18 != v21 )
      {
        LODWORD(v32) = v18;
        if ( v18 >= v21 )
          goto LABEL_137;
        v50 = *(_DWORD *)(v12 + 212);
        v32 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
        v22 = v32 - v50;
        if ( (unsigned int)v32 >= v50 )
          goto LABEL_137;
        v51 = *(_QWORD *)(W32GetUserSessionState(0xFFFFF78000000004uLL) + 18968);
        v52 = -1;
        if ( (unsigned __int64)(((((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                                * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64)
                              - *(_QWORD *)(v51 + 64)) <= 0xFFFFFFFF )
          v52 = ((((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64)
              - *(_DWORD *)(v51 + 64);
        if ( v22 <= v52 && v22 <= 0x240C8400 )
        {
LABEL_137:
          if ( *(_DWORD *)(v12 + 204) )
          {
            *(_DWORD *)(v12 + 220) += v22;
          }
          else
          {
            v33 = *(_DWORD *)(v12 + 208);
            v34 = *(_DWORD *)(v12 + 212) - v33;
            v35 = *(_DWORD *)(v20 + 18976);
            if ( v34 < v35 )
            {
              if ( (int)v32 - v33 > v35 )
              {
                v45 = *(_DWORD *)(v12 + 224);
                v36 = v35 - v34;
                if ( v45 < 0 )
                  *(_DWORD *)(v12 + 224) = v45 & 0x7FFFFFFF;
              }
              else
              {
                v36 = v22;
              }
              *(_DWORD *)(v12 + 220) += v36;
            }
          }
          *(_DWORD *)(v12 + 212) = v32;
        }
        else
        {
          ++*(_DWORD *)(v12 + 216);
          *(_DWORD *)(v12 + 212) = v32;
          *(_DWORD *)(v12 + 208) = v32 - *(_DWORD *)(v20 + 18976);
          CIT_USER_ACTIVITY_STAT::SetActive((CIT_USER_ACTIVITY_STAT *)(v12 + 220), 0);
        }
      }
      v23 = *(_DWORD *)(v12 + 224);
      if ( v23 >= 0 )
        *(_DWORD *)(v12 + 224) = (v23 + 1) | 0x80000000;
      *(_DWORD *)(v12 + 208) = v18;
    }
    v24 = *(unsigned __int64 **)(v12 + 120);
    if ( v24 )
    {
      v25 = v24[115];
      if ( v25 - 1 > 0xCEEE && v25 < 0xCEF2
        || (v37 = *(_QWORD *)(v25 + 24), v37 - 1 > 0xCEEE) && v37 < 0xCEF2
        || (v38 = *(struct tagPROCESSINFO **)(v37 + 8)) == 0LL
        || v38 == (struct tagPROCESSINFO *)v24 )
      {
        v26 = -1;
        if ( v53 - *(_DWORD *)(v25 + 100) > 0x3E8 )
        {
          *(_DWORD *)(v25 + 100) = v53;
          *(_WORD *)(v25 + 106) = 0;
          v27 = *(_WORD *)(v12 + 140);
          v28 = v27 + 1;
          if ( (unsigned __int16)(v27 + 1) < v27 )
            v28 = -1;
          *(_WORD *)(v12 + 140) = v28;
          PsUpdateComponentPower(**(_QWORD **)(v12 + 120), 9LL);
        }
        if ( ((unsigned __int16)v2 & *(_WORD *)(v25 + 106)) == 0 )
        {
          if ( v2 > 0x200 )
          {
            switch ( v2 )
            {
              case 0x800u:
                PsUpdateComponentPower(**(_QWORD **)(v12 + 120), 14LL);
                v42 = 150LL;
                break;
              case 0x1000u:
                v42 = 156LL;
                break;
              case 0x400u:
                PsUpdateComponentPower(**(_QWORD **)(v12 + 120), 13LL);
                v42 = 146LL;
                break;
              case 0x2000u:
                v42 = 160LL;
                break;
              case 0x4000u:
                v42 = 168LL;
                break;
              case 0x8000u:
                v42 = 162LL;
                break;
              default:
                return;
            }
          }
          else
          {
            switch ( v2 )
            {
              case 0x200u:
                PsUpdateComponentPower(**(_QWORD **)(v12 + 120), 13LL);
                v42 = 144LL;
                break;
              case 1u:
                PsUpdateComponentPower(**(_QWORD **)(v12 + 120), 13LL);
                v42 = 142LL;
                break;
              case 2u:
                PsUpdateComponentPower(**(_QWORD **)(v12 + 120), 14LL);
                v42 = 148LL;
                break;
              case 4u:
                v42 = 154LL;
                break;
              case 8u:
                v42 = 158LL;
                break;
              case 0x10u:
                v42 = 152LL;
                break;
              case 0x80u:
                v42 = 164LL;
                break;
              case 0x100u:
                v42 = 166LL;
                break;
              default:
                return;
            }
          }
          v43 = *(_WORD *)(v42 + v12);
          if ( (unsigned __int16)(v43 + 1) >= v43 )
            v26 = v43 + 1;
          *(_WORD *)(v42 + v12) = v26;
          *(_WORD *)(v25 + 106) |= v2;
        }
      }
      else
      {
        v39 = (struct tagPROCESSINFO **)CitpProcessEnsureContext(v38);
        v40 = v39;
        if ( v39 )
        {
          v41 = CitpInteractionSummaryEnsure((struct _CIT_IMPACT_CONTEXT *)v12, v39, 1);
          if ( v53 - *((_DWORD *)v40 + 23) > 0x3E8 )
          {
            *((_DWORD *)v40 + 23) = v53;
            *((_WORD *)v40 + 48) = 0;
            if ( v41 )
              CitpStatIncrement((unsigned __int16 *)v41 + 16, 1);
            PsUpdateComponentPower(*(_QWORD *)v40[1], 9LL);
          }
          if ( v41 && ((unsigned __int16)v2 & (_WORD)v40[12]) == 0 )
          {
            if ( v2 > 0x200 )
            {
              switch ( v2 )
              {
                case 0x400u:
                  PsUpdateComponentPower(*(_QWORD *)v40[1], 13LL);
                  v7 = 38LL;
                  goto LABEL_60;
                case 0x800u:
                  PsUpdateComponentPower(*(_QWORD *)v40[1], 14LL);
                  v7 = 42LL;
                  goto LABEL_60;
                case 0x1000u:
                  v7 = 48LL;
                  goto LABEL_60;
                case 0x2000u:
                  v7 = 52LL;
                  goto LABEL_60;
                case 0x4000u:
                  v7 = 60LL;
                  goto LABEL_60;
                case 0x8000u:
                  v7 = 54LL;
                  goto LABEL_60;
              }
            }
            else
            {
              switch ( v2 )
              {
                case 0x200u:
                  PsUpdateComponentPower(*(_QWORD *)v40[1], 13LL);
                  v7 = 36LL;
                  goto LABEL_60;
                case 1u:
                  PsUpdateComponentPower(*(_QWORD *)v40[1], 13LL);
                  v7 = 34LL;
                  goto LABEL_60;
                case 2u:
                  PsUpdateComponentPower(*(_QWORD *)v40[1], 14LL);
                  goto LABEL_60;
                case 4u:
                  v7 = 46LL;
                  goto LABEL_60;
                case 8u:
                  v7 = 50LL;
                  goto LABEL_60;
                case 0x10u:
                  v7 = 44LL;
                  goto LABEL_60;
                case 0x80u:
                  v7 = 56LL;
                  goto LABEL_60;
                case 0x100u:
                  v7 = 58LL;
LABEL_60:
                  CitpStatIncrement((unsigned __int16 *)((char *)v41 + v7), 1);
                  *((_WORD *)v40 + 48) |= v2;
                  break;
              }
            }
          }
        }
      }
    }
  }
}
