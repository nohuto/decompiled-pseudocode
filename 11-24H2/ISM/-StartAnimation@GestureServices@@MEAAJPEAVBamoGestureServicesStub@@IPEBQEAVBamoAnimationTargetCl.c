/*
 * XREFs of ?StartAnimation@GestureServices@@MEAAJPEAVBamoGestureServicesStub@@IPEBQEAVBamoAnimationTargetClientProxy@@IPEAVBamoDragManagerClientProxy@@W4GestureProcessorType@@@Z @ 0x180143610
 * Callers:
 *     <none>
 * Callees:
 *     ??$find@X@?$_Hash@V?$_Umap_traits@KUPointerCache@EdgyProcessor@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUPointerCache@EdgyProcessor@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUPointerCache@EdgyProcessor@@@std@@@std@@@std@@@1@AEBK@Z @ 0x1800274C8 (--$find@X@-$_Hash@V-$_Umap_traits@KUPointerCache@EdgyProcessor@@V-$_Uhash_compare@KU-$hash@K@std.c)
 *     ??$emplace@AEBI@?$_Hash@V?$_Uset_traits@IV?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@I@2@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@I@std@@@std@@@std@@_N@1@AEBI@Z @ 0x180027854 (--$emplace@AEBI@-$_Hash@V-$_Uset_traits@IV-$_Uhash_compare@IU-$hash@I@std@@U-$equal_to@I@2@@std@.c)
 *     ?IsShellClient@GestureServices@@AEBA_NPEAVDragManagerClientProxy@@@Z @ 0x1800284EC (-IsShellClient@GestureServices@@AEBA_NPEAVDragManagerClientProxy@@@Z.c)
 *     ?GetProcessId@BaseBamoPeer@Bamo@Microsoft@@QEBAIXZ @ 0x180037A08 (-GetProcessId@BaseBamoPeer@Bamo@Microsoft@@QEBAIXZ.c)
 *     ?GetProcessorTypeString@GestureServices@@QEBAPEBGW4GestureProcessorType@@@Z @ 0x180080FA0 (-GetProcessorTypeString@GestureServices@@QEBAPEBGW4GestureProcessorType@@@Z.c)
 *     ??$count@X@?$_Hash@V?$_Uset_traits@IV?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@I@2@$0A@@std@@@std@@QEBA_KAEBI@Z @ 0x1800831B4 (--$count@X@-$_Hash@V-$_Uset_traits@IV-$_Uhash_compare@IU-$hash@I@std@@U-$equal_to@I@2@@std@@V-$a.c)
 *     __security_check_cookie @ 0x18009D650 (__security_check_cookie.c)
 *     ??$_Try_emplace@AEB_K$$V@?$_Hash@V?$_Umap_traits@_KV?$shared_ptr@VGestureHandler@@@std@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@2@V?$allocator@U?$pair@$$CB_KV?$shared_ptr@VGestureHandler@@@std@@@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CB_KV?$shared_ptr@VGestureHandler@@@std@@@std@@PEAX@std@@_N@1@AEB_K@Z @ 0x1801417BC (--$_Try_emplace@AEB_K$$V@-$_Hash@V-$_Umap_traits@_KV-$shared_ptr@VGestureHandler@@@std@@V-$_Uhas.c)
 *     ??4?$shared_ptr@VGestureHandler@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x180141E24 (--4-$shared_ptr@VGestureHandler@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?AnimationStarted@InputGesture@InputETW@@SAXPEBGK_K1@Z @ 0x180141EEC (-AnimationStarted@InputGesture@InputETW@@SAXPEBGK_K1@Z.c)
 *     ?StartAnimationReceived@InputGesture@InputETW@@SAXPEBGK@Z @ 0x18014384C (-StartAnimationReceived@InputGesture@InputETW@@SAXPEBGK@Z.c)
 *     ?SetAnimationDataForSource@DragManagerClientProxy@@QEAAX_KAEBUGestureAnimationData@Input@Internal@UI@Windows@@@Z @ 0x180145A00 (-SetAnimationDataForSource@DragManagerClientProxy@@QEAAX_KAEBUGestureAnimationData@Input@Interna.c)
 *     ?SetData@AnimationTargetClientProxy@@QEAAXAEBUGestureAnimationData@Input@Internal@UI@Windows@@@Z @ 0x180146150 (-SetData@AnimationTargetClientProxy@@QEAAXAEBUGestureAnimationData@Input@Internal@UI@Windows@@@Z.c)
 *     ?StartAnimation@GestureHandler@@QEAAXAEAV?$unordered_set@IU?$hash@I@std@@U?$equal_to@I@2@V?$allocator@I@2@@std@@_N@Z @ 0x180146DA8 (-StartAnimation@GestureHandler@@QEAAXAEAV-$unordered_set@IU-$hash@I@std@@U-$equal_to@I@2@V-$allo.c)
 *     ?StartAnimation@GestureHandler@@QEAAXI_N@Z @ 0x180146F24 (-StartAnimation@GestureHandler@@QEAAXI_N@Z.c)
 *     ?StartAnimation@DragNDropProcessor@@QEAAJKPEAVBamoDragManagerClientProxy@@@Z @ 0x18014DA34 (-StartAnimation@DragNDropProcessor@@QEAAJKPEAVBamoDragManagerClientProxy@@@Z.c)
 *     ?StartAnimation@EdgyProcessor@@QEAAJKPEAVBamoDragManagerClientProxy@@@Z @ 0x180155800 (-StartAnimation@EdgyProcessor@@QEAAJKPEAVBamoDragManagerClientProxy@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall GestureServices::StartAnimation(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        AnimationTargetClientProxy **a4,
        int a5,
        struct DragManagerClientProxy *a6,
        int a7)
{
  const unsigned __int16 *ProcessorTypeString; // rax
  unsigned __int64 v11; // rsi
  unsigned __int64 v12; // rbx
  const unsigned __int16 *v13; // rax
  unsigned __int64 v14; // r9
  unsigned __int64 v15; // r8
  __int64 v16; // rax
  AnimationTargetClientProxy **v17; // rbx
  __int64 v18; // rax
  unsigned __int64 *i; // rcx
  const unsigned __int16 *v20; // rax
  unsigned int ProcessId; // [rsp+38h] [rbp-38h] BYREF
  int v23; // [rsp+40h] [rbp-30h]
  _BYTE v24[16]; // [rsp+48h] [rbp-28h] BYREF
  unsigned __int64 v25[2]; // [rsp+58h] [rbp-18h] BYREF

  ProcessId = a3;
  v23 = a7;
  ProcessorTypeString = GestureServices::GetProcessorTypeString((_QWORD *)a1, a7);
  InputETW::InputGesture::StartAnimationReceived(ProcessorTypeString, a3);
  v11 = 0LL;
  if ( !a7 )
  {
    DragNDropProcessor::StartAnimation(*(DragNDropProcessor **)(a1 + 64), a3, a6);
    return 0LL;
  }
  if ( a7 == 1 )
  {
    EdgyProcessor::StartAnimation(*(EdgyProcessor **)(a1 + 72), a3, a6);
    return 0LL;
  }
  std::_Hash<std::_Umap_traits<unsigned long,EdgyProcessor::PointerCache,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,EdgyProcessor::PointerCache>>,0>>::find<void>(
    a1 + 200,
    (__int64)v25,
    &ProcessId);
  v12 = v25[0];
  if ( v25[0] != *(_QWORD *)(a1 + 208) )
  {
    ProcessId = Microsoft::Bamo::BaseBamoPeer::GetProcessId(*(Microsoft::Bamo::BaseBamoPeer **)(*((_QWORD *)a6 + 4)
                                                                                              + 16LL));
    if ( !std::_Hash<std::_Uset_traits<unsigned int,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<unsigned int>,0>>::count<void>(
            a1 + 136,
            (__int64)&ProcessId) )
    {
      if ( !GestureServices::IsShellClient((GestureServices *)a1, a6) )
      {
        GestureHandler::StartAnimation(*(GestureHandler **)(v12 + 24), ProcessId, a5 != 0);
LABEL_10:
        *(_OWORD *)v25 = *(_OWORD *)(*(_QWORD *)(v12 + 24) + 256LL);
        if ( v25[0] )
        {
          v16 = std::_Hash<std::_Umap_traits<unsigned __int64,std::shared_ptr<GestureHandler>,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,std::shared_ptr<GestureHandler>>>,0>>::_Try_emplace<unsigned __int64 const &,>(
                  (float *)(a1 + 264),
                  (__int64)v24,
                  v25);
          std::shared_ptr<GestureHandler>::operator=((_QWORD *)(*(_QWORD *)v16 + 24LL), (_QWORD *)(v12 + 24));
          if ( a5 && *a4 )
          {
            v17 = &a4[a5];
            while ( a4 != v17 )
              AnimationTargetClientProxy::SetData(
                *a4++,
                (const struct Windows::UI::Internal::Input::GestureAnimationData *)v25);
          }
          else
          {
            v18 = *(_QWORD *)(v12 + 24);
            for ( i = *(unsigned __int64 **)(v18 + 112); i != *(unsigned __int64 **)(v18 + 120); i += 5 )
            {
              if ( (struct DragManagerClientProxy *)i[1] == a6 )
              {
                v11 = *i;
                break;
              }
            }
            DragManagerClientProxy::SetAnimationDataForSource(
              a6,
              v11,
              (const struct Windows::UI::Internal::Input::GestureAnimationData *)v25);
          }
        }
        v20 = GestureServices::GetProcessorTypeString((_QWORD *)a1, v23);
        InputETW::InputGesture::AnimationStarted(v20, a3, v25[1], v25[0]);
        v14 = v25[0];
        v15 = v25[1];
        goto LABEL_24;
      }
      std::_Hash<std::_Uset_traits<unsigned int,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<unsigned int>,0>>::emplace<unsigned int const &>(
        a1 + 136,
        (__int64)v24,
        &ProcessId);
    }
    GestureHandler::StartAnimation(*(GestureHandler **)(v12 + 24));
    goto LABEL_10;
  }
  v13 = GestureServices::GetProcessorTypeString((_QWORD *)a1, a7);
  InputETW::InputGesture::AnimationStarted(v13, a3, 0LL, 0LL);
  v14 = 0LL;
  v15 = 0LL;
LABEL_24:
  (*(void (__fastcall **)(__int64, _QWORD, unsigned __int64, unsigned __int64))(*((_QWORD *)a6 + 1) + 64LL))(
    (__int64)a6 + 8,
    a3,
    v15,
    v14);
  return 0LL;
}
