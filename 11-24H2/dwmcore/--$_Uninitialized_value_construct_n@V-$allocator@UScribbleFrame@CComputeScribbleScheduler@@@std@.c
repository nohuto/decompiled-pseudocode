/*
 * XREFs of ??$_Uninitialized_value_construct_n@V?$allocator@UScribbleFrame@CComputeScribbleScheduler@@@std@@@std@@YAPEAUScribbleFrame@CComputeScribbleScheduler@@PEAU12@_KAEAV?$allocator@UScribbleFrame@CComputeScribbleScheduler@@@0@@Z @ 0x18028794C
 * Callers:
 *     ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@UScribbleFrame@CComputeScribbleScheduler@@V?$allocator@UScribbleFrame@CComputeScribbleScheduler@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x1802877D4 (--$_Resize_reallocate@U_Value_init_tag@std@@@-$vector@UScribbleFrame@CComputeScribbleScheduler@@.c)
 *     ?Initialize@CComputeScribbleScheduler@@AEAAJPEAVIOverlaySwapChain@@@Z @ 0x180287F64 (-Initialize@CComputeScribbleScheduler@@AEAAJPEAVIOverlaySwapChain@@@Z.c)
 * Callees:
 *     memset_0 @ 0x180251AD8 (memset_0.c)
 */

char *__fastcall std::_Uninitialized_value_construct_n<std::allocator<CComputeScribbleScheduler::ScribbleFrame>>(
        char *a1,
        __int64 a2)
{
  char *v2; // rbx
  __int64 v3; // rdi

  v2 = a1;
  if ( a2 )
  {
    v3 = 32 * a2;
    memset_0(a1, 0, 32 * a2);
    v2 += v3;
  }
  return v2;
}
