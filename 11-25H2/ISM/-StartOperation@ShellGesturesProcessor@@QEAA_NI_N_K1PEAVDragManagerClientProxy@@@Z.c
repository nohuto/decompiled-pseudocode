/*
 * XREFs of ?StartOperation@ShellGesturesProcessor@@QEAA_NI_N_K1PEAVDragManagerClientProxy@@@Z @ 0x1801586E8
 * Callers:
 *     ?StartOperation@GestureServices@@MEAAJPEAVBamoGestureServicesStub@@I_N_K2PEAVBamoDragManagerClientProxy@@W4GestureProcessorType@@@Z @ 0x1801418C0 (-StartOperation@GestureServices@@MEAAJPEAVBamoGestureServicesStub@@I_N_K2PEAVBamoDragManagerClie.c)
 * Callees:
 *     ??$?RW4_Button@@@?$_Uhash_compare@W4_Button@@U?$hash@W4_Button@@@std@@U?$equal_to@W4_Button@@@3@@std@@QEBA_KAEBW4_Button@@@Z @ 0x180026F68 (--$-RW4_Button@@@-$_Uhash_compare@W4_Button@@U-$hash@W4_Button@@@std@@U-$equal_to@W4_Button@@@3@.c)
 *     ?GetProcessId@BaseBamoPeer@Bamo@Microsoft@@QEBAIXZ @ 0x18003AF78 (-GetProcessId@BaseBamoPeer@Bamo@Microsoft@@QEBAIXZ.c)
 *     ?PointerTypeToInputType@@YA?AW4InputType@@K_N@Z @ 0x18004EDA0 (-PointerTypeToInputType@@YA-AW4InputType@@K_N@Z.c)
 *     ??$_Find_last@K@?$_Hash@V?$_Umap_traits@KV?$ComPtr@VBamoControllerNavigationClientProxy@@@WRL@Microsoft@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@VBamoControllerNavigationClientProxy@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@$$CBKV?$ComPtr@VBamoControllerNavigationClientProxy@@@WRL@Microsoft@@@std@@PEAX@std@@@1@AEBK_K@Z @ 0x1800515EC (--$_Find_last@K@-$_Hash@V-$_Umap_traits@KV-$ComPtr@VBamoControllerNavigationClientProxy@@@WRL@Mi.c)
 *     ?lock@?$weak_ptr@VSystemCursorService2@@@std@@QEBA?AV?$shared_ptr@VSystemCursorService2@@@2@XZ @ 0x1800584E8 (-lock@-$weak_ptr@VSystemCursorService2@@@std@@QEBA-AV-$shared_ptr@VSystemCursorService2@@@2@XZ.c)
 *     ?SendCurrentGestureEvent@ShellGesturesProcessor@@AEAAXAEAUHandlerContext@1@@Z @ 0x1800586A4 (-SendCurrentGestureEvent@ShellGesturesProcessor@@AEAAXAEAUHandlerContext@1@@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180058AF4 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?IsDesktopAllowed@KernelContextProvider@@QEBA_N_K@Z @ 0x1800799C4 (-IsDesktopAllowed@KernelContextProvider@@QEBA_N_K@Z.c)
 *     ?AddGestureClient@GestureHandler@@QEAAX_KPEAVDragManagerClientProxy@@PEAVInputSite@@2@Z @ 0x180144520 (-AddGestureClient@GestureHandler@@QEAAX_KPEAVDragManagerClientProxy@@PEAVInputSite@@2@Z.c)
 *     ?InitializeForGesture@GestureHandler@@QEAAXIW4InputType@@UGestureTargetData@@@Z @ 0x1801449E0 (-InitializeForGesture@GestureHandler@@QEAAXIW4InputType@@UGestureTargetData@@@Z.c)
 *     ??0HandlerContext@ShellGesturesProcessor@@QEAA@IUtagPOINT@@_N@Z @ 0x180156F04 (--0HandlerContext@ShellGesturesProcessor@@QEAA@IUtagPOINT@@_N@Z.c)
 *     ?CreateHandlerForHandlerContext@ShellGesturesProcessor@@CAXAEAUHandlerContext@1@UtagPOINT@@_K@Z @ 0x18015725C (-CreateHandlerForHandlerContext@ShellGesturesProcessor@@CAXAEAUHandlerContext@1@UtagPOINT@@_K@Z.c)
 *     ?reset@?$_Optional_destruct_base@UHandlerContext@ShellGesturesProcessor@@$0A@@std@@QEAAXXZ @ 0x180158F10 (-reset@-$_Optional_destruct_base@UHandlerContext@ShellGesturesProcessor@@$0A@@std@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall ShellGesturesProcessor::StartOperation(
        KernelContextProvider **this,
        unsigned int a2,
        bool a3,
        __int64 a4,
        unsigned __int64 a5,
        struct DragManagerClientProxy *a6)
{
  struct DragManagerClientProxy *v10; // rbp
  __int64 v11; // rcx
  __int64 v12; // rax
  int *v13; // r9
  __int64 v14; // rdx
  _QWORD **v15; // r8
  __int64 v16; // r9
  struct DragManagerClientProxy *v17; // rbx
  __int64 v18; // rdi
  __int64 v19; // rcx
  int ProcessId; // ebx
  unsigned int v21; // r8d
  KernelContextProvider *v22; // rcx
  KernelContextProvider *v23; // rax
  unsigned int v24; // r9d
  unsigned int v25; // r10d
  _QWORD *v26; // rax
  __int64 v27; // r9
  _QWORD *v28; // rcx
  __int64 v29; // rdi
  struct InputSite *v30; // r9
  GestureHandler *v31; // rbx
  std::_Ref_count_base *v32; // rcx
  GestureHandler *v34; // [rsp+30h] [rbp-48h] BYREF
  std::_Ref_count_base *v35; // [rsp+38h] [rbp-40h]
  __int128 v36; // [rsp+40h] [rbp-38h] BYREF
  unsigned int v37; // [rsp+88h] [rbp+10h] BYREF

  v37 = a2;
  v10 = a6;
  if ( !KernelContextProvider::IsDesktopAllowed(this[3], *((_QWORD *)a6 + 19)) )
    return 0;
  v12 = std::_Uhash_compare<enum _Button,std::hash<enum _Button>,std::equal_to<enum _Button>>::operator()<enum _Button>(
          v11,
          (__int64)&v37);
  v13 = (int *)std::_Hash<std::_Umap_traits<unsigned long,Microsoft::WRL::ComPtr<BamoControllerNavigationClientProxy>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<BamoControllerNavigationClientProxy>>>,0>>::_Find_last<unsigned long>(
                 this + 16,
                 &v36,
                 &v37,
                 v12)[1];
  if ( !v13 )
    v13 = (int *)this[17];
  if ( v13 == (int *)this[17] )
    return 0;
  PointerTypeToInputType(v13[8], 0);
  v17 = *(struct DragManagerClientProxy **)(v16 + 64);
  v18 = *(_QWORD *)(v16 + 24);
  if ( a3 )
  {
    v19 = *(_QWORD *)(v18 + 248);
    if ( !v19 )
      return 0;
    ProcessId = Microsoft::Bamo::BaseBamoPeer::GetProcessId(*(Microsoft::Bamo::BaseBamoPeer **)(*(_QWORD *)(v19 + 32)
                                                                                              + 16LL));
    if ( ProcessId != (unsigned int)Microsoft::Bamo::BaseBamoPeer::GetProcessId(*(Microsoft::Bamo::BaseBamoPeer **)(*((_QWORD *)v10 + 4) + 16LL)) )
      return 0;
    a6 = 0LL;
    v21 = 0;
    v22 = this[17];
    v23 = *(KernelContextProvider **)v22;
    v24 = 0;
    v25 = 0;
    while ( v23 != v22 )
    {
      if ( *((_QWORD *)v23 + 3) == v18 )
      {
        v25 += *((_DWORD *)v23 + 16);
        v24 += *((_DWORD *)v23 + 17);
        ++v21;
      }
      v23 = *(KernelContextProvider **)v23;
    }
    LODWORD(a6) = v25 / v21;
    HIDWORD(a6) = v24 / v21;
    v17 = a6;
  }
  else
  {
    v26 = *v15;
    while ( 1 )
    {
      v27 = v14;
      if ( v26 == v15 )
        break;
      v28 = v26 + 3;
      v26 = (_QWORD *)*v26;
      ++v14;
      if ( *v28 != v18 )
        v14 = v27;
    }
    if ( v14 != 1 )
      return 0;
  }
  if ( *(_BYTE *)(v18 + 456) )
    return 0;
  v29 = v18 + 424;
  std::_Optional_destruct_base<ShellGesturesProcessor::HandlerContext,0>::reset(v29);
  ShellGesturesProcessor::HandlerContext::HandlerContext(
    (ShellGesturesProcessor::HandlerContext *)v29,
    a2,
    (struct tagPOINT)v17,
    a3);
  *(_BYTE *)(v29 + 32) = 1;
  ShellGesturesProcessor::CreateHandlerForHandlerContext(
    (struct ShellGesturesProcessor::HandlerContext *)v29,
    (struct tagPOINT)v17,
    a5);
  std::weak_ptr<SystemCursorService2>::lock(v29 + 16, &v34);
  v31 = v34;
  if ( v34 )
  {
    GestureHandler::AddGestureClient(v34, a4, v10, v30);
    v36 = 0LL;
    GestureHandler::InitializeForGesture((__int64)v31, a2);
  }
  v32 = v35;
  if ( v35 )
    std::_Ref_count_base::_Decref(v35);
  ShellGesturesProcessor::SendCurrentGestureEvent(v32, (std::_Ref_count_base **)v29);
  *(_DWORD *)(v29 + 4) = 2;
  return 1;
}
