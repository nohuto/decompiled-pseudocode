/*
 * XREFs of ?vUndo@UNDOGRETHREADPIDLOCKS@@QEAAXXZ @ 0x1400DEB48
 * Callers:
 *     ??0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x1400579FC (--0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     ?bSpBltFromScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1400DE040 (-bSpBltFromScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEA.c)
 *     ?bSpBltScreenToScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x14032A050 (-bSpBltScreenToScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@.c)
 * Callees:
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x140060BD4 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 *     ?GrepIsLockOwnedByCurrentThread@@YA_NQEAUHSEMAPHORE__@@@Z @ 0x1400DD86C (-GrepIsLockOwnedByCurrentThread@@YA_NQEAUHSEMAPHORE__@@@Z.c)
 */

void __fastcall UNDOGRETHREADPIDLOCKS::vUndo(UNDOGRETHREADPIDLOCKS *this, __int64 a2)
{
  struct _GRETHREAD *CurrentThread; // rdi
  Gre::Base *v4; // rcx
  struct _ERESOURCE **v5; // rax
  Gre::Base *v6; // rcx
  __int64 v7; // rsi
  Gre::Base *v8; // rcx
  __int64 v9; // rdi

  CurrentThread = GreGetCurrentThread((__int64)this, a2);
  v5 = (struct _ERESOURCE **)Gre::Base::Globals(v4);
  if ( CurrentThread && !GrepIsLockOwnedByCurrentThread(*v5 + 10) )
  {
    *(_QWORD *)this = *((_QWORD *)CurrentThread + 37);
    *((_QWORD *)this + 1) = *((_QWORD *)CurrentThread + 38);
    Gre::Base::Globals(v6);
    v7 = *(_QWORD *)this;
    Gre::Base::Globals(v8);
    *((_WORD *)this + 8) = 0;
    v9 = *((_QWORD *)this + 1);
    if ( v7 && (*(_DWORD *)(v7 + 36) & 0x4000) != 0 )
    {
      SURFACE::bUnMap(*(SURFACE **)(v7 + 496));
      *((_BYTE *)this + 16) = 1;
    }
    if ( v9 )
    {
      if ( (*(_DWORD *)(v9 + 36) & 0x4000) != 0 )
      {
        SURFACE::bUnMap(*(SURFACE **)(v9 + 496));
        *((_BYTE *)this + 17) = 1;
      }
    }
  }
}
