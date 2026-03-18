/*
 * XREFs of HvHiveStartEmptyClone @ 0x1407CF9A8
 * Callers:
 *     CmpCreateEmptyHiveClone @ 0x1407CEC28 (CmpCreateEmptyHiveClone.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     HvpViewMapStart @ 0x1409F9A08 (HvpViewMapStart.c)
 */

__int64 __fastcall HvHiveStartEmptyClone(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  void *v5; // rax
  __int64 result; // rax
  char v7; // cl

  *(_QWORD *)(a1 + 8) = *(_QWORD *)(a2 + 8);
  *(_QWORD *)(a1 + 16) = *(_QWORD *)(a2 + 16);
  *(_QWORD *)(a1 + 24) = *(_QWORD *)(a2 + 24);
  *(_QWORD *)(a1 + 32) = *(_QWORD *)(a2 + 32);
  *(_QWORD *)(a1 + 40) = *(_QWORD *)(a2 + 40);
  *(_QWORD *)(a1 + 48) = *(_QWORD *)(a2 + 48);
  v4 = *(unsigned int *)(a2 + 132);
  *(_DWORD *)(a1 + 132) = v4;
  v5 = (void *)guard_dispatch_icall_no_overrides(v4);
  *(_QWORD *)(a1 + 64) = v5;
  if ( !v5 )
    return 3221225626LL;
  memmove(v5, *(const void **)(a2 + 64), *(unsigned int *)(a1 + 132));
  *(_DWORD *)(*(_QWORD *)(a1 + 64) + 40LL) = 0;
  *(_DWORD *)(*(_QWORD *)(a1 + 64) + 36LL) = -1;
  *(_DWORD *)(a1 + 136) = *(_DWORD *)(a2 + 136);
  v7 = *(_BYTE *)(a1 + 140) ^ (*(_BYTE *)(a2 + 140) ^ *(_BYTE *)(a1 + 140)) & 1;
  *(_BYTE *)(a1 + 140) = v7;
  *(_BYTE *)(a1 + 140) = v7 ^ (*(_BYTE *)(a2 + 140) ^ v7) & 2;
  *(_DWORD *)(a1 + 160) = *(_DWORD *)(a2 + 160) & 0xFFFFFFEF;
  *(_DWORD *)(a1 + 168) = *(_DWORD *)(a2 + 168);
  *(_DWORD *)(a1 + 172) = *(_DWORD *)(a2 + 172);
  *(_DWORD *)(a1 + 176) = *(_DWORD *)(a2 + 176);
  *(_DWORD *)(a1 + 180) = *(_DWORD *)(a2 + 180);
  *(_DWORD *)(a1 + 184) = *(_DWORD *)(a2 + 184);
  *(_DWORD *)(a1 + 188) = *(_DWORD *)(a2 + 188);
  *(_WORD *)(a1 + 192) = *(_WORD *)(a2 + 192);
  *(_BYTE *)(a1 + 194) = *(_BYTE *)(a2 + 194);
  *(_BYTE *)(a1 + 195) = *(_BYTE *)(a2 + 195);
  *(_QWORD *)(a1 + 200) = *(_QWORD *)(a2 + 200);
  *(_WORD *)(a1 + 208) = *(_WORD *)(a2 + 208);
  *(_DWORD *)(a1 + 212) = *(_DWORD *)(a2 + 212);
  *(_DWORD *)(a1 + 216) = *(_DWORD *)(a2 + 216);
  *(_DWORD *)(a1 + 220) = *(_DWORD *)(a2 + 220);
  if ( (*(_DWORD *)(a2 + 160) & 0x20000) == 0 )
    return 0LL;
  result = HvpViewMapStart((int)a1 + 224, *(_QWORD *)(a1 + 1544), 0, *(_QWORD *)(a2 + 248), *(_DWORD *)(a2 + 256));
  if ( (int)result >= 0 )
    return 0LL;
  return result;
}
