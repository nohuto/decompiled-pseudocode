/*
 * XREFs of sub_1800510E0 @ 0x1800510E0
 * Callers:
 *     sub_18004F0E8 @ 0x18004F0E8 (sub_18004F0E8.c)
 *     sub_1800B7FB4 @ 0x1800B7FB4 (sub_1800B7FB4.c)
 * Callees:
 *     sub_1800277C8 @ 0x1800277C8 (sub_1800277C8.c)
 */

__int64 __fastcall sub_1800510E0(__int64 a1)
{
  __int64 result; // rax

  sub_1800277C8((_QWORD *)a1);
  *(_QWORD *)a1 = &Spectre::Engine::DeviceTexture::`vftable';
  *(_QWORD *)(a1 + 96) = 0LL;
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_QWORD *)(a1 + 112) = 0LL;
  *(_OWORD *)(a1 + 120) = 0LL;
  *(_QWORD *)(a1 + 136) = 0LL;
  *(_QWORD *)(a1 + 144) = 15LL;
  *(_BYTE *)(a1 + 120) = 0;
  result = a1;
  *(_DWORD *)(a1 + 152) = 0;
  *(_DWORD *)(a1 + 156) = 0;
  return result;
}
