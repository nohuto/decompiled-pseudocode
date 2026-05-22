/*
 * XREFs of ?CancelOperation@GestureServices@@MEAAJPEAVBamoGestureServicesStub@@IPEAVBamoDragManagerClientProxy@@W4GestureProcessorType@@@Z @ 0x180142130
 * Callers:
 *     <none>
 * Callees:
 *     ??$find@X@?$_Hash@V?$_Umap_traits@KUPointerCache@EdgyProcessor@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUPointerCache@EdgyProcessor@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUPointerCache@EdgyProcessor@@@std@@@std@@@std@@@1@AEBK@Z @ 0x1800274C8 (--$find@X@-$_Hash@V-$_Umap_traits@KUPointerCache@EdgyProcessor@@V-$_Uhash_compare@KU-$hash@K@std.c)
 *     ?GetProcessorTypeString@GestureServices@@QEBAPEBGW4GestureProcessorType@@@Z @ 0x180080FA0 (-GetProcessorTypeString@GestureServices@@QEBAPEBGW4GestureProcessorType@@@Z.c)
 *     ?CancelOperationReceived@InputGesture@InputETW@@SAXPEBGK@Z @ 0x1801421DC (-CancelOperationReceived@InputGesture@InputETW@@SAXPEBGK@Z.c)
 *     ?CancelOperation@GestureHandler@@QEAAXXZ @ 0x180146790 (-CancelOperation@GestureHandler@@QEAAXXZ.c)
 *     ?CancelDrag@DragNDropProcessor@@QEAAJKPEAVBamoDragManagerClientProxy@@@Z @ 0x18014AB20 (-CancelDrag@DragNDropProcessor@@QEAAJKPEAVBamoDragManagerClientProxy@@@Z.c)
 *     ?CancelDrag@EdgyProcessor@@QEAAJKPEAVBamoDragManagerClientProxy@@@Z @ 0x180153854 (-CancelDrag@EdgyProcessor@@QEAAJKPEAVBamoDragManagerClientProxy@@@Z.c)
 */

__int64 __fastcall GestureServices::CancelOperation(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        struct BamoDragManagerClientProxy *a4,
        int a5)
{
  int v5; // edi
  const unsigned __int16 *ProcessorTypeString; // rax
  _QWORD v11[3]; // [rsp+20h] [rbp-18h] BYREF
  unsigned int v12; // [rsp+50h] [rbp+18h] BYREF

  v12 = a3;
  v5 = a5;
  ProcessorTypeString = GestureServices::GetProcessorTypeString((_QWORD *)a1, a5);
  InputETW::InputGesture::CancelOperationReceived(ProcessorTypeString, a3);
  if ( v5 )
  {
    if ( v5 == 1 )
    {
      EdgyProcessor::CancelDrag(*(EdgyProcessor **)(a1 + 72), a3, a4);
    }
    else
    {
      std::_Hash<std::_Umap_traits<unsigned long,EdgyProcessor::PointerCache,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,EdgyProcessor::PointerCache>>,0>>::find<void>(
        a1 + 200,
        (__int64)v11,
        &v12);
      if ( v11[0] != *(_QWORD *)(a1 + 208) )
        GestureHandler::CancelOperation(*(GestureHandler **)(v11[0] + 24LL));
    }
  }
  else
  {
    DragNDropProcessor::CancelDrag(*(DragNDropProcessor **)(a1 + 64), a3, a4);
  }
  return 0LL;
}
