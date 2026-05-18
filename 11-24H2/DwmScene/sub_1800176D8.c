/*
 * XREFs of sub_1800176D8 @ 0x1800176D8
 * Callers:
 *     sub_1800152E8 @ 0x1800152E8 (sub_1800152E8.c)
 *     sub_180025700 @ 0x180025700 (sub_180025700.c)
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     unknown_libname_81 @ 0x180011DB0 (unknown_libname_81.c)
 *     sub_1800176A4 @ 0x1800176A4 (sub_1800176A4.c)
 */

__int64 __fastcall sub_1800176D8(__int64 a1, __int64 a2)
{
  __int64 *v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rdx
  __int64 v7; // rcx
  _QWORD v9[3]; // [rsp+20h] [rbp-18h] BYREF

  *(_DWORD *)a1 = *(_DWORD *)a2;
  *(_QWORD *)(a1 + 8) = *(_QWORD *)(a2 + 8);
  *(_DWORD *)(a1 + 16) = *(_DWORD *)(a2 + 16);
  *(_DWORD *)(a1 + 20) = *(_DWORD *)(a2 + 20);
  *(_BYTE *)(a1 + 24) = *(_BYTE *)(a2 + 24);
  *(_DWORD *)(a1 + 28) = *(_DWORD *)(a2 + 28);
  *(_DWORD *)(a1 + 32) = *(_DWORD *)(a2 + 32);
  *(_DWORD *)(a1 + 36) = *(_DWORD *)(a2 + 36);
  *(_DWORD *)(a1 + 40) = *(_DWORD *)(a2 + 40);
  *(_DWORD *)(a1 + 44) = *(_DWORD *)(a2 + 44);
  sub_1800176A4((void **)(a1 + 48), a2 + 48);
  v4 = unknown_libname_81(v9, (_QWORD *)(a2 + 72));
  v5 = *v4;
  *v4 = *(_QWORD *)(a1 + 72);
  *(_QWORD *)(a1 + 72) = v5;
  v6 = v4[1];
  v4[1] = *(_QWORD *)(a1 + 80);
  v7 = v9[1];
  *(_QWORD *)(a1 + 80) = v6;
  if ( v7 )
    sub_18001060C(v7);
  *(_DWORD *)(a1 + 88) = *(_DWORD *)(a2 + 88);
  return a1;
}
