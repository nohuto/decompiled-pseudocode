/*
 * XREFs of ApiSetpGetSemverKeyVersions @ 0x140660F98
 * Callers:
 *     ApiSetQuerySchemaInfo2_V7 @ 0x14065F40C (ApiSetQuerySchemaInfo2_V7.c)
 *     ApiSetSchemaExpander_InsertSemverContractEntry @ 0x1406617A4 (ApiSetSchemaExpander_InsertSemverContractEntry.c)
 * Callees:
 *     <none>
 */

char __fastcall ApiSetpGetSemverKeyVersions(__int64 a1, _BYTE *a2, _BYTE *a3)
{
  __int64 v5; // rax
  char v6; // si
  char v7; // di
  char v8; // r10
  __int64 v9; // r8
  _BYTE *v10; // r8
  __int64 v11; // r10
  char *v12; // r8
  int v13; // edx
  char v15; // bl
  char *v16; // r8
  int v17; // edx
  char v18; // bl

  if ( a2 )
    *a2 = 0;
  if ( a3 )
    *a3 = 0;
  v5 = *(unsigned __int16 *)(a1 + 20);
  v6 = 0;
  v7 = 0;
  v8 = *(_BYTE *)(a1 + 10);
  if ( *(unsigned __int16 *)(a1 + 8) - (int)v5 <= 0 )
    return 0;
  v9 = 2 * v5;
  if ( !v8 )
    v9 = *(unsigned __int16 *)(a1 + 20);
  v10 = (_BYTE *)(*(_QWORD *)a1 + v9);
  if ( *v10 != 45 )
    return 0;
  v11 = (v8 != 0) + 1LL;
  v12 = &v10[v11];
  v13 = *(unsigned __int16 *)(a1 + 8) - (_DWORD)v5 - 1;
  if ( *(unsigned __int16 *)(a1 + 8) - (_DWORD)v5 == 1 )
    return 0;
  while ( v13 > 0 )
  {
    v15 = *v12;
    if ( *v12 == 45 )
      break;
    if ( (unsigned __int8)(v15 - 48) > 9u )
      return 0;
    v12 += v11;
    --v13;
    v6 = v15 + 2 * (5 * v6 - 24);
  }
  v16 = &v12[v11];
  v17 = v13 - 1;
  if ( !v17 )
    return 0;
  while ( v17 > 0 )
  {
    v18 = *v16;
    if ( (unsigned __int8)(*v16 - 48) > 9u )
      return 0;
    v16 += v11;
    --v17;
    v7 = v18 + 2 * (5 * v7 - 24);
  }
  if ( a2 )
    *a2 = v6;
  if ( a3 )
    *a3 = v7;
  return 1;
}
