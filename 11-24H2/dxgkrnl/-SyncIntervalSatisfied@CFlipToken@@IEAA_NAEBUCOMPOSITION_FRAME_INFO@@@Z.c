/*
 * XREFs of ?SyncIntervalSatisfied@CFlipToken@@IEAA_NAEBUCOMPOSITION_FRAME_INFO@@@Z @ 0x14009BEF8
 * Callers:
 *     ?CanReleaseToFrame@CFlipToken@@IEAAJAEBUCOMPOSITION_FRAME_INFO@@PEA_N@Z @ 0x14005F200 (-CanReleaseToFrame@CFlipToken@@IEAAJAEBUCOMPOSITION_FRAME_INFO@@PEA_N@Z.c)
 * Callees:
 *     ?GetSyncRefreshTime@CompositionSurfaceObject@@QEBA_KXZ @ 0x14001B428 (-GetSyncRefreshTime@CompositionSurfaceObject@@QEBA_KXZ.c)
 *     Feature_ComposedFlipPerf__private_IsEnabledDeviceUsageNoInline @ 0x14009BF78 (Feature_ComposedFlipPerf__private_IsEnabledDeviceUsageNoInline.c)
 */

char __fastcall CFlipToken::SyncIntervalSatisfied(
        CompositionSurfaceObject **this,
        const struct COMPOSITION_FRAME_INFO *a2)
{
  unsigned __int64 SyncRefreshTime; // rsi
  int IsEnabledDeviceUsageNoInline; // eax
  char v6; // cl
  unsigned __int64 v7; // rax

  if ( *((_DWORD *)this + 32) )
  {
    SyncRefreshTime = CompositionSurfaceObject::GetSyncRefreshTime(this[6]);
    if ( (unsigned __int64)this[14] < SyncRefreshTime )
    {
      IsEnabledDeviceUsageNoInline = Feature_ComposedFlipPerf__private_IsEnabledDeviceUsageNoInline();
      v6 = *((_BYTE *)this + 576);
      if ( IsEnabledDeviceUsageNoInline )
      {
        if ( !v6 )
        {
          v7 = *((_QWORD *)a2 + 2);
LABEL_9:
          this[14] = (CompositionSurfaceObject *)(SyncRefreshTime + (v7 >> 1));
          return 0;
        }
      }
      else if ( !v6 )
      {
        v7 = *((_QWORD *)a2 + 10);
        goto LABEL_9;
      }
      v7 = *((_QWORD *)a2 + 11);
      goto LABEL_9;
    }
  }
  return 1;
}
