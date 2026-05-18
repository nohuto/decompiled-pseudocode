/*
 * XREFs of ?dtor$27@?0??_Makeloc@_Locimp@locale@std@@CAPEAV123@AEBV_Locinfo@3@HPEAV123@PEBV23@@Z@4HA @ 0x1800D59EA
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// Microsoft VisualC v7/14 64bit runtime
void __fastcall `std::locale::_Locimp::_Makeloc'::`1'::dtor$27(__int64 a1, __int64 a2)
{
  Concurrency::details::TaskStack::~TaskStack(*(Concurrency::details::TaskStack **)(a2 + 128));
}
