/*
 * XREFs of ?_Change_array@?$vector@UPlane@CDDisplayCachedScanout@@V?$allocator@UPlane@CDDisplayCachedScanout@@@std@@@std@@AEAAXQEAUPlane@CDDisplayCachedScanout@@_K1@Z @ 0x1801C6EC0
 * Callers:
 *     ??$_Emplace_reallocate@AEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@@?$vector@UPlane@CDDisplayCachedScanout@@V?$allocator@UPlane@CDDisplayCachedScanout@@@std@@@std@@AEAAPEAUPlane@CDDisplayCachedScanout@@QEAU23@AEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@@Z @ 0x1801C6D84 (--$_Emplace_reallocate@AEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@@-$vector@UPlane@CDDisplayCachedScano.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180069F90 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@UPlane@CDDisplayCachedScanout@@@std@@@std@@YAXPEAUPlane@CDDisplayCachedScanout@@QEAU12@AEAV?$allocator@UPlane@CDDisplayCachedScanout@@@0@@Z @ 0x1801C7324 (--$_Destroy_range@V-$allocator@UPlane@CDDisplayCachedScanout@@@std@@@std@@YAXPEAUPlane@CDDisplay.c)
 */

__int64 __fastcall std::vector<CDDisplayCachedScanout::Plane>::_Change_array(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  _QWORD *v6; // rcx
  __int64 result; // rax

  v6 = (_QWORD *)*a1;
  if ( v6 )
  {
    std::_Destroy_range<std::allocator<CDDisplayCachedScanout::Plane>>(v6, a1[1]);
    std::_Deallocate<16,0>((_QWORD *)*a1, 8 * ((a1[2] - *a1) >> 3));
  }
  *a1 = a2;
  a1[1] = a2 + 88 * a3;
  result = a2 + 88 * a4;
  a1[2] = result;
  return result;
}
