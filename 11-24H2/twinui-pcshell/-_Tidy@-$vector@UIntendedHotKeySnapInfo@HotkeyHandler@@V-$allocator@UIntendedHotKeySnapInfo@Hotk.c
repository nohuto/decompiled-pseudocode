/*
 * XREFs of ?_Tidy@?$vector@UIntendedHotKeySnapInfo@HotkeyHandler@@V?$allocator@UIntendedHotKeySnapInfo@HotkeyHandler@@@std@@@std@@AEAAXXZ @ 0x1805B033C
 * Callers:
 *     ??1HotkeyHandler@@UEAA@XZ @ 0x1805AD41C (--1HotkeyHandler@@UEAA@XZ.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18004860C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@UIntendedHotKeySnapInfo@HotkeyHandler@@@std@@@std@@YAXPEAUIntendedHotKeySnapInfo@HotkeyHandler@@QEAU12@AEAV?$allocator@UIntendedHotKeySnapInfo@HotkeyHandler@@@0@@Z @ 0x1805ACFC0 (--$_Destroy_range@V-$allocator@UIntendedHotKeySnapInfo@HotkeyHandler@@@std@@@std@@YAXPEAUIntende.c)
 */

void __fastcall std::vector<HotkeyHandler::IntendedHotKeySnapInfo>::_Tidy(__int64 a1)
{
  HotkeyHandler::IntendedHotKeySnapInfo *v2; // rcx

  v2 = *(HotkeyHandler::IntendedHotKeySnapInfo **)a1;
  if ( v2 )
  {
    std::_Destroy_range<std::allocator<HotkeyHandler::IntendedHotKeySnapInfo>>(
      v2,
      *(HotkeyHandler::IntendedHotKeySnapInfo **)(a1 + 8));
    std::_Deallocate<16,0>(
      *(void **)a1,
      (const struct std::nothrow_t *)(8 * ((__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 3)));
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
