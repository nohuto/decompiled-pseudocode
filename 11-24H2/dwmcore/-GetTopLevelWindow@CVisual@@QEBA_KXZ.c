/*
 * XREFs of ?GetTopLevelWindow@CVisual@@QEBA_KXZ @ 0x18020879C
 * Callers:
 *     ?HitTestPoint@CHitTestContext@@QEAAJAEBUHitTestPointRequest@1@AEAUHitTestPointResult@1@@Z @ 0x180091730 (-HitTestPoint@CHitTestContext@@QEAAJAEBUHitTestPointRequest@1@AEAUHitTestPointResult@1@@Z.c)
 *     ?GetHwnd@CVisual@@MEBAPEAUHWND__@@XZ @ 0x1801DAE30 (-GetHwnd@CVisual@@MEBAPEAUHWND__@@XZ.c)
 * Callees:
 *     ?FindSlot@AllocatedStorage@CSparseStorage@@AEBAPEAVDataInfo@2@I@Z @ 0x18001BE40 (-FindSlot@AllocatedStorage@CSparseStorage@@AEBAPEAVDataInfo@2@I@Z.c)
 */

unsigned __int64 __fastcall CVisual::GetTopLevelWindow(CVisual *this)
{
  int *v1; // rcx

  v1 = (int *)*((_QWORD *)this + 28);
  if ( v1[1] >= 0 )
    return 0LL;
  else
    return *(_QWORD *)((char *)CSparseStorage::AllocatedStorage::FindSlot((CSparseStorage::AllocatedStorage *)v1, 1) + 4);
}
