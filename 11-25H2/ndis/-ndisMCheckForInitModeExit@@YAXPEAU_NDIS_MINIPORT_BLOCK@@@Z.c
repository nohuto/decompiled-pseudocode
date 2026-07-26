/*
 * XREFs of ?ndisMCheckForInitModeExit@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140161EB0
 * Callers:
 *     ?Iterate@BindEngine@Ndis@@AEAA_NAEBU_GUID@@@Z @ 0x140161320 (-Iterate@BindEngine@Ndis@@AEAA_NAEBU_GUID@@@Z.c)
 * Callees:
 *     ?ndisMBeginNormalMode@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140083640 (-ndisMBeginNormalMode@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x140162770 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 */

void __fastcall ndisMCheckForInitModeExit(struct _NDIS_MINIPORT_BLOCK *a1)
{
  if ( a1->InitMode )
  {
    if ( a1->InitModeNotNeededAnymore )
    {
      ndisMBeginNormalMode(a1);
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx(&a1->BindEngine.m_lock, 0LL);
      a1->BindEngine.m_isDirty = 1;
      Ndis::BindEngine::EndPolicyUpdates(&a1->BindEngine);
    }
  }
}
