/*
 * XREFs of ProcessCommandInSpecificQueue @ 0x14000AD90
 * Callers:
 *     ProcessCommand @ 0x140009500 (ProcessCommand.c)
 * Callees:
 *     AssignCommandId @ 0x14000B2A0 (AssignCommandId.c)
 *     ProcessCommandTrace @ 0x14000B440 (ProcessCommandTrace.c)
 */

char __fastcall ProcessCommandInSpecificQueue(__int64 a1, __int64 a2, __int64 a3, unsigned __int16 a4)
{
  __int64 v7; // r15
  __int16 v8; // cx
  unsigned __int16 *v9; // r14
  volatile signed __int16 *v10; // rbx
  int v11; // eax
  unsigned __int16 *v12; // r12
  bool v13; // zf
  __int64 v14; // r12
  unsigned __int8 v15; // cl
  int v16; // ebx
  _WORD *v17; // r14
  int v18; // ebx
  __int64 v19; // r8
  unsigned int i; // ecx
  __int64 v21; // rcx
  unsigned int k; // ecx
  int v23; // ecx
  int v24; // ebx
  _OWORD *v25; // rdx
  __int64 v26; // r8
  unsigned int m; // ecx
  __int64 v28; // rcx
  unsigned int ii; // ecx
  __int64 v30; // rcx
  int v31; // ecx
  __int64 v32; // r9
  char result; // al
  unsigned int j; // edx
  unsigned int n; // edx
  __int64 v36; // rcx
  __int64 v37; // rax
  unsigned __int64 v38; // rdx
  unsigned __int64 v39; // rax
  __int64 v40; // r9
  __int64 v41; // r8
  signed __int32 v42[6]; // [rsp+8h] [rbp-59h] BYREF
  __int64 v43; // [rsp+28h] [rbp-39h]
  int *v44; // [rsp+30h] [rbp-31h]
  char *v45; // [rsp+38h] [rbp-29h]
  _DWORD v46[2]; // [rsp+48h] [rbp-19h]
  __int64 v47; // [rsp+50h] [rbp-11h] BYREF
  _QWORD v48[2]; // [rsp+58h] [rbp-9h] BYREF
  __int128 v49; // [rsp+68h] [rbp+7h]
  char v50; // [rsp+C8h] [rbp+67h] BYREF
  unsigned int v51; // [rsp+D0h] [rbp+6Fh] BYREF
  int v52; // [rsp+D8h] [rbp+77h] BYREF
  unsigned __int16 v53; // [rsp+E0h] [rbp+7Fh]

  v53 = a4;
  if ( *(_BYTE *)(a2 + 2) == 40 )
    v7 = *(_QWORD *)(a2 + 104);
  else
    v7 = *(_QWORD *)(a2 + 56);
  if ( (v7 & 0xFFF) != 0 )
    v7 = v7 - (v7 & 0xFFF) + 4096;
  v8 = *(_WORD *)(a3 + 48);
  v9 = (unsigned __int16 *)(a3 + 48);
  v48[0] = 1LL;
  v48[1] = 0LL;
  v10 = (volatile signed __int16 *)(a1 + 976);
  v49 = 0LL;
  if ( !v8 )
  {
    _InterlockedIncrement16(v10);
    v8 = *v9;
  }
  v11 = *(_DWORD *)(a1 + 24);
  if ( (v11 & 0x10) != 0 )
  {
    *(_BYTE *)(a2 + 3) = 14;
    result = 0;
    goto LABEL_48;
  }
  v12 = (unsigned __int16 *)(a3 + 48);
  if ( (v11 & 0x100) != 0 )
  {
    if ( v8 )
    {
      *(_BYTE *)(a2 + 3) = 2;
      goto LABEL_60;
    }
    v12 = (unsigned __int16 *)(a3 + 48);
  }
  StorPortExtendedFunction(93LL, a1, 1LL, a3 + 64);
  if ( !(unsigned __int8)AssignCommandId(a1, *v9, v7 + 4216, v7 + 4214, v48) )
  {
    StorPortNotification(4100LL, a1, v48);
    *(_BYTE *)(a2 + 3) = 5;
    v9 = v12;
LABEL_60:
    result = 0;
    goto LABEL_48;
  }
  v13 = *(_BYTE *)(a2 + 2) == 40;
  v14 = 0LL;
  v47 = 0LL;
  if ( v13 )
    v15 = *(_BYTE *)(*(unsigned int *)(a2 + 52) + a2 + 10);
  else
    v15 = *(_BYTE *)(a2 + 7);
  v16 = v15;
  if ( *v9 )
    v14 = 392LL * *(unsigned __int16 *)(a3 + 58) + *(_QWORD *)(a1 + 944) - 392LL;
  v17 = (_WORD *)(v7 + 4214);
  *(_WORD *)(v7 + 4098) = *(_WORD *)(v7 + 4214);
  ProcessCommandTrace(a1, a2, v7 + 4096);
  v18 = v16 << 8;
  *(_QWORD *)(32LL * (unsigned __int16)*v17 + *(_QWORD *)(a3 + 32) + 16) = a2;
  *(_WORD *)(32LL * (unsigned __int16)*v17 + *(_QWORD *)(a3 + 32) + 24) = *(_WORD *)(v7 + 4216);
  if ( *(_DWORD *)(a2 + 12) == 251658240 )
  {
LABEL_57:
    v23 = 24;
  }
  else if ( a2 == a1 + 1016 )
  {
    v23 = 24;
  }
  else
  {
    v19 = *(_QWORD *)(a1 + 1392);
    if ( v19 )
    {
      for ( i = 0; i < *(unsigned __int16 *)(a1 + 1552); ++i )
      {
        if ( a2 == v19 + ((unsigned __int64)i << 7) + 8 )
          goto LABEL_57;
      }
    }
    v21 = *(_QWORD *)(a1 + 1400);
    if ( v21 )
    {
      for ( j = 0; j < *(unsigned __int16 *)(a1 + 1554); ++j )
      {
        if ( a2 == v21 + ((unsigned __int64)j << 7) + 8 )
          goto LABEL_57;
      }
    }
    for ( k = 0; k < 2; ++k )
    {
      if ( a2 == a1 + ((unsigned __int64)k << 7) + 1144 )
        goto LABEL_57;
    }
    v23 = 8;
  }
  v24 = v23 | v18;
  v25 = *(_OWORD **)(*(_QWORD *)(a3 + 24) + 16LL * *(unsigned __int16 *)(v7 + 4216));
  *v25 = *(_OWORD *)(v7 + 4096);
  v25[1] = *(_OWORD *)(v7 + 4112);
  v25[2] = *(_OWORD *)(v7 + 4128);
  v25[3] = *(_OWORD *)(v7 + 4144);
  *(_WORD *)(*(_QWORD *)(a3 + 24) + 16LL * *(unsigned __int16 *)(v7 + 4216) + 8) = *v17;
  if ( ((*(_BYTE *)(a1 + 21) & 1) != 0 || (*(_DWORD *)(a1 + 108) & 2) != 0)
    && *(_DWORD *)(a2 + 12) != 251658240
    && a2 != a1 + 1016 )
  {
    v26 = *(_QWORD *)(a1 + 1392);
    if ( v26 )
    {
      for ( m = 0; m < *(unsigned __int16 *)(a1 + 1552); ++m )
      {
        if ( a2 == v26 + ((unsigned __int64)m << 7) + 8 )
          goto LABEL_43;
      }
    }
    v28 = *(_QWORD *)(a1 + 1400);
    if ( v28 )
    {
      for ( n = 0; n < *(unsigned __int16 *)(a1 + 1554); ++n )
      {
        if ( a2 == v28 + ((unsigned __int64)n << 7) + 8 )
          goto LABEL_43;
      }
    }
    for ( ii = 0; ii < 2; ++ii )
    {
      if ( a2 == a1 + ((unsigned __int64)ii << 7) + 1144 )
        goto LABEL_43;
    }
    StorPortExtendedFunction(47LL, a1, 0LL, &v47);
    *(_QWORD *)(32LL * (unsigned __int16)*v17 + *(_QWORD *)(a3 + 32) + 8) = v47;
    v30 = *(_QWORD *)(a3 + 40);
    if ( v30 )
    {
      *(_QWORD *)(v30 + 16LL * (unsigned __int16)*v17) = 0LL;
      *(_QWORD *)(*(_QWORD *)(a3 + 40) + 16LL * (unsigned __int16)*v17 + 8) = 0LL;
    }
    v24 |= 0x20u;
  }
LABEL_43:
  *(_DWORD *)(32LL * (unsigned __int16)*v17 + *(_QWORD *)(a3 + 32)) = v24;
  _InterlockedIncrement16((volatile signed __int16 *)(a3 + 136));
  v31 = 0;
  if ( (unsigned __int16)(*(_WORD *)(v7 + 4216) + 1) != v53 )
    v31 = (unsigned __int16)(*(_WORD *)(v7 + 4216) + 1);
  **(_DWORD **)(a3 + 16) = v31;
  _InterlockedOr(v42, 0);
  if ( (v24 & 0x20) != 0 && (*(_DWORD *)(a1 + 108) & 2) != 0 && *(_QWORD *)(a3 + 40) )
  {
    StorPortExtendedFunction(47LL, a1, 0LL, &v47);
    *(_QWORD *)(*(_QWORD *)(a3 + 40) + 16LL * *(unsigned __int16 *)(v7 + 4214)) = v47;
  }
  StorPortNotification(4100LL, a1, v48);
  if ( v14 && *(_BYTE *)(v14 + 248) )
  {
    v51 = 0;
    StorPortExtendedFunction(92LL, a1, &v51, v32);
    v36 = *(_QWORD *)(v14 + 256);
    if ( v36 )
    {
      v40 = -10LL * *(unsigned int *)(v14 + 252);
      v50 = 0;
      v41 = *(_QWORD *)(v36 + 8LL * v51);
      v45 = &v50;
      v44 = 0LL;
      v43 = 0LL;
      StorPortExtendedFunction(89LL, a1, v41, v40);
    }
    else
    {
      if ( (*(_DWORD *)(a1 + 3764) & 0x10) != 0 )
      {
        v37 = *(_QWORD *)(a1 + 264);
        v38 = *(_QWORD *)(v37 + 72LL * v51 + 8);
        if ( v38 )
        {
          v46[0] = 0;
          LOWORD(v46[0]) = *(_WORD *)(v37 + 72LL * v51 + 16);
          _BitScanForward64(&v39, v38);
          *(_DWORD *)((char *)v46 + 2) = v39;
          StorPortNotification(4107LL, a1, v14 + 264);
        }
      }
      v44 = &v52;
      v43 = 0LL;
      v52 = 0;
      StorPortNotification(4098LL, a1, v14 + 264);
    }
  }
  v10 = (volatile signed __int16 *)(a1 + 976);
  result = 1;
  v9 = (unsigned __int16 *)(a3 + 48);
LABEL_48:
  if ( !*v9 )
    _InterlockedDecrement16(v10);
  return result;
}
