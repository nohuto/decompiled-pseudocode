/*
 * XREFs of sub_180050F80 @ 0x180050F80
 * Callers:
 *     sub_18004EF88 @ 0x18004EF88 (sub_18004EF88.c)
 *     sub_1800B7E54 @ 0x1800B7E54 (sub_1800B7E54.c)
 * Callees:
 *     sub_180027668 @ 0x180027668 (sub_180027668.c)
 */

__int64 __fastcall sub_180050F80(__int64 a1)
{
  __int64 result; // rax

  sub_180027668((_QWORD *)a1);
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
