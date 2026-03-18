/*
 * XREFs of ?clear@?$vector@U?$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@std@@V?$allocator@U?$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@std@@@2@@std@@QEAAXXZ @ 0x1800093D0
 * Callers:
 *     ?EnsureAncestorList@CBackdropVisualImage@@AEAAXXZ @ 0x180008640 (-EnsureAncestorList@CBackdropVisualImage@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall std::vector<std::pair<CVisual const *,CVisualTreePath const>>::clear(__int64 *a1)
{
  __int64 v1; // rdi
  __int64 v3; // rbp
  _QWORD *v4; // rbx
  _QWORD *v5; // rsi
  __int64 v6; // rax
  HANDLE ProcessHeap; // rax

  v1 = *a1;
  v3 = a1[1];
  if ( *a1 != v3 )
  {
    v4 = (_QWORD *)(v1 + 16);
    do
    {
      v5 = (_QWORD *)*(v4 - 1);
      v6 = (__int64)(*v4 - (_QWORD)v5) >> 4;
      if ( v6 )
        *v4 -= 16 * v6;
      *(v4 - 1) = 0LL;
      if ( v5 != v4 + 2 )
      {
        if ( v5 )
        {
          ProcessHeap = GetProcessHeap();
          HeapFree(ProcessHeap, 0, v5);
        }
      }
      v1 += 64LL;
      v4 += 8;
    }
    while ( v1 != v3 );
    a1[1] = *a1;
  }
}
