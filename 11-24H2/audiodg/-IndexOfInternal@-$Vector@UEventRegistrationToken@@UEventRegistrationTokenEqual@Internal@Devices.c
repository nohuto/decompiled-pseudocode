/*
 * XREFs of ?IndexOfInternal@?$Vector@UEventRegistrationToken@@UEventRegistrationTokenEqual@Internal@Devices@Media@Windows@@UPodLifetimeTraits@XWinRT@@U?$DefaultVectorOptions@UEventRegistrationToken@@@3Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@AEAAJPEAUEventRegistrationToken@@IU6@PEAIPEAE@Z @ 0x14007A30C
 * Callers:
 *     ?IndexOf@?$Vector@UEventRegistrationToken@@UEventRegistrationTokenEqual@Internal@Devices@Media@Windows@@UPodLifetimeTraits@XWinRT@@U?$DefaultVectorOptions@UEventRegistrationToken@@@3Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@UEAAJUEventRegistrationToken@@PEAIPEAE@Z @ 0x14007A260 (-IndexOf@-$Vector@UEventRegistrationToken@@UEventRegistrationTokenEqual@Internal@Devices@Media@W.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<EventRegistrationToken,Windows::Media::Devices::Internal::EventRegistrationTokenEqual,XWinRT::PodLifetimeTraits,Windows::Foundation::Collections::Internal::DefaultVectorOptions<EventRegistrationToken>>::IndexOfInternal(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        _DWORD *a5,
        _BYTE *a6)
{
  __int64 i; // rcx

  for ( i = 0LL; (unsigned int)i < a3; i = (unsigned int)(i + 1) )
  {
    if ( a4 == *(_QWORD *)(a2 + 8 * i) )
    {
      *a6 = 1;
      *a5 = i;
      return 0LL;
    }
  }
  return 0LL;
}
