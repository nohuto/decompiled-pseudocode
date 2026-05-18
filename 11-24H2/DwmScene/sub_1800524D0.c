/*
 * XREFs of sub_1800524D0 @ 0x1800524D0
 * Callers:
 *     sub_1800C0598 @ 0x1800C0598 (sub_1800C0598.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800524D0(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // r8
  __int64 result; // rax
  __int64 v4; // r8

  v2 = (unsigned int)(HIDWORD(a2) + *(_DWORD *)(a1 + 48) * a2);
  if ( v2 >= (__int64)(*(_QWORD *)(a1 + 32) - *(_QWORD *)(a1 + 24)) >> 5 )
    return 0LL;
  result = 0LL;
  v4 = *(_QWORD *)(a1 + 24) + 32 * v2;
  if ( *(_DWORD *)(v4 + 28) == HIDWORD(a2) )
    return v4;
  return result;
}
