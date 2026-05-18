/*
 * XREFs of sub_180081D60 @ 0x180081D60
 * Callers:
 *     sub_18004EFF4 @ 0x18004EFF4 (sub_18004EFF4.c)
 *     sub_1800B7EE4 @ 0x1800B7EE4 (sub_1800B7EE4.c)
 * Callees:
 *     sub_180027690 @ 0x180027690 (sub_180027690.c)
 */

__int64 __fastcall sub_180081D60(__int64 a1)
{
  sub_180027690();
  *(_DWORD *)(a1 + 96) = 0;
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_QWORD *)(a1 + 112) = 0LL;
  *(_QWORD *)(a1 + 120) = 0LL;
  *(_QWORD *)(a1 + 128) = 0LL;
  *(_QWORD *)(a1 + 136) = 0LL;
  *(_QWORD *)a1 = &Spectre::Engine::DeviceVertexLayout::`vftable';
  return a1;
}
