/*
 * XREFs of ?Realloc@ProcessHeapImpl@WPF@@UEAAJPEAPEAX_K@Z @ 0x18001FD30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall WPF::ProcessHeapImpl::Realloc(WPF::ProcessHeapImpl *this, void **a2, SIZE_T a3)
{
  void *v5; // rax
  SIZE_T v7; // r8
  void *v8; // rax

  if ( *a2 )
  {
    v5 = HeapReAlloc(g_hProcessHeap, 0, *a2, a3);
    if ( v5 )
    {
      *a2 = v5;
      return 0LL;
    }
  }
  else
  {
    v7 = 1LL;
    if ( a3 )
      v7 = a3;
    v8 = HeapAlloc(g_hProcessHeap, 0, v7);
    *a2 = v8;
    if ( v8 )
      return 0LL;
  }
  return 2147942414LL;
}
