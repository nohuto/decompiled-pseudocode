/*
 * XREFs of DxgkDestroyClientAllocation @ 0x140337B58
 * Callers:
 *     ?DestroyAllocation@DXGCONTEXT@@QEAAJIPEAVCOREDEVICEACCESS@@@Z @ 0x1402CC71C (-DestroyAllocation@DXGCONTEXT@@QEAAJIPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?DxgkCddDestroyAllocation@@YAJII@Z @ 0x1402CC920 (-DxgkCddDestroyAllocation@@YAJII@Z.c)
 *     ?DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEAPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEBIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x140409620 (-DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEA.c)
 * Callees:
 *     ?DestroyClientResource@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@@Z @ 0x1401B1230 (-DestroyClientResource@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@@Z.c)
 *     ?RemoveAllocationFromList@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@H@Z @ 0x140337BD4 (-RemoveAllocationFromList@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@H@Z.c)
 *     ?DestroyClientAllocations@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@@Z @ 0x140337EC4 (-DestroyClientAllocations@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@@Z.c)
 */

void __fastcall DxgkDestroyClientAllocation(
        __int64 a1,
        DXGDEVICE *a2,
        unsigned int a3,
        struct DXGALLOCATION **a4,
        struct DXGALLOCATION **P)
{
  __int64 v7; // rsi
  struct DXGALLOCATION *v8; // rbx

  if ( P )
  {
    DXGDEVICE::DestroyClientResource(a2, P);
  }
  else if ( a3 )
  {
    v7 = a3;
    do
    {
      v8 = *a4;
      DXGDEVICE::RemoveAllocationFromList(a2, *a4, 0);
      DXGDEVICE::DestroyClientAllocations(a2, v8);
      ++a4;
      --v7;
    }
    while ( v7 );
  }
}
