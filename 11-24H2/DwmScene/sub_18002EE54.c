/*
 * XREFs of sub_18002EE54 @ 0x18002EE54
 * Callers:
 *     sub_18002F488 @ 0x18002F488 (sub_18002F488.c)
 * Callees:
 *     memset @ 0x18000C4E8 (memset.c)
 *     sub_18001B1F8 @ 0x18001B1F8 (sub_18001B1F8.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_18002EE54(_QWORD *a1)
{
  _QWORD *v2; // rax
  _QWORD *v3; // rdi
  __int64 v4; // rax

  v2 = (_QWORD *)sub_18001B1F8(120LL);
  v3 = v2;
  if ( v2 )
  {
    memset(v2, 0, 0x78uLL);
    *(_BYTE *)v3 = 0;
    v3[1] = 0LL;
    v3[2] = 0LL;
    v3[3] = 0LL;
    v4 = sub_18001B1F8(168LL);
    *(_QWORD *)v4 = v4;
    *(_QWORD *)(v4 + 8) = v4;
    *(_QWORD *)(v4 + 16) = v4;
    *(_WORD *)(v4 + 24) = 257;
    v3[2] = v4;
    *((_DWORD *)v3 + 28) = 0;
    *((_DWORD *)v3 + 29) = 0;
  }
  else
  {
    v3 = 0LL;
  }
  *a1 = v3;
  return a1;
}
