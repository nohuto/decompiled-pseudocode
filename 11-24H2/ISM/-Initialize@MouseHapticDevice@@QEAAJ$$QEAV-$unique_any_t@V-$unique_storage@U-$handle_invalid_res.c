/*
 * XREFs of ?Initialize@MouseHapticDevice@@QEAAJ$$QEAV?$unique_any_t@V?$unique_storage@U?$handle_invalid_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@$$QEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_HIDP_PREPARSED_DATA@@P6AEPEAU1@@Z$1?HidD_FreePreparsedData@@YAE0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@3@@Z @ 0x180188CAC
 * Callers:
 *     ?TryAttachHapticMouse@HapticDeviceManager@@QEAAJKAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@0@Z @ 0x18018DBD0 (-TryAttachHapticMouse@HapticDeviceManager@@QEAAJKAEBV-$basic_string@GU-$char_traits@G@std@@V-$al.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E71C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008F754 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKUContactState@MagnifierRecognizer@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x180184B08 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBKUContactStat.c)
 *     ?Add@?$ListPrincipalSimpleCommon@VBamoList_SimpleHapticsControllerFeedback_Principal@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@VBamoConnection@2@VBamoList_SimpleHapticsControllerFeedback_Stub@2345@USimpleHapticsControllerFeedback@@AEBU8@@Bamo@Microsoft@@QEAAJAEBUSimpleHapticsControllerFeedback@@@Z @ 0x180184C5C (-Add@-$ListPrincipalSimpleCommon@VBamoList_SimpleHapticsControllerFeedback_Principal@ISMBamos_Au.c)
 *     ?Initialize@CompliantHapticInterface@@QEAAJ$$QEAV?$unique_any_t@V?$unique_storage@U?$handle_invalid_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@$$QEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_HIDP_PREPARSED_DATA@@P6AEPEAU1@@Z$1?HidD_FreePreparsedData@@YAE0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@3@@Z @ 0x180199D80 (-Initialize@CompliantHapticInterface@@QEAAJ$$QEAV-$unique_any_t@V-$unique_storage@U-$handle_inva.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall MouseHapticDevice::Initialize(__int64 a1)
{
  int v2; // eax
  __int64 v3; // rdx
  unsigned int v4; // edi
  __int64 *v6; // rax
  __int64 v7; // rcx
  void (__fastcall *v8)(__int64, __int64); // rax
  __int64 *v9; // rax
  _QWORD *v10; // rcx
  int v11; // eax
  int v12; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 *v14; // [rsp+30h] [rbp+8h] BYREF
  __int64 *v15; // [rsp+38h] [rbp+10h] BYREF

  v2 = CompliantHapticInterface::Initialize((CompliantHapticInterface *)(a1 + 88));
  v4 = v2;
  if ( v2 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x23,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\haptic\\api\\server\\mousehapticdevice.cpp",
      (const char *)(unsigned int)v2);
    return v4;
  }
  v6 = **(__int64 ***)(a1 + 408);
  v14 = v6;
  while ( !*((_BYTE *)v6 + 25) )
  {
    switch ( *((_WORD *)v6 + 14) )
    {
      case '#':
        v7 = a1 + 8;
        v8 = *(void (__fastcall **)(__int64, __int64))(*(_QWORD *)(a1 + 8) + 80LL);
        break;
      case '$':
        v7 = a1 + 8;
        v8 = *(void (__fastcall **)(__int64, __int64))(*(_QWORD *)(a1 + 8) + 96LL);
        break;
      case '%':
        v7 = a1 + 8;
        v8 = *(void (__fastcall **)(__int64, __int64))(*(_QWORD *)(a1 + 8) + 128LL);
        break;
      default:
        goto LABEL_12;
    }
    LOBYTE(v3) = 1;
    v8(v7, v3);
LABEL_12:
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned long const,MagnifierRecognizer::ContactState>>>,std::_Iterator_base0>::operator++(&v14);
    v6 = v14;
  }
  v9 = **(__int64 ***)(a1 + 320);
  v15 = v9;
  while ( !*((_BYTE *)v9 + 25) )
  {
    if ( (v9[5] & 8) == 0 )
    {
      v10 = *(_QWORD **)(a1 + 616);
      v14 = (__int64 *)v9[4];
      v11 = Microsoft::Bamo::ListPrincipalSimpleCommon<Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_SimpleHapticsControllerFeedback_Principal,ISMBamos_AutoBamos::BamoConnection,Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_SimpleHapticsControllerFeedback_Stub,SimpleHapticsControllerFeedback,SimpleHapticsControllerFeedback const &>::Add(
              v10,
              (__int64)&v14);
      if ( v11 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x42,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\haptic\\api\\server\\mousehapticdevice.cpp",
          (const char *)(unsigned int)v11,
          v12);
    }
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned long const,MagnifierRecognizer::ContactState>>>,std::_Iterator_base0>::operator++(&v15);
    v9 = v15;
  }
  return 0LL;
}
