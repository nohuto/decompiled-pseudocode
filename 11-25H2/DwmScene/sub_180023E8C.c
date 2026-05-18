/*
 * XREFs of sub_180023E8C @ 0x180023E8C
 * Callers:
 *     sub_180023F10 @ 0x180023F10 (sub_180023F10.c)
 *     sub_1800283E0 @ 0x1800283E0 (sub_1800283E0.c)
 *     sub_18002C0E4 @ 0x18002C0E4 (sub_18002C0E4.c)
 *     sub_18003D548 @ 0x18003D548 (sub_18003D548.c)
 *     sub_18003D5EC @ 0x18003D5EC (sub_18003D5EC.c)
 *     sub_18005A944 @ 0x18005A944 (sub_18005A944.c)
 *     sub_180095664 @ 0x180095664 (sub_180095664.c)
 *     sub_1800970DC @ 0x1800970DC (sub_1800970DC.c)
 *     sub_1800971A4 @ 0x1800971A4 (sub_1800971A4.c)
 * Callees:
 *     memset @ 0x18000C088 (memset.c)
 *     sub_18001B098 @ 0x18001B098 (sub_18001B098.c)
 *     sub_18001C148 @ 0x18001C148 (sub_18001C148.c)
 */

_QWORD *__fastcall sub_180023E8C(_QWORD *a1)
{
  char *v2; // rax
  char *v3; // rbx

  v2 = (char *)sub_18001B098(184LL);
  v3 = v2;
  if ( v2 )
  {
    memset(v2, 0, 0xB8uLL);
    sub_18001C148((struct _Mtx_internal_imp_t *)v3);
    Cnd_init_in_situ((_Cnd_t)(v3 + 32));
    Cnd_init_in_situ((_Cnd_t)(v3 + 104));
    *((_DWORD *)v3 + 44) = 0;
    v3[180] = 0;
  }
  else
  {
    v3 = 0LL;
  }
  *a1 = v3;
  return a1;
}
