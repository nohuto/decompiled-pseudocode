/*
 * XREFs of ?HampActCanBeStarted@@YA?AW4_HAM_ACTIVITY_START_DENY_REASON@@PEAU_HAM_ACTIVITY@@@Z @ 0x18002B2D8
 * Callers:
 *     ?HampActStartAsync@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_START_TYPE@@PEAW4_HAM_ACTIVITY_START_DENY_REASON@@PEA_K@Z @ 0x18001A7A8 (-HampActStartAsync@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_START_TYPE@@PEAW4_HAM_ACTIVITY_START_D.c)
 * Callees:
 *     ?HampSessionGetLogoffInProgress@@YAEPEAU_HAM_SESSION@@@Z @ 0x18002AD70 (-HampSessionGetLogoffInProgress@@YAEPEAU_HAM_SESSION@@@Z.c)
 *     ?HampUserGetLogoffInProgress@@YAEPEAU_HAM_USER@@@Z @ 0x18002AE60 (-HampUserGetLogoffInProgress@@YAEPEAU_HAM_USER@@@Z.c)
 *     ?HampManagerReleaseLockShared@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x18002B204 (-HampManagerReleaseLockShared@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 *     ?HampManagerAcquireLockShared@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x18002B260 (-HampManagerAcquireLockShared@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 *     CempLockAcquireExclusive @ 0x18002B8B0 (CempLockAcquireExclusive.c)
 *     ?HampSessionCheckBackgroundAccessAllowed@@YAJPEAU_HAM_SESSION@@PEAU_HAM_PACKAGE_INFO@@PEAK@Z @ 0x18004617C (-HampSessionCheckBackgroundAccessAllowed@@YAJPEAU_HAM_SESSION@@PEAU_HAM_PACKAGE_INFO@@PEAK@Z.c)
 *     ?HampHostShouldDplPolicyApply@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800470F4 (-HampHostShouldDplPolicyApply@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampActCanBeStartedInHostState@@YA?AW4_HAM_ACTIVITY_START_DENY_REASON@@PEAU_HAM_ACTIVITY@@@Z @ 0x18005FFF8 (-HampActCanBeStartedInHostState@@YA-AW4_HAM_ACTIVITY_START_DENY_REASON@@PEAU_HAM_ACTIVITY@@@Z.c)
 */

__int64 __fastcall HampActCanBeStarted(__int64 a1)
{
  unsigned __int64 v2; // rbx
  DWORD v3; // edi
  __int64 v4; // r14
  _QWORD *Value; // rbx
  __int64 *v6; // rax
  __int64 v7; // rdx
  bool v8; // zf
  bool LogoffInProgress; // al
  unsigned int v10; // ecx
  __int64 v11; // rax
  char v12; // al
  __int64 v13; // rbx
  __int64 *v14; // rax
  __int64 v15; // rdx
  char v16; // bl
  __int64 v17; // rdi
  int v18; // edx
  unsigned int v19; // edi
  DWORD v20; // r14d
  __int64 v21; // r15
  _QWORD *v22; // rbx
  unsigned __int64 v23; // rbx
  DWORD v24; // r14d
  __int64 v25; // r15
  _QWORD *v26; // rbx
  __int64 *v27; // rax
  __int64 v28; // rdx
  bool v29; // al
  unsigned int v30; // ecx
  __int64 v31; // rax
  char v32; // al
  __int64 v34; // rax
  unsigned int v35; // [rsp+70h] [rbp+38h] BYREF
  int v36; // [rsp+78h] [rbp+40h] BYREF
  __int64 v37; // [rsp+80h] [rbp+48h] BYREF
  __int64 v38; // [rsp+88h] [rbp+50h] BYREF

  v38 = 0LL;
  v37 = 0LL;
  v36 = 0;
  v35 = 4;
  NtQueryWnfStateData(&SystemStateChangedWnfName, 0LL, 0LL, &v36, &v37, &v35);
  v2 = *(_QWORD *)(a1 + 32) & 0xFFFFFFFFFFFFFFFCuLL;
  HampManagerAcquireLockShared((struct _HOST_ACTIVITY_MANAGER *)(v2 - 440));
  HIDWORD(v37) = HIDWORD(v37) & 0xFFFFFFFD | (*(_DWORD *)(v2 + 228) != 0 ? 2 : 0);
  HIDWORD(v37) = HIDWORD(v37) & 0xFFFFFFFB | (*(_DWORD *)(v2 + 232) != 0 ? 4 : 0);
  HampManagerReleaseLockShared((struct _HOST_ACTIVITY_MANAGER *)(v2 - 440));
  v3 = HampLockTrackerId;
  v4 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 80) + 792LL) + 88LL) + 88LL) + 160LL);
  if ( HampLockTrackerId != -1 )
  {
    Value = TlsGetValue(HampLockTrackerId);
    if ( (*(_QWORD *)TlsGetValue(v3) & 0xFFFFFFFFFFFFFF00uLL) != 0 )
      NT_ASSERT("!CempLockTrackerAreLocksHeldAtLevelOrHigher( TrackerId, MinDisallowedLevel)");
    *Value |= 0x100uLL;
    ++Value[9];
  }
  RtlAcquireSRWLockShared(v4 + 96);
  HIDWORD(v37) = HIDWORD(v37) & 0xFFFFFFFE | *(_DWORD *)(v4 + 144) & 1;
  if ( HampLockTrackerId != -1 )
  {
    v6 = (__int64 *)TlsGetValue(HampLockTrackerId);
    v7 = *v6;
    if ( (*v6 & 0x100) == 0 )
      NT_ASSERT("(Tracker->Bitmap & LevelMask) != 0");
    v8 = v6[9]-- == 1;
    if ( v8 )
      *v6 = v7 & 0xFFFFFFFFFFFFFEFFuLL;
  }
  RtlReleaseSRWLockShared(v4 + 96);
  LogoffInProgress = HampSessionGetLogoffInProgress((struct _HAM_SESSION *)v4);
  v10 = HIDWORD(v37) & 0xFFFFFFEF | (16 * LogoffInProgress);
  v11 = *(_QWORD *)(a1 + 80);
  HIDWORD(v37) = v10;
  v12 = HampUserGetLogoffInProgress(*(struct _HAM_USER **)(*(_QWORD *)(*(_QWORD *)(v11 + 792) + 88LL) + 88LL));
  HIDWORD(v37) = HIDWORD(v37) & 0xFFFFFFF7 | (8 * (v12 & 1));
  while ( 1 )
  {
    v13 = *(_QWORD *)(a1 + 80);
    if ( HampLockTrackerId != -1 )
    {
      v14 = (__int64 *)TlsGetValue(HampLockTrackerId);
      v15 = *v14;
      if ( (*v14 & 2) == 0 )
        NT_ASSERT("(Tracker->Bitmap & LevelMask) != 0");
      v8 = v14[2]-- == 1;
      if ( v8 )
        *v14 = v15 & 0xFFFFFFFFFFFFFFFDuLL;
    }
    *(_DWORD *)(v13 + 8) = 0;
    RtlReleaseSRWLockExclusive(v13);
    v16 = v37;
    v17 = *(_QWORD *)(a1 + 80);
    if ( (v37 & 0x800000000LL) != 0 || (v37 & 0x1000000000LL) != 0 )
    {
      v19 = 8;
      goto LABEL_25;
    }
    if ( (v37 & 0x200000000LL) == 0 && (v37 & 0x400000000LL) == 0 )
      goto LABEL_40;
    if ( (*(_BYTE *)(a1 + 116) & 4) != 0 )
    {
      v19 = 1;
      goto LABEL_25;
    }
    if ( (v37 & 0x400000000LL) != 0 && (*(_DWORD *)(a1 + 116) & 0x400) != 0 )
    {
      v19 = 2;
    }
    else
    {
LABEL_40:
      if ( ((*(_BYTE *)(a1 + 116) & 8) != 0 || (*(_DWORD *)(a1 + 112) & 0x400) != 0 && !*(_BYTE *)(v17 + 592))
        && (v37 & 0x100000000LL) != 0
        && HampHostShouldDplPolicyApply(*(struct _RM_HAM_ACTIVITY_HOST **)(a1 + 80)) )
      {
        v19 = 3;
      }
      else
      {
        v18 = *(_DWORD *)(a1 + 116);
        if ( (v18 & 2) != 0 && (v16 & 8) != 0 )
        {
          v19 = 4;
        }
        else if ( (v16 & 0x20) != 0 && (v18 & 1) != 0 )
        {
          v19 = 5;
        }
        else if ( (v18 & 0x10) != 0 && (v16 & 2) == 0 )
        {
          v19 = 6;
        }
        else if ( (v16 & 0x10) != 0 && (v18 & 0x20) != 0 )
        {
          v19 = 7;
        }
        else if ( (*(_DWORD *)(a1 + 112) & 0x8000) == 0
               || (v34 = *(_QWORD *)(v17 + 792),
                   v35 = 1,
                   HampSessionCheckBackgroundAccessAllowed(
                     *(struct _HAM_SESSION **)(*(_QWORD *)(*(_QWORD *)(v34 + 88) + 88LL) + 160LL),
                     (struct _HAM_PACKAGE_INFO *)(*(_QWORD *)(v34 + 88) + 96LL),
                     &v35),
                   v35) )
        {
          v19 = 0;
        }
        else
        {
          v19 = 12;
        }
      }
    }
LABEL_25:
    v20 = HampLockTrackerId;
    v21 = *(_QWORD *)(a1 + 80);
    if ( HampLockTrackerId != -1 )
    {
      v22 = TlsGetValue(HampLockTrackerId);
      if ( (*(_QWORD *)TlsGetValue(v20) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
        NT_ASSERT("!CempLockTrackerAreLocksHeldAtLevelOrHigher( TrackerId, MinDisallowedLevel)");
      *v22 |= 2uLL;
      ++v22[2];
    }
    CempLockAcquireExclusive(v21);
    v38 = 0LL;
    v36 = 0;
    v35 = 4;
    NtQueryWnfStateData(&SystemStateChangedWnfName, 0LL, 0LL, &v36, &v38, &v35);
    v23 = *(_QWORD *)(a1 + 32) & 0xFFFFFFFFFFFFFFFCuLL;
    HampManagerAcquireLockShared((struct _HOST_ACTIVITY_MANAGER *)(v23 - 440));
    HIDWORD(v38) = HIDWORD(v38) & 0xFFFFFFFD | (*(_DWORD *)(v23 + 228) != 0 ? 2 : 0);
    HIDWORD(v38) = HIDWORD(v38) & 0xFFFFFFFB | (*(_DWORD *)(v23 + 232) != 0 ? 4 : 0);
    HampManagerReleaseLockShared((struct _HOST_ACTIVITY_MANAGER *)(v23 - 440));
    v24 = HampLockTrackerId;
    v25 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 80) + 792LL) + 88LL) + 88LL) + 160LL);
    if ( HampLockTrackerId != -1 )
    {
      v26 = TlsGetValue(HampLockTrackerId);
      if ( (*(_QWORD *)TlsGetValue(v24) & 0xFFFFFFFFFFFFFF00uLL) != 0 )
        NT_ASSERT("!CempLockTrackerAreLocksHeldAtLevelOrHigher( TrackerId, MinDisallowedLevel)");
      *v26 |= 0x100uLL;
      ++v26[9];
    }
    RtlAcquireSRWLockShared(v25 + 96);
    HIDWORD(v38) = HIDWORD(v38) & 0xFFFFFFFE | *(_DWORD *)(v25 + 144) & 1;
    if ( HampLockTrackerId != -1 )
    {
      v27 = (__int64 *)TlsGetValue(HampLockTrackerId);
      v28 = *v27;
      if ( (*v27 & 0x100) == 0 )
        NT_ASSERT("(Tracker->Bitmap & LevelMask) != 0");
      v8 = v27[9]-- == 1;
      if ( v8 )
        *v27 = v28 & 0xFFFFFFFFFFFFFEFFuLL;
    }
    RtlReleaseSRWLockShared(v25 + 96);
    v29 = HampSessionGetLogoffInProgress((struct _HAM_SESSION *)v25);
    v30 = HIDWORD(v38) & 0xFFFFFFEF | (16 * v29);
    v31 = *(_QWORD *)(a1 + 80);
    HIDWORD(v38) = v30;
    v32 = HampUserGetLogoffInProgress(*(struct _HAM_USER **)(*(_QWORD *)(*(_QWORD *)(v31 + 792) + 88LL) + 88LL));
    HIDWORD(v38) = HIDWORD(v38) & 0xFFFFFFF7 | (8 * (v32 & 1));
    if ( v37 == v38 )
      break;
    v37 = v38;
  }
  if ( !v19 )
    return (unsigned int)HampActCanBeStartedInHostState(a1);
  return v19;
}
