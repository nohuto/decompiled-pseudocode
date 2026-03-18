/*
 * XREFs of ?UseSyncIntervalAndAllowTearing@CDirectFlipInfo@@QEBA_NPEAVIOverlaySwapChain@@@Z @ 0x1802101C8
 * Callers:
 *     ?DirectFlipEarlyWakeupReady@COverlayContext@@QEBA_NXZ @ 0x1800996D8 (-DirectFlipEarlyWakeupReady@COverlayContext@@QEBA_NXZ.c)
 *     ?Present@CDirectFlipInfo@@IEAAJPEAVIOverlaySwapChain@@IAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@1@Z @ 0x1801F0F1C (-Present@CDirectFlipInfo@@IEAAJPEAVIOverlaySwapChain@@IAEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@U.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall CDirectFlipInfo::UseSyncIntervalAndAllowTearing(CDirectFlipInfo *this, struct IOverlaySwapChain *a2)
{
  char v2; // bl

  v2 = 0;
  if ( !*((_BYTE *)this + 107) && *((_BYTE *)this + 108) )
    return (*(unsigned __int8 (__fastcall **)(struct IOverlaySwapChain *))(*(_QWORD *)a2 + 368LL))(a2) != 0;
  return v2;
}
