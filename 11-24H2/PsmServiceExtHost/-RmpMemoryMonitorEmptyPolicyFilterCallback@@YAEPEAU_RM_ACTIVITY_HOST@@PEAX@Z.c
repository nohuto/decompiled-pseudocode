/*
 * XREFs of ?RmpMemoryMonitorEmptyPolicyFilterCallback@@YAEPEAU_RM_ACTIVITY_HOST@@PEAX@Z @ 0x180022280
 * Callers:
 *     ?RmpMemoryMonitorEmptyWorkingSets@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_SYSTEM_MEMORY_METRICS@@1K@Z @ 0x180021B40 (-RmpMemoryMonitorEmptyWorkingSets@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PE.c)
 * Callees:
 *     ?RmHamHostGetCurrentState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAT_RM_OPTIMIZATION_STATE@@1@Z @ 0x1800850F8 (-RmHamHostGetCurrentState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAT_RM_OPTIMIZATION_STATE@@1@Z.c)
 */

bool __fastcall RmpMemoryMonitorEmptyPolicyFilterCallback(struct _RM_ACTIVITY_HOST *a1, void *a2)
{
  char v2; // bp
  __int64 v4; // rsi
  int v5; // edi
  int v6; // r9d
  int v7; // eax
  __int16 v8; // r10
  int v9; // r8d
  int v10; // ecx
  __int16 v11; // r12
  int v12; // r14d
  int v13; // r15d
  int v14; // r15d
  DWORD v16; // r14d
  _QWORD *Value; // rbp
  struct _RM_ACTIVITY_HOST *v18; // r8
  char *v19; // r8
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 *v22; // rax
  __int64 v23; // rcx
  int v25; // eax
  int v26; // edx
  int v27; // [rsp+60h] [rbp+8h] BYREF
  int v28; // [rsp+68h] [rbp+10h] BYREF

  v2 = (char)a2;
  if ( *((_DWORD *)a1 + 318) )
    return 0;
  v4 = *((_QWORD *)a1 + 6);
  v5 = 0;
  v6 = *((_DWORD *)a1 + 317);
  v7 = 0;
  v8 = *((_WORD *)a1 + 728);
  v9 = *(_DWORD *)(v4 + 504);
  if ( (v6 & 0x10) == 0 && (v8 & 0x200) == 0 )
  {
    v10 = 2 * (*(_DWORD *)(v4 + 504) & 1);
    if ( (v8 & 0x100) == 0 )
      v10 |= 2 * (*(_DWORD *)(v4 + 504) & 2);
    v7 = v10 | 2;
    if ( (v9 & 4) != 0 )
      v7 = v10;
  }
  v11 = *((_WORD *)a1 + 592);
  v12 = v7 | v6 & 0x27;
  v13 = v6 & v12;
  if ( (v11 & 4) != 0 && (v6 & 0x100) != 0 )
  {
    v25 = 0;
    if ( (v6 & 0x10) == 0 && (v8 & 0x200) == 0 )
    {
      v26 = 2 * (*(_DWORD *)(v4 + 504) & 1);
      if ( (v8 & 0x100) == 0 )
        v26 |= 2 * (*(_DWORD *)(v4 + 504) & 2);
      v25 = v26 | 2;
      if ( (*(_DWORD *)(v4 + 504) & 4) != 0 )
        v25 = v26;
      if ( (v9 & 4) == 0 )
        v25 |= 0x20u;
    }
    if ( (v6 & (v25 | v6 & 0x27)) != (v25 | v6 & 0x27) && (v13 != v12 || (v2 & 0x20) == 0) )
      return 1;
  }
  if ( (v2 & 1) == 0 )
    return 0;
  if ( v13 == v12 )
    return 0;
  v14 = *(_DWORD *)(v4 + 508) & 4;
  if ( !v14 && (v11 & 4) == 0 )
    return 0;
  v16 = HampLockTrackerId;
  v27 = 0;
  v28 = 0;
  if ( HampLockTrackerId != -1 )
  {
    Value = TlsGetValue(HampLockTrackerId);
    if ( (*(_QWORD *)TlsGetValue(v16) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
      NT_ASSERT("!CempLockTrackerAreLocksHeldAtLevelOrHigher( TrackerId, MinDisallowedLevel)");
    *Value |= 2uLL;
    ++Value[2];
  }
  RtlAcquireSRWLockShared((char *)a1 + 64);
  if ( (*((_QWORD *)a1 + 91) & 0x2000000000000LL) != 0 )
  {
    v18 = (struct _RM_ACTIVITY_HOST *)*((_QWORD *)a1 + 84);
    if ( v18 == (struct _RM_ACTIVITY_HOST *)((char *)a1 + 672) )
      v19 = 0LL;
    else
      v19 = (char *)v18 - 96;
    while ( v19 )
    {
      if ( (*((_DWORD *)v19 + 28) & 0x200) != 0 )
        goto LABEL_27;
      v20 = *((_QWORD *)v19 + 12);
      v21 = *((_QWORD *)v19 + 10);
      v19 = 0LL;
      if ( v20 != v21 + 608 )
        v19 = (char *)(v20 - 96);
    }
    if ( v14
      || (RmHamHostGetCurrentState(
            (struct _RM_ACTIVITY_HOST *)((char *)a1 + 64),
            (union _RM_OPTIMIZATION_STATE *)&v27,
            (union _RM_OPTIMIZATION_STATE *)&v28),
          (v27 & 0x80u) != 0)
      && (v28 & 0x80u) == 0 )
    {
      v5 = 1;
    }
  }
LABEL_27:
  if ( HampLockTrackerId != -1 )
  {
    v22 = (__int64 *)TlsGetValue(HampLockTrackerId);
    v23 = *v22;
    if ( (*v22 & 2) == 0 )
      NT_ASSERT("(Tracker->Bitmap & LevelMask) != 0");
    if ( v22[2]-- == 1 )
      *v22 = v23 & 0xFFFFFFFFFFFFFFFDuLL;
  }
  RtlReleaseSRWLockShared((char *)a1 + 64);
  return v5 && (*((_BYTE *)a1 + 1184) & 0x30) != 0;
}
