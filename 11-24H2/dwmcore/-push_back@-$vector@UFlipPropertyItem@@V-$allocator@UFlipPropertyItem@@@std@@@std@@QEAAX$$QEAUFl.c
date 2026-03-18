/*
 * XREFs of ?push_back@?$vector@UFlipPropertyItem@@V?$allocator@UFlipPropertyItem@@@std@@@std@@QEAAX$$QEAUFlipPropertyItem@@@Z @ 0x1801F6314
 * Callers:
 *     ?Present@CCaptureRenderTarget@@MEAAJXZ @ 0x1802361B0 (-Present@CCaptureRenderTarget@@MEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::vector<FlipPropertyItem>::push_back(__int64 a1, _OWORD *a2)
{
  _OWORD *v3; // rdx
  __int64 result; // rax

  v3 = *(_OWORD **)(a1 + 8);
  if ( v3 == *(_OWORD **)(a1 + 16) )
    return std::vector<FlipPropertyItem>::_Emplace_reallocate<FlipPropertyItem>(a1, v3, a2);
  *v3 = *a2;
  v3[1] = a2[1];
  *(_QWORD *)(a1 + 8) += 32LL;
  return result;
}
