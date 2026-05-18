/*
 * XREFs of unknown_libname_128 @ 0x1800DB698
 * Callers:
 *     <none>
 * Callees:
 *     ??1TaskStack@details@Concurrency@@QEAA@XZ @ 0x180010280 (--1TaskStack@details@Concurrency@@QEAA@XZ.c)
 */

// Microsoft VisualC v14 64bit runtime
void __fastcall unknown_libname_128(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 32) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    Concurrency::details::TaskStack::~TaskStack(*(Concurrency::details::TaskStack **)(a2 + 96));
  }
}
