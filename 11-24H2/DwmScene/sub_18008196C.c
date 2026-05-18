/*
 * XREFs of sub_18008196C @ 0x18008196C
 * Callers:
 *     sub_18004F000 @ 0x18004F000 (sub_18004F000.c)
 *     sub_1800B7B44 @ 0x1800B7B44 (sub_1800B7B44.c)
 * Callees:
 *     sub_1800277C8 @ 0x1800277C8 (sub_1800277C8.c)
 */

__int64 __fastcall sub_18008196C(__int64 a1)
{
  sub_1800277C8((_QWORD *)a1);
  *(_QWORD *)a1 = &Spectre::Engine::DeviceConstantBuffer::`vftable';
  *(_DWORD *)(a1 + 96) = 0;
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_QWORD *)(a1 + 112) = 0LL;
  return a1;
}
