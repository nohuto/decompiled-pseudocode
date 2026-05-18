/*
 * XREFs of sub_1800DAB61 @ 0x1800DAB61
 * Callers:
 *     <none>
 * Callees:
 *     ??1TaskStack@details@Concurrency@@QEAA@XZ @ 0x180010280 (--1TaskStack@details@Concurrency@@QEAA@XZ.c)
 */

void __fastcall sub_1800DAB61(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 176) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 176) &= ~1u;
    Concurrency::details::TaskStack::~TaskStack((Concurrency::details::TaskStack *)(a2 + 48));
  }
}
