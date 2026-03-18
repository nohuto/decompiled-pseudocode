/*
 * XREFs of ?RemoveDirectFlipResourceFromRequestedPinnedList@DXGDEVICE@@AEAAXIIPEBVDXGRESOURCEREFERENCE@@@Z @ 0x1401B8FCC
 * Callers:
 *     ?PinDirectFlipResources@DXGDEVICE@@QEAAJIPEBVDXGRESOURCEREFERENCE@@_N@Z @ 0x1402DFDE0 (-PinDirectFlipResources@DXGDEVICE@@QEAAJIPEBVDXGRESOURCEREFERENCE@@_N@Z.c)
 * Callees:
 *     ?RemoveDirectFlipAllocationFromRequestedPinnedList@DXGDEVICE@@AEAAXIPEAVDXGALLOCATION@@@Z @ 0x1402E10A4 (-RemoveDirectFlipAllocationFromRequestedPinnedList@DXGDEVICE@@AEAAXIPEAVDXGALLOCATION@@@Z.c)
 */

void __fastcall DXGDEVICE::RemoveDirectFlipResourceFromRequestedPinnedList(
        DXGDEVICE *this,
        unsigned int a2,
        unsigned int a3,
        const struct DXGRESOURCEREFERENCE *a4)
{
  __int64 v5; // rsi
  struct DXGALLOCATION *i; // rbx

  if ( a3 )
  {
    v5 = a3;
    do
    {
      for ( i = *(struct DXGALLOCATION **)(*(_QWORD *)a4 + 24LL); i; i = (struct DXGALLOCATION *)*((_QWORD *)i + 8) )
        DXGDEVICE::RemoveDirectFlipAllocationFromRequestedPinnedList(this, a2, i);
      a4 = (const struct DXGRESOURCEREFERENCE *)((char *)a4 + 8);
      --v5;
    }
    while ( v5 );
  }
}
