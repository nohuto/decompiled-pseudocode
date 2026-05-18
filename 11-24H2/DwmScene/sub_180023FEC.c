/*
 * XREFs of sub_180023FEC @ 0x180023FEC
 * Callers:
 *     sub_180024070 @ 0x180024070 (sub_180024070.c)
 *     sub_180028540 @ 0x180028540 (sub_180028540.c)
 *     sub_18002C244 @ 0x18002C244 (sub_18002C244.c)
 *     sub_18003D6A8 @ 0x18003D6A8 (sub_18003D6A8.c)
 *     sub_18003D74C @ 0x18003D74C (sub_18003D74C.c)
 *     sub_18005AAA4 @ 0x18005AAA4 (sub_18005AAA4.c)
 *     sub_1800957C4 @ 0x1800957C4 (sub_1800957C4.c)
 *     sub_18009723C @ 0x18009723C (sub_18009723C.c)
 *     sub_180097304 @ 0x180097304 (sub_180097304.c)
 * Callees:
 *     memset @ 0x18000C4E8 (memset.c)
 *     sub_18001B1F8 @ 0x18001B1F8 (sub_18001B1F8.c)
 *     sub_18001C2A8 @ 0x18001C2A8 (sub_18001C2A8.c)
 */

_QWORD *__fastcall sub_180023FEC(_QWORD *a1)
{
  char *v2; // rax
  char *v3; // rbx

  v2 = (char *)sub_18001B1F8(184LL);
  v3 = v2;
  if ( v2 )
  {
    memset(v2, 0, 0xB8uLL);
    sub_18001C2A8((struct _Mtx_internal_imp_t *)v3);
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
