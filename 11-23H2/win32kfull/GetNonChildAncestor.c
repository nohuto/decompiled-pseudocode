/*
 * XREFs of GetNonChildAncestor @ 0x1C00A70E4
 * Callers:
 *     ?xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroundBehaviors@@W4SetForegroundffects@@@Z @ 0x1C002E5BC (-xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegrou.c)
 *     xxxCreateWindowEx @ 0x1C0051ED0 (xxxCreateWindowEx.c)
 *     NtUserSelectPalette @ 0x1C00763A0 (NtUserSelectPalette.c)
 *     xxxDrawMenuBarUnderlines @ 0x1C00A3B00 (xxxDrawMenuBarUnderlines.c)
 *     _anonymous_namespace_::xxxLocalActivateWindow @ 0x1C00A57E8 (_anonymous_namespace_--xxxLocalActivateWindow.c)
 *     ?zzzImeSetOwnerWindow@@YAXPEAUtagWND@@0@Z @ 0x1C00A6F64 (-zzzImeSetOwnerWindow@@YAXPEAUtagWND@@0@Z.c)
 *     xxxRealDefWindowProc @ 0x1C0109880 (xxxRealDefWindowProc.c)
 *     _SelectPalette @ 0x1C0130E10 (_SelectPalette.c)
 *     EditionChangeForegroundQueueForMouseInput @ 0x1C01AB5C0 (EditionChangeForegroundQueueForMouseInput.c)
 *     xxxNextWindow @ 0x1C01C9C54 (xxxNextWindow.c)
 *     xxxHandleNCMouseGuys @ 0x1C0200170 (xxxHandleNCMouseGuys.c)
 *     ?xxxCloseApplication@@YAXPEAUtagTHREADINFO@@@Z @ 0x1C0221C18 (-xxxCloseApplication@@YAXPEAUtagTHREADINFO@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetNonChildAncestor(__int64 a1)
{
  __int64 v1; // r8

  v1 = a1;
  if ( a1 && (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 31LL) & 0xC0) == 0x40 )
  {
    do
      v1 = *(_QWORD *)(v1 + 104);
    while ( (*(_BYTE *)(*(_QWORD *)(v1 + 40) + 31LL) & 0xC0) == 0x40 );
  }
  return v1;
}
