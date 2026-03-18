/*
 * XREFs of ?Release@?$RESOURCE_LOCK@VDXGMONITOR@@@@IEAAXXZ @ 0x140035734
 * Callers:
 *     ??1MONITOR_REF_LOCK_ACCESSOR@@QEAA@XZ @ 0x1400356D0 (--1MONITOR_REF_LOCK_ACCESSOR@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall RESOURCE_LOCK<DXGMONITOR>::Release(__int64 *a1)
{
  __int64 v2; // rcx

  v2 = *a1;
  if ( v2 )
  {
    ExReleaseResourceLite((PERESOURCE)(v2 + 40));
    KeLeaveCriticalRegion();
    *a1 = 0LL;
  }
}
