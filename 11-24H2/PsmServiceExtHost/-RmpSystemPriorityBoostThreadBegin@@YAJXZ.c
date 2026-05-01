/*
 * XREFs of ?RmpSystemPriorityBoostThreadBegin@@YAJXZ @ 0x18006B2DC
 * Callers:
 *     ?RmpEnforcementUnoptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z @ 0x18000BBA0 (-RmpEnforcementUnoptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 RmpSystemPriorityBoostThreadBegin(void)
{
  _BYTE v1[32]; // [rsp+30h] [rbp-38h] BYREF
  __int128 v2; // [rsp+50h] [rbp-18h]
  int ThreadInformation; // [rsp+70h] [rbp+8h] BYREF

  memset(v1, 0, sizeof(v1));
  v2 = 0LL;
  NtQueryInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadBasicInformation, v1, 0x30u, 0LL);
  ThreadInformation = 2;
  NtSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadBasePriority, &ThreadInformation, 4u);
  return HIDWORD(v2);
}
