/*
 * XREFs of ?InsertDirectFlipResourceToRequestedPinnedList@DXGDEVICE@@AEAAEIIPEBVDXGRESOURCEREFERENCE@@@Z @ 0x1402E0CB0
 * Callers:
 *     ?PinDirectFlipResources@DXGDEVICE@@QEAAJIPEBVDXGRESOURCEREFERENCE@@_N@Z @ 0x1402DFDE0 (-PinDirectFlipResources@DXGDEVICE@@QEAAJIPEBVDXGRESOURCEREFERENCE@@_N@Z.c)
 * Callees:
 *     ?InsertDirectFlipAllocationToRequestedPinnedList@DXGDEVICE@@AEAAEIPEAVDXGALLOCATION@@@Z @ 0x1402E0D58 (-InsertDirectFlipAllocationToRequestedPinnedList@DXGDEVICE@@AEAAEIPEAVDXGALLOCATION@@@Z.c)
 */

unsigned __int8 __fastcall DXGDEVICE::InsertDirectFlipResourceToRequestedPinnedList(
        DXGDEVICE *this,
        unsigned int a2,
        unsigned int a3,
        const struct DXGRESOURCEREFERENCE *a4)
{
  __int64 v8; // rdi
  struct DXGALLOCATION *i; // rbx
  unsigned __int8 result; // al

  v8 = 0LL;
LABEL_2:
  if ( (unsigned int)v8 >= a3 )
    return 1;
  for ( i = *(struct DXGALLOCATION **)(*((_QWORD *)a4 + v8) + 24LL); ; i = (struct DXGALLOCATION *)*((_QWORD *)i + 8) )
  {
    if ( !i )
    {
      v8 = (unsigned int)(v8 + 1);
      goto LABEL_2;
    }
    if ( !DXGDEVICE::InsertDirectFlipAllocationToRequestedPinnedList(this, a2, i) )
      break;
  }
  WdLogSingleEntry2(3LL, i, *((_QWORD *)a4 + v8));
  result = 0;
  WdLogGlobalForLineNumber = 9378;
  return result;
}
