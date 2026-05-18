/*
 * XREFs of sub_18001E664 @ 0x18001E664
 * Callers:
 *     sub_18002BAE4 @ 0x18002BAE4 (sub_18002BAE4.c)
 * Callees:
 *     memmove @ 0x18000CE55 (memmove.c)
 *     sub_1800131AC @ 0x1800131AC (sub_1800131AC.c)
 *     sub_18001DA08 @ 0x18001DA08 (sub_18001DA08.c)
 */

void **__fastcall sub_18001E664(__int64 a1, const void *a2, unsigned __int64 a3)
{
  __int64 v3; // r9
  __int64 v5; // rdi
  __int64 v6; // r8
  __int64 v7; // rbx
  __int64 v8; // r9
  const void *v9; // rdx

  v3 = *(_QWORD *)(a1 + 16);
  if ( a3 > *(_QWORD *)(a1 + 24) - v3 )
    return sub_18001DA08((void **)a1, a3, a3, a2, a3);
  v5 = v3 + a3;
  *(_QWORD *)(a1 + 16) = v3 + a3;
  v7 = sub_1800131AC(a1);
  memmove((void *)(v7 + 2 * v8), v9, 2 * v6);
  *(_WORD *)(v7 + 2 * v5) = 0;
  return (void **)a1;
}
