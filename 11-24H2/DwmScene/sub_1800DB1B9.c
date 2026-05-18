/*
 * XREFs of sub_1800DB1B9 @ 0x1800DB1B9
 * Callers:
 *     <none>
 * Callees:
 *     ??1TaskStack@details@Concurrency@@QEAA@XZ @ 0x180010380 (--1TaskStack@details@Concurrency@@QEAA@XZ.c)
 */

void __fastcall sub_1800DB1B9(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 56) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 56) &= ~1u;
    Concurrency::details::TaskStack::~TaskStack(*(Concurrency::details::TaskStack **)(a2 + 64));
  }
}
