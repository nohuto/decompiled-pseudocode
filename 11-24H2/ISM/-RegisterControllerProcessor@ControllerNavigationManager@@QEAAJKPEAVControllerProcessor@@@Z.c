/*
 * XREFs of ?RegisterControllerProcessor@ControllerNavigationManager@@QEAAJKPEAVControllerProcessor@@@Z @ 0x180176674
 * Callers:
 *     ?Initialize@ControllerProcessor@@IEAAJXZ @ 0x18017AB58 (-Initialize@ControllerProcessor@@IEAAJXZ.c)
 * Callees:
 *     ??$find@X@?$_Hash@V?$_Umap_traits@KUPointerCache@EdgyProcessor@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUPointerCache@EdgyProcessor@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUPointerCache@EdgyProcessor@@@std@@@std@@@std@@@1@AEBK@Z @ 0x1800274C8 (--$find@X@-$_Hash@V-$_Umap_traits@KUPointerCache@EdgyProcessor@@V-$_Uhash_compare@KU-$hash@K@std.c)
 *     ?InternalAddRef@?$ComPtr@VBamoDragSourceClientProxy@@@WRL@Microsoft@@IEBAXXZ @ 0x180028A8C (-InternalAddRef@-$ComPtr@VBamoDragSourceClientProxy@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?UpdateNavigationState@ControllerProcessor@@AEAAXW4ControllerNavigationTrigger@@PEAUtagRECT@@PEAUtagPOINT@@@Z @ 0x180036308 (-UpdateNavigationState@ControllerProcessor@@AEAAXW4ControllerNavigationTrigger@@PEAUtagRECT@@PEA.c)
 *     ??$_Insert_or_assign@AEBW4GameInputGamepadButtons@@AEAG@?$unordered_map@W4GameInputGamepadButtons@@GU?$hash@W4GameInputGamepadButtons@@@std@@U?$equal_to@W4GameInputGamepadButtons@@@3@V?$allocator@U?$pair@$$CBW4GameInputGamepadButtons@@G@std@@@3@@std@@AEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBW4GameInputGamepadButtons@@G@std@@@std@@@std@@@std@@_N@1@AEBW4GameInputGamepadButtons@@AEAG@Z @ 0x18006B400 (--$_Insert_or_assign@AEBW4GameInputGamepadButtons@@AEAG@-$unordered_map@W4GameInputGamepadButton.c)
 *     ??$emplace@AEAKAEAPEAVControllerProcessor@@@?$_Hash@V?$_Umap_traits@KPEAVControllerProcessor@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKPEAVControllerProcessor@@@std@@@3@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKPEAVControllerProcessor@@@std@@@std@@@std@@@std@@_N@1@AEAKAEAPEAVControllerProcessor@@@Z @ 0x180175308 (--$emplace@AEAKAEAPEAVControllerProcessor@@@-$_Hash@V-$_Umap_traits@KPEAVControllerProcessor@@V-.c)
 *     ?NavigationEnable@ControllerProcessor@@QEAAJIUtagRECT@@UtagPOINT@@_K_N3@Z @ 0x18017B294 (-NavigationEnable@ControllerProcessor@@QEAAJIUtagRECT@@UtagPOINT@@_K_N3@Z.c)
 *     ?NavigationResume@ControllerProcessor@@QEAAJIUtagRECT@@UtagPOINT@@@Z @ 0x18017B410 (-NavigationResume@ControllerProcessor@@QEAAJIUtagRECT@@UtagPOINT@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ControllerNavigationManager::RegisterControllerProcessor(
        ControllerNavigationManager *this,
        int a2,
        struct ControllerProcessor *a3)
{
  bool v4; // r12
  __int64 v5; // rcx
  __int16 v6; // ax
  __int64 v7; // rcx
  unsigned int v8; // ebx
  struct tagRECT v9; // xmm6
  struct tagPOINT *v10; // rax
  __int64 (__fastcall ***v11)(_QWORD); // rsi
  __int64 (__fastcall ***v12)(_QWORD); // r15
  unsigned int v13; // edi
  struct tagRECT v14; // xmm6
  struct tagPOINT v15; // rbx
  unsigned __int64 v16; // rax
  struct tagRECT v18; // [rsp+40h] [rbp-28h] BYREF
  __int64 (__fastcall ***v19)(_QWORD); // [rsp+A0h] [rbp+38h] BYREF
  int v20; // [rsp+A8h] [rbp+40h] BYREF
  ControllerProcessor *v21; // [rsp+B0h] [rbp+48h] BYREF
  int v22; // [rsp+B8h] [rbp+50h] BYREF

  v21 = a3;
  v20 = a2;
  v4 = *((_QWORD *)this + 10) == 0LL;
  std::_Hash<std::_Umap_traits<unsigned long,ControllerProcessor *,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,ControllerProcessor *>>,0>>::emplace<unsigned long &,ControllerProcessor * &>(
    (float *)this + 16,
    (__int64)&v18,
    &v20,
    &v21);
  v22 = 8;
  v6 = 196;
  if ( !*((_BYTE *)this + 228) )
    v6 = 27;
  LOWORD(v19) = v6;
  std::unordered_map<enum GameInputGamepadButtons,unsigned short>::_Insert_or_assign<enum GameInputGamepadButtons const &,unsigned short &>(
    v5,
    (__int64)&v18,
    &v22,
    &v19);
  v7 = *((_QWORD *)this + 24);
  if ( v7 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)(v7 + 8) + 32LL))(v7 + 8) )
    {
      ControllerProcessor::UpdateNavigationState((__int64)v21, 1, 0LL, 0LL);
    }
    else
    {
      v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)this + 24) + 8LL) + 40LL))(*((_QWORD *)this + 24) + 8LL);
      v9 = *(struct tagRECT *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)this + 24) + 8LL) + 48LL))(*((_QWORD *)this + 24) + 8LL);
      v10 = (struct tagPOINT *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)this + 24) + 8LL) + 56LL))(*((_QWORD *)this + 24) + 8LL);
      v18 = v9;
      ControllerProcessor::NavigationResume(v21, v8, &v18, *v10);
    }
  }
  std::_Hash<std::_Umap_traits<unsigned long,EdgyProcessor::PointerCache,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,EdgyProcessor::PointerCache>>,0>>::find<void>(
    (__int64)this + 128,
    (__int64)&v19,
    (_DWORD *)this + 56);
  if ( v19 != *((__int64 (__fastcall ****)(_QWORD))this + 17) )
  {
    v19 = (__int64 (__fastcall ***)(_QWORD))v19[3];
    v11 = v19;
    Microsoft::WRL::ComPtr<BamoDragSourceClientProxy>::InternalAddRef(&v19);
    v12 = v11 + 1;
    if ( (unsigned __int8)v11[1][4](v11 + 1) )
    {
      v13 = (*v12)[5](v11 + 1);
      v14 = *(struct tagRECT *)(*v12)[6](v11 + 1);
      v15 = *(struct tagPOINT *)(*v12)[7](v11 + 1);
      v16 = (*v12)[8](v11 + 1);
      v18 = v14;
      ControllerProcessor::NavigationEnable(v21, v13, &v18, v15, v16, 1, v4);
    }
    else
    {
      ControllerProcessor::UpdateNavigationState((__int64)v21, 2, 0LL, 0LL);
    }
    if ( v11 )
      (*v11)[1](v11);
  }
  return 0LL;
}
