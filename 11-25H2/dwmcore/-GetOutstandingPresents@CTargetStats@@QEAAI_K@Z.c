/*
 * XREFs of ?GetOutstandingPresents@CTargetStats@@QEAAI_K@Z @ 0x180218498
 * Callers:
 *     ?GetSyncLockCount@CLegacyRenderTarget@@UEBAI_KI@Z @ 0x1801E1040 (-GetSyncLockCount@CLegacyRenderTarget@@UEBAI_KI@Z.c)
 *     ?GetOutstandingPresentCount@CDDisplayRenderTarget@@UEBAI_K@Z @ 0x1802816B0 (-GetOutstandingPresentCount@CDDisplayRenderTarget@@UEBAI_K@Z.c)
 *     ?GetOutstandingPresentCount@CLegacyRenderTarget@@UEBAI_K@Z @ 0x1802816D0 (-GetOutstandingPresentCount@CLegacyRenderTarget@@UEBAI_K@Z.c)
 *     ?GetSyncLockCount@CDDisplayRenderTarget@@UEBAI_KI@Z @ 0x18028A140 (-GetSyncLockCount@CDDisplayRenderTarget@@UEBAI_KI@Z.c)
 * Callees:
 *     ?Update@CTargetStats@@IEAAX_K@Z @ 0x180141BF0 (-Update@CTargetStats@@IEAAX_K@Z.c)
 */

__int64 __fastcall CTargetStats::GetOutstandingPresents(CTargetStats *this, LARGE_INTEGER a2)
{
  if ( !*((_QWORD *)this + 4) )
    return 0LL;
  if ( a2.QuadPart )
    CTargetStats::Update(this, a2);
  return *((unsigned int *)this + 63);
}
