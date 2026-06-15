/*
 * XREFs of ?Read@SerializingLockPolicy@XWinRT@@SA?AV?$LockHolder@VComLock@XWinRT@@UAcquireRead@detail@2@@detail@2@AEAVComLock@2@PEAJ@Z @ 0x140045844
 * Callers:
 *     ?GetMany@?$Vector@UEventRegistrationToken@@UEventRegistrationTokenEqual@Internal@Devices@Media@Windows@@UPodLifetimeTraits@XWinRT@@U?$DefaultVectorOptions@UEventRegistrationToken@@@3Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@UEAAJIIPEAUEventRegistrationToken@@PEAI@Z @ 0x14007B980 (-GetMany@-$Vector@UEventRegistrationToken@@UEventRegistrationTokenEqual@Internal@Devices@Media@W.c)
 *     ?IndexOf@?$Vector@UEventRegistrationToken@@UEventRegistrationTokenEqual@Internal@Devices@Media@Windows@@UPodLifetimeTraits@XWinRT@@U?$DefaultVectorOptions@UEventRegistrationToken@@@3Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@UEAAJUEventRegistrationToken@@PEAIPEAE@Z @ 0x14007C580 (-IndexOf@-$Vector@UEventRegistrationToken@@UEventRegistrationTokenEqual@Internal@Devices@Media@W.c)
 * Callees:
 *     <none>
 */

RTL_SRWLOCK **__fastcall XWinRT::SerializingLockPolicy::Read(RTL_SRWLOCK **a1, RTL_SRWLOCK *a2, _DWORD *a3)
{
  RTL_SRWLOCK *v4; // rcx

  *a1 = a2;
  v4 = a2 + 1;
  if ( LODWORD(a2->Ptr) == 1 )
  {
    if ( SLODWORD(v4->Ptr) >= 0 )
      ++LODWORD(v4->Ptr);
  }
  else
  {
    AcquireSRWLockShared(v4);
  }
  *a3 = 0;
  return a1;
}
