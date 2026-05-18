/*
 * XREFs of sub_1800D883E @ 0x1800D883E
 * Callers:
 *     <none>
 * Callees:
 *     ??1TaskStack@details@Concurrency@@QEAA@XZ @ 0x180010380 (--1TaskStack@details@Concurrency@@QEAA@XZ.c)
 */

void __fastcall sub_1800D883E(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 344) & 2) != 0 )
  {
    *(_DWORD *)(a2 + 344) &= ~2u;
    Concurrency::details::TaskStack::~TaskStack((Concurrency::details::TaskStack *)(a2 + 112));
  }
}
