/*
 * XREFs of sub_180035FBC @ 0x180035FBC
 * Callers:
 *     sub_180015570 @ 0x180015570 (sub_180015570.c)
 * Callees:
 *     sub_18002F7FC @ 0x18002F7FC (sub_18002F7FC.c)
 */

__int64 __fastcall sub_180035FBC(__int64 a1)
{
  __int64 v1; // r9
  __int64 v2; // r8
  __int64 v3; // rcx
  __int64 result; // rax

  sub_18002F7FC(a1);
  v2 = *(_QWORD *)(v1 + 48);
  *(_QWORD *)(v3 + 8) = *(_QWORD *)(v1 + 56);
  *(_DWORD *)(v3 + 16) = *(_DWORD *)(v1 + 40);
  *(_BYTE *)(v3 + 28) = *(_BYTE *)(v1 + 92);
  *(_DWORD *)(v3 + 32) = *(_DWORD *)(v1 + 80);
  *(_DWORD *)(v3 + 40) = *(_DWORD *)(v1 + 4);
  *(_DWORD *)(v3 + 76) = *(_DWORD *)(v1 + 72);
  *(_DWORD *)(v3 + 80) = *(_DWORD *)(v1 + 76);
  *(_DWORD *)(v3 + 60) = *(_DWORD *)(v1 + 36);
  *(_QWORD *)(v3 + 48) = *(_QWORD *)(v1 + 16);
  *(_DWORD *)(v3 + 84) = *(_DWORD *)(v1 + 84);
  *(_BYTE *)(v3 + 64) = *(_BYTE *)(v1 + 44);
  *(_DWORD *)(v3 + 72) = *(_DWORD *)(v1 + 68);
  *(_DWORD *)(v3 + 68) = *(_DWORD *)(v1 + 64);
  *(_DWORD *)(v3 + 56) = *(_DWORD *)(v1 + 32);
  *(_DWORD *)(v3 + 128) = *(_DWORD *)(v1 + 88);
  *(_DWORD *)(v3 + 136) = *(_DWORD *)v1;
  *(_QWORD *)(v3 + 144) = *(_QWORD *)(v1 + 8);
  *(_QWORD *)(v3 + 152) = *(_QWORD *)(v1 + 24);
  result = v3;
  *(_QWORD *)v3 = v2;
  return result;
}
