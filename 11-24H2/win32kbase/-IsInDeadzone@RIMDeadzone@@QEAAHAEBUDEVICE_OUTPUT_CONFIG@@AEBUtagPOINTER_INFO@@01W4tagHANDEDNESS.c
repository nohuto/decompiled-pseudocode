/*
 * XREFs of ?IsInDeadzone@RIMDeadzone@@QEAAHAEBUDEVICE_OUTPUT_CONFIG@@AEBUtagPOINTER_INFO@@01W4tagHANDEDNESS@@@Z @ 0x1401EA4D8
 * Callers:
 *     rimAbIsPointInGlobalPenDeadzone @ 0x1401D9434 (rimAbIsPointInGlobalPenDeadzone.c)
 *     rimAbIsPointInPenDeadzone @ 0x1401D957C (rimAbIsPointInPenDeadzone.c)
 * Callees:
 *     ?_InitializeRightHandedDeadzone@RIMDeadzone@@AEAAJXZ @ 0x140125418 (-_InitializeRightHandedDeadzone@RIMDeadzone@@AEAAJXZ.c)
 *     ?_ClearDeadzoneAreas@RIMDeadzone@@AEAAXXZ @ 0x140125508 (-_ClearDeadzoneAreas@RIMDeadzone@@AEAAXXZ.c)
 *     _lambda_0204d79c2644d1b9cd88bde7d32e7162_::operator() @ 0x14014DC1C (_lambda_0204d79c2644d1b9cd88bde7d32e7162_--operator().c)
 *     ConvertPointCoordinates @ 0x1401584C4 (ConvertPointCoordinates.c)
 *     ?_IsAngleWithinRange@RIMDeadzone@@CAHKKUtagRIMDEADZONE_RANGE@@@Z @ 0x14015C910 (-_IsAngleWithinRange@RIMDeadzone@@CAHKKUtagRIMDEADZONE_RANGE@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?_InitializeLeftHandedDeadzone@RIMDeadzone@@AEAAJXZ @ 0x14019CF00 (-_InitializeLeftHandedDeadzone@RIMDeadzone@@AEAAJXZ.c)
 *     ?_GetAngle@RIMDeadzone@@CAKUtagPOINT@@0@Z @ 0x1401EAAF4 (-_GetAngle@RIMDeadzone@@CAKUtagPOINT@@0@Z.c)
 */

__int64 __fastcall RIMDeadzone::IsInDeadzone(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  int v9; // ebx
  unsigned int v10; // r13d
  int v11; // eax
  unsigned int v12; // r12d
  unsigned int v13; // esi
  unsigned int v14; // edi
  unsigned int v15; // ebx
  __int64 v16; // rcx
  int v17; // r12d
  __int64 v18; // rdi
  unsigned int v19; // r12d
  __int64 v20; // rbx
  __int64 v21; // rbx
  __int64 UserSessionState; // rax
  __int64 v23; // rax
  unsigned int v24; // esi
  __int64 v25; // rbx
  __int64 v26; // r9
  int v27; // r8d
  __int128 v28; // xmm0
  __int128 v29; // xmm1
  LONG v30; // ecx
  __int128 v31; // xmm0
  __int128 v32; // xmm1
  int v33; // eax
  __int64 v34; // rcx
  int v35; // ebx
  int v36; // edi
  int v37; // esi
  __int64 v38; // rax
  __int64 v39; // rcx
  __int64 v40; // rax
  __int64 v41; // rcx
  __int64 v42; // rax
  __int64 v43; // rcx
  struct tagPOINT v45; // [rsp+38h] [rbp-59h] BYREF
  __int64 v46; // [rsp+40h] [rbp-51h] BYREF
  __int128 v47; // [rsp+48h] [rbp-49h]
  __int64 v48; // [rsp+58h] [rbp-39h] BYREF
  __int128 v49; // [rsp+68h] [rbp-29h] BYREF
  int *v50; // [rsp+78h] [rbp-19h]
  int *v51; // [rsp+80h] [rbp-11h]
  __int128 v52; // [rsp+88h] [rbp-9h] BYREF
  int v53[16]; // [rsp+98h] [rbp+7h] BYREF
  struct tagPOINT v54; // [rsp+F0h] [rbp+5Fh] BYREF
  __int64 v55; // [rsp+F8h] [rbp+67h]
  __int64 v56; // [rsp+100h] [rbp+6Fh]

  v56 = a4;
  v55 = a3;
  if ( *(_DWORD *)(a2 + 72) == *(_DWORD *)(a4 + 72) && *(_DWORD *)(a2 + 76) == *(_DWORD *)(a4 + 76) )
  {
    v9 = a6;
    v10 = 0;
    if ( *(_DWORD *)(a1 + 16) )
    {
      if ( a6 == *(_DWORD *)a1 )
        goto LABEL_11;
    }
    if ( *(_QWORD *)(a1 + 24) )
      RIMDeadzone::_ClearDeadzoneAreas((RIMDeadzone *)a1);
    v11 = v9
        ? RIMDeadzone::_InitializeRightHandedDeadzone((RIMDeadzone *)a1)
        : RIMDeadzone::_InitializeLeftHandedDeadzone((RIMDeadzone *)a1);
    if ( v11 >= 0 )
    {
LABEL_11:
      v12 = *(_DWORD *)(a3 + 36);
      v13 = *(_DWORD *)(a3 + 32);
      v50 = (int *)(a3 + 32);
      v45 = (struct tagPOINT)__PAIR64__(v12, v13);
      v14 = *(_DWORD *)(a5 + 36);
      v15 = *(_DWORD *)(a5 + 32);
      v51 = (int *)(a5 + 32);
      v54 = (struct tagPOINT)__PAIR64__(v14, v15);
      v54.x = RIMDeadzone::_GetAngle((struct tagPOINT)__PAIR64__(v12, v13), (struct tagPOINT)__PAIR64__(v14, v15));
      v17 = (v12 - v14) * (v12 - v14);
      v18 = 0LL;
      v19 = (v13 - v15) * (v13 - v15) + v17;
      if ( *(_DWORD *)(a1 + 32) )
      {
        while ( 1 )
        {
          v20 = *(_QWORD *)(a1 + 24);
          *(_QWORD *)&v47 = 3 * v18;
          v21 = *(_QWORD *)(v20 + 24 * v18);
          UserSessionState = W32GetUserSessionState(v16);
          if ( RIMDeadzone::_IsAngleWithinRange(v54.x, *(_DWORD *)(UserSessionState + 272), v21) )
          {
            v23 = *(_QWORD *)(a1 + 24);
            v24 = 0;
            v16 = v47;
            if ( *(_DWORD *)(v23 + 8 * v47 + 16) )
              break;
          }
LABEL_18:
          v18 = (unsigned int)(v18 + 1);
          if ( (unsigned int)v18 >= *(_DWORD *)(a1 + 32) )
            goto LABEL_21;
        }
        v25 = v56;
        while ( 1 )
        {
          v26 = *(_QWORD *)(v23 + 8 * v16 + 8);
          v27 = *(_DWORD *)(v25 + 20);
          v28 = *(_OWORD *)(v25 + 4);
          v29 = *(_OWORD *)(v25 + 20);
          v45.y = *(_DWORD *)(v25 + 24);
          HIDWORD(v46) = v45.y;
          v30 = v27 + *(_DWORD *)(v26 + 8LL * v24);
          v48 = 0LL;
          v45.x = v30;
          LODWORD(v46) = v27 + *(_DWORD *)(v26 + 8LL * v24 + 4);
          v49 = v28;
          v52 = v29;
          ConvertPointCoordinates(*(_QWORD *)&v45, (int *)&v52, (int *)&v49, &v48);
          v31 = *(_OWORD *)(v25 + 4);
          v32 = *(_OWORD *)(v25 + 20);
          *(_QWORD *)&v49 = 0LL;
          v52 = v31;
          *(_OWORD *)v53 = v32;
          ConvertPointCoordinates(v46, v53, (int *)&v52, &v49);
          v33 = *(_DWORD *)(v25 + 4);
          v16 = (unsigned int)((v48 - v33) * (v48 - v33));
          if ( v19 >= (unsigned int)v16 && v19 < ((int)v49 - v33) * ((int)v49 - v33) )
            break;
          v23 = *(_QWORD *)(a1 + 24);
          ++v24;
          v16 = v47;
          if ( v24 >= *(_DWORD *)(v23 + 8 * v47 + 16) )
            goto LABEL_18;
        }
        v10 = 1;
      }
LABEL_21:
      v47 = *(_OWORD *)(a2 + 20);
      if ( *(_DWORD *)(W32GetUserSessionState(v16) + 272) == 90 || *(_DWORD *)(W32GetUserSessionState(v34) + 272) == 270 )
      {
        v37 = *(_DWORD *)(a2 + 24);
        v36 = *(_DWORD *)(a2 + 32);
        v35 = *(_DWORD *)(a2 + 28);
      }
      else
      {
        v35 = HIDWORD(v47);
        v36 = DWORD2(v47);
        v37 = v47;
      }
      v38 = W32GetUserSessionState(v34);
      lambda_0204d79c2644d1b9cd88bde7d32e7162_::operator()(
        *(unsigned int *)(v38 + 272),
        &v54,
        (int *)(v55 + 40),
        a2 + 20,
        *(_DWORD *)(v38 + 272));
      v40 = W32GetUserSessionState(v39);
      lambda_0204d79c2644d1b9cd88bde7d32e7162_::operator()(
        *(unsigned int *)(v40 + 272),
        &v45,
        v50,
        a2 + 4,
        *(_DWORD *)(v40 + 272));
      v42 = W32GetUserSessionState(v41);
      lambda_0204d79c2644d1b9cd88bde7d32e7162_::operator()(
        *(unsigned int *)(v42 + 272),
        &v46,
        v51,
        v56 + 4,
        *(_DWORD *)(v42 + 272));
      if ( v10 || *(_DWORD *)(W32GetUserSessionState(v43) + 36) == 6 )
        return v10;
      if ( a6 == 1 )
      {
        if ( v54.y > v35 - 1000 && v45.x >= (int)v46 )
          return 1;
        if ( v54.x <= v36 - 530 )
          return v10;
      }
      else
      {
        if ( a6 )
        {
          LODWORD(v56) = 0x20000;
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 840);
        }
        if ( v54.y > v35 - 1000 && v45.x <= (int)v46 )
          return 1;
        if ( v54.x >= v37 + 530 )
          return v10;
      }
      if ( v45.y >= SHIDWORD(v46) )
        return 1;
      return v10;
    }
  }
  return 0LL;
}
