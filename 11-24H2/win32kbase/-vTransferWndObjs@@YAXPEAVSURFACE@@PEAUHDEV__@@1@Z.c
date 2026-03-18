/*
 * XREFs of ?vTransferWndObjs@@YAXPEAVSURFACE@@PEAUHDEV__@@1@Z @ 0x1401CEED8
 * Callers:
 *     ?DrvTransferGdiObjects@@YAXPEAUHDEV__@@0K@Z @ 0x140085480 (-DrvTransferGdiObjects@@YAXPEAUHDEV__@@0K@Z.c)
 * Callees:
 *     ?GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z @ 0x14001FC40 (-GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x14001FC70 (EtwTraceGreLockReleaseSemaphore.c)
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x140021F20 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     ?vUnreferencePdev@PDEVOBJ@@QEAAXXZ @ 0x140039260 (-vUnreferencePdev@PDEVOBJ@@QEAAXXZ.c)
 *     ?vReferencePdev@PDEVOBJ@@QEAAXXZ @ 0x1401307E0 (-vReferencePdev@PDEVOBJ@@QEAAXXZ.c)
 *     ??0?$SEMOBJ@$0CB@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14013AE8C (--0-$SEMOBJ@$0CB@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     GetgptoWrap @ 0x14013AF24 (GetgptoWrap.c)
 */

void __fastcall vTransferWndObjs(struct SURFACE *a1, HDEV a2, HDEV a3)
{
  __int64 SessionState; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 i; // rbx
  int v10; // r8d
  __int64 j; // rdi
  struct _ERESOURCE *v12; // rbx
  struct _GRETHREAD *v13; // rax
  HDEV v14; // [rsp+48h] [rbp+10h] BYREF
  HDEV v15; // [rsp+50h] [rbp+18h] BYREF
  HSEMAPHORE v16; // [rsp+58h] [rbp+20h] BYREF

  SessionState = W32GetSessionState(a1);
  SEMOBJ<33>::SEMOBJ<33>((struct _ERESOURCE **)&v16, *(struct _ERESOURCE ***)(SessionState + 88));
  v15 = a2;
  v14 = a3;
  for ( i = *(_QWORD *)GetgptoWrap(v8, v7); i; i = *(_QWORD *)(i + 8) )
  {
    if ( *(struct SURFACE **)(i + 32) == a1 )
    {
      for ( j = *(_QWORD *)(i + 24); j; j = *(_QWORD *)(j + 160) )
      {
        PDEVOBJ::vReferencePdev((PDEVOBJ *)&v14);
        PDEVOBJ::vUnreferencePdev((PDEVOBJ *)&v15);
      }
    }
  }
  v12 = (struct _ERESOURCE *)v16;
  if ( v16 )
  {
    EtwTraceGreLockReleaseSemaphore((__int64)L"Wndobj", (int)v16, v10);
    v13 = GreGetCurrentThreadCrossSessionCheck();
    if ( v13 )
      *(_QWORD *)v13 &= ~0x200000000uLL;
    GreReleaseSemaphoreSharedInternal(v12);
  }
}
