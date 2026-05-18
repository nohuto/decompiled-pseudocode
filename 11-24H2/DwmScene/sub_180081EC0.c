/*
 * XREFs of sub_180081EC0 @ 0x180081EC0
 * Callers:
 *     sub_18004F154 @ 0x18004F154 (sub_18004F154.c)
 *     sub_1800B8044 @ 0x1800B8044 (sub_1800B8044.c)
 * Callees:
 *     sub_1800277F0 @ 0x1800277F0 (sub_1800277F0.c)
 */

__int64 __fastcall sub_180081EC0(__int64 a1)
{
  sub_1800277F0();
  *(_DWORD *)(a1 + 96) = 0;
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_QWORD *)(a1 + 112) = 0LL;
  *(_QWORD *)(a1 + 120) = 0LL;
  *(_QWORD *)(a1 + 128) = 0LL;
  *(_QWORD *)(a1 + 136) = 0LL;
  *(_QWORD *)a1 = &Spectre::Engine::DeviceVertexLayout::`vftable';
  return a1;
}
