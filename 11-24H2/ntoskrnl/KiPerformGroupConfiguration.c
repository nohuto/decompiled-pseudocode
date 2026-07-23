/*
 * XREFs of KiPerformGroupConfiguration @ 0x140C2AE80
 * Callers:
 *     Phase1InitializationDiscard @ 0x140C0E048 (Phase1InitializationDiscard.c)
 * Callees:
 *     strstr @ 0x1404FB270 (strstr.c)
 *     HvlIsSingleGroupRequired @ 0x14057FBB4 (HvlIsSingleGroupRequired.c)
 *     KiFinalizeGroupAssignment @ 0x1405B8B38 (KiFinalizeGroupAssignment.c)
 *     KiAssignAllSubNodesToGroup0 @ 0x140C2AA68 (KiAssignAllSubNodesToGroup0.c)
 *     KiPerformAutomaticGroupConfiguration @ 0x140C2AAAC (KiPerformAutomaticGroupConfiguration.c)
 *     KiPerformExplicitGroupAssignment @ 0x140C2AC8C (KiPerformExplicitGroupAssignment.c)
 *     KiPopulateNodeInformation @ 0x140C2AF4C (KiPopulateNodeInformation.c)
 *     KiPopulateSubNodes @ 0x140C2B260 (KiPopulateSubNodes.c)
 */

__int64 __fastcall KiPerformGroupConfiguration(__int64 a1)
{
  int v3; // [rsp+38h] [rbp+10h] BYREF
  unsigned int v4; // [rsp+40h] [rbp+18h] BYREF

  v4 = 0;
  v3 = 0;
  KiPopulateNodeInformation(&v4, &v3);
  KiPopulateSubNodes();
  if ( HvlIsSingleGroupRequired() )
    goto LABEL_11;
  if ( !KiPerformExplicitGroupAssignment(*(_DWORD **)(*(_QWORD *)(a1 + 240) + 304LL), v3) )
  {
    if ( strstr(*(const char **)(a1 + 216), "MAXGROUP=OFF") )
    {
      KiMaximizeGroupsCreated = 0;
    }
    else if ( strstr(*(const char **)(a1 + 216), "MAXGROUP") )
    {
      KiMaximizeGroupsCreated = 1;
    }
    if ( KiSubNodeCount != 1 && (KiMaximizeGroupsCreated || v4 > KiMaximumGroupSize) )
    {
      KiPerformAutomaticGroupConfiguration();
      return KiFinalizeGroupAssignment();
    }
LABEL_11:
    KiAssignAllSubNodesToGroup0();
  }
  return KiFinalizeGroupAssignment();
}
