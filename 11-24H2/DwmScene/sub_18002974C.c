/*
 * XREFs of sub_18002974C @ 0x18002974C
 * Callers:
 *     sub_1800298C4 @ 0x1800298C4 (sub_1800298C4.c)
 * Callees:
 *     memset @ 0x18000C4E8 (memset.c)
 *     sub_18001B1F8 @ 0x18001B1F8 (sub_18001B1F8.c)
 *     sub_18006CFF0 @ 0x18006CFF0 (sub_18006CFF0.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall sub_18002974C(_QWORD *a1)
{
  char *v2; // rax
  char *v3; // rbx

  v2 = (char *)sub_18001B1F8(400LL);
  v3 = v2;
  if ( v2 )
  {
    memset(v2, 0, 0xC8uLL);
    sub_18006CFF0(v3);
    sub_18006CFF0(v3 + 200);
  }
  else
  {
    v3 = 0LL;
  }
  *a1 = v3;
  return a1;
}
