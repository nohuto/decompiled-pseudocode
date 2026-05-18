/*
 * XREFs of sub_18002ECF4 @ 0x18002ECF4
 * Callers:
 *     sub_18002F328 @ 0x18002F328 (sub_18002F328.c)
 * Callees:
 *     memset @ 0x18000C088 (memset.c)
 *     sub_18001B098 @ 0x18001B098 (sub_18001B098.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_18002ECF4(_QWORD *a1)
{
  _QWORD *v2; // rax
  _QWORD *v3; // rdi
  __int64 v4; // rax

  v2 = (_QWORD *)sub_18001B098(120LL);
  v3 = v2;
  if ( v2 )
  {
    memset(v2, 0, 0x78uLL);
    *(_BYTE *)v3 = 0;
    v3[1] = 0LL;
    v3[2] = 0LL;
    v3[3] = 0LL;
    v4 = sub_18001B098(168LL);
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
