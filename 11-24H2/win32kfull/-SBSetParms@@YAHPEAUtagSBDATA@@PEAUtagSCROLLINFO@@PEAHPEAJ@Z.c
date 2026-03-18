/*
 * XREFs of ?SBSetParms@@YAHPEAUtagSBDATA@@PEAUtagSCROLLINFO@@PEAHPEAJ@Z @ 0x14025766C
 * Callers:
 *     xxxSetScrollBar @ 0x140032F08 (xxxSetScrollBar.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_dlDdddddl @ 0x1402E37EC (WPP_RECORDER_AND_TRACE_SF_dlDdddddl.c)
 */

__int64 __fastcall SBSetParms(struct tagSBDATA *a1, unsigned __int64 a2, int *a3, int *a4)
{
  int v5; // r10d
  _DWORD *v7; // r15
  char v9; // r8
  int v10; // eax
  int v11; // ecx
  int v12; // eax
  unsigned int v13; // ecx
  unsigned int v14; // eax
  unsigned int v15; // r9d
  int v16; // eax
  int v17; // ecx
  bool v18; // cf
  int v19; // eax
  int v20; // ecx
  int v21; // ecx
  __int64 UserSessionState; // rax
  int v23; // r8d
  int v24; // edx
  BOOL v26; // [rsp+90h] [rbp-38h]
  char v27; // [rsp+94h] [rbp-34h]
  bool v28; // [rsp+D8h] [rbp+10h]

  v26 = 0;
  v5 = *(_DWORD *)(a2 + 4);
  v7 = (_DWORD *)a2;
  if ( (v5 & 0x1000) != 0 )
    *a4 = *((_DWORD *)a1 + 3);
  v9 = 1;
  v27 = 1;
  if ( (v5 & 1) != 0 )
  {
    v10 = *(_DWORD *)(a2 + 8);
    v11 = *(_DWORD *)(a2 + 12);
    a2 = v10 == v11;
    v26 = v10 == v11;
    if ( v10 > v11 )
    {
      v7[3] = v10;
      v11 = v10;
    }
    if ( *(_DWORD *)a1 != v10 || *((_DWORD *)a1 + 1) != v11 )
    {
      *(_DWORD *)a1 = v10;
      *((_DWORD *)a1 + 1) = v7[3];
      v5 = v7[1];
      if ( (v5 & 2) == 0 )
      {
        v5 |= 2u;
        v7[1] = v5;
        v7[4] = *((_DWORD *)a1 + 2);
      }
      if ( (v5 & 4) == 0 )
      {
        v5 |= 4u;
        v7[1] = v5;
        v7[5] = *((_DWORD *)a1 + 3);
      }
      v26 = 1;
    }
  }
  if ( (v5 & 2) == 0 )
    goto LABEL_22;
  v12 = *(_DWORD *)a1 - *((_DWORD *)a1 + 1);
  if ( v12 < 0 )
    v12 = *((_DWORD *)a1 + 1) - *(_DWORD *)a1;
  v13 = v7[4];
  v14 = v12 + 1;
  if ( v13 > v14 )
  {
    v7[4] = v14;
    v13 = v14;
  }
  if ( *((_DWORD *)a1 + 2) == v13 )
  {
LABEL_22:
    v15 = v26;
  }
  else
  {
    *((_DWORD *)a1 + 2) = v13;
    v5 = v7[1];
    if ( (v5 & 4) == 0 )
    {
      v5 |= 4u;
      v7[1] = v5;
      v7[5] = *((_DWORD *)a1 + 3);
    }
    v15 = 1;
    v26 = 1;
  }
  if ( (v5 & 4) != 0 )
  {
    v16 = *((_DWORD *)a1 + 2);
    v17 = v16 - 1;
    v18 = v16 != 0;
    v19 = *(_DWORD *)a1;
    v20 = *((_DWORD *)a1 + 1) - (v18 ? v17 : 0);
    a2 = (unsigned int)v7[5];
    if ( (int)a2 >= *(_DWORD *)a1 )
    {
      v19 = v7[5];
      if ( (int)a2 > v20 )
      {
        v7[5] = v20;
        v19 = v20;
      }
    }
    else
    {
      v7[5] = v19;
    }
    if ( *((_DWORD *)a1 + 3) != v19 )
    {
      *((_DWORD *)a1 + 3) = v19;
      v15 = 1;
      v26 = 1;
    }
  }
  v21 = v7[1];
  if ( (v21 & 0x1000) == 0 )
    *a4 = *((_DWORD *)a1 + 3);
  if ( (v21 & 1) == 0 )
  {
    if ( (v21 & 2) == 0 )
      goto LABEL_37;
LABEL_36:
    *a3 = *((_DWORD *)a1 + 2) <= *((_DWORD *)a1 + 1) - *(_DWORD *)a1;
    goto LABEL_37;
  }
  if ( *(_DWORD *)a1 != *((_DWORD *)a1 + 1) )
    goto LABEL_36;
  *a3 = 0;
LABEL_37:
  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
    || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x100) == 0
    || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u )
  {
    v9 = 0;
    v27 = 0;
  }
  v28 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v9 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, a2);
    LOBYTE(v23) = v28;
    LOBYTE(v24) = v27;
    WPP_RECORDER_AND_TRACE_SF_dlDdddddl(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v24,
      v23,
      *(_QWORD *)(UserSessionState + 69416));
    return v26;
  }
  return v15;
}
