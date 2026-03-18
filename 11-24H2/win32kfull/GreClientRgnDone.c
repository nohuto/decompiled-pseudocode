/*
 * XREFs of GreClientRgnDone @ 0x140301574
 * Callers:
 *     ?zzzBltValidBits@@YA?AW4BltBitsResult@@PEAUtagSMWP@@@Z @ 0x14022C6A8 (-zzzBltValidBits@@YA-AW4BltBitsResult@@PEAUtagSMWP@@@Z.c)
 * Callees:
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x140060D30 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     ?GrepGetGlobalLockName@@YAPEBGW4GreLockClass@@@Z @ 0x1401D399C (-GrepGetGlobalLockName@@YAPEBGW4GreLockClass@@@Z.c)
 *     ??0?$SEMOBJ@$0CB@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140264FB0 (--0-$SEMOBJ@$0CB@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?vUpdateDrv@TRACKOBJ@@QEAAXPEAVEWNDOBJ@@K@Z @ 0x140300FAC (-vUpdateDrv@TRACKOBJ@@QEAAXPEAVEWNDOBJ@@K@Z.c)
 *     ?vSpWndobjChange@@YAXPEAUHDEV__@@PEAVEWNDOBJ@@@Z @ 0x14032E774 (-vSpWndobjChange@@YAXPEAUHDEV__@@PEAVEWNDOBJ@@@Z.c)
 */

void __fastcall GreClientRgnDone(Gre::Base *a1)
{
  struct Gre::Base::SESSION_GLOBALS *v1; // rax
  __int64 v2; // rdx
  int v3; // ecx
  __int64 i; // rbx
  int v5; // eax
  struct EWNDOBJ *j; // rdi
  HSEMAPHORE v7; // rbx
  const wchar_t *GlobalLockName; // rax
  struct _GRETHREAD *v9; // rax
  bool v10; // zf
  HSEMAPHORE v11; // [rsp+38h] [rbp+10h] BYREF

  v1 = Gre::Base::Globals(a1);
  SEMOBJ<33>::SEMOBJ<33>(&v11, v1);
  for ( i = *(_QWORD *)(*(_QWORD *)(W32GetSessionState(v3, v2) + 96) + 4824LL); i; i = *(_QWORD *)(i + 8) )
  {
    v5 = *(_DWORD *)(i + 48);
    if ( (v5 & 0x4000000) != 0 )
    {
      *(_DWORD *)(i + 48) = v5 & 0xFBFFFFFF;
      TRACKOBJ::vUpdateDrv((TRACKOBJ *)i, 0LL, 0x40u);
    }
    for ( j = *(struct EWNDOBJ **)(i + 24); j; j = (struct EWNDOBJ *)*((_QWORD *)j + 20) )
      vSpWndobjChange(*(HDEV *)(*(_QWORD *)(i + 32) + 48LL), j);
  }
  v7 = v11;
  if ( v11 )
  {
    GlobalLockName = GrepGetGlobalLockName(33);
    EtwTraceGreLockReleaseSemaphore(GlobalLockName, v7);
    v9 = GreGetCurrentThreadCrossSessionCheck();
    if ( v9 )
    {
      v10 = (*(_QWORD *)v9 & 0xFFFFFFFDFFFFFFFFuLL) == 0;
      *(_QWORD *)v9 &= ~0x200000000uLL;
      if ( v10 )
        GrepOnAllLocksReleased();
    }
    GreReleaseSemaphoreExclusiveInternal(v7);
  }
}
