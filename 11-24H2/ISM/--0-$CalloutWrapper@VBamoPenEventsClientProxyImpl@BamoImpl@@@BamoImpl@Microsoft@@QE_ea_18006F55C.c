/*
 * XREFs of ??0?$CalloutWrapper@VBamoPenEventsClientProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVBamoPenEventsClientProxyImpl@1@W4PrologEpilogConfig@12@@Z @ 0x18006F55C
 * Callers:
 *     ?OnDisconnectedCallout@BamoPenEventsClientProxy@@EEAAJXZ @ 0x18006F470 (-OnDisconnectedCallout@BamoPenEventsClientProxy@@EEAAJXZ.c)
 *     ??0?$CalloutWrapper@VBamoPenEventsClientProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVBamoPenEventsClientProxyImpl@1@@Z @ 0x18006F4CC (--0-$CalloutWrapper@VBamoPenEventsClientProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBa.c)
 *     ?OnConnectedCallout@BamoDropTargetClientProxy@@EEAAJXZ @ 0x18006F500 (-OnConnectedCallout@BamoDropTargetClientProxy@@EEAAJXZ.c)
 *     ?OnDisconnectedCallout@BamoActivationListenerInputObjectProxy@@EEAAJXZ @ 0x18006FA50 (-OnDisconnectedCallout@BamoActivationListenerInputObjectProxy@@EEAAJXZ.c)
 *     ?OnConnectedCallout@BamoActivationListenerInputObjectProxy@@EEAAJXZ @ 0x18006FAB0 (-OnConnectedCallout@BamoActivationListenerInputObjectProxy@@EEAAJXZ.c)
 *     ?UpdateType@BamoDropTargetClientProxyImpl@BamoImpl@@QEAAJ_NPEBU_GUID@@@Z @ 0x180078E14 (-UpdateType@BamoDropTargetClientProxyImpl@BamoImpl@@QEAAJ_NPEBU_GUID@@@Z.c)
 *     ?UpdateId@BamoDropTargetClientProxyImpl@BamoImpl@@QEAAJ_N_K@Z @ 0x180078F4C (-UpdateId@BamoDropTargetClientProxyImpl@BamoImpl@@QEAAJ_N_K@Z.c)
 *     ?UpdateTailButtonLongPressedEventsRequired@BamoPenEventsClientProxyImpl@BamoImpl@@QEAAJ_N0@Z @ 0x18007A404 (-UpdateTailButtonLongPressedEventsRequired@BamoPenEventsClientProxyImpl@BamoImpl@@QEAAJ_N0@Z.c)
 *     ?UpdateTailButtonDoubleClickedEventsRequired@BamoPenEventsClientProxyImpl@BamoImpl@@QEAAJ_N0@Z @ 0x18007E0C8 (-UpdateTailButtonDoubleClickedEventsRequired@BamoPenEventsClientProxyImpl@BamoImpl@@QEAAJ_N0@Z.c)
 *     ?UpdateData@BamoAnimationTargetClientProxyImpl@BamoImpl@@QEAAJ_NPEBUGestureAnimationData@Input@Internal@UI@Windows@@@Z @ 0x180081E10 (-UpdateData@BamoAnimationTargetClientProxyImpl@BamoImpl@@QEAAJ_NPEBUGestureAnimationData@Input@I.c)
 *     ?UpdateTipToGlassEventsRequired@BamoPenEventsClientProxyImpl@BamoImpl@@QEAAJ_N0@Z @ 0x1800982DC (-UpdateTipToGlassEventsRequired@BamoPenEventsClientProxyImpl@BamoImpl@@QEAAJ_N0@Z.c)
 *     ?UpdateDockedEventsRequired@BamoPenEventsClientProxyImpl@BamoImpl@@QEAAJ_N0@Z @ 0x180098458 (-UpdateDockedEventsRequired@BamoPenEventsClientProxyImpl@BamoImpl@@QEAAJ_N0@Z.c)
 *     ?UpdateHWND@BamoActivationListenerInputObjectProxyImpl@BamoImpl@@QEAAJ_N_K@Z @ 0x180098704 (-UpdateHWND@BamoActivationListenerInputObjectProxyImpl@BamoImpl@@QEAAJ_N_K@Z.c)
 *     ?UpdateId@BamoAnimationTargetClientProxyImpl@BamoImpl@@QEAAJ_N_K@Z @ 0x18009894C (-UpdateId@BamoAnimationTargetClientProxyImpl@BamoImpl@@QEAAJ_N_K@Z.c)
 *     ?UpdateIsShell@BamoPenEventsClientProxyImpl@BamoImpl@@QEAAJ_N0@Z @ 0x180196D14 (-UpdateIsShell@BamoPenEventsClientProxyImpl@BamoImpl@@QEAAJ_N0@Z.c)
 *     ?UpdateTailButtonClickedEventsRequired@BamoPenEventsClientProxyImpl@BamoImpl@@QEAAJ_N0@Z @ 0x180196EC0 (-UpdateTailButtonClickedEventsRequired@BamoPenEventsClientProxyImpl@BamoImpl@@QEAAJ_N0@Z.c)
 *     ?UpdateUndockedEventsRequired@BamoPenEventsClientProxyImpl@BamoImpl@@QEAAJ_N0@Z @ 0x180196FE0 (-UpdateUndockedEventsRequired@BamoPenEventsClientProxyImpl@BamoImpl@@QEAAJ_N0@Z.c)
 * Callees:
 *     ?LeaveLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x180043580 (-LeaveLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E71C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoPenEventsClientProxyImpl>::CalloutWrapper<BamoImpl::BamoPenEventsClientProxyImpl>(
        __int64 a1,
        Microsoft::BamoImpl::BaseBamoConnectionImpl *a2,
        void (__fastcall ***a3)(_QWORD),
        int a4)
{
  __int64 v7; // rcx
  int v8; // eax
  int v10; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *(_QWORD *)(a1 + 8) = a3;
  if ( a3 )
    (**a3)(a3);
  *(_DWORD *)(a1 + 16) = a4;
  *(_QWORD *)a1 = 0LL;
  if ( !*((_DWORD *)a2 + 47) )
  {
    *(_QWORD *)a1 = a2;
    Microsoft::BamoImpl::BaseBamoConnectionImpl::LeaveLock(a2);
  }
  v7 = *(_QWORD *)(a1 + 8);
  if ( v7 )
  {
    if ( (*(_BYTE *)(a1 + 16) & 1) != 0 )
    {
      v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v7 - 16) + 88LL))(v7 - 16);
      if ( v8 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x76,
          (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
          (const char *)(unsigned int)v8,
          v10);
    }
  }
  return a1;
}
