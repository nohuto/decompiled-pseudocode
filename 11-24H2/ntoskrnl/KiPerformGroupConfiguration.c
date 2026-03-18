/*
 * XREFs of KiPerformGroupConfiguration @ 0x140C28DE0
 * Callers:
 *     Phase1InitializationDiscard @ 0x140C0C048 (Phase1InitializationDiscard.c)
 * Callees:
 *     strstr @ 0x1404FD9B0 (strstr.c)
 *     HvlIsSingleGroupRequired @ 0x140582834 (HvlIsSingleGroupRequired.c)
 *     KiFinalizeGroupAssignment @ 0x1405BB508 (KiFinalizeGroupAssignment.c)
 *     KiAssignAllSubNodesToGroup0 @ 0x140C289C8 (KiAssignAllSubNodesToGroup0.c)
 *     KiPerformAutomaticGroupConfiguration @ 0x140C28A0C (KiPerformAutomaticGroupConfiguration.c)
 *     KiPerformExplicitGroupAssignment @ 0x140C28BEC (KiPerformExplicitGroupAssignment.c)
 *     KiPopulateNodeInformation @ 0x140C28EAC (KiPopulateNodeInformation.c)
 *     KiPopulateSubNodes @ 0x140C291C0 (KiPopulateSubNodes.c)
 */

__int64 __fastcall KiPerformGroupConfiguration(__int64 a1)
{
  __int64 v2; // r8
  __int64 v3; // r9
  int v5; // [rsp+38h] [rbp+10h] BYREF
  unsigned int v6; // [rsp+40h] [rbp+18h] BYREF

  v6 = 0;
  v5 = 0;
  KiPopulateNodeInformation(&v6, &v5);
  KiPopulateSubNodes();
  if ( HvlIsSingleGroupRequired() )
    goto LABEL_11;
  if ( !KiPerformExplicitGroupAssignment(*(_DWORD **)(*(_QWORD *)(a1 + 240) + 304LL), v5, v2, v3) )
  {
    if ( strstr(*(const char **)(a1 + 216), "MAXGROUP=OFF") )
    {
      KiMaximizeGroupsCreated = 0;
    }
    else if ( strstr(*(const char **)(a1 + 216), "MAXGROUP") )
    {
      KiMaximizeGroupsCreated = 1;
    }
    if ( KiSubNodeCount != 1 && (KiMaximizeGroupsCreated || v6 > KiMaximumGroupSize) )
    {
      KiPerformAutomaticGroupConfiguration();
      return KiFinalizeGroupAssignment();
    }
LABEL_11:
    KiAssignAllSubNodesToGroup0();
  }
  return KiFinalizeGroupAssignment();
}
