/*
 * XREFs of ?Clear@CPtrArrayBase@@IEAAXXZ @ 0x180039B94
 * Callers:
 *     ??1CVisual@@MEAA@XZ @ 0x18003941C (--1CVisual@@MEAA@XZ.c)
 *     ??1CWindowNode@@MEAA@XZ @ 0x1800489BC (--1CWindowNode@@MEAA@XZ.c)
 *     ??1CThreadContext@@AEAA@XZ @ 0x1802ADAF4 (--1CThreadContext@@AEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CPtrArrayBase::Clear(CPtrArrayBase *this)
{
  void *v2; // rbx
  HANDLE ProcessHeap; // rax

  if ( (*(_QWORD *)this & 2) != 0 )
  {
    v2 = (void *)(*(_QWORD *)this & 0xFFFFFFFFFFFFFFFCuLL);
    if ( v2 )
    {
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, v2);
    }
  }
  *(_QWORD *)this = 0LL;
}
