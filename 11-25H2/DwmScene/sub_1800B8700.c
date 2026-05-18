/*
 * XREFs of sub_1800B8700 @ 0x1800B8700
 * Callers:
 *     sub_1800B8DD0 @ 0x1800B8DD0 (sub_1800B8DD0.c)
 * Callees:
 *     sub_18000E854 @ 0x18000E854 (sub_18000E854.c)
 *     sub_180013128 @ 0x180013128 (sub_180013128.c)
 *     sub_18001C99C @ 0x18001C99C (sub_18001C99C.c)
 *     sub_1800264B4 @ 0x1800264B4 (sub_1800264B4.c)
 */

__int64 __fastcall sub_1800B8700(__int64 a1)
{
  *(_QWORD *)a1 = &Spectre::Engine::D3D11::RenderDeviceD3D11::`vftable';
  sub_18001C99C(&stru_1801B84C8, 3);
  sub_18001C99C(&stru_1801B84C8, 3);
  sub_18000E854((__int64 *)(a1 + 4256));
  sub_180013128(a1 + 4216);
  sub_18000E854((__int64 *)(a1 + 3896));
  sub_18000E854((__int64 *)(a1 + 3888));
  sub_18000E854((__int64 *)(a1 + 3880));
  sub_18000E854((__int64 *)(a1 + 3872));
  _Mtx_destroy_in_situ((_Mtx_t)(a1 + 3832));
  sub_1800264B4((void **)(a1 + 3816));
  sub_1800264B4((void **)(a1 + 3800));
  return sub_180024714(a1);
}
