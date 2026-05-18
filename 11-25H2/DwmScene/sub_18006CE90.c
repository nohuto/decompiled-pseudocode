/*
 * XREFs of sub_18006CE90 @ 0x18006CE90
 * Callers:
 *     sub_1800295EC @ 0x1800295EC (sub_1800295EC.c)
 * Callees:
 *     sub_18001B098 @ 0x18001B098 (sub_18001B098.c)
 */

__int64 __fastcall sub_18006CE90(__int64 a1)
{
  __int64 *v1; // rbx
  __int64 v3; // rax
  __int64 result; // rax

  *(_QWORD *)(a1 + 8) = 0LL;
  v1 = (__int64 *)(a1 + 16);
  *(_BYTE *)a1 = 0;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  v3 = sub_18001B098(248LL);
  *(_QWORD *)v3 = v3;
  *(_QWORD *)(v3 + 8) = v3;
  *(_QWORD *)(v3 + 16) = v3;
  *(_WORD *)(v3 + 24) = 257;
  *v1 = v3;
  result = a1;
  *(_DWORD *)(a1 + 192) = 0;
  *(_DWORD *)(a1 + 196) = 0;
  return result;
}
