/*
 * XREFs of ?vChangeWndObjs@@YAXPEAVSURFACE@@PEAUHDEV__@@01@Z @ 0x14013AD8C
 * Callers:
 *     bDynamicModeChange @ 0x140175A68 (bDynamicModeChange.c)
 * Callees:
 *     ?GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z @ 0x14001FC40 (-GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x14001FC70 (EtwTraceGreLockReleaseSemaphore.c)
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x140021F20 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     ?vUnreferencePdev@PDEVOBJ@@QEAAXXZ @ 0x140039260 (-vUnreferencePdev@PDEVOBJ@@QEAAXXZ.c)
 *     ?vReferencePdev@PDEVOBJ@@QEAAXXZ @ 0x1401307E0 (-vReferencePdev@PDEVOBJ@@QEAAXXZ.c)
 *     ??0?$SEMOBJ@$0CB@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14013AE8C (--0-$SEMOBJ@$0CB@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     GetgptoWrap @ 0x14013AF24 (GetgptoWrap.c)
 */

void __fastcall vChangeWndObjs(struct SURFACE *a1, HDEV a2, struct SURFACE *a3, HDEV a4)
{
  __int64 SessionState; // rax
  _QWORD *i; // rbx
  int v10; // r8d
  struct _ERESOURCE *v11; // rbx
  struct SURFACE *v12; // rax
  struct _GRETHREAD *v13; // rax
  __int64 j; // rdi
  __int64 k; // rdi
  HSEMAPHORE v16[5]; // [rsp+20h] [rbp-28h] BYREF
  HDEV v17; // [rsp+58h] [rbp+10h] BYREF
  HDEV v18; // [rsp+68h] [rbp+20h] BYREF

  SessionState = W32GetSessionState(a1);
  SEMOBJ<33>::SEMOBJ<33>(v16, *(_QWORD *)(SessionState + 88));
  v17 = a2;
  v18 = a4;
  for ( i = *(_QWORD **)GetgptoWrap(); i; i = (_QWORD *)i[1] )
  {
    v12 = (struct SURFACE *)i[4];
    if ( v12 == a1 )
    {
      for ( j = i[3]; j; j = *(_QWORD *)(j + 160) )
      {
        PDEVOBJ::vReferencePdev((PDEVOBJ *)&v18);
        PDEVOBJ::vUnreferencePdev((PDEVOBJ *)&v17);
      }
    }
    else if ( v12 == a3 )
    {
      for ( k = i[3]; k; k = *(_QWORD *)(k + 160) )
      {
        PDEVOBJ::vReferencePdev((PDEVOBJ *)&v17);
        PDEVOBJ::vUnreferencePdev((PDEVOBJ *)&v18);
      }
    }
  }
  v11 = (struct _ERESOURCE *)v16[0];
  if ( v16[0] )
  {
    EtwTraceGreLockReleaseSemaphore((__int64)L"Wndobj", (int)v16[0], v10);
    v13 = GreGetCurrentThreadCrossSessionCheck();
    if ( v13 )
      *(_QWORD *)v13 &= ~0x200000000uLL;
    GreReleaseSemaphoreSharedInternal(v11);
  }
}
