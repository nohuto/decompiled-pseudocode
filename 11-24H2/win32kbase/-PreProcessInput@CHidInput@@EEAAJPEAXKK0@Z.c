/*
 * XREFs of ?PreProcessInput@CHidInput@@EEAAJPEAXKK0@Z @ 0x140060280
 * Callers:
 *     <none>
 * Callees:
 *     HMAssignmentUnlock @ 0x14005F130 (HMAssignmentUnlock.c)
 *     ?OnFlushDelayZonePalmRejectInputTimerNotification@CHidInput@@EEAAJXZ @ 0x1400602F0 (-OnFlushDelayZonePalmRejectInputTimerNotification@CHidInput@@EEAAJXZ.c)
 */

__int64 __fastcall CHidInput::PreProcessInput(CHidInput *this, void *a2, char a3)
{
  __int64 v4; // rax
  __int64 *v5; // rcx

  if ( (a3 & 0x1C) != 0 )
  {
    v4 = *((_QWORD *)this + 2);
    if ( v4 )
    {
      if ( *(_QWORD *)(v4 + 48) )
      {
        HMAssignmentUnlock((__int64 *)(v4 + 48));
        *(_QWORD *)(*((_QWORD *)this + 2) + 48LL) = 0LL;
      }
      v5 = (__int64 *)(*((_QWORD *)this + 2) + 56LL);
      if ( *v5 )
      {
        HMAssignmentUnlock(v5);
        *(_QWORD *)(*((_QWORD *)this + 2) + 56LL) = 0LL;
      }
    }
  }
  return CHidInput::OnFlushDelayZonePalmRejectInputTimerNotification(this);
}
