/*
 * XREFs of ApiSetpGetSemverKeyVersions @ 0x180134744
 * Callers:
 *     ApiSetQuerySchemaInfo2_V7 @ 0x180133864 (ApiSetQuerySchemaInfo2_V7.c)
 * Callees:
 *     <none>
 */

char __fastcall ApiSetpGetSemverKeyVersions(__int64 a1, __int64 a2, _BYTE *a3)
{
  __int64 v4; // rax
  char v5; // bl
  char v6; // dl
  __int64 v7; // r9
  _BYTE *v8; // r9
  __int64 v9; // r10
  _BYTE *v10; // r9
  int v11; // r8d
  char *v13; // r9
  int v14; // r8d
  char v15; // cl

  if ( a3 )
    *a3 = 0;
  v4 = *(unsigned __int16 *)(a1 + 20);
  v5 = 0;
  v6 = *(_BYTE *)(a1 + 10);
  if ( *(unsigned __int16 *)(a1 + 8) - (int)v4 <= 0 )
    return 0;
  v7 = 2 * v4;
  if ( !v6 )
    v7 = *(unsigned __int16 *)(a1 + 20);
  v8 = (_BYTE *)(*(_QWORD *)a1 + v7);
  if ( *v8 != 45 )
    return 0;
  v9 = (v6 != 0) + 1LL;
  v10 = &v8[v9];
  v11 = *(unsigned __int16 *)(a1 + 8) - (_DWORD)v4 - 1;
  if ( *(unsigned __int16 *)(a1 + 8) - (_DWORD)v4 == 1 )
    return 0;
  while ( v11 > 0 && *v10 != 45 )
  {
    if ( (unsigned __int8)(*v10 - 48) > 9u )
      return 0;
    v10 += v9;
    --v11;
  }
  v13 = &v10[v9];
  v14 = v11 - 1;
  if ( !v14 )
    return 0;
  while ( v14 > 0 )
  {
    if ( (unsigned __int8)(*v13 - 48) > 9u )
      return 0;
    v15 = *v13;
    v13 += v9;
    --v14;
    v5 = v15 + 2 * (5 * v5 - 24);
  }
  if ( a3 )
    *a3 = v5;
  return 1;
}
