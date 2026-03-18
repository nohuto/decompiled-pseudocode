/*
 * XREFs of ?bGarbageCollect@XEPALOBJ2@@QEAA_NXZ @ 0x1401C2710
 * Callers:
 *     ??$vGarbageCollectObject@VXEPALOBJ2@@@@YAXPEAUHOBJ__@@@Z @ 0x1401CE2C0 (--$vGarbageCollectObject@VXEPALOBJ2@@@@YAXPEAUHOBJ__@@@Z.c)
 * Callees:
 *     ?GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z @ 0x14001FC40 (-GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x14001FC70 (EtwTraceGreLockReleaseSemaphore.c)
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x140021F20 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     ??0?$SEMOBJ@$0N@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400E8C68 (--0-$SEMOBJ@$0N@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?bDeletePalette@XEPALOBJ@@QEAAHW4_CLEANUPTYPE@@@Z @ 0x1401C256C (-bDeletePalette@XEPALOBJ@@QEAAHW4_CLEANUPTYPE@@@Z.c)
 */

bool __fastcall XEPALOBJ2::bGarbageCollect(XEPALOBJ2 *this)
{
  __int64 SessionState; // rax
  int v3; // r8d
  int v4; // eax
  int v5; // r8d
  struct _ERESOURCE *v6; // rbx
  bool v7; // di
  struct _GRETHREAD *v8; // rax
  bool v9; // zf
  struct _ERESOURCE *v11; // rbx
  struct _GRETHREAD *v12; // rax
  HSEMAPHORE v13; // [rsp+30h] [rbp+8h] BYREF

  SessionState = W32GetSessionState(this);
  SEMOBJ<13>::SEMOBJ<13>((struct _ERESOURCE **)&v13, *(struct _ERESOURCE ***)(SessionState + 88));
  if ( *(_QWORD *)this )
  {
    v4 = XEPALOBJ::bDeletePalette(this, 1);
    v6 = (struct _ERESOURCE *)v13;
    v7 = v4 != 0;
    if ( v13 )
    {
      EtwTraceGreLockReleaseSemaphore((__int64)L"Palette", (int)v13, v5);
      v8 = GreGetCurrentThreadCrossSessionCheck();
      if ( v8 )
      {
        v9 = (*((_BYTE *)v8 + 21))-- == 1;
        if ( v9 )
          *(_QWORD *)v8 &= ~0x2000uLL;
      }
      GreReleaseSemaphoreSharedInternal(v6);
    }
    return v7;
  }
  else
  {
    v11 = (struct _ERESOURCE *)v13;
    if ( v13 )
    {
      EtwTraceGreLockReleaseSemaphore((__int64)L"Palette", (int)v13, v3);
      v12 = GreGetCurrentThreadCrossSessionCheck();
      if ( v12 )
      {
        v9 = (*((_BYTE *)v12 + 21))-- == 1;
        if ( v9 )
          *(_QWORD *)v12 &= ~0x2000uLL;
      }
      GreReleaseSemaphoreSharedInternal(v11);
    }
    return 0;
  }
}
