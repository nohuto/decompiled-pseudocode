/*
 * XREFs of ?vSpCheckForWndobjOverlap@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@1@Z @ 0x14032C528
 * Callers:
 *     ?vSpUpdateSpriteVisRgn@@YAXPEAUHDEV__@@K@Z @ 0x1400D48D8 (-vSpUpdateSpriteVisRgn@@YAXPEAUHDEV__@@K@Z.c)
 *     ?bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z @ 0x1400D5F30 (-bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z.c)
 * Callees:
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x140060D30 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     ?GrepGetGlobalLockName@@YAPEBGW4GreLockClass@@@Z @ 0x1401D399C (-GrepGetGlobalLockName@@YAPEBGW4GreLockClass@@@Z.c)
 *     ??0?$SEMOBJ@$0CB@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140264FB0 (--0-$SEMOBJ@$0CB@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??0UNDODESKTOPCOORD@@QEAA@PEAVEWNDOBJ@@PEAU_SPRITESTATE@@@Z @ 0x140328878 (--0UNDODESKTOPCOORD@@QEAA@PEAVEWNDOBJ@@PEAU_SPRITESTATE@@@Z.c)
 *     ??1UNDODESKTOPCOORD@@QEAA@XZ @ 0x14032892C (--1UNDODESKTOPCOORD@@QEAA@XZ.c)
 *     ?vSpUpdateWndobjOverlap@@YAXPEAU_SPRITESTATE@@PEAVEWNDOBJ@@@Z @ 0x14032E380 (-vSpUpdateWndobjOverlap@@YAXPEAU_SPRITESTATE@@PEAVEWNDOBJ@@@Z.c)
 */

void __fastcall vSpCheckForWndobjOverlap(struct _SPRITESTATE *a1, struct _RECTL *a2, struct _RECTL *a3)
{
  struct Gre::Base::SESSION_GLOBALS *v6; // rax
  __int64 v7; // rdx
  int v8; // ecx
  __int64 i; // rdi
  struct EWNDOBJ *j; // rbx
  __int64 v11; // r8
  __int64 v12; // r8
  HSEMAPHORE v13; // rbx
  const wchar_t *GlobalLockName; // rax
  struct _GRETHREAD *v15; // rax
  bool v16; // zf
  _BYTE v17[40]; // [rsp+20h] [rbp-28h] BYREF
  HSEMAPHORE v18; // [rsp+50h] [rbp+8h] BYREF

  v6 = Gre::Base::Globals(a1);
  SEMOBJ<33>::SEMOBJ<33>(&v18, v6);
  for ( i = *(_QWORD *)(*(_QWORD *)(W32GetSessionState(v8, v7) + 96) + 4824LL); i; i = *(_QWORD *)(i + 8) )
  {
    for ( j = *(struct EWNDOBJ **)(i + 24); j; j = (struct EWNDOBJ *)*((_QWORD *)j + 20) )
    {
      UNDODESKTOPCOORD::UNDODESKTOPCOORD((UNDODESKTOPCOORD *)v17, j, a1);
      if ( (unsigned int)bIntersect((char *)j + 4, a2, v11) || (unsigned int)bIntersect((char *)j + 4, a3, v12) )
        vSpUpdateWndobjOverlap(a1, j);
      UNDODESKTOPCOORD::~UNDODESKTOPCOORD((UNDODESKTOPCOORD *)v17);
    }
  }
  v13 = v18;
  if ( v18 )
  {
    GlobalLockName = GrepGetGlobalLockName(33);
    EtwTraceGreLockReleaseSemaphore(GlobalLockName, v13);
    v15 = GreGetCurrentThreadCrossSessionCheck();
    if ( v15 )
    {
      v16 = (*(_QWORD *)v15 & 0xFFFFFFFDFFFFFFFFuLL) == 0;
      *(_QWORD *)v15 &= ~0x200000000uLL;
      if ( v16 )
        GrepOnAllLocksReleased();
    }
    GreReleaseSemaphoreExclusiveInternal(v13);
  }
}
