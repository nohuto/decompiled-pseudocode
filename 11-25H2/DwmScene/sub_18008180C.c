/*
 * XREFs of sub_18008180C @ 0x18008180C
 * Callers:
 *     sub_18004EEA0 @ 0x18004EEA0 (sub_18004EEA0.c)
 *     sub_1800B79E4 @ 0x1800B79E4 (sub_1800B79E4.c)
 * Callees:
 *     sub_180027668 @ 0x180027668 (sub_180027668.c)
 */

__int64 __fastcall sub_18008180C(__int64 a1)
{
  sub_180027668((_QWORD *)a1);
  *(_QWORD *)a1 = &Spectre::Engine::DeviceConstantBuffer::`vftable';
  *(_DWORD *)(a1 + 96) = 0;
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_QWORD *)(a1 + 112) = 0LL;
  return a1;
}
