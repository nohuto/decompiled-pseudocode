/*
 * XREFs of DpiDestroyBlockList @ 0x140238F68
 * Callers:
 *     DpiInitializeBlockList @ 0x140238FB0 (DpiInitializeBlockList.c)
 *     DpiFdoStopAdapter @ 0x140248100 (DpiFdoStopAdapter.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x140020540 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 */

void __fastcall DpiDestroyBlockList(__int64 a1)
{
  void *v2; // rcx
  void *v3; // rcx

  v2 = *(void **)(a1 + 5856);
  if ( v2 )
  {
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v2);
    *(_QWORD *)(a1 + 5856) = 0LL;
  }
  v3 = *(void **)(a1 + 5872);
  if ( v3 )
  {
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v3);
    *(_QWORD *)(a1 + 5872) = 0LL;
  }
}
