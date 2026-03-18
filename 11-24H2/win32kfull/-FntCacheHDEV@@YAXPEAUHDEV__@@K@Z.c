/*
 * XREFs of ?FntCacheHDEV@@YAXPEAUHDEV__@@K@Z @ 0x140218A58
 * Callers:
 *     bEnableFontDriver @ 0x14026B970 (bEnableFontDriver.c)
 *     FontDriverQueryRoutine @ 0x1403E9810 (FontDriverQueryRoutine.c)
 * Callees:
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x140060D30 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     ??0?$SEMOBJ@$0BJ@@@QEAA@AEAUGLOBALS@Font@Gre@@@Z @ 0x1400B764C (--0-$SEMOBJ@$0BJ@@@QEAA@AEAUGLOBALS@Font@Gre@@@Z.c)
 */

void __fastcall FntCacheHDEV(HDEV a1, __int64 a2)
{
  __int64 v2; // rdi
  __int64 v4; // rbx
  HSEMAPHORE v5; // rbx
  struct _GRETHREAD *v6; // rax
  bool v7; // zf
  HSEMAPHORE v8; // [rsp+40h] [rbp+18h] BYREF

  v2 = (unsigned int)a2;
  v4 = *(_QWORD *)(W32GetSessionState((_DWORD)a1, a2) + 96);
  SEMOBJ<25>::SEMOBJ<25>(&v8, v4 + 4872);
  if ( (*(_DWORD *)(v4 + 19592) & 3) != 0 && *(_QWORD *)(v4 + 19600) && (_DWORD)v2 )
    *(_QWORD *)(v4 + 8 * v2 + 19624) = a1;
  v5 = v8;
  if ( v8 )
  {
    EtwTraceGreLockReleaseSemaphore(L"FntCache", v8);
    v6 = GreGetCurrentThreadCrossSessionCheck();
    if ( v6 )
    {
      v7 = (*(_QWORD *)v6 & 0xFFFFFFFFFDFFFFFFuLL) == 0;
      *(_QWORD *)v6 &= ~0x2000000uLL;
      if ( v7 )
        GrepOnAllLocksReleased();
    }
    GreReleaseSemaphoreExclusiveInternal(v5);
  }
}
