/*
 * XREFs of ??0ClippingScopeState@CScopedClipStack@@QEAA@$$QEAU01@@Z @ 0x1800F8CD0
 * Callers:
 *     ??$emplace_back@$$V@?$vector_facade@UClippingScopeState@CScopedClipStack@@V?$buffer_impl@UClippingScopeState@CScopedClipStack@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x180056680 (--$emplace_back@$$V@-$vector_facade@UClippingScopeState@CScopedClipStack@@V-$buffer_impl@UClippi.c)
 *     ?EnterClippingScope@CScopedClipStack@@QEAAX_NPEBVIDeviceTarget@@AEBVCMILMatrix@@PEBV3@@Z @ 0x1800F83D0 (-EnterClippingScope@CScopedClipStack@@QEAAX_NPEBVIDeviceTarget@@AEBVCMILMatrix@@PEBV3@@Z.c)
 *     ??$uninitialized_move@V?$move_iterator@PEAUClippingScopeState@CScopedClipStack@@@std@@V?$checked_array_iterator@PEAUClippingScopeState@CScopedClipStack@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUClippingScopeState@CScopedClipStack@@@stdext@@V?$move_iterator@PEAUClippingScopeState@CScopedClipStack@@@0@0V12@@Z @ 0x1800F8C28 (--$uninitialized_move@V-$move_iterator@PEAUClippingScopeState@CScopedClipStack@@@std@@V-$checked.c)
 *     ?PushClippingScope@CDrawingContext@@AEAAJPEBVCVisual@@_N1PEBVCMILMatrix@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800F94F0 (-PushClippingScope@CDrawingContext@@AEAAJPEBVCVisual@@_N1PEBVCMILMatrix@@PEAV-$TMilRect_@MUD2D_R.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CScopedClipStack::ClippingScopeState::ClippingScopeState(__int64 a1, __int64 a2)
{
  __int64 v2; // rax

  *(_QWORD *)a1 = *(_QWORD *)a2;
  *(_QWORD *)(a1 + 8) = *(_QWORD *)(a2 + 8);
  *(_QWORD *)(a1 + 16) = *(_QWORD *)(a2 + 16);
  *(_QWORD *)(a1 + 24) = *(_QWORD *)(a2 + 24);
  *(_QWORD *)(a1 + 32) = *(_QWORD *)(a2 + 32);
  *(_OWORD *)(a1 + 40) = *(_OWORD *)(a2 + 40);
  *(_OWORD *)(a1 + 56) = *(_OWORD *)(a2 + 56);
  *(_OWORD *)(a1 + 72) = *(_OWORD *)(a2 + 72);
  *(_OWORD *)(a1 + 88) = *(_OWORD *)(a2 + 88);
  *(_DWORD *)(a1 + 104) = *(_DWORD *)(a2 + 104);
  *(_OWORD *)(a1 + 108) = *(_OWORD *)(a2 + 108);
  *(_OWORD *)(a1 + 124) = *(_OWORD *)(a2 + 124);
  *(_OWORD *)(a1 + 140) = *(_OWORD *)(a2 + 140);
  *(_OWORD *)(a1 + 156) = *(_OWORD *)(a2 + 156);
  *(_DWORD *)(a1 + 172) = *(_DWORD *)(a2 + 172);
  v2 = *(_QWORD *)(a2 + 176);
  *(_QWORD *)(a2 + 176) = 0LL;
  *(_QWORD *)(a1 + 176) = v2;
  *(_BYTE *)(a1 + 184) = *(_BYTE *)(a2 + 184);
  return a1;
}
