/*
 * XREFs of ??0HapticDeviceManager@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z @ 0x180185DEC
 * Callers:
 *     ??0InputSystem@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z @ 0x18000D7E8 (--0InputSystem@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z.c)
 *     ?OnDeviceAttach@PenDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x1800DC4E0 (-OnDeviceAttach@PenDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 * Callees:
 *     ?_Assign_grow@?$_Hash_vec@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUMessageInfo@ResizeProcessor@@@std@@@std@@@std@@@std@@@std@@@std@@QEAAX_KV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUMessageInfo@ResizeProcessor@@@std@@@std@@@std@@@2@@Z @ 0x18000CC20 (-_Assign_grow@-$_Hash_vec@V-$allocator@V-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_.c)
 *     ??0BamoPrincipalImpl@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnection@Bamo@2@@Z @ 0x18000E01C (--0BamoPrincipalImpl@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnection@Bamo@2@@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180017AF0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18009D5CC (--2@YAPEAX_K@Z.c)
 *     ??0?$ListPrincipal@VBamoPenDevicePrincipal@@@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@QEAA@PEAVBamoConnection@1@@Z @ 0x180185D7C (--0-$ListPrincipal@VBamoPenDevicePrincipal@@@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@QEAA@PEAVBam.c)
 *     ?SetPenDevices@BamoHapticDeviceManagerPrincipal@@UEAAXPEAVBamoList_PenDevicePrincipal_Principal@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@@Z @ 0x180187C50 (-SetPenDevices@BamoHapticDeviceManagerPrincipal@@UEAAXPEAVBamoList_PenDevicePrincipal_Principal@.c)
 */

// Hidden C++ exception states: #wind=6
HapticDeviceManager *__fastcall HapticDeviceManager::HapticDeviceManager(
        HapticDeviceManager *this,
        struct ISMBamos_AutoBamos::BamoConnection *a2)
{
  BamoHapticDeviceManagerPrincipal *v4; // rsi
  _QWORD *v5; // rax
  _QWORD *v6; // rax
  struct Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_PenDevicePrincipal_Principal *v7; // rax
  _QWORD *v9; // [rsp+50h] [rbp+18h]

  *(_QWORD *)this = &BamoHapticDeviceManagerPrincipal::`vftable'{for `Microsoft::Bamo::BamoPrincipal'};
  v4 = (HapticDeviceManager *)((char *)this + 8);
  *((_QWORD *)this + 1) = &HapticDeviceManager::`vftable'{for `IHapticDeviceManagerPrincipal'};
  Microsoft::BamoImpl::BamoPrincipalImpl::BamoPrincipalImpl((HapticDeviceManager *)((char *)this + 16), a2);
  *((_QWORD *)this + 2) = &BamoImpl::BamoHapticDeviceManagerPrincipalImpl::`vftable';
  *((_QWORD *)this + 7) = 0LL;
  *(_QWORD *)this = &HapticDeviceManager::`vftable'{for `Microsoft::Bamo::BamoPrincipal'};
  *(_QWORD *)v4 = &HapticDeviceManager::`vftable'{for `IHapticDeviceManagerPrincipal'};
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  v5 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x38uLL);
  *v5 = v5;
  v5[1] = v5;
  v5[2] = v5;
  *((_WORD *)v5 + 12) = 257;
  *((_QWORD *)this + 8) = v5;
  *((_DWORD *)this + 20) = 0;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  v6 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x20uLL);
  *v6 = v6;
  v6[1] = v6;
  *((_QWORD *)this + 11) = v6;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 7LL;
  *((_QWORD *)this + 17) = 8LL;
  *((_DWORD *)this + 20) = 1065353216;
  std::_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const,ResizeProcessor::MessageInfo>>>>>>::_Assign_grow(
    (__int64)this + 104,
    0x10uLL,
    *((_QWORD *)this + 11));
  v9 = operator new(0x50uLL);
  v7 = (struct Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_PenDevicePrincipal_Principal *)Microsoft::Bamo::Lib::ISMBamos_AutoBamos::ListPrincipal<BamoPenDevicePrincipal>::ListPrincipal<BamoPenDevicePrincipal>(
                                                                                                   v9,
                                                                                                   a2);
  BamoHapticDeviceManagerPrincipal::SetPenDevices(v4, v7);
  return this;
}
