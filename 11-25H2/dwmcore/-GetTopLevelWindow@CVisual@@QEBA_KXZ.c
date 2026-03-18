/*
 * XREFs of ?GetTopLevelWindow@CVisual@@QEBA_KXZ @ 0x180214EDC
 * Callers:
 *     ?HitTestPoint@CHitTestContext@@QEAAJAEBUHitTestPointRequest@1@AEAUHitTestPointResult@1@@Z @ 0x1801362F0 (-HitTestPoint@CHitTestContext@@QEAAJAEBUHitTestPointRequest@1@AEAUHitTestPointResult@1@@Z.c)
 *     ?GetHwnd@CVisual@@MEBAPEAUHWND__@@XZ @ 0x1801E5FB0 (-GetHwnd@CVisual@@MEBAPEAUHWND__@@XZ.c)
 * Callees:
 *     ?FindSlot@AllocatedStorage@CSparseStorage@@AEBAPEAVDataInfo@2@I@Z @ 0x18012B6A0 (-FindSlot@AllocatedStorage@CSparseStorage@@AEBAPEAVDataInfo@2@I@Z.c)
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
