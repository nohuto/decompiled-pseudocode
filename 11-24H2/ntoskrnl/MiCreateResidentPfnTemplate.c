/*
 * XREFs of MiCreateResidentPfnTemplate @ 0x140C5A2B0
 * Callers:
 *     MiInitNucleus @ 0x140C51428 (MiInitNucleus.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiCreateResidentPfnTemplate(__int64 a1)
{
  int v1; // eax
  __int64 result; // rax
  int v3; // [rsp+8h] [rbp+8h]
  int v4; // [rsp+8h] [rbp+8h]

  *(_OWORD *)a1 = 0LL;
  *(_OWORD *)(a1 + 16) = 0LL;
  *(_OWORD *)(a1 + 32) = 0LL;
  v3 = *(_DWORD *)(a1 + 32);
  BYTE2(v3) = BYTE2(v3) & 0xF8 | 6;
  *(_DWORD *)(a1 + 32) = v3;
  v4 = *(_DWORD *)(a1 + 32);
  BYTE2(v4) = BYTE2(v4) & 0x3F | 0x40;
  *(_DWORD *)(a1 + 32) = v4;
  *(_QWORD *)(a1 + 40) |= 0x40000000000000uLL;
  *(_QWORD *)(a1 + 24) = *(_QWORD *)(a1 + 24) & 0xC000000000000000uLL | 1;
  v1 = *(_DWORD *)(a1 + 32);
  LOWORD(v1) = 2;
  *(_DWORD *)(a1 + 32) = v1;
  result = *(_QWORD *)(a1 + 40) | 0x10000000000LL;
  *(_QWORD *)(a1 + 40) = result;
  return result;
}
