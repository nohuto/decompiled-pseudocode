/*
 * XREFs of ??0IntendedHotKeySnapInfo@HotkeyHandler@@QEAA@$$QEAU01@@Z @ 0x1805AD2CC
 * Callers:
 *     ??$_Uninitialized_move@PEAUIntendedHotKeySnapInfo@HotkeyHandler@@V?$allocator@UIntendedHotKeySnapInfo@HotkeyHandler@@@std@@@std@@YAPEAUIntendedHotKeySnapInfo@HotkeyHandler@@QEAU12@0PEAU12@AEAV?$allocator@UIntendedHotKeySnapInfo@HotkeyHandler@@@0@@Z @ 0x1805AD1AC (--$_Uninitialized_move@PEAUIntendedHotKeySnapInfo@HotkeyHandler@@V-$allocator@UIntendedHotKeySna.c)
 *     ?GetAndRemoveIntendedHotKeySnapInfo@HotkeyHandler@@AEAA?AUIntendedHotKeySnapInfo@1@PEAUHWND__@@@Z @ 0x1805ADE34 (-GetAndRemoveIntendedHotKeySnapInfo@HotkeyHandler@@AEAA-AUIntendedHotKeySnapInfo@1@PEAUHWND__@@@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HotkeyHandler::IntendedHotKeySnapInfo::IntendedHotKeySnapInfo(__int64 a1, __int64 a2)
{
  __int128 v2; // xmm0
  _QWORD *v3; // rdx

  *(_QWORD *)a1 = 0LL;
  if ( a1 != a2 )
  {
    *(_QWORD *)a1 = *(_QWORD *)a2;
    *(_QWORD *)a2 = 0LL;
  }
  *(_OWORD *)(a1 + 8) = *(_OWORD *)(a2 + 8);
  *(_DWORD *)(a1 + 24) = *(_DWORD *)(a2 + 24);
  *(_DWORD *)(a1 + 28) = *(_DWORD *)(a2 + 28);
  v2 = *(_OWORD *)(a2 + 32);
  v3 = (_QWORD *)(a2 + 48);
  *(_OWORD *)(a1 + 32) = v2;
  *(_QWORD *)(a1 + 48) = 0LL;
  if ( (_QWORD *)(a1 + 48) != v3 )
  {
    *(_QWORD *)(a1 + 48) = *v3;
    *v3 = 0LL;
  }
  return a1;
}
