/*
 * XREFs of ?SetAt@?$Vector@UEventRegistrationToken@@UEventRegistrationTokenEqual@Internal@Devices@Media@Windows@@UPodLifetimeTraits@XWinRT@@U?$DefaultVectorOptions@UEventRegistrationToken@@@3Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@UEAAJIUEventRegistrationToken@@@Z @ 0x14007D410
 * Callers:
 *     <none>
 * Callees:
 *     memmove_s @ 0x14000C4D0 (memmove_s.c)
 *     ??0?$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ @ 0x140041D68 (--0-$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ.c)
 *     ?Write@SerializingLockPolicy@XWinRT@@SA?AV?$LockHolder@VComLock@XWinRT@@UAcquireWrite@detail@2@@detail@2@AEAVComLock@2@PEAJ@Z @ 0x140049C8C (-Write@SerializingLockPolicy@XWinRT@@SA-AV-$LockHolder@VComLock@XWinRT@@UAcquireWrite@detail@2@@.c)
 *     ?RaiseEvent@?$VectorOptions@UEventRegistrationToken@@$0A@$0A@$0A@@Internal@Collections@Foundation@Windows@@SAJZZ @ 0x14004D3B4 (-RaiseEvent@-$VectorOptions@UEventRegistrationToken@@$0A@$0A@$0A@@Internal@Collections@Foundatio.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<EventRegistrationToken,Windows::Media::Devices::Internal::EventRegistrationTokenEqual,XWinRT::PodLifetimeTraits,Windows::Foundation::Collections::Internal::DefaultVectorOptions<EventRegistrationToken>>::SetAt(
        __int64 a1,
        unsigned int a2,
        __int64 a3)
{
  __int64 v4; // rbp
  int v6; // edi
  __int64 v7; // rax
  RTL_SRWLOCK *v8; // rcx
  __int64 Destination; // [rsp+60h] [rbp+18h] BYREF
  RTL_SRWLOCK *v11; // [rsp+68h] [rbp+20h] BYREF

  LODWORD(Destination) = 0;
  v4 = a2;
  XWinRT::SerializingLockPolicy::Write(&v11, (RTL_SRWLOCK *)(a1 + 80), &Destination);
  v6 = Destination;
  if ( (int)Destination >= 0 )
  {
    if ( (unsigned int)v4 >= *(_DWORD *)(a1 + 48) )
    {
      v6 = -2147483637;
      RoOriginateError(2147483659LL, 0LL);
    }
    if ( v6 >= 0 )
    {
      XWinRT::detail::ReentrancyGuard<0>::ReentrancyGuard<0>((__int64)&Destination);
      v7 = *(_QWORD *)(a1 + 64);
      v6 = 0;
      Destination = 0LL;
      if ( memmove_s(&Destination, 8uLL, (const void *const)(v7 + 8 * v4), 8uLL) )
      {
        v6 = -2147418113;
        RoOriginateError(2147549183LL, 0LL);
      }
      else
      {
        *(_QWORD *)(*(_QWORD *)(a1 + 64) + 8 * v4) = a3;
        ++*(_DWORD *)(a1 + 96);
      }
    }
  }
  if ( v11 )
  {
    v8 = v11 + 1;
    if ( LODWORD(v11->Ptr) == 1 )
      LODWORD(v8->Ptr) += 0x10000000;
    else
      ReleaseSRWLockExclusive(v8);
  }
  if ( v6 >= 0 )
    return (unsigned int)Windows::Foundation::Collections::Internal::VectorOptions<EventRegistrationToken,0,0,0>::RaiseEvent();
  return (unsigned int)v6;
}
