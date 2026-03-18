/*
 * XREFs of ApiSetpGetContractKeyInfo @ 0x1406560E8
 * Callers:
 *     ApiSetQuerySchemaInfo_V7 @ 0x140654ACC (ApiSetQuerySchemaInfo_V7.c)
 *     ApiSetpResolveHost @ 0x1406551AC (ApiSetpResolveHost.c)
 *     ApiSetCompose_ProcessV7Extension_Phase0 @ 0x1406557CC (ApiSetCompose_ProcessV7Extension_Phase0.c)
 *     ApiSetCompose_ProcessV7Extension_Phase1 @ 0x140655A2C (ApiSetCompose_ProcessV7Extension_Phase1.c)
 *     ApiSetCompose_V7_ProcessV6Extension_Phase0 @ 0x140656E3C (ApiSetCompose_V7_ProcessV6Extension_Phase0.c)
 *     ApiSetCompose_V7_ProcessV6Extension_Phase1 @ 0x14065702C (ApiSetCompose_V7_ProcessV6Extension_Phase1.c)
 * Callees:
 *     <none>
 */

char __fastcall ApiSetpGetContractKeyInfo(_QWORD *a1, unsigned __int16 a2, char a3, __int64 a4)
{
  char v5; // r10
  char v6; // r8
  unsigned __int64 v7; // rax
  bool v8; // zf
  __int64 v9; // rax
  __int64 v10; // rax
  char v11; // r12
  char v12; // si
  char v13; // bl
  __int16 v14; // di
  char v15; // r14
  __int64 v16; // r15
  unsigned __int16 v17; // r8
  unsigned __int8 *v18; // r15
  __int64 v19; // rbp
  __int16 v20; // r11

  *(_OWORD *)a4 = 0LL;
  *(_OWORD *)(a4 + 16) = 0LL;
  if ( a2 < 5u )
    return 0;
  v5 = 0;
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
  *(_BYTE *)(a4 + 10) = a3;
  v11 = 0;
  *(_QWORD *)a4 = a1;
  v12 = 0;
  *(_WORD *)(a4 + 8) = a2;
  v13 = 0;
  v14 = 0;
  v15 = 1;
  v16 = 2LL * a2;
  v17 = a2;
  if ( !a3 )
    v16 = a2;
  v18 = (unsigned __int8 *)a1 + v16;
  v19 = (a3 != 0) + 1LL;
  while ( 1 )
  {
    v18 -= v19;
    --v17;
    v20 = *v18;
    if ( (_BYTE)v20 != 45 )
      break;
    if ( !v13 )
    {
      *(_DWORD *)(a4 + 12) = 1;
      *(_WORD *)(a4 + 18) = a2;
      *(_WORD *)(a4 + 20) = a2;
      return 1;
    }
    if ( v12 )
      goto LABEL_36;
    *(_WORD *)(a4 + 24) = v14;
    v12 = 1;
    v14 = 0;
    *(_DWORD *)(a4 + 12) = 3;
    *(_WORD *)(a4 + 18) = v17;
    v15 = 1;
    v13 = 0;
LABEL_31:
    if ( v17 <= 1u )
      return v5;
  }
  if ( (_BYTE)v20 != 126 )
  {
    if ( (_BYTE)v20 == 46 )
    {
      if ( v12 || v11 )
        return v5;
      a2 = v17;
      v11 = 1;
      v15 = 1;
      v13 = 0;
    }
    else
    {
      if ( (unsigned __int8)(v20 - 48) > 9u )
      {
        v13 = 0;
      }
      else
      {
        v14 = v20 + 10 * v14 - 48;
        if ( v15 )
          v13 = 1;
      }
      v15 = 0;
    }
    goto LABEL_31;
  }
  if ( v12 )
    return v5;
  *(_WORD *)(a4 + 18) = a2;
  *(_DWORD *)(a4 + 12) = 2;
  *(_WORD *)(a4 + 22) = a2 - v17 - 1;
LABEL_36:
  *(_WORD *)(a4 + 20) = v17;
  return 1;
}
