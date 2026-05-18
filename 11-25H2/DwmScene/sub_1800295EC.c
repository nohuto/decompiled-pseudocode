/*
 * XREFs of sub_1800295EC @ 0x1800295EC
 * Callers:
 *     sub_180029764 @ 0x180029764 (sub_180029764.c)
 * Callees:
 *     memset @ 0x18000C088 (memset.c)
 *     sub_18001B098 @ 0x18001B098 (sub_18001B098.c)
 *     sub_18006CE90 @ 0x18006CE90 (sub_18006CE90.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall sub_1800295EC(_QWORD *a1)
{
  char *v2; // rax
  char *v3; // rbx

  v2 = (char *)sub_18001B098(400LL);
  v3 = v2;
  if ( v2 )
  {
    memset(v2, 0, 0xC8uLL);
    sub_18006CE90(v3);
    sub_18006CE90(v3 + 200);
  }
  else
  {
    v3 = 0LL;
  }
  *a1 = v3;
  return a1;
}
