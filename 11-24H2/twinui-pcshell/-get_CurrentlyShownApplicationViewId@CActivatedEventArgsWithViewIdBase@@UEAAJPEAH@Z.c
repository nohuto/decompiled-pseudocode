/*
 * XREFs of ?get_CurrentlyShownApplicationViewId@CActivatedEventArgsWithViewIdBase@@UEAAJPEAH@Z @ 0x1801EA3C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CActivatedEventArgsWithViewIdBase::get_CurrentlyShownApplicationViewId(RTL_SRWLOCK *this, int *a2)
{
  RTL_SRWLOCK *v4; // rsi

  v4 = this + 7;
  AcquireSRWLockShared(this + 7);
  *a2 = (int)this[-7].Ptr;
  if ( v4 )
    ReleaseSRWLockShared(v4);
  return 0LL;
}
