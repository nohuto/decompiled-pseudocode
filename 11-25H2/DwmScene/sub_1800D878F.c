/*
 * XREFs of sub_1800D878F @ 0x1800D878F
 * Callers:
 *     <none>
 * Callees:
 *     ??1TaskStack@details@Concurrency@@QEAA@XZ @ 0x180010280 (--1TaskStack@details@Concurrency@@QEAA@XZ.c)
 */

void __fastcall sub_1800D878F(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 376) & 2) != 0 )
  {
    *(_DWORD *)(a2 + 376) &= ~2u;
    Concurrency::details::TaskStack::~TaskStack((Concurrency::details::TaskStack *)(a2 + 112));
  }
}
