/*
 * XREFs of sub_1800B8860 @ 0x1800B8860
 * Callers:
 *     sub_1800B8F30 @ 0x1800B8F30 (sub_1800B8F30.c)
 * Callees:
 *     sub_18000E954 @ 0x18000E954 (sub_18000E954.c)
 *     sub_180013228 @ 0x180013228 (sub_180013228.c)
 *     sub_18001CAFC @ 0x18001CAFC (sub_18001CAFC.c)
 *     sub_180026614 @ 0x180026614 (sub_180026614.c)
 */

__int64 __fastcall sub_1800B8860(__int64 a1)
{
  *(_QWORD *)a1 = &Spectre::Engine::D3D11::RenderDeviceD3D11::`vftable';
  sub_18001CAFC(&stru_1801B94C8, 3);
  sub_18001CAFC(&stru_1801B94C8, 3);
  sub_18000E954((__int64 *)(a1 + 4256));
  sub_180013228(a1 + 4216);
  sub_18000E954((__int64 *)(a1 + 3896));
  sub_18000E954((__int64 *)(a1 + 3888));
  sub_18000E954((__int64 *)(a1 + 3880));
  sub_18000E954((__int64 *)(a1 + 3872));
  _Mtx_destroy_in_situ((_Mtx_t)(a1 + 3832));
  sub_180026614((void **)(a1 + 3816));
  sub_180026614((void **)(a1 + 3800));
  return sub_180024874(a1);
}
