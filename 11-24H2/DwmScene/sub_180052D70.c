/*
 * XREFs of sub_180052D70 @ 0x180052D70
 * Callers:
 *     sub_18002C2B0 @ 0x18002C2B0 (sub_18002C2B0.c)
 * Callees:
 *     sub_18001B1F8 @ 0x18001B1F8 (sub_18001B1F8.c)
 *     sub_18001C2A8 @ 0x18001C2A8 (sub_18001C2A8.c)
 *     sub_180053410 @ 0x180053410 (sub_180053410.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall sub_180052D70(__int64 a1, __int64 a2, int a3, int a4)
{
  __int64 *v5; // rbx
  __int64 v6; // rax

  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_DWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 24) = a2;
  *(_DWORD *)(a1 + 32) = a3;
  *(_DWORD *)(a1 + 36) = a4;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_QWORD *)(a1 + 56) = 0LL;
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_QWORD *)(a1 + 72) = 0LL;
  *(_QWORD *)(a1 + 80) = 0LL;
  v5 = (__int64 *)(a1 + 88);
  *(_QWORD *)(a1 + 88) = 0LL;
  *(_QWORD *)(a1 + 96) = 0LL;
  v6 = sub_18001B1F8(72LL);
  *(_QWORD *)v6 = v6;
  *(_QWORD *)(v6 + 8) = v6;
  *(_QWORD *)(v6 + 16) = v6;
  *(_WORD *)(v6 + 24) = 257;
  *v5 = v6;
  *(_OWORD *)(a1 + 104) = 0LL;
  *(_BYTE *)(a1 + 120) = 0;
  sub_18001C2A8((struct _Mtx_internal_imp_t *)(a1 + 128));
  Cnd_init_in_situ((_Cnd_t)(a1 + 160));
  Cnd_init_in_situ((_Cnd_t)(a1 + 232));
  Cnd_init_in_situ((_Cnd_t)(a1 + 304));
  *(_WORD *)(a1 + 376) = 0;
  *(_BYTE *)(a1 + 378) = 0;
  *(_DWORD *)(a1 + 380) = -1;
  *(_WORD *)(a1 + 384) = 256;
  *(_QWORD *)(a1 + 392) = 0LL;
  *(_DWORD *)(a1 + 400) = 0;
  if ( *(_DWORD *)(a1 + 36) == 1 )
    sub_180053410(a1);
  return a1;
}
