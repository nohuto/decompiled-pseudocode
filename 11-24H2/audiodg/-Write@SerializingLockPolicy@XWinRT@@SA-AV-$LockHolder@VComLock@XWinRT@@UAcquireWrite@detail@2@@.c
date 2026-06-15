/*
 * XREFs of ?Write@SerializingLockPolicy@XWinRT@@SA?AV?$LockHolder@VComLock@XWinRT@@UAcquireWrite@detail@2@@detail@2@AEAVComLock@2@PEAJ@Z @ 0x140049C8C
 * Callers:
 *     ?Clear@?$Vector@UEventRegistrationToken@@UEventRegistrationTokenEqual@Internal@Devices@Media@Windows@@UPodLifetimeTraits@XWinRT@@U?$DefaultVectorOptions@UEventRegistrationToken@@@3Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@UEAAJXZ @ 0x140077E60 (-Clear@-$Vector@UEventRegistrationToken@@UEventRegistrationTokenEqual@Internal@Devices@Media@Win.c)
 *     ?RemoveAtInternal@?$Vector@UEventRegistrationToken@@UEventRegistrationTokenEqual@Internal@Devices@Media@Windows@@UPodLifetimeTraits@XWinRT@@U?$DefaultVectorOptions@UEventRegistrationToken@@@3Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@AEAAJI_N@Z @ 0x14007C970 (-RemoveAtInternal@-$Vector@UEventRegistrationToken@@UEventRegistrationTokenEqual@Internal@Device.c)
 *     ?ReplaceAll@?$Vector@UEventRegistrationToken@@UEventRegistrationTokenEqual@Internal@Devices@Media@Windows@@UPodLifetimeTraits@XWinRT@@U?$DefaultVectorOptions@UEventRegistrationToken@@@3Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@UEAAJIPEAUEventRegistrationToken@@@Z @ 0x14007CAE0 (-ReplaceAll@-$Vector@UEventRegistrationToken@@UEventRegistrationTokenEqual@Internal@Devices@Medi.c)
 *     ?SetAt@?$Vector@UEventRegistrationToken@@UEventRegistrationTokenEqual@Internal@Devices@Media@Windows@@UPodLifetimeTraits@XWinRT@@U?$DefaultVectorOptions@UEventRegistrationToken@@@3Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@UEAAJIUEventRegistrationToken@@@Z @ 0x14007D410 (-SetAt@-$Vector@UEventRegistrationToken@@UEventRegistrationTokenEqual@Internal@Devices@Media@Win.c)
 * Callees:
 *     <none>
 */

RTL_SRWLOCK **__fastcall XWinRT::SerializingLockPolicy::Write(RTL_SRWLOCK **a1, RTL_SRWLOCK *a2, _DWORD *a3)
{
  RTL_SRWLOCK *v4; // rcx

  *a1 = a2;
  v4 = a2 + 1;
  if ( LODWORD(a2->Ptr) == 1 )
  {
    if ( !LODWORD(v4->Ptr) )
      LODWORD(v4->Ptr) = -268435456;
  }
  else
  {
    AcquireSRWLockExclusive(v4);
  }
  *a3 = 0;
  return a1;
}
