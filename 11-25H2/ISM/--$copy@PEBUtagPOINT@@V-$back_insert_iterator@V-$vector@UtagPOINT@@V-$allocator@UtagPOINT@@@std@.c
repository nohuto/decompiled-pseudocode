/*
 * XREFs of ??$copy@PEBUtagPOINT@@V?$back_insert_iterator@V?$vector@UtagPOINT@@V?$allocator@UtagPOINT@@@std@@@std@@@std@@@std@@YA?AV?$back_insert_iterator@V?$vector@UtagPOINT@@V?$allocator@UtagPOINT@@@std@@@std@@@0@PEBUtagPOINT@@0V10@@Z @ 0x180147B30
 * Callers:
 *     ?OnInput@DragNDropProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x18014A8E0 (-OnInput@DragNDropProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorRespon.c)
 *     ?OnInputDrag@EdgyProcessor@@AEAAXPEAUInputInfo@@AEAUtagPOINTER_INFO@@PEAUContextualProcessorResponse@@@Z @ 0x180152A0C (-OnInputDrag@EdgyProcessor@@AEAAXPEAUInputInfo@@AEAUtagPOINTER_INFO@@PEAUContextualProcessorResp.c)
 * Callees:
 *     ??$_Emplace_reallocate@AEBUSimpleHapticsControllerFeedback@@@?$vector@USimpleHapticsControllerFeedback@@V?$allocator@USimpleHapticsControllerFeedback@@@std@@@std@@AEAAPEAUSimpleHapticsControllerFeedback@@QEAU2@AEBU2@@Z @ 0x1800AD724 (--$_Emplace_reallocate@AEBUSimpleHapticsControllerFeedback@@@-$vector@USimpleHapticsControllerFe.c)
 */

__int64 *__fastcall std::copy<tagPOINT const *,std::back_insert_iterator<std::vector<tagPOINT>>>(
        __int64 *a1,
        _QWORD *a2,
        _QWORD *a3,
        __int64 a4)
{
  _QWORD *i; // rdi
  _BYTE *v8; // rdx
  __int64 *result; // rax

  for ( i = a2; i != a3; ++i )
  {
    v8 = *(_BYTE **)(a4 + 8);
    if ( v8 == *(_BYTE **)(a4 + 16) )
    {
      std::vector<SimpleHapticsControllerFeedback>::_Emplace_reallocate<SimpleHapticsControllerFeedback const &>(
        a4,
        v8,
        i);
    }
    else
    {
      *(_QWORD *)v8 = *i;
      *(_QWORD *)(a4 + 8) += 8LL;
    }
  }
  result = a1;
  *a1 = a4;
  return result;
}
