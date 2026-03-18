/*
 * XREFs of DirtyVisRgnTrackers @ 0x1400497E8
 * Callers:
 *     CreateVisRgnTracker @ 0x140030A08 (CreateVisRgnTracker.c)
 *     SelectWindowRgn @ 0x140030A9C (SelectWindowRgn.c)
 *     OffsetChildren @ 0x140030CE0 (OffsetChildren.c)
 *     ?DecomposeWindowIfNeeded@@YAJPEAUtagWND@@@Z @ 0x140031868 (-DecomposeWindowIfNeeded@@YAJPEAUtagWND@@@Z.c)
 *     xxxSetWindowStyle @ 0x1400318F0 (xxxSetWindowStyle.c)
 *     xxxDoPaint @ 0x140033DBC (xxxDoPaint.c)
 *     xxxBeginPaint @ 0x140034CB0 (xxxBeginPaint.c)
 *     xxxEndPaint @ 0x140035878 (xxxEndPaint.c)
 *     zzzUpdateLayeredWindow @ 0x140035DCC (zzzUpdateLayeredWindow.c)
 *     InternalInvalidate3 @ 0x140044BB8 (InternalInvalidate3.c)
 *     xxxSimpleDoSyncPaint @ 0x1400477B0 (xxxSimpleDoSyncPaint.c)
 *     SetOrClrWF @ 0x140049160 (SetOrClrWF.c)
 *     xxxCreateWindowEx @ 0x14004B6FC (xxxCreateWindowEx.c)
 *     xxxCalcClientRect @ 0x1400712A8 (xxxCalcClientRect.c)
 *     ?ComposeWindowIfNeeded@@YAJPEAUtagWND@@H@Z @ 0x140074820 (-ComposeWindowIfNeeded@@YAJPEAUtagWND@@H@Z.c)
 *     UnlinkWindow @ 0x140075240 (UnlinkWindow.c)
 *     ?DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z @ 0x14018A400 (-DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z.c)
 *     ?xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z @ 0x14022C22C (-xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z.c)
 *     LinkWindow @ 0x1402B47A8 (LinkWindow.c)
 * Callees:
 *     ??$GetProp@VCVisRgnTrackerProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCVisRgnTrackerProp@@@Z @ 0x140031054 (--$GetProp@VCVisRgnTrackerProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCVisRgnTrackerProp@@@Z.c)
 *     _GetDesktopWindow @ 0x140046470 (_GetDesktopWindow.c)
 *     _IsTopLevelWindow @ 0x140049A60 (_IsTopLevelWindow.c)
 *     ?MarkDirtyWorker@@YAXPEAUtagWND@@@Z @ 0x140167B88 (-MarkDirtyWorker@@YAXPEAUtagWND@@@Z.c)
 *     ?MarkDirty@CVisRgnTrackerProp@@QEAAXXZ @ 0x140196A10 (-MarkDirty@CVisRgnTrackerProp@@QEAAXXZ.c)
 *     W32GetCurrentThreadNonPaged @ 0x14026E814 (W32GetCurrentThreadNonPaged.c)
 */

void __fastcall DirtyVisRgnTrackers(struct tagWND *a1, __int64 a2)
{
  struct tagWND *v2; // rbx
  _QWORD *CurrentThreadNonPaged; // rax
  __int64 v4; // rax
  char v5; // si
  _QWORD *v6; // rdi
  _QWORD *i; // rcx
  __int64 v8; // rdx
  char v9; // al
  CVisRgnTrackerProp *v10; // [rsp+30h] [rbp+8h] BYREF

  if ( a1 )
  {
    v2 = a1;
    CurrentThreadNonPaged = (_QWORD *)W32GetCurrentThreadNonPaged(a1, a2);
    if ( CurrentThreadNonPaged )
      CurrentThreadNonPaged = (_QWORD *)*CurrentThreadNonPaged;
    v4 = CurrentThreadNonPaged[62];
    if ( v4 )
    {
      v5 = 1;
      if ( (*(_DWORD *)(**(_QWORD **)(v4 + 8) + 64LL) & 1) != 0 && (*((_DWORD *)v2 + 95) & 0x2000000) != 0 )
      {
        v6 = (_QWORD *)*((_QWORD *)v2 + 13);
        for ( i = v6; i; i = (_QWORD *)i[13] )
        {
          v8 = i[5];
          v9 = *(_BYTE *)(v8 + 31);
          if ( (v9 & 0x10) == 0 || (v9 & 0x20) != 0 && i != v6 )
            return;
          if ( (*(_WORD *)(v8 + 42) & 0x2FFF) == 0x29D )
            break;
        }
        EtwTraceDwmVisRgnDirty(*(_QWORD *)v2, *v6);
        if ( !(unsigned int)IsTopLevelWindow(v2) )
        {
          v5 = 0;
          if ( v2 != (struct tagWND *)GetDesktopWindow((__int64)v2) && (*(_BYTE *)(v6[5] + 31LL) & 2) != 0 )
          {
            v10 = 0LL;
            if ( (unsigned int)CWindowProp::GetProp<CVisRgnTrackerProp>((__int64)v6, (__int64 *)&v10) )
              CVisRgnTrackerProp::MarkDirty(v10);
          }
        }
        MarkDirtyWorker(v2);
        if ( !v5 )
        {
          while ( 1 )
          {
            v2 = (struct tagWND *)*((_QWORD *)v2 + 11);
            if ( !v2 )
              break;
            if ( (*(_BYTE *)(*((_QWORD *)v2 + 5) + 31LL) & 0x14) == 0x14 )
              MarkDirtyWorker(v2);
          }
        }
      }
    }
  }
}
