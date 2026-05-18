/*
 * XREFs of sub_1800C6DD4 @ 0x1800C6DD4
 * Callers:
 *     sub_1800C6430 @ 0x1800C6430 (sub_1800C6430.c)
 *     sub_1800C6E70 @ 0x1800C6E70 (sub_1800C6E70.c)
 *     sub_1800C7C60 @ 0x1800C7C60 (sub_1800C7C60.c)
 *     sub_1800C9950 @ 0x1800C9950 (sub_1800C9950.c)
 *     sub_1800C9BB0 @ 0x1800C9BB0 (sub_1800C9BB0.c)
 *     sub_1800C9E10 @ 0x1800C9E10 (sub_1800C9E10.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800C6DD4(__int64 a1)
{
  __int64 v1; // rax

  v1 = *(_QWORD *)(a1 + 8);
  if ( *(_QWORD *)a1 == v1 )
    return (unsigned int)(*(_DWORD *)(a1 + 32) - *(_DWORD *)(a1 + 24));
  else
    return v1 - *(_QWORD *)a1;
}
