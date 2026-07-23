/*
 * XREFs of ApiSetpGetContractKeyInfo @ 0x140660A78
 * Callers:
 *     ApiSetQuerySchemaInfo2_V7 @ 0x14065F40C (ApiSetQuerySchemaInfo2_V7.c)
 *     ApiSetpResolveHost @ 0x14065FB18 (ApiSetpResolveHost.c)
 *     ApiSetCompose_ProcessV7Extension_Phase0 @ 0x1406600B0 (ApiSetCompose_ProcessV7Extension_Phase0.c)
 *     ApiSetCompose_ProcessV7Extension_Phase1 @ 0x14066031C (ApiSetCompose_ProcessV7Extension_Phase1.c)
 *     ApiSetCompose_V7_ProcessV6Extension_Phase0 @ 0x1406619D0 (ApiSetCompose_V7_ProcessV6Extension_Phase0.c)
 *     ApiSetCompose_V7_ProcessV6Extension_Phase1 @ 0x140661BC4 (ApiSetCompose_V7_ProcessV6Extension_Phase1.c)
 * Callees:
 *     <none>
 */

char __fastcall ApiSetpGetContractKeyInfo(_QWORD *a1, unsigned __int16 a2, char a3, __int64 a4)
{
  unsigned __int16 v4; // r10
  char v6; // cl
  unsigned __int64 v7; // rax
  bool v8; // zf
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // r15
  char v12; // r13
  unsigned __int8 *v13; // r15
  char v14; // r14
  char v15; // r11
  __int16 v16; // si
  char v17; // bp
  __int64 v18; // rdi
  __int16 v19; // cx
  _BYTE *v21; // rcx
  _BYTE *v22; // rcx
  char v23; // r10
  char *v24; // rcx
  char v25; // bl
  char v26; // r11
  __int16 v27; // dx

  v4 = a2;
  *(_OWORD *)a4 = 0LL;
  *(_OWORD *)(a4 + 16) = 0LL;
  *(_QWORD *)(a4 + 32) = 0LL;
  if ( a2 < 5u )
    return 0;
  v6 = 0;
  if ( a3 )
  {
    if ( (unsigned __int16)(2 * a2) < 8u )
      goto LABEL_13;
    v7 = *a1 & 0xFFFFFFDFFFDFFFDFuLL;
    if ( v7 != 0x2D004900500041LL )
    {
      v8 = v7 == 0x2D005400580045LL;
      goto LABEL_11;
    }
    goto LABEL_12;
  }
  v9 = -1LL;
  do
    ++v9;
  while ( *((_BYTE *)a1 + v9) );
  if ( (unsigned __int64)(v9 - 4) <= 0xFFFB )
  {
    v10 = *(_DWORD *)a1 & 0xFFDFDFDF;
    if ( v10 != *(_QWORD *)"API-" )
    {
      v8 = v10 == *(_QWORD *)"EXT-";
LABEL_11:
      if ( !v8 )
        goto LABEL_13;
    }
LABEL_12:
    v6 = 1;
  }
LABEL_13:
  if ( !v6 )
    return 0;
  *(_QWORD *)a4 = a1;
  *(_WORD *)(a4 + 8) = a2;
  v11 = 2LL * a2;
  *(_BYTE *)(a4 + 10) = a3;
  if ( !a3 )
    v11 = a2;
  v12 = 0;
  v13 = (unsigned __int8 *)a1 + v11;
  v14 = 0;
  v15 = 0;
  v16 = 0;
  v17 = 1;
  v18 = (a3 != 0) + 1LL;
  while ( 1 )
  {
    v13 -= v18;
    --a2;
    v19 = *v13;
    if ( (_BYTE)v19 != 45 )
      break;
    if ( !v15 )
    {
      *(_DWORD *)(a4 + 12) = 1;
      a2 = v4;
      *(_WORD *)(a4 + 18) = v4;
      goto LABEL_36;
    }
    if ( v14 )
      goto LABEL_36;
    v15 = 0;
    *(_WORD *)(a4 + 24) = v16;
    v16 = 0;
    *(_DWORD *)(a4 + 12) = 3;
    *(_WORD *)(a4 + 18) = a2;
    v14 = 1;
    v17 = 1;
LABEL_31:
    if ( a2 <= 1u )
      return 0;
  }
  if ( (_BYTE)v19 != 126 )
  {
    if ( (_BYTE)v19 == 46 )
    {
      if ( v14 || v12 )
        return 0;
      v4 = a2;
      v12 = 1;
      v17 = 1;
      v15 = 0;
    }
    else
    {
      if ( (unsigned __int8)(v19 - 48) > 9u )
      {
        v15 = 0;
      }
      else
      {
        v16 = v19 + 10 * v16 - 48;
        if ( v17 )
          v15 = 1;
      }
      v17 = 0;
    }
    goto LABEL_31;
  }
  if ( v14 )
    return 0;
  *(_WORD *)(a4 + 18) = v4;
  *(_DWORD *)(a4 + 12) = 2;
  *(_WORD *)(a4 + 22) = v4 - a2 - 1;
LABEL_36:
  *(_WORD *)(a4 + 20) = a2;
  if ( a2 > 7u )
  {
    v21 = (char *)a1 + (-(__int64)(a3 != 0) & 4) + 4;
    if ( ((*v21 - 77) & 0xDF) == 0 )
    {
      v22 = &v21[v18];
      if ( ((*v22 - 83) & 0xDF) == 0 && v22[v18] == 45 )
        *(_DWORD *)(a4 + 26) = 393220;
    }
  }
  v23 = 0;
  v24 = (char *)a1 + 2 * *(unsigned __int16 *)(a4 + 20);
  v25 = 0;
  if ( a2 > 4u )
  {
    while ( 1 )
    {
      v24 -= v18;
      --a2;
      v26 = *v24;
      if ( (unsigned __int8)(*v24 - 48) > 9u )
        break;
      if ( !v25 && v26 == 49 )
        v23 = 1;
      v25 = 1;
      if ( a2 <= 4u )
        return 1;
    }
    if ( v25 )
    {
      if ( ((v26 - 76) & 0xDF) == 0 )
      {
        v27 = a2 - 1;
        if ( v24[-v18] == 45 )
        {
          *(_WORD *)(a4 + 30) = v27;
          *(_WORD *)(a4 + 32) = v27 + (v23 != 0) + 1;
        }
      }
    }
  }
  return 1;
}
