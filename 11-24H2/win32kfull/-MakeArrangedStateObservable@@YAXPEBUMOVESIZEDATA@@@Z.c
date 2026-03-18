/*
 * XREFs of ?MakeArrangedStateObservable@@YAXPEBUMOVESIZEDATA@@@Z @ 0x14026C4B0
 * Callers:
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAUMOVESIZEDATA@@@Z @ 0x14024A45C (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAUMOVESIZEDATA@@@Z.c)
 *     ?xxxUpdateArrangeDataForMove@@YAXPEAUMOVESIZEDATA@@PEAUtagMONITOR@@W4THRESHOLD_MARGIN_DIRECTION@@2@Z @ 0x14024C8C0 (-xxxUpdateArrangeDataForMove@@YAXPEAUMOVESIZEDATA@@PEAUtagMONITOR@@W4THRESHOLD_MARGIN_DIRECTION@.c)
 *     ?HandleNoTargetToDockTargetSizing@@YAXPEAUMOVESIZEDATA@@PEAUtagMONITOR@@1W4THRESHOLD_MARGIN_DIRECTION@@PEAK@Z @ 0x1402A5614 (-HandleNoTargetToDockTargetSizing@@YAXPEAUMOVESIZEDATA@@PEAUtagMONITOR@@1W4THRESHOLD_MARGIN_DIRE.c)
 *     ?HandleSizingAwayFromDockTarget@@YAXPEAUMOVESIZEDATA@@PEBUCHECKPOINT@@PEAK@Z @ 0x1402A5850 (-HandleSizingAwayFromDockTarget@@YAXPEAUMOVESIZEDATA@@PEBUCHECKPOINT@@PEAK@Z.c)
 *     ?xxxCommitMoveSizeOld@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@@Z @ 0x1402A7F9C (-xxxCommitMoveSizeOld@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@@Z.c)
 * Callees:
 *     SetOrClrWF @ 0x140049160 (SetOrClrWF.c)
 *     ?IsArranged@@YA_NPEBUtagWND@@@Z @ 0x14014EAE0 (-IsArranged@@YA_NPEBUtagWND@@@Z.c)
 *     ?IsInterceptWindow@WindowActions@@YA_NPEBUtagWND@@@Z @ 0x14026C524 (-IsInterceptWindow@WindowActions@@YA_NPEBUtagWND@@@Z.c)
 */

void __fastcall MakeArrangedStateObservable(const struct MOVESIZEDATA *a1, const struct tagWND *a2)
{
  __int64 v3; // rcx
  struct tagWND *v4; // rdx

  if ( !WindowActions::IsInterceptWindow(*((WindowActions **)a1 + 2), a2) )
  {
    if ( (*((_DWORD *)a1 + 50) & 0x10000000) != 0 )
      *(_DWORD *)(v3 + 380) |= 0x4000000u;
    else
      *(_DWORD *)(v3 + 380) &= ~0x4000000u;
    if ( !IsArranged(*((const struct tagWND **)a1 + 2)) )
    {
      v4 = (struct tagWND *)*((_QWORD *)a1 + 2);
      if ( (*(_BYTE *)(*((_QWORD *)v4 + 5) + 233LL) & 0x10) != 0 )
        SetOrClrWF(0, v4, 0xD910u, 1);
    }
  }
}
