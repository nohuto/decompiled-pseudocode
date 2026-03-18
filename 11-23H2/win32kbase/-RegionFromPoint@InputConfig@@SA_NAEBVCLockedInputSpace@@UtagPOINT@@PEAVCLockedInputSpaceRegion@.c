/*
 * XREFs of ?RegionFromPoint@InputConfig@@SA_NAEBVCLockedInputSpace@@UtagPOINT@@PEAVCLockedInputSpaceRegion@@@Z @ 0x1C0063330
 * Callers:
 *     ?RegionFromPoint@Mouse@InputConfig@@SA_NUtagPOINT@@PEAVCLockedInputSpaceRegion@@@Z @ 0x1C00641C0 (-RegionFromPoint@Mouse@InputConfig@@SA_NUtagPOINT@@PEAVCLockedInputSpaceRegion@@@Z.c)
 *     NtInputSpaceRegionFromPoint @ 0x1C0140C70 (NtInputSpaceRegionFromPoint.c)
 * Callees:
 *     PtInRect @ 0x1C0063154 (PtInRect.c)
 */

char __fastcall InputConfig::RegionFromPoint(
        const struct CLockedInputSpace *a1,
        struct tagPOINT a2,
        struct CLockedInputSpaceRegion *a3)
{
  __int64 *v5; // rsi
  char v6; // di
  __int64 i; // r9
  _DWORD *v8; // rcx
  __int64 v9; // rcx
  __int64 *v10; // r9

  *(_QWORD *)a3 = 0LL;
  v5 = (__int64 *)(*(_QWORD *)a1 + 1456LL);
  KeEnterCriticalRegion();
  v6 = 1;
  ExAcquireResourceSharedLite(CInputConfig::slock, 1u);
  for ( i = *v5; ; i = *v10 )
  {
    v8 = 0LL;
    if ( (__int64 *)i != v5 )
      v8 = (_DWORD *)(i + 16);
    if ( !v8 )
      break;
    if ( PtInRect(v8, *(_QWORD *)&a2) )
    {
      *(_QWORD *)a3 = v9;
      goto LABEL_7;
    }
  }
  v6 = 0;
LABEL_7:
  ExReleaseResourceLite(CInputConfig::slock);
  KeLeaveCriticalRegion();
  return v6;
}
