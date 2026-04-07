/*
 * XREFs of ?JumpToFinalValue@CTimelineBase@@AEAAXXZ @ 0x180027E44
 * Callers:
 *     ?UpdateAfterTickWorker@CTimelineBase@@AEAAXXZ @ 0x180026D30 (-UpdateAfterTickWorker@CTimelineBase@@AEAAXXZ.c)
 *     ?DeActivate@CLivePreview@@QEAAJ_N@Z @ 0x1800476AC (-DeActivate@CLivePreview@@QEAAJ_N@Z.c)
 *     ?UpdateBeforeTickWorker@CTimelineBase@@AEAAJPEAUWindowsAnimation@@@Z @ 0x18006689C (-UpdateBeforeTickWorker@CTimelineBase@@AEAAJPEAUWindowsAnimation@@@Z.c)
 *     ?UpdateBeforeTickResultWorker@CTimelineBase@@AEAAX_N@Z @ 0x18007268C (-UpdateBeforeTickResultWorker@CTimelineBase@@AEAAX_N@Z.c)
 *     ?AbandonActiveAnimations@CDesktopManager@@AEAAXXZ @ 0x1800B88CC (-AbandonActiveAnimations@CDesktopManager@@AEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CTimelineBase::JumpToFinalValue(CTimelineBase *this)
{
  __int64 v2; // rcx
  __int64 v3; // xmm0_8

  v2 = *((_QWORD *)this + 8);
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
    *((_QWORD *)this + 8) = 0LL;
  }
  if ( *((double *)this + 3) < 0.0 )
    v3 = *((_QWORD *)this + 4);
  else
    v3 = *((_QWORD *)this + 5);
  *((_QWORD *)this + 6) = v3;
  *((_BYTE *)this + 72) = 1;
}
