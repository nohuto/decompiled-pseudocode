/*
 * XREFs of ?dtor$4@?0???0_Locinfo@std@@QEAA@PEBD@Z@4HA_1 @ 0x1800D9D46
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall `std::_Locinfo::_Locinfo'::`1'::dtor$4(__int64 a1, __int64 a2)
{
  Mtx_destroy_in_situ((_Mtx_t)(*(_QWORD *)(a2 + 48) + 56LL));
}
