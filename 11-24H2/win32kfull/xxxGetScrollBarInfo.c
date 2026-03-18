/*
 * XREFs of xxxGetScrollBarInfo @ 0x140256A64
 * Callers:
 *     NtUserGetScrollBarInfo @ 0x1401AC9D0 (NtUserGetScrollBarInfo.c)
 * Callees:
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1400A5B9C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x140189210 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     CalcSBStuff @ 0x140258028 (CalcSBStuff.c)
 *     GetWndSBDisableFlags @ 0x1402585DC (GetWndSBDisableFlags.c)
 *     GetObjectIdString @ 0x1402E0004 (GetObjectIdString.c)
 *     WPP_RECORDER_AND_TRACE_SF_qddddddddd @ 0x1402E0040 (WPP_RECORDER_AND_TRACE_SF_qddddddddd.c)
 *     WPP_RECORDER_AND_TRACE_SF_qsllll @ 0x1402E0234 (WPP_RECORDER_AND_TRACE_SF_qsllll.c)
 *     memset_0 @ 0x140340780 (memset_0.c)
 */

__int64 __fastcall xxxGetScrollBarInfo(__int64 *a1, unsigned int a2, int *a3)
{
  unsigned int v3; // r14d
  __int64 *v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // rcx
  char v8; // r13
  bool v9; // al
  int v10; // r8d
  int v11; // edx
  int v12; // r9d
  int v13; // edi
  bool v14; // bl
  __int64 v15; // rax
  int v16; // r8d
  int v17; // edx
  unsigned int v18; // edi
  int v19; // ecx
  __int64 v20; // rcx
  bool v21; // di
  bool v22; // r14
  __int64 v23; // rbx
  __int64 UserSessionState; // rax
  int v25; // r8d
  int v26; // edx
  char WndSBDisableFlags; // bl
  __int64 v29; // rdx
  int v30; // edx
  unsigned int v31; // r10d
  __int64 v32; // rdx
  unsigned int v33; // r8d
  unsigned int v34; // r11d
  _QWORD *v35; // r9
  char v36; // al
  _QWORD *v37; // rbx
  int v38; // ecx
  int v39; // edx
  int v40; // eax
  int v41; // ecx
  bool v42; // al
  unsigned int *v43; // rcx
  __int64 v44; // rax
  int v45; // r8d
  int v46; // edx
  bool v47; // bl
  __int64 v48; // rax
  int v49; // r8d
  int v50; // edx
  _BYTE v51[16]; // [rsp+A0h] [rbp-29h] BYREF
  unsigned int v52; // [rsp+B0h] [rbp-19h]
  unsigned int v53; // [rsp+B4h] [rbp-15h]
  unsigned int v54; // [rsp+B8h] [rbp-11h]
  unsigned int v55; // [rsp+BCh] [rbp-Dh]
  int v56; // [rsp+C4h] [rbp-5h]
  int v57; // [rsp+C8h] [rbp-1h]
  unsigned int v58; // [rsp+D0h] [rbp+7h]
  int v59; // [rsp+D4h] [rbp+Bh]
  bool v62; // [rsp+140h] [rbp+77h]
  bool v63; // [rsp+140h] [rbp+77h]
  bool v64; // [rsp+148h] [rbp+7Fh]
  bool v65; // [rsp+148h] [rbp+7Fh]

  v3 = a2;
  v5 = a1;
  memset_0(v51, 0, 0x40uLL);
  v7 = *(_QWORD *)&WPP_GLOBAL_Control;
  v8 = 1;
  v9 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x100) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
  v62 = v9;
  v64 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v9 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v7) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    W32GetUserSessionState(v7, v6);
    GetObjectIdString(a2);
    LOBYTE(v10) = v64;
    LOBYTE(v11) = v62;
    WPP_RECORDER_AND_TRACE_SF_qsllll(*(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL), v11, v10, v12);
    v5 = a1;
    v3 = a2;
  }
  v13 = *a3;
  if ( *a3 == 60 )
  {
    *(_OWORD *)(a3 + 9) = 0LL;
    *(_QWORD *)(a3 + 13) = 0LL;
    if ( v3 == -5 )
    {
      v6 = v5[5];
      v18 = 1;
      if ( (*(_BYTE *)(v6 + 30) & 0x20) != 0 )
      {
        LOWORD(v19) = 0;
        if ( (*(_BYTE *)(v6 + 16) & 2) == 0 )
        {
          a3[9] = 0x10000;
          LOWORD(v19) = 0;
        }
LABEL_24:
        if ( (v19 & 0x8000) != 0 )
        {
          v21 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
             && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x100) != 0
             && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
          v22 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
          if ( v21 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            v23 = *v5;
            UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v6);
            LOBYTE(v25) = v22;
            LOBYTE(v26) = v21;
            WPP_RECORDER_AND_TRACE_SF_q(
              *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
              v26,
              v25,
              *(_QWORD *)(UserSessionState + 69416),
              4,
              9,
              13,
              (__int64)&WPP_e5d9e509e5ea359fb1405ea7b7a41ed0_Traceguids,
              v23);
          }
          return 1LL;
        }
LABEL_36:
        WndSBDisableFlags = GetWndSBDisableFlags(v5, v18);
        if ( (a3[9] & 0x10000) != 0 || (CalcSBStuff(v5, v51, v18), v29 = v5[5], (*(_BYTE *)(v29 + 26) & 0x40) == 0) )
        {
          v32 = v55;
          v31 = v54;
        }
        else
        {
          v30 = *(_DWORD *)(v29 + 96) - *(_DWORD *)(v29 + 88);
          if ( !v18 )
          {
            v31 = v54;
            v33 = v30 - v53;
            v34 = v30 - v52;
            v32 = v55;
            goto LABEL_43;
          }
          v31 = v30 - v55;
          v32 = v30 - v54;
        }
        v33 = v52;
        v34 = v53;
LABEL_43:
        if ( (WndSBDisableFlags & 1) != 0 )
        {
          a3[10] |= 1u;
          a3[11] |= 1u;
        }
        if ( (WndSBDisableFlags & 2) != 0 )
        {
          a3[14] |= 1u;
          a3[13] |= 1u;
        }
        if ( (WndSBDisableFlags & 3) == 3 )
          a3[9] |= 1u;
        v35 = v5 + 5;
        v36 = *(_BYTE *)(v5[5] + 22);
        if ( (v36 & 0x10) == 0 )
          goto LABEL_61;
        if ( v3 == -5 )
        {
          if ( (v36 & 0x20) == 0 )
          {
LABEL_61:
            if ( (a3[9] & 0x10000) == 0 )
            {
              if ( v18 )
              {
                a3[1] = v31;
                a3[2] = v33;
                a3[3] = v32;
                a3[4] = v34;
              }
              else
              {
                a3[2] = v31;
                v31 = v33;
                a3[1] = v33;
                a3[3] = v34;
                a3[4] = v32;
              }
              v38 = *(_DWORD *)(*v35 + 88LL);
              v39 = *(_DWORD *)(*v35 + 92LL);
              a3[3] += v38;
              a3[4] += v39;
              a3[2] += v39;
              v40 = v31 + v38;
              v41 = v56;
              v32 = v58;
              a3[1] = v40;
              a3[5] = v41 - v33;
              a3[6] = v59 - v33;
              a3[7] = v32 - v33;
              if ( v59 == v41 )
                a3[11] |= 0x8000u;
              if ( (_DWORD)v32 == v57 )
                a3[13] |= 0x8000u;
            }
            v42 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
               && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x100) != 0
               && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
            v43 = &WPP_RECORDER_INITIALIZED;
            v63 = v42;
            v65 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
            if ( v42 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v43) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
              v44 = W32GetUserSessionState(v43, v32);
              LOBYTE(v45) = v65;
              LOBYTE(v46) = v63;
              WPP_RECORDER_AND_TRACE_SF_qddddddddd(
                *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
                v46,
                v45,
                *(_QWORD *)(v44 + 69416));
            }
            return 1LL;
          }
          v35 = v5 + 5;
        }
        v37 = v5 + 5;
        if ( (v36 & 1) != 0 )
        {
          a3[10] |= 8u;
          v37 = v35;
        }
        v35 = v5 + 5;
        if ( (*(_BYTE *)(v5[5] + 22) & 2) != 0 )
        {
          a3[11] |= 8u;
          v35 = v37;
        }
        if ( (*(_BYTE *)(*v35 + 22LL) & 4) != 0 )
          a3[13] |= 8u;
        if ( (*(_BYTE *)(*v35 + 22LL) & 8) != 0 )
        {
          a3[14] |= 8u;
          v35 = v5 + 5;
        }
        goto LABEL_61;
      }
    }
    else
    {
      if ( v3 != -6 )
      {
        if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
          || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x100) == 0
          || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 2u )
        {
          v8 = 0;
        }
        v47 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( v8 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          v48 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v6);
          LOBYTE(v49) = v47;
          LOBYTE(v50) = v8;
          WPP_RECORDER_AND_TRACE_SF_d(
            *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
            v50,
            v49,
            *(_QWORD *)(v48 + 69416),
            2,
            9,
            12,
            (__int64)&WPP_e5d9e509e5ea359fb1405ea7b7a41ed0_Traceguids,
            v3);
        }
        goto LABEL_84;
      }
      v20 = v5[5];
      v18 = 0;
      if ( (*(_BYTE *)(v20 + 30) & 0x10) != 0 )
      {
        if ( (*(_BYTE *)(v20 + 16) & 4) == 0 )
          a3[9] = 0x10000;
        goto LABEL_36;
      }
    }
    a3[9] |= 0x8000u;
    v19 = a3[9];
    goto LABEL_24;
  }
  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
    || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x100) == 0
    || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 2u )
  {
    v8 = 0;
  }
  v14 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v8 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v15 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v6);
    LOBYTE(v16) = v14;
    LOBYTE(v17) = v8;
    WPP_RECORDER_AND_TRACE_SF_d(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v17,
      v16,
      *(_QWORD *)(v15 + 69416),
      2,
      9,
      11,
      (__int64)&WPP_e5d9e509e5ea359fb1405ea7b7a41ed0_Traceguids,
      v13);
  }
LABEL_84:
  UserSetLastError(87);
  return 0LL;
}
