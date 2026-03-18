/*
 * XREFs of ?InitMapSharedSection@@YAJPEAU_EPROCESS@@PEAU_USERCONNECT@@@Z @ 0x1400A563C
 * Callers:
 *     NtUserProcessConnect @ 0x1400A5000 (NtUserProcessConnect.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1400A5B18 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1400A5B9C (WPP_RECORDER_AND_TRACE_SF_q.c)
 */

__int64 __fastcall InitMapSharedSection(struct _EPROCESS *a1, struct _USERCONNECT *a2)
{
  bool v4; // bl
  bool v5; // si
  __int64 UserSessionState; // rax
  int v7; // r8d
  int v8; // edx
  _QWORD *ProcessWin32Process; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 result; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  bool v16; // si
  bool v17; // r14
  char v18; // bl
  __int64 v19; // rax
  int v20; // r8d
  int v21; // edx
  __int64 v22; // rax
  int v23; // ebx
  __int64 v24; // rbx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // rbx
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rcx
  __int64 v33; // rdx
  __int64 v34; // rax
  __int64 v35; // rsi
  __int64 v36; // rcx
  __int64 v37; // rdx
  __int64 v38; // rbx
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // rax
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // rbx
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // rcx
  __int64 v48; // rdx
  __int64 v49; // rbx
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // rsi
  __int64 v53; // r14
  __int64 v54; // rdx
  __int64 v55; // rcx
  char *v56; // rdi
  __int64 v57; // r12
  int v58; // ecx
  __int64 v59; // rbx
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // rax
  _QWORD *v63; // rax
  __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // rax
  __int64 v67; // rax
  _QWORD v68[2]; // [rsp+50h] [rbp-10h] BYREF
  __int64 v69; // [rsp+A0h] [rbp+40h] BYREF
  __int64 v70; // [rsp+B0h] [rbp+50h] BYREF
  __int64 v71; // [rsp+B8h] [rbp+58h] BYREF

  v70 = 0LL;
  v69 = 0LL;
  v4 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 4) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
  v5 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v4 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, a2);
    LOBYTE(v7) = v5;
    LOBYTE(v8) = v4;
    WPP_RECORDER_AND_TRACE_SF_(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v8,
      v7,
      *(_QWORD *)(UserSessionState + 69416),
      4,
      3,
      14,
      (__int64)&WPP_8c46d2143b0735a388a3e4e1a89de128_Traceguids);
  }
  ProcessWin32Process = (_QWORD *)PsGetProcessWin32Process(a1);
  if ( ProcessWin32Process && *ProcessWin32Process && ProcessWin32Process[92] )
  {
    v66 = PsGetProcessWin32Process(a1);
    if ( v66 )
      v66 &= -(__int64)(*(_QWORD *)v66 != 0LL);
    v70 = *(_QWORD *)(v66 + 736);
    v67 = PsGetProcessWin32Process(a1);
    if ( v67 )
    {
      v65 = -*(_QWORD *)v67;
      v64 = -(__int64)(*(_QWORD *)v67 != 0LL);
      v67 &= v64;
    }
    v69 = *(_QWORD *)(v67 + 744);
  }
  else
  {
    v68[0] = 0LL;
    v71 = 0x200000LL;
    v12 = W32GetUserSessionState(v11, v10);
    result = ((__int64 (__fastcall *)(_QWORD, struct _EPROCESS *, __int64 *, _QWORD, _QWORD, _QWORD *, __int64 *, int, int, int))MmMapViewOfSection)(
               *(_QWORD *)(v12 + 19896),
               a1,
               &v70,
               0LL,
               0LL,
               v68,
               &v71,
               2,
               0x400000,
               2);
    if ( (int)result < 0 )
      return result;
    v15 = *(_QWORD *)&WPP_GLOBAL_Control;
    v16 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
       && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 4) != 0
       && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
    v17 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v16 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v18 = v70;
      v19 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v14);
      LOBYTE(v20) = v17;
      LOBYTE(v21) = v16;
      WPP_RECORDER_AND_TRACE_SF_q(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v21,
        v20,
        *(_QWORD *)(v19 + 69416),
        4,
        3,
        15,
        (__int64)&WPP_8c46d2143b0735a388a3e4e1a89de128_Traceguids,
        v18);
    }
    v71 = 0LL;
    v68[0] = 2101248LL;
    v22 = W32GetUserSessionState(v15, v14);
    v23 = ((__int64 (__fastcall *)(_QWORD, struct _EPROCESS *, __int64 *, _QWORD, _QWORD, _QWORD *, __int64 *, int, int, int))MmMapViewOfSection)(
            *(_QWORD *)(v22 + 19896),
            a1,
            &v69,
            0LL,
            0LL,
            v68,
            &v71,
            2,
            0x400000,
            2);
    if ( v23 < 0 )
    {
      MmUnmapViewOfSection(a1, v70);
      return (unsigned int)v23;
    }
    v63 = (_QWORD *)PsGetProcessWin32Process(a1);
    if ( v63 && *v63 )
    {
      v63[92] = v70;
      v65 = v69;
      v63[93] = v69;
    }
  }
  *((_QWORD *)a2 + 5) = v69;
  v24 = W32GetUserSessionState(v65, v64);
  v27 = *(_QWORD *)(W32GetUserSessionState(v26, v25) + 19920);
  *((_QWORD *)a2 + 1) = v69 + *(_QWORD *)(v24 + 19936) - v27;
  v29 = W32GetUserSessionState(v27, v28);
  v32 = *(_QWORD *)(W32GetUserSessionState(v31, v30) + 19912);
  *((_QWORD *)a2 + 2) = v70 + *(_QWORD *)(v29 + 19944) - v32;
  v34 = W32GetUserSessionState(v32, v33);
  v35 = v34 + 19936;
  v36 = *(unsigned int *)(v34 + 19952);
  *((_DWORD *)a2 + 6) = v36;
  v38 = W32GetUserSessionState(v36, v37);
  v41 = W32GetUserSessionState(v40, v39);
  v42 = v69 + *(_QWORD *)(v38 + 19960) - *(_QWORD *)(v41 + 19920);
  *((_QWORD *)a2 + 4) = v42;
  *((_DWORD *)a2 + 136) = *(_DWORD *)(v35 + 536);
  v44 = W32GetUserSessionState(v43, v42);
  v47 = *(_QWORD *)(W32GetUserSessionState(v46, v45) + 19920);
  *((_QWORD *)a2 + 69) = v69 + *(_QWORD *)(v44 + 20480) - v47;
  *((_DWORD *)a2 + 140) = *(_DWORD *)(v35 + 552);
  v49 = W32GetUserSessionState(v47, v48);
  v52 = v35 - (_QWORD)a2;
  v53 = 31LL;
  v55 = *(_QWORD *)(W32GetUserSessionState(v51, v50) + 19920);
  v56 = (char *)a2 + 48;
  *((_QWORD *)a2 + 71) = v69 + *(_QWORD *)(v49 + 20496) - v55;
  v57 = 192LL - (_QWORD)a2;
  do
  {
    *(_DWORD *)v56 = *(_DWORD *)&v56[v52 - 8];
    if ( *(_QWORD *)&v56[v52] )
    {
      v59 = W32GetUserSessionState(v55, v54);
      v62 = W32GetUserSessionState(v61, v60);
      v55 = v59 + v57;
      v54 = v69 + *(_QWORD *)&v56[v59 + 19744 + v57] - *(_QWORD *)(v62 + 19920);
    }
    else
    {
      v54 = 0LL;
    }
    *((_QWORD *)v56 + 1) = v54;
    v56 += 16;
    --v53;
  }
  while ( v53 );
  v58 = *(_DWORD *)(W32GetUserSessionState(v55, v54) + 71432);
  result = 0LL;
  *((_DWORD *)a2 + 144) = v58;
  return result;
}
