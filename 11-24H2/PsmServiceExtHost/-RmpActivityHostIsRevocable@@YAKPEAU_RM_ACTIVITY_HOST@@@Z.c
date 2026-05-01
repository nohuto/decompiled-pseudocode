/*
 * XREFs of ?RmpActivityHostIsRevocable@@YAKPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18002A060
 * Callers:
 *     ?RmpPolicyGenerateReclaimListForCommit@@YAEPEAU_RM_PARTITION@@PEAU_RM_POLICY_WORK_BUFFER@@PEAU_RM_ACTIVITY_HOST@@_KW4Enum@Priority@ExecutionModel@@W4_RM_REVOKE_POLICY@@@Z @ 0x18000F448 (-RmpPolicyGenerateReclaimListForCommit@@YAEPEAU_RM_PARTITION@@PEAU_RM_POLICY_WORK_BUFFER@@PEAU_R.c)
 *     ?RmpActivityHostResourceSetsChanged@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180029F10 (-RmpActivityHostResourceSetsChanged@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpMemoryMonitorIsLargeAppTerminationTarget@@YAEPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ACTIVITY_HOST_METRICS@@@Z @ 0x180029FFC (-RmpMemoryMonitorIsLargeAppTerminationTarget@@YAEPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ACTIVITY_HOST_ME.c)
 *     ?RmpPolicyFilterActivityHostWithFlags@@YAEPEAU_RM_ACTIVITY_HOST@@PEAX@Z @ 0x18005F090 (-RmpPolicyFilterActivityHostWithFlags@@YAEPEAU_RM_ACTIVITY_HOST@@PEAX@Z.c)
 *     ?RmpMemoryMonitorActiveLowPriFilterCallback@@YAEPEAU_RM_ACTIVITY_HOST@@PEAX@Z @ 0x18008F0B0 (-RmpMemoryMonitorActiveLowPriFilterCallback@@YAEPEAU_RM_ACTIVITY_HOST@@PEAX@Z.c)
 * Callees:
 *     ?RmHamHostGetCurrentState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAT_RM_OPTIMIZATION_STATE@@1@Z @ 0x1800850F8 (-RmHamHostGetCurrentState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAT_RM_OPTIMIZATION_STATE@@1@Z.c)
 */

__int64 __fastcall RmpActivityHostIsRevocable(struct _RM_ACTIVITY_HOST *a1)
{
  int v2; // ebx
  unsigned int v4; // r14d
  DWORD v5; // r15d
  _QWORD *Value; // rsi
  struct _RM_ACTIVITY_HOST *v7; // r8
  char *v8; // r8
  __int64 v9; // rdx
  __int64 v10; // rcx
  int v11; // ebx
  __int64 *v12; // rax
  __int64 v13; // rcx
  int v15; // [rsp+50h] [rbp+8h] BYREF
  int v16; // [rsp+58h] [rbp+10h] BYREF

  v2 = *(_DWORD *)(*((_QWORD *)a1 + 6) + 508LL) & 4;
  if ( !v2 && (*((_BYTE *)a1 + 1184) & 4) == 0 )
    return 0LL;
  v4 = 0;
  v5 = HampLockTrackerId;
  v15 = 0;
  v16 = 0;
  if ( HampLockTrackerId != -1 )
  {
    Value = TlsGetValue(HampLockTrackerId);
    if ( (*(_QWORD *)TlsGetValue(v5) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
      NT_ASSERT("!CempLockTrackerAreLocksHeldAtLevelOrHigher( TrackerId, MinDisallowedLevel)");
    *Value |= 2uLL;
    ++Value[2];
  }
  RtlAcquireSRWLockShared((char *)a1 + 64);
  if ( (*((_QWORD *)a1 + 91) & 0x2000000000000LL) == 0 )
    goto LABEL_17;
  v7 = (struct _RM_ACTIVITY_HOST *)*((_QWORD *)a1 + 84);
  if ( v7 == (struct _RM_ACTIVITY_HOST *)((char *)a1 + 672) )
    v8 = 0LL;
  else
    v8 = (char *)v7 - 96;
  while ( v8 )
  {
    if ( (*((_DWORD *)v8 + 28) & 0x200) != 0 )
      goto LABEL_17;
    v9 = *((_QWORD *)v8 + 12);
    v10 = *((_QWORD *)v8 + 10);
    v8 = 0LL;
    if ( v9 != v10 + 608 )
      v8 = (char *)(v9 - 96);
  }
  if ( v2 )
    goto LABEL_26;
  RmHamHostGetCurrentState(
    (struct _RM_ACTIVITY_HOST *)((char *)a1 + 64),
    (union _RM_OPTIMIZATION_STATE *)&v15,
    (union _RM_OPTIMIZATION_STATE *)&v16);
  if ( (v15 & 0x80u) == 0 )
  {
LABEL_17:
    v11 = 0;
    goto LABEL_18;
  }
  if ( (v16 & 0x80u) == 0 )
LABEL_26:
    v11 = 1;
  else
    v11 = 0;
LABEL_18:
  if ( HampLockTrackerId != -1 )
  {
    v12 = (__int64 *)TlsGetValue(HampLockTrackerId);
    v13 = *v12;
    if ( (*v12 & 2) == 0 )
      NT_ASSERT("(Tracker->Bitmap & LevelMask) != 0");
    if ( v12[2]-- == 1 )
      *v12 = v13 & 0xFFFFFFFFFFFFFFFDuLL;
  }
  RtlReleaseSRWLockShared((char *)a1 + 64);
  if ( !v11 )
    return 0LL;
  LOBYTE(v4) = (*((_BYTE *)a1 + 1184) & 0x30) != 0;
  return v4;
}
