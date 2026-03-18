/*
 * XREFs of DpiDestroyBlockList @ 0x140232588
 * Callers:
 *     DpiInitializeBlockList @ 0x1402325D0 (DpiInitializeBlockList.c)
 *     DpiFdoStopAdapter @ 0x1402412FC (DpiFdoStopAdapter.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x1400110B0 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
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
