/*
 * XREFs of ?ArActCheckRestart@@YAJPEAU_AR_ACTIVITY@@@Z @ 0x180004624
 * Callers:
 *     ?ArHamCallback@@YAXPEAU_HAM_ACTIVITY_CALLBACK_PAYLOAD@@@Z @ 0x1800063D0 (-ArHamCallback@@YAXPEAU_HAM_ACTIVITY_CALLBACK_PAYLOAD@@@Z.c)
 * Callees:
 *     ?ArActStartAsync@@YAJPEAU_AR_ACTIVITY@@@Z @ 0x180004184 (-ArActStartAsync@@YAJPEAU_AR_ACTIVITY@@@Z.c)
 *     CempLockTrackerAreLocksHeldAtLevelOrHigher @ 0x1800041D0 (CempLockTrackerAreLocksHeldAtLevelOrHigher.c)
 *     ?ArHostClearChangeInProgress@@YAXPEAU_AR_ACTIVITY_HOST@@@Z @ 0x180005978 (-ArHostClearChangeInProgress@@YAXPEAU_AR_ACTIVITY_HOST@@@Z.c)
 *     ?ArHostWaitForAndSetChangeInProgress@@YAXPEAU_AR_ACTIVITY_HOST@@@Z @ 0x1800059C8 (-ArHostWaitForAndSetChangeInProgress@@YAXPEAU_AR_ACTIVITY_HOST@@@Z.c)
 */

__int64 __fastcall ArActCheckRestart(struct _AR_ACTIVITY *a1)
{
  DWORD v2; // ebp
  unsigned __int64 v3; // rsi
  _QWORD *Value; // rbx
  int v5; // ebp
  __int64 *v6; // rax
  __int64 v7; // rcx
  int started; // ebx

  v2 = ArLockTrackerId;
  v3 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 32LL) & 0xFFFFFFFFFFFFFFFCuLL;
  if ( ArLockTrackerId != -1 )
  {
    Value = TlsGetValue(ArLockTrackerId);
    if ( CempLockTrackerAreLocksHeldAtLevelOrHigher(v2, 1) )
      NT_ASSERT("!CempLockTrackerAreLocksHeldAtLevelOrHigher( TrackerId, MinDisallowedLevel)");
    *Value |= 2uLL;
    ++Value[2];
  }
  RtlAcquireSRWLockShared(v3 + 48);
  v5 = *(_DWORD *)(v3 + 72);
  RtlReleaseSRWLockShared(v3 + 48);
  if ( ArLockTrackerId != -1 )
  {
    v6 = (__int64 *)TlsGetValue(ArLockTrackerId);
    v7 = *v6;
    if ( (*v6 & 2) == 0 )
      NT_ASSERT("(Tracker->Bitmap & LevelMask) != 0");
    if ( v6[2]-- == 1 )
      *v6 = v7 & 0xFFFFFFFFFFFFFFFDuLL;
  }
  ArHostWaitForAndSetChangeInProgress(*((struct _AR_ACTIVITY_HOST **)a1 + 2));
  if ( *((_BYTE *)a1 + 32) )
    goto LABEL_13;
  if ( ((v5 & 1) != 0 || (*((_BYTE *)a1 + 28) & 1) == 0) && ((v5 & 2) != 0 || (*((_BYTE *)a1 + 28) & 2) == 0) )
  {
    started = -1073741823;
    goto LABEL_14;
  }
  started = ArActStartAsync(a1);
  if ( started >= 0 )
LABEL_13:
    started = 0;
LABEL_14:
  ArHostClearChangeInProgress(*((struct _AR_ACTIVITY_HOST **)a1 + 2));
  return (unsigned int)started;
}
