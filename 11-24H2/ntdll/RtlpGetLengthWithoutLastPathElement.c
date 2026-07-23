/*
 * XREFs of RtlpGetLengthWithoutLastPathElement @ 0x1800A7088
 * Callers:
 *     RtlGetLengthWithoutLastFullDosOrNtPathElement @ 0x180105E70 (RtlGetLengthWithoutLastFullDosOrNtPathElement.c)
 * Callees:
 *     RtlpDetermineDosPathNameType4 @ 0x1800A7194 (RtlpDetermineDosPathNameType4.c)
 */

__int64 __fastcall RtlpGetLengthWithoutLastPathElement(__int64 a1, __int64 a2, unsigned __int16 *a3, int *a4)
{
  __int64 result; // rax
  int v7; // ebx
  __int64 v8; // r8
  __int64 v9; // rcx
  __int64 v10; // rcx
  int v11; // r9d
  __int16 v12; // dx
  __int64 v13; // rcx
  int v14; // eax
  int v15; // [rsp+38h] [rbp+10h] BYREF
  int v16; // [rsp+40h] [rbp+18h] BYREF

  result = 0LL;
  v15 = 0;
  v16 = 0;
  if ( a4 )
    *a4 = 0;
  if ( !a3 || (_DWORD)a1 || !a4 )
    return 3221225485LL;
  v7 = *a3 >> 1;
  if ( !v7 )
    return result;
  result = RtlpDetermineDosPathNameType4(a1, a3, &v15, &v16);
  if ( (int)result < 0 )
    return result;
  if ( ((1 << v15) & 0xD6) == 0 || (v16 & 0x200) != 0 )
    return 3221225485LL;
  v8 = *((_QWORD *)a3 + 1);
  do
  {
    v9 = (unsigned int)(v7 - 1);
    if ( *(_WORD *)(v8 + 2 * v9) != 47 && *(_WORD *)(v8 + 2 * v9) != 92 )
      break;
    --v7;
  }
  while ( (_DWORD)v9 );
  if ( v7 )
  {
    do
    {
      v10 = (unsigned int)(v7 - 1);
      v11 = v7;
      v12 = *(_WORD *)(v8 + 2 * v10);
      if ( v12 == 47 )
        goto LABEL_22;
      if ( v12 == 92 )
        break;
      --v7;
    }
    while ( (_DWORD)v10 );
    v7 = v10;
    if ( v12 == 92 )
      v7 = v11;
    if ( v7 )
    {
      do
      {
LABEL_22:
        v13 = (unsigned int)(v7 - 1);
        if ( *(_WORD *)(v8 + 2 * v13) != 92 && *(_WORD *)(v8 + 2 * v13) != 47 )
          break;
        --v7;
      }
      while ( (_DWORD)v13 );
    }
  }
  v14 = v7 + 1;
  if ( !v7 )
    v14 = 0;
  *a4 = v14;
  return 0LL;
}
