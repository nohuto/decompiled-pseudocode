/*
 * XREFs of ?HampHostAmbientStateChanged@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_SYSTEM_STATE_TRACKER_SYSTEM_STATE@@W4_HAM_ACTIVITY_STOP_REQUEST_REASON@@@Z @ 0x18000AC3C
 * Callers:
 *     ?HampManagerSystemStateChangedCallback@@YAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x18003B470 (-HampManagerSystemStateChangedCallback@@YAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z.c)
 *     ?HampPkgHandleBackgroundAccessStateChange@@YAXPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_PACKAGE_INFO@@K@Z @ 0x180083504 (-HampPkgHandleBackgroundAccessStateChange@@YAXPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_PACKAGE_INFO@.c)
 * Callees:
 *     ?HampHostGetFirstActivity@@YAPEAU_HAM_ACTIVITY@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180009DD0 (-HampHostGetFirstActivity@@YAPEAU_HAM_ACTIVITY@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     CemRcObjectDereference @ 0x180014F60 (CemRcObjectDereference.c)
 *     CempLockAcquireExclusive @ 0x18002B8B0 (CempLockAcquireExclusive.c)
 *     ?HampHostReleaseLockExclusive@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18003AA84 (-HampHostReleaseLockExclusive@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampActRequestStopEx@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_STOP_REQUEST_TYPE@@W4_HAM_ACTIVITY_STOP_REQUEST_REASON@@KW4_HAM_TERMINATE_REASON@@KPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x1800566A4 (-HampActRequestStopEx@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_STOP_REQUEST_TYPE@@W4_HAM_ACTIVITY_.c)
 *     ?HampActWaitForNoChangeInProgress@@YAXPEAU_HAM_ACTIVITY@@@Z @ 0x180082084 (-HampActWaitForNoChangeInProgress@@YAXPEAU_HAM_ACTIVITY@@@Z.c)
 */

__int64 __fastcall HampHostAmbientStateChanged(__int64 a1, _BYTE *a2, unsigned int a3)
{
  DWORD v6; // edi
  _QWORD *Value; // rbx
  struct _HAM_ACTIVITY *FirstActivity; // rbx
  __int64 v9; // rdx
  __int64 v10; // rcx
  struct _HAM_ACTIVITY *v11; // rbx
  int v12; // edx
  __int64 v13; // rcx
  __int64 *v14; // rax
  __int64 v15; // rcx

LABEL_1:
  v6 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    Value = TlsGetValue(HampLockTrackerId);
    if ( (*(_QWORD *)TlsGetValue(v6) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
      NT_ASSERT("!CempLockTrackerAreLocksHeldAtLevelOrHigher( TrackerId, MinDisallowedLevel)");
    *Value |= 2uLL;
    ++Value[2];
  }
  CempLockAcquireExclusive(a1);
  FirstActivity = HampHostGetFirstActivity((struct _RM_HAM_ACTIVITY_HOST *)a1);
  while ( FirstActivity )
  {
    if ( (*((_BYTE *)FirstActivity + 552) & 1) != 0 )
    {
      if ( _InterlockedIncrement64((volatile signed __int64 *)FirstActivity + 3) <= 1 )
        __fastfail(0xEu);
      HampHostReleaseLockExclusive((struct _RM_HAM_ACTIVITY_HOST *)a1);
      HampActWaitForNoChangeInProgress(FirstActivity);
      CemRcObjectDereference(FirstActivity);
      goto LABEL_1;
    }
    v9 = *((_QWORD *)FirstActivity + 12);
    v10 = *((_QWORD *)FirstActivity + 10);
    FirstActivity = 0LL;
    if ( v9 != v10 + 608 )
      FirstActivity = (struct _HAM_ACTIVITY *)(v9 - 96);
  }
  v11 = HampHostGetFirstActivity((struct _RM_HAM_ACTIVITY_HOST *)a1);
  if ( v11 )
  {
    do
    {
      v12 = 0;
      if ( (unsigned __int8)(*((_BYTE *)v11 + 562) - 2) <= 1u )
      {
        if ( (*a2 & 8) != 0 && (*((_BYTE *)v11 + 120) & 2) != 0 )
          v12 = 2;
        if ( (*a2 & 0x20) != 0 && (*((_BYTE *)v11 + 120) & 1) != 0 )
          v12 |= 1u;
        if ( (*a2 & 2) == 0 && (*((_BYTE *)v11 + 120) & 0x20) != 0 )
          v12 |= 0x20u;
        if ( (*a2 & 0x10) != 0 && (*((_BYTE *)v11 + 120) & 0x40) != 0 )
          v12 |= 0x40u;
        if ( (*((_DWORD *)v11 + 28) & 0x8000) != 0 && a3 == 8 )
          v12 |= 0x200u;
        if ( v12 )
          HampActRequestStopEx(v11, 1LL, a3);
      }
      v13 = *((_QWORD *)v11 + 12);
      if ( v13 == *((_QWORD *)v11 + 10) + 608LL )
        break;
      v11 = (struct _HAM_ACTIVITY *)(v13 - 96);
    }
    while ( v13 != 96 );
  }
  if ( HampLockTrackerId != -1 )
  {
    v14 = (__int64 *)TlsGetValue(HampLockTrackerId);
    v15 = *v14;
    if ( (*v14 & 2) == 0 )
      NT_ASSERT("(Tracker->Bitmap & LevelMask) != 0");
    if ( v14[2]-- == 1 )
      *v14 = v15 & 0xFFFFFFFFFFFFFFFDuLL;
  }
  *(_DWORD *)(a1 + 8) = 0;
  return RtlReleaseSRWLockExclusive(a1);
}
