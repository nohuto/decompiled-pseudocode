/*
 * XREFs of sub_1800D9C5C @ 0x1800D9C5C
 * Callers:
 *     <none>
 * Callees:
 *     ??1TaskStack@details@Concurrency@@QEAA@XZ @ 0x180010280 (--1TaskStack@details@Concurrency@@QEAA@XZ.c)
 */

void __fastcall sub_1800D9C5C(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 224) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 224) &= ~1u;
    Concurrency::details::TaskStack::~TaskStack((Concurrency::details::TaskStack *)(a2 + 64));
  }
}
