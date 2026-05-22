/*
 * XREFs of _lambda_7f079bc5e87df2e09bd622ff86c26e64_::operator() @ 0x1801A9F2C
 * Callers:
 *     std::remove_if_std::_List_iterator_std::_List_val_std::_List_simple_types_VirtualHotKeyTracker::KeyEventData_______lambda_7f079bc5e87df2e09bd622ff86c26e64___ @ 0x1801A9DB0 (std--remove_if_std--_List_iterator_std--_List_val_std--_List_simple_types_VirtualHotKeyTracker--.c)
 * Callees:
 *     ?SynthesizeKeyEvent@VirtualHotKeyTracker@@AEAAXAEBUKeyEventData@1@U_GUID@@W4_SYNTHESIZE_KEYBOARD_OPTIONS@@@Z @ 0x1801AA480 (-SynthesizeKeyEvent@VirtualHotKeyTracker@@AEAAXAEBUKeyEventData@1@U_GUID@@W4_SYNTHESIZE_KEYBOARD.c)
 */

char __fastcall lambda_7f079bc5e87df2e09bd622ff86c26e64_::operator()(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rdx
  __int128 v4; // [rsp+20h] [rbp-18h] BYREF

  if ( *(_WORD *)(a2 + 26) != *(_WORD *)(*a1 + 26LL) )
    return 0;
  v2 = *a1;
  v4 = *(_OWORD *)a1[2];
  ((void (__fastcall *)(_QWORD *, __int64, __int128 *, __int64))VirtualHotKeyTracker::SynthesizeKeyEvent)(
    a1,
    v2,
    &v4,
    2LL);
  return 1;
}
