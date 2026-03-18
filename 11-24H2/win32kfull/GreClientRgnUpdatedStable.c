/*
 * XREFs of GreClientRgnUpdatedStable @ 0x14016E4E4
 * Callers:
 *     ?GrepBitBltImpl@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHKKK@Z @ 0x14001A5E0 (-GrepBitBltImpl@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHKKK@Z.c)
 *     xxxEndDeferWindowPosEx @ 0x140076014 (xxxEndDeferWindowPosEx.c)
 *     ?bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z @ 0x1400D5F30 (-bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z.c)
 * Callees:
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x140060D30 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     ??$GrepAcquireLockValidate@$0O@@@YAXXZ @ 0x14016E5C4 (--$GrepAcquireLockValidate@$0O@@@YAXXZ.c)
 */

void __fastcall GreClientRgnUpdatedStable(Gre::Base *a1)
{
  struct Gre::Base::SESSION_GLOBALS *v1; // rbx
  HSEMAPHORE v2; // rdi
  struct _GRETHREAD *v3; // rax

  v1 = Gre::Base::Globals(a1);
  v2 = (HSEMAPHORE)(*(_QWORD *)v1 + 832LL);
  GreAcquireSemaphoreInternal(v2);
  GrepAcquireLockValidate<14>();
  *((_DWORD *)v1 + 1071) = *((_DWORD *)v1 + 1070);
  if ( v2 )
  {
    EtwTraceGreLockReleaseSemaphore(L"VisRgnUniqueness", v2);
    v3 = GreGetCurrentThreadCrossSessionCheck();
    if ( v3 )
    {
      if ( (*((_BYTE *)v3 + 22))-- == 1 )
        *(_QWORD *)v3 &= ~0x4000uLL;
      if ( !*(_QWORD *)v3 )
        GrepOnAllLocksReleased();
    }
    GreReleaseSemaphoreExclusiveInternal(v2);
  }
}
