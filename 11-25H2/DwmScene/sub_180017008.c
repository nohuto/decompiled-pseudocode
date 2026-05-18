/*
 * XREFs of sub_180017008 @ 0x180017008
 * Callers:
 *     sub_1800151E8 @ 0x1800151E8 (sub_1800151E8.c)
 * Callees:
 *     memmove @ 0x18000CD6D (memmove.c)
 *     unknown_libname_81 @ 0x180011CB0 (unknown_libname_81.c)
 *     sub_180017298 @ 0x180017298 (sub_180017298.c)
 *     sub_18001A7E4 @ 0x18001A7E4 (sub_18001A7E4.c)
 */

__int64 __fastcall sub_180017008(__int64 a1, __int64 a2)
{
  void **v2; // r15
  const void *v5; // rdx
  char *v6; // rdi
  signed __int64 v7; // rbx
  __int64 result; // rax
  __int64 v9; // [rsp+40h] [rbp+8h] BYREF

  v9 = a1;
  v2 = (void **)(a1 + 48);
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
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_QWORD *)(a1 + 56) = 0LL;
  *(_QWORD *)(a1 + 64) = 0LL;
  if ( (__int64)(*(_QWORD *)(a2 + 56) - *(_QWORD *)(a2 + 48)) >> 2 )
  {
    sub_18001A7E4(a1 + 48);
    v5 = *(const void **)(a2 + 48);
    v6 = (char *)*v2;
    v7 = *(_QWORD *)(a2 + 56) - (_QWORD)v5;
    memmove(*v2, v5, v7);
    v9 = 0LL;
    v2[1] = &v6[4 * (v7 >> 2)];
    sub_180017298(&v9);
  }
  unknown_libname_81((_QWORD *)(a1 + 72), (_QWORD *)(a2 + 72));
  result = a1;
  *(_DWORD *)(a1 + 88) = *(_DWORD *)(a2 + 88);
  return result;
}
