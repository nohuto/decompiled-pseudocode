/*
 * XREFs of sub_18001E574 @ 0x18001E574
 * Callers:
 *     sub_180030580 @ 0x180030580 (sub_180030580.c)
 *     sub_18003279C @ 0x18003279C (sub_18003279C.c)
 *     sub_18004F130 @ 0x18004F130 (sub_18004F130.c)
 *     sub_1800B84DC @ 0x1800B84DC (sub_1800B84DC.c)
 * Callees:
 *     memmove @ 0x18000CD6D (memmove.c)
 *     sub_1800130AC @ 0x1800130AC (sub_1800130AC.c)
 *     sub_18001D800 @ 0x18001D800 (sub_18001D800.c)
 */

__int64 __fastcall sub_18001E574(__int64 a1, const void *a2, unsigned __int64 a3)
{
  char *v4; // rax
  __int64 v5; // r8
  __int64 v6; // rbx
  char *v7; // rdi
  const void *v8; // rdx

  if ( a3 > *(_QWORD *)(a1 + 24) )
    return sub_18001D800(a1, a3, a3, a2);
  v4 = (char *)sub_1800130AC(a1);
  v6 = 2 * v5;
  *(_QWORD *)(a1 + 16) = v5;
  v7 = v4;
  memmove(v4, v8, 2 * v5);
  *(_WORD *)&v7[v6] = 0;
  return a1;
}
