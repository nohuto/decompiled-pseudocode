/*
 * XREFs of ?OnTargetWithFocusChanged@ControllerNavigationManager@@QEAAJPEAUIInputTarget@@0@Z @ 0x180024750
 * Callers:
 *     ?OnTargetWithFocusChanged@InputStateManager@@UEAAJPEAUIInputTarget@@0@Z @ 0x180023F30 (-OnTargetWithFocusChanged@InputStateManager@@UEAAJPEAUIInputTarget@@0@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000F254 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??$find@X@?$_Hash@V?$_Umap_traits@KUPointerCache@EdgyProcessor@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUPointerCache@EdgyProcessor@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUPointerCache@EdgyProcessor@@@std@@@std@@@std@@@1@AEBK@Z @ 0x1800274C8 (--$find@X@-$_Hash@V-$_Umap_traits@KUPointerCache@EdgyProcessor@@V-$_Uhash_compare@KU-$hash@K@std.c)
 *     ?IsEdition@@YA_N_K@Z @ 0x180035D40 (-IsEdition@@YA_N_K@Z.c)
 *     ?DisableNavigation@ControllerNavigationManager@@AEAAXXZ @ 0x180036254 (-DisableNavigation@ControllerNavigationManager@@AEAAXXZ.c)
 *     ??$_Insert_or_assign@AEBW4GameInputGamepadButtons@@AEAG@?$unordered_map@W4GameInputGamepadButtons@@GU?$hash@W4GameInputGamepadButtons@@@std@@U?$equal_to@W4GameInputGamepadButtons@@@3@V?$allocator@U?$pair@$$CBW4GameInputGamepadButtons@@G@std@@@3@@std@@AEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBW4GameInputGamepadButtons@@G@std@@@std@@@std@@@std@@_N@1@AEBW4GameInputGamepadButtons@@AEAG@Z @ 0x18006B400 (--$_Insert_or_assign@AEBW4GameInputGamepadButtons@@AEAG@-$unordered_map@W4GameInputGamepadButton.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E71C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetCurrentStateWithClient@ControllerNavigationManager@@AEAAXPEAVBamoControllerNavigationClientProxy@@@Z @ 0x180099554 (-SetCurrentStateWithClient@ControllerNavigationManager@@AEAAXPEAVBamoControllerNavigationClientP.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ControllerNavigationManager::OnTargetWithFocusChanged(
        ControllerNavigationManager *this,
        struct IInputTarget *a2,
        int (__fastcall ***a3)(struct IInputTarget *, GUID *, __int64 *))
{
  char v5; // si
  int (__fastcall *v6)(struct IInputTarget *, GUID *, __int64 *); // rbx
  int v7; // eax
  int v8; // eax
  __int16 v9; // ax
  int v11[4]; // [rsp+20h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+28h]
  struct IInputTarget *v13; // [rsp+68h] [rbp+38h] BYREF
  int v14; // [rsp+70h] [rbp+40h] BYREF
  __int64 v15; // [rsp+78h] [rbp+48h] BYREF

  v13 = a2;
  v14 = 0;
  v5 = 1;
  if ( a3 )
  {
    v15 = 0LL;
    v6 = **a3;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v15);
    if ( v6((struct IInputTarget *)a3, &GUID_a4e70d2d_6b93_4143_b95b_67efd0ccda59, &v15) >= 0 )
    {
      LODWORD(v13) = 0;
      v7 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v15 + 32LL))(v15, &v14);
      if ( v7 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0xEB,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllern"
                        "avigationmanager.cpp",
          (const char *)(unsigned int)v7,
          v11[0]);
      v8 = (*(__int64 (__fastcall **)(__int64, struct IInputTarget **))(*(_QWORD *)v15 + 48LL))(v15, &v13);
      if ( v8 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0xED,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllern"
                        "avigationmanager.cpp",
          (const char *)(unsigned int)v8,
          v11[0]);
      v5 = (_DWORD)v13 != 0;
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v15);
  }
  if ( *((_BYTE *)this + 228) != v5 )
  {
    *((_BYTE *)this + 228) = v5;
    LODWORD(v15) = 8;
    v9 = 196;
    if ( !v5 )
      v9 = 27;
    LOWORD(v13) = v9;
    std::unordered_map<enum GameInputGamepadButtons,unsigned short>::_Insert_or_assign<enum GameInputGamepadButtons const &,unsigned short &>(
      this,
      v11,
      &v15,
      &v13);
  }
  if ( *((_DWORD *)this + 56) != v14 )
  {
    std::_Hash<std::_Umap_traits<unsigned long,EdgyProcessor::PointerCache,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,EdgyProcessor::PointerCache>>,0>>::find<void>(
      (char *)this + 128,
      &v13,
      (char *)this + 224);
    if ( v13 != *((struct IInputTarget **)this + 17) )
      *(_BYTE *)(*((_QWORD *)v13 + 3) + 88LL) = 1;
    *((_DWORD *)this + 56) = v14;
    std::_Hash<std::_Umap_traits<unsigned long,EdgyProcessor::PointerCache,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,EdgyProcessor::PointerCache>>,0>>::find<void>(
      (char *)this + 128,
      &v13,
      (char *)this + 224);
    if ( v13 == *((struct IInputTarget **)this + 17) )
    {
      if ( IsEdition(0x3DDA1uLL) )
        ControllerNavigationManager::DisableNavigation(this);
    }
    else
    {
      ControllerNavigationManager::SetCurrentStateWithClient(
        this,
        *((struct BamoControllerNavigationClientProxy **)v13 + 3));
    }
  }
  return 0LL;
}
