/*
 * XREFs of ?RmpQoSWatchdogCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x1800272E0
 * Callers:
 *     <none>
 * Callees:
 *     ?RmpQoSCheckHostsSetTimer@@YAXPEAU_RM_QOS_CONTEXT@@_K@Z @ 0x1800274C0 (-RmpQoSCheckHostsSetTimer@@YAXPEAU_RM_QOS_CONTEXT@@_K@Z.c)
 *     __security_check_cookie @ 0x1800A7850 (__security_check_cookie.c)
 */

void __fastcall RmpQoSWatchdogCallback(
        struct _TP_CALLBACK_INSTANCE *a1,
        struct _RM_QOS_CONTEXT *a2,
        struct _TP_TIMER *a3)
{
  DWORD v3; // ebx
  DWORD v5; // ebx
  _QWORD *Value; // rdi
  __int64 *v7; // rax
  __int64 v8; // rcx
  DWORD v10; // ebx
  unsigned __int64 v11; // [rsp+20h] [rbp-B8h] BYREF
  _OWORD TlsValue[8]; // [rsp+30h] [rbp-A8h] BYREF
  __int64 v13; // [rsp+B0h] [rbp-28h]

  v3 = HampLockTrackerId;
  memset(TlsValue, 0, sizeof(TlsValue));
  v11 = 0LL;
  v13 = 0LL;
  if ( HampLockTrackerId != -1 )
  {
    if ( TlsGetValue(HampLockTrackerId) )
      NT_ASSERT("CurrentTracker == 0");
    TlsSetValue(v3, TlsValue);
    v5 = HampLockTrackerId;
    if ( HampLockTrackerId != -1 )
    {
      Value = TlsGetValue(HampLockTrackerId);
      if ( *(_QWORD *)TlsGetValue(v5) )
        NT_ASSERT("!CempLockTrackerAreLocksHeldAtLevelOrHigher( TrackerId, MinDisallowedLevel)");
      *Value |= 1uLL;
      ++Value[1];
    }
  }
  RtlAcquireSRWLockExclusive(&RmpGlobalLock);
  dword_1800E9388 = GetCurrentThreadId();
  RtlQueryUnbiasedInterruptTime(&v11);
  RmpQoSCheckHostsSetTimer(a2, v11);
  dword_1800E9388 = 0;
  RtlReleaseSRWLockExclusive(&RmpGlobalLock);
  if ( HampLockTrackerId != -1 )
  {
    v7 = (__int64 *)TlsGetValue(HampLockTrackerId);
    v8 = *v7;
    if ( (*v7 & 1) == 0 )
      NT_ASSERT("(Tracker->Bitmap & LevelMask) != 0");
    if ( v7[1]-- == 1 )
      *v7 = v8 & 0xFFFFFFFFFFFFFFFEuLL;
  }
  v10 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      NT_ASSERT("CurrentTracker->Bitmap == 0");
    TlsSetValue(v10, 0LL);
  }
}
