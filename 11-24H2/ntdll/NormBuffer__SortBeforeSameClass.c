/*
 * XREFs of NormBuffer__SortBeforeSameClass @ 0x1800B681C
 * Callers:
 *     NormBuffer__AppendAndSortDecomposed @ 0x1800B6798 (NormBuffer__AppendAndSortDecomposed.c)
 * Callees:
 *     NormBuffer__GetCurrentOutputChar @ 0x1800B6670 (NormBuffer__GetCurrentOutputChar.c)
 */

__int64 __fastcall NormBuffer__SortBeforeSameClass(_QWORD *a1, unsigned __int8 a2)
{
  __int64 result; // rax
  __int64 v4; // r11
  __int64 v5; // r10
  __int64 v6; // r11
  __int64 v7; // rcx
  unsigned __int16 *v8; // r8
  __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 v11; // rdi
  __int64 v12; // rdx
  unsigned __int16 *v13; // r11
  unsigned __int16 *v14; // [rsp+30h] [rbp+8h] BYREF

  result = a1[5];
  v4 = a1[10];
  a1[13] = result;
  if ( result != v4 )
  {
    v14 = (unsigned __int16 *)(result - 2);
    result = NormBuffer__GetCurrentOutputChar((__int64)a1, &v14);
    v7 = 4LL;
    v8 = v14;
    if ( *(int *)(v5 + 88) <= 0xFFFF )
      v7 = 2LL;
    if ( v14 != (unsigned __int16 *)(v6 - v7) )
    {
      v9 = *(_QWORD *)(v5 + 112);
      v10 = *(_QWORD *)(v9 + 32);
      v11 = *(_QWORD *)(v9 + 40);
      do
      {
        v12 = result & 0x7F;
        result = v11 + ((unsigned __int64)*(unsigned __int8 *)(((__int64)(int)result >> 7) + v10) << 7);
        LOBYTE(v9) = *(_BYTE *)(v12 + result - 128) & 0x3F;
        if ( (unsigned __int8)v9 < a2 )
          break;
        *(_QWORD *)(v5 + 104) = v8;
        v14 = v8 - 1;
        result = NormBuffer__GetCurrentOutputChar(v9, &v14);
        v8 = v14;
      }
      while ( v14 != v13 );
    }
  }
  return result;
}
