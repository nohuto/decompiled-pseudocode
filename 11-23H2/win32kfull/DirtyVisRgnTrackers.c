/*
 * XREFs of DirtyVisRgnTrackers @ 0x1C00B699C
 * Callers:
 *     ?DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z @ 0x1C00211F4 (-DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z.c)
 *     SelectWindowRgn @ 0x1C002387C (SelectWindowRgn.c)
 *     DecomposeWindowIfNeeded @ 0x1C00243EC (DecomposeWindowIfNeeded.c)
 *     InternalInvalidate3 @ 0x1C0051900 (InternalInvalidate3.c)
 *     xxxCreateWindowEx @ 0x1C0051ED0 (xxxCreateWindowEx.c)
 *     xxxBeginPaint @ 0x1C00606C0 (xxxBeginPaint.c)
 *     xxxInternalDoSyncPaint @ 0x1C0060D80 (xxxInternalDoSyncPaint.c)
 *     ?xxxSendNCPaint@@YAXPEAUtagWND@@PEAUHRGN__@@@Z @ 0x1C00615B8 (-xxxSendNCPaint@@YAXPEAUtagWND@@PEAUHRGN__@@@Z.c)
 *     xxxDoPaint @ 0x1C00619B8 (xxxDoPaint.c)
 *     NtUserEndPaint @ 0x1C0071310 (NtUserEndPaint.c)
 *     xxxSetClassData @ 0x1C008C668 (xxxSetClassData.c)
 *     xxxSetWindowData @ 0x1C00A8300 (xxxSetWindowData.c)
 *     CreateVisRgnTracker @ 0x1C00ABD58 (CreateVisRgnTracker.c)
 *     ComposeWindowIfNeeded @ 0x1C00B4A8C (ComposeWindowIfNeeded.c)
 *     OffsetChildren @ 0x1C00B5A7C (OffsetChildren.c)
 *     SetOrClrWF @ 0x1C00B5D8C (SetOrClrWF.c)
 *     LinkWindow @ 0x1C00B5F60 (LinkWindow.c)
 *     xxxGetSystemMenu @ 0x1C00E2BDC (xxxGetSystemMenu.c)
 *     ?xxxRedrawForSetLPITEMInfo@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x1C00E5A80 (-xxxRedrawForSetLPITEMInfo@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z.c)
 *     ?xxxRemoveDeleteMenuHelper@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@IKH@Z @ 0x1C00E5ED8 (-xxxRemoveDeleteMenuHelper@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@IKH@Z.c)
 *     xxxSetWindowStyle @ 0x1C00EF138 (xxxSetWindowStyle.c)
 *     xxxRealDefWindowProc @ 0x1C0109880 (xxxRealDefWindowProc.c)
 *     xxxCalcClientRect @ 0x1C010BA30 (xxxCalcClientRect.c)
 *     xxxDispatchMessage @ 0x1C01185F4 (xxxDispatchMessage.c)
 *     xxxSimpleDoSyncPaint @ 0x1C01193C4 (xxxSimpleDoSyncPaint.c)
 *     ?xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z @ 0x1C01232A4 (-xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z.c)
 *     zzzUpdateLayeredWindow @ 0x1C01BCF20 (zzzUpdateLayeredWindow.c)
 *     xxxEnableMenuItem @ 0x1C02216E0 (xxxEnableMenuItem.c)
 * Callees:
 *     ?MarkDirty@CVisRgnTrackerProp@@QEAAXXZ @ 0x1C0082ED4 (-MarkDirty@CVisRgnTrackerProp@@QEAAXXZ.c)
 *     ?MarkDirtyWorker@@YAXPEAUtagWND@@@Z @ 0x1C00B6C70 (-MarkDirtyWorker@@YAXPEAUtagWND@@@Z.c)
 *     _GetProp @ 0x1C00B6E24 (_GetProp.c)
 *     ?IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ @ 0x1C011E808 (-IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ.c)
 *     __security_check_cookie @ 0x1C01381F0 (__security_check_cookie.c)
 *     ??B?$SGDCRITTYPEgpresUser@PEAU_ERESOURCE@@@@QEAAAEAPEAU_ERESOURCE@@XZ @ 0x1C01389C0 (--B-$SGDCRITTYPEgpresUser@PEAU_ERESOURCE@@@@QEAAAEAPEAU_ERESOURCE@@XZ.c)
 */

void __fastcall DirtyVisRgnTrackers(__int64 a1)
{
  struct tagWND *v1; // rbx
  __int64 v2; // rax
  _QWORD *v3; // rdi
  _QWORD *v4; // rdx
  __int64 v5; // rcx
  char v6; // al
  __int64 v7; // rdx
  __int64 v8; // r9
  __int64 v9; // r8
  __int64 *v10; // rax
  __int64 v11; // rcx
  char v12; // r14
  __int64 v13; // rax
  CVisRgnTrackerProp *Prop; // rax
  __int64 v15; // rdi
  __int64 BufferChainingDpc_low; // r15
  PERESOURCE *v17; // rax
  int v18; // esi
  tagObjLock **v19; // rdi
  __int64 v20; // rdi
  struct _LIST_ENTRY *Flink; // rcx
  struct _LIST_ENTRY *v22; // rax
  struct tagWND *i; // rdi
  __int128 v24; // [rsp+50h] [rbp-30h] BYREF
  char v25; // [rsp+60h] [rbp-20h]
  char v26; // [rsp+68h] [rbp-18h]

  if ( a1 )
  {
    v1 = (struct tagWND *)a1;
    v2 = *(_QWORD *)(gptiCurrent + 456LL);
    if ( v2 )
    {
      if ( (*(_DWORD *)(**(_QWORD **)(v2 + 8) + 64LL) & 1) != 0 && (*(_DWORD *)(a1 + 320) & 0x2000000) != 0 )
      {
        v3 = *(_QWORD **)(a1 + 104);
        v4 = v3;
        if ( v3 )
        {
          while ( 1 )
          {
            v5 = v4[5];
            v6 = *(_BYTE *)(v5 + 31);
            if ( (v6 & 0x10) == 0 || (v6 & 0x20) != 0 && v4 != v3 )
              break;
            if ( (*(_WORD *)(v5 + 42) & 0x2FFF) != 0x29D )
            {
              v4 = (_QWORD *)v4[13];
              if ( v4 )
                continue;
            }
            goto LABEL_11;
          }
        }
        else
        {
LABEL_11:
          EtwTraceDwmVisRgnDirty(*(_QWORD *)v1, *v3);
          v9 = *((_QWORD *)v1 + 13);
          v10 = (__int64 *)((char *)v1 + 24);
          if ( !v9 )
            goto LABEL_17;
          v11 = *v10;
          v7 = 0LL;
          if ( *v10 )
          {
            v11 = *(_QWORD *)(v11 + 8);
            if ( v11 )
              v7 = *(_QWORD *)(v11 + 24);
          }
          if ( v9 == v7 )
          {
            v12 = 1;
          }
          else
          {
LABEL_17:
            v11 = *v10;
            v12 = 0;
            if ( (!*v10 || (v13 = *(_QWORD *)(v11 + 8)) == 0 || v1 != *(struct tagWND **)(v13 + 24))
              && (*(_BYTE *)(v3[5] + 31LL) & 2) != 0 )
            {
              Prop = (CVisRgnTrackerProp *)GetProp(v3, LOWORD(WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc), 1LL);
              if ( Prop )
                CVisRgnTrackerProp::MarkDirty(Prop);
            }
          }
          v15 = *((_QWORD *)v1 + 18);
          BufferChainingDpc_low = LOWORD(WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc);
          v24 = 0LL;
          v25 = 0;
          v26 = 0;
          v17 = (PERESOURCE *)SGDCRITTYPEgpresUser<_ERESOURCE *>::operator _ERESOURCE * &(v11, v7, v9, v8);
          if ( ExIsResourceAcquiredExclusiveLite(*v17) != 1 && IS_USERCRIT_OWNED_AT_ALL() )
          {
            v26 = 1;
            if ( v15 == gObjDummyLock )
              v15 = 0LL;
            *(_QWORD *)&v24 = v15;
            v18 = 0;
            v19 = (tagObjLock **)&v24;
            do
            {
              if ( *v19 )
                tagObjLock::LockExclusive(*v19);
              ++v18;
              ++v19;
            }
            while ( !v18 );
            v25 = 1;
          }
          v20 = RealGetProp(*((_QWORD *)v1 + 18), BufferChainingDpc_low, 1LL);
          if ( v26 && v25 )
          {
            if ( (_QWORD)v24 )
              tagObjLock::UnLockExclusive((tagObjLock *)v24);
            v25 = 0;
          }
          if ( v20 && !*(_BYTE *)(v20 + 73) )
          {
            *(_BYTE *)(v20 + 73) = 1;
            Flink = CVisRgnTrackerProp::s_DirtyList.Flink;
            v22 = (struct _LIST_ENTRY *)(v20 + 24);
            if ( CVisRgnTrackerProp::s_DirtyList.Flink->Blink != &CVisRgnTrackerProp::s_DirtyList )
              __fastfail(3u);
            v22->Flink = CVisRgnTrackerProp::s_DirtyList.Flink;
            *(_QWORD *)(v20 + 32) = &CVisRgnTrackerProp::s_DirtyList;
            Flink->Blink = v22;
            CVisRgnTrackerProp::s_DirtyList.Flink = (struct _LIST_ENTRY *)(v20 + 24);
          }
          for ( i = (struct tagWND *)*((_QWORD *)v1 + 14); i; i = (struct tagWND *)*((_QWORD *)i + 11) )
            MarkDirtyWorker(i);
          if ( !v12 )
          {
            while ( 1 )
            {
              v1 = (struct tagWND *)*((_QWORD *)v1 + 11);
              if ( !v1 )
                break;
              if ( (*(_BYTE *)(*((_QWORD *)v1 + 5) + 31LL) & 0x14) == 0x14 )
                MarkDirtyWorker(v1);
            }
          }
        }
      }
    }
  }
}
