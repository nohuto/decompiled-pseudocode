/*
 * XREFs of ??$_Emplace_reallocate@AEBUIntendedHotKeySnapInfo@HotkeyHandler@@@?$vector@UIntendedHotKeySnapInfo@HotkeyHandler@@V?$allocator@UIntendedHotKeySnapInfo@HotkeyHandler@@@std@@@std@@AEAAPEAUIntendedHotKeySnapInfo@HotkeyHandler@@QEAU23@AEBU23@@Z @ 0x1805ACFF8
 * Callers:
 *     ?HandleHotkey@HotkeyHandler@@UEAAJIIW4ARRANGEMENT_HOTKEY_DISAMBIGUATION@@@Z @ 0x1805AE210 (-HandleHotkey@HotkeyHandler@@UEAAJIIW4ARRANGEMENT_HOTKEY_DISAMBIGUATION@@@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18004860C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800489DC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0DI@@std@@YA_K_K@Z @ 0x18029691C (--$_Get_size_of_n@$0DI@@std@@YA_K_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@UIntendedHotKeySnapInfo@HotkeyHandler@@@std@@@std@@YAXPEAUIntendedHotKeySnapInfo@HotkeyHandler@@QEAU12@AEAV?$allocator@UIntendedHotKeySnapInfo@HotkeyHandler@@@0@@Z @ 0x1805ACFC0 (--$_Destroy_range@V-$allocator@UIntendedHotKeySnapInfo@HotkeyHandler@@@std@@@std@@YAXPEAUIntende.c)
 *     ??$_Uninitialized_move@PEAUIntendedHotKeySnapInfo@HotkeyHandler@@V?$allocator@UIntendedHotKeySnapInfo@HotkeyHandler@@@std@@@std@@YAPEAUIntendedHotKeySnapInfo@HotkeyHandler@@QEAU12@0PEAU12@AEAV?$allocator@UIntendedHotKeySnapInfo@HotkeyHandler@@@0@@Z @ 0x1805AD1AC (--$_Uninitialized_move@PEAUIntendedHotKeySnapInfo@HotkeyHandler@@V-$allocator@UIntendedHotKeySna.c)
 *     ??0IntendedHotKeySnapInfo@HotkeyHandler@@QEAA@AEBU01@@Z @ 0x1805AD324 (--0IntendedHotKeySnapInfo@HotkeyHandler@@QEAA@AEBU01@@Z.c)
 */

char *__fastcall std::vector<HotkeyHandler::IntendedHotKeySnapInfo>::_Emplace_reallocate<HotkeyHandler::IntendedHotKeySnapInfo const &>(
        HotkeyHandler::IntendedHotKeySnapInfo **a1,
        HotkeyHandler::IntendedHotKeySnapInfo *a2,
        const struct HotkeyHandler::IntendedHotKeySnapInfo *a3)
{
  __int64 v5; // r14
  __int64 v6; // r15
  unsigned __int64 v7; // rsi
  unsigned __int64 v8; // r15
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  size_t size_of; // rax
  HotkeyHandler::IntendedHotKeySnapInfo *v12; // rax
  HotkeyHandler::IntendedHotKeySnapInfo *v13; // rdi
  char *v14; // r14
  HotkeyHandler::IntendedHotKeySnapInfo *v15; // rdx
  HotkeyHandler::IntendedHotKeySnapInfo *v16; // r8
  HotkeyHandler::IntendedHotKeySnapInfo *v17; // rcx
  char *result; // rax
  HotkeyHandler::IntendedHotKeySnapInfo *v19; // [rsp+20h] [rbp-48h]
  HotkeyHandler::IntendedHotKeySnapInfo *v20; // [rsp+70h] [rbp+8h]

  v5 = (a2 - *a1) / 56;
  v6 = 0x6DB6DB6DB6DB6DB7LL * ((a1[1] - *a1) >> 3);
  v7 = 0x492492492492492LL;
  if ( v6 == 0x492492492492492LL )
    std::_Xlength_error("vector too long");
  v8 = v6 + 1;
  v9 = 0x6DB6DB6DB6DB6DB7LL * ((a1[2] - *a1) >> 3);
  v10 = v9 >> 1;
  if ( v9 <= 0x492492492492492LL - (v9 >> 1) )
  {
    v7 = v10 + v9;
    if ( v10 + v9 < v8 )
      v7 = v8;
  }
  size_of = std::_Get_size_of_n<56>(v7);
  v12 = (HotkeyHandler::IntendedHotKeySnapInfo *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v13 = v12;
  v19 = v12;
  v14 = (char *)v12 + 56 * v5;
  try
  {
    HotkeyHandler::IntendedHotKeySnapInfo::IntendedHotKeySnapInfo((HotkeyHandler::IntendedHotKeySnapInfo *)v14, a3);
    v20 = (HotkeyHandler::IntendedHotKeySnapInfo *)v14;
    v15 = a1[1];
    v16 = v13;
    v17 = *a1;
    if ( a2 != v15 )
    {
      std::_Uninitialized_move<HotkeyHandler::IntendedHotKeySnapInfo *>(v17, a2, v13);
      v20 = v13;
      v16 = (HotkeyHandler::IntendedHotKeySnapInfo *)(v14 + 56);
      v15 = a1[1];
      v17 = a2;
    }
    std::_Uninitialized_move<HotkeyHandler::IntendedHotKeySnapInfo *>(v17, v15, v16);
    if ( *a1 )
    {
      std::_Destroy_range<std::allocator<HotkeyHandler::IntendedHotKeySnapInfo>>(*a1, a1[1]);
      std::_Deallocate<16,0>(*a1, (const struct std::nothrow_t *)(8 * ((a1[2] - *a1) >> 3)));
    }
    *a1 = v13;
    a1[1] = (HotkeyHandler::IntendedHotKeySnapInfo *)((char *)v13 + 56 * v8);
    a1[2] = (HotkeyHandler::IntendedHotKeySnapInfo *)((char *)v13 + 56 * v7);
    result = v14;
  }
  catch ( ... )
  {
    std::_Destroy_range<std::allocator<HotkeyHandler::IntendedHotKeySnapInfo>>(
      v20,
      (HotkeyHandler::IntendedHotKeySnapInfo *)(v14 + 56));
    std::_Deallocate<16,0>(v19, (const struct std::nothrow_t *)(56 * v7));
    throw;
  }
  return result;
}
