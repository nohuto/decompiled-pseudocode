/*
 * XREFs of ?HandleRIMDeviceInput@HapticDeviceManager@@QEAAXPEAX0K@Z @ 0x180186A30
 * Callers:
 *     ?OnInputReport@PenDeviceCollection@@MEAAJKPEAXK@Z @ 0x1800DC6F0 (-OnInputReport@PenDeviceCollection@@MEAAJKPEAXK@Z.c)
 * Callees:
 *     ??$find@X@?$_Hash@V?$_Uset_traits@PEAUIHeatSystemContextClient@@V?$_Uhash_compare@PEAUIHeatSystemContextClient@@U?$hash@PEAUIHeatSystemContextClient@@@std@@U?$equal_to@PEAUIHeatSystemContextClient@@@3@@std@@V?$allocator@PEAUIHeatSystemContextClient@@@3@$0A@@std@@@std@@QEAA?AV?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@PEAUIHeatSystemContextClient@@@std@@@std@@@1@AEBQEAUIHeatSystemContextClient@@@Z @ 0x180099A74 (--$find@X@-$_Hash@V-$_Uset_traits@PEAUIHeatSystemContextClient@@V-$_Uhash_compare@PEAUIHeatSyste.c)
 *     ?ProcessInputReport@PenInterface@@QEAAJPEADK@Z @ 0x180188B38 (-ProcessInputReport@PenInterface@@QEAAJPEADK@Z.c)
 */

void __fastcall HapticDeviceManager::HandleRIMDeviceInput(
        HapticDeviceManager *this,
        void *a2,
        char *a3,
        unsigned int a4)
{
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF
  void *v8; // [rsp+38h] [rbp+10h] BYREF

  v8 = a2;
  std::_Hash<std::_Uset_traits<IHeatSystemContextClient *,std::_Uhash_compare<IHeatSystemContextClient *,std::hash<IHeatSystemContextClient *>,std::equal_to<IHeatSystemContextClient *>>,std::allocator<IHeatSystemContextClient *>,0>>::find<void>(
    (_QWORD *)this + 10,
    &v7,
    (__int64)&v8);
  if ( v7 != *((_QWORD *)this + 11) )
    PenInterface::ProcessInputReport(*(PenInterface **)(v7 + 24), a3, a4);
}
