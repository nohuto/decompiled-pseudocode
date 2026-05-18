/*
 * XREFs of sub_18007CB44 @ 0x18007CB44
 * Callers:
 *     sub_18007B150 @ 0x18007B150 (sub_18007B150.c)
 *     sub_180082BAC @ 0x180082BAC (sub_180082BAC.c)
 *     sub_180082E54 @ 0x180082E54 (sub_180082E54.c)
 *     sub_1800D3B6C @ 0x1800D3B6C (sub_1800D3B6C.c)
 *     sub_1800D3FE0 @ 0x1800D3FE0 (sub_1800D3FE0.c)
 * Callees:
 *     sub_180010134 @ 0x180010134 (sub_180010134.c)
 */

__int64 __fastcall sub_18007CB44(__int64 a1)
{
  void *v2; // rcx
  __int64 result; // rax

  v2 = *(void **)a1;
  if ( v2 )
  {
    result = sub_180010134(v2, 4 * ((__int64)(*(_QWORD *)(a1 + 16) - (_QWORD)v2) >> 2));
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
  return result;
}
