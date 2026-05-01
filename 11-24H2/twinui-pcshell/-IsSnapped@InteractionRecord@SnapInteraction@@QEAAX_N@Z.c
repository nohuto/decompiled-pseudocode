/*
 * XREFs of ?IsSnapped@InteractionRecord@SnapInteraction@@QEAAX_N@Z @ 0x1801CFF1C
 * Callers:
 *     ?OnViewSnapped@InteractionTracker@SnapInteraction@@AEAAXAEBU?$com_ptr@UIApplicationView@@@winrt@@@Z @ 0x1805A9568 (-OnViewSnapped@InteractionTracker@SnapInteraction@@AEAAXAEBU-$com_ptr@UIApplicationView@@@winrt@.c)
 *     ?WindowSnapStateChanged@InteractionTracker@SnapInteraction@@UEAAJPEAUIApplicationView@@W4WINDOW_SNAP_STATE@@@Z @ 0x1805A98A0 (-WindowSnapStateChanged@InteractionTracker@SnapInteraction@@UEAAJPEAUIApplicationView@@W4WINDOW_.c)
 * Callees:
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x1800EA680 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?EndInteraction@InteractionRecord@SnapInteraction@@AEAAXAEBV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x1805A9548 (-EndInteraction@InteractionRecord@SnapInteraction@@AEAAXAEBV-$unique_any_t@V-$unique_storage@U-$.c)
 *     ?StartInteraction@InteractionRecord@SnapInteraction@@AEAAXAEBV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x1805A96F4 (-StartInteraction@InteractionRecord@SnapInteraction@@AEAAXAEBV-$unique_any_t@V-$unique_storage@U.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall SnapInteraction::InteractionRecord::IsSnapped(RTL_SRWLOCK *this, char a2)
{
  RTL_SRWLOCK *v4; // rdi
  RTL_SRWLOCK *v5; // [rsp+30h] [rbp+8h] BYREF

  v4 = this + 5;
  AcquireSRWLockExclusive(this + 5);
  v5 = v4;
  if ( a2 == LOBYTE(this[1].Ptr) )
  {
    if ( v4 )
      ReleaseSRWLockExclusive(v4);
  }
  else
  {
    LOBYTE(this[1].Ptr) = a2;
    if ( BYTE1(this[1].Ptr) )
    {
      if ( a2 )
        SnapInteraction::InteractionRecord::StartInteraction(this);
      else
        SnapInteraction::InteractionRecord::EndInteraction(this);
    }
    CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v5);
  }
}
