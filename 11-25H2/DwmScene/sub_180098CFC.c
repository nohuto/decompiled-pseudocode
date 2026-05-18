/*
 * XREFs of sub_180098CFC @ 0x180098CFC
 * Callers:
 *     sub_180098B68 @ 0x180098B68 (sub_180098B68.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180098CFC(__int64 *a1, __int64 *a2, __int64 *a3)
{
  __int64 v3; // rbx
  __int64 *v4; // r9
  __int64 v6; // rcx
  char v7; // al
  __int64 *v8; // r10
  __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 result; // rax
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rcx

  v3 = *a2;
  v4 = a2 + 1;
  v6 = *a1;
  v7 = *(_BYTE *)(*a2 + 88);
  v8 = a1 + 1;
  if ( v7 == *(_BYTE *)(v6 + 88) )
    v7 = 0;
  if ( v7 )
  {
    *a2 = v6;
    *a1 = v3;
    v9 = *v4;
    *v4 = *v8;
    *v8 = v9;
  }
  v10 = *a3;
  result = *(unsigned __int8 *)(*a3 + 88);
  if ( (_BYTE)result == *(_BYTE *)(*a2 + 88) )
    result = 0LL;
  if ( (_BYTE)result )
  {
    *a3 = *a2;
    *a2 = v10;
    v12 = a3[1];
    a3[1] = *v4;
    *v4 = v12;
    v13 = *a2;
    result = *(unsigned __int8 *)(*a2 + 88);
    if ( (_BYTE)result == *(_BYTE *)(*a1 + 88) )
      result = 0LL;
    if ( (_BYTE)result )
    {
      *a2 = *a1;
      *a1 = v13;
      result = *v8;
      v14 = *v4;
      *v4 = *v8;
      *v8 = v14;
    }
  }
  return result;
}
