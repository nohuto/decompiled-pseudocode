/*
 * XREFs of ??$Do@V_lambda_a1abafb90744ae9b01c4cbc40f730f27_@@V_lambda_db410fc95b55691920d4e5837927db01_@@@?$InvalidationChecker@V?$Vector@UEventRegistrationToken@@UEventRegistrationTokenEqual@Internal@Devices@Media@Windows@@UPodLifetimeTraits@XWinRT@@U?$DefaultVectorOptions@UEventRegistrationToken@@@3Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@UIntVersionTag@XWinRT@@@detail@XWinRT@@QEAAJPEAV?$Vector@UEventRegistrationToken@@UEventRegistrationTokenEqual@Internal@Devices@Media@Windows@@UPodLifetimeTraits@XWinRT@@U?$DefaultVectorOptions@UEventRegistrationToken@@@3Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@AEBV_lambda_a1abafb90744ae9b01c4cbc40f730f27_@@AEBV_lambda_db410fc95b55691920d4e5837927db01_@@@Z @ 0x140075868
 * Callers:
 *     ?get_Current@?$SimpleVectorIterator@UEventRegistrationToken@@V?$Vector@UEventRegistrationToken@@UEventRegistrationTokenEqual@Internal@Devices@Media@Windows@@UPodLifetimeTraits@XWinRT@@U?$DefaultVectorOptions@UEventRegistrationToken@@@3Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@UPodLifetimeTraits@XWinRT@@UIntVersionTag@8@$0A@@Internal@Collections@Foundation@Windows@@UEAAJPEAUEventRegistrationToken@@@Z @ 0x14007E5E0 (-get_Current@-$SimpleVectorIterator@UEventRegistrationToken@@V-$Vector@UEventRegistrationToken@@.c)
 * Callees:
 *     ??$?0V?$Vector@UEventRegistrationToken@@UEventRegistrationTokenEqual@Internal@Devices@Media@Windows@@UPodLifetimeTraits@XWinRT@@U?$DefaultVectorOptions@UEventRegistrationToken@@@3Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@@IntVersionTag@XWinRT@@QEAA@PEAV?$Vector@UEventRegistrationToken@@UEventRegistrationTokenEqual@Internal@Devices@Media@Windows@@UPodLifetimeTraits@XWinRT@@U?$DefaultVectorOptions@UEventRegistrationToken@@@3Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@@Z @ 0x140074BA8 (--$-0V-$Vector@UEventRegistrationToken@@UEventRegistrationTokenEqual@Internal@Devices@Media@Wind.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall XWinRT::detail::InvalidationChecker<Windows::Foundation::Collections::Internal::Vector<EventRegistrationToken,Windows::Media::Devices::Internal::EventRegistrationTokenEqual,XWinRT::PodLifetimeTraits,Windows::Foundation::Collections::Internal::DefaultVectorOptions<EventRegistrationToken>>,XWinRT::IntVersionTag>::Do<_lambda_a1abafb90744ae9b01c4cbc40f730f27_,_lambda_db410fc95b55691920d4e5837927db01_>(
        unsigned int *a1,
        __int64 a2,
        _QWORD **a3,
        _QWORD ***a4)
{
  unsigned int v4; // ebx
  int v9; // [rsp+30h] [rbp+8h] BYREF

  v4 = *a1;
  if ( (*a1 & 0x80000000) == 0 )
  {
    v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)(*a3)[4] + 48LL))(
           (*a3)[4],
           *((unsigned int *)*a3 + 10),
           *a3[1]);
    XWinRT::IntVersionTag::IntVersionTag(&v9, a2);
    if ( a1[1] != v9 )
    {
      *a1 = -2147483636;
      if ( (v4 & 0x80000000) != 0 )
      {
        RoTransformError(v4, 2147483660LL, 0LL);
      }
      else
      {
        RoOriginateError(2147483660LL, 0LL);
        ***a4 = 0LL;
      }
      return (unsigned int)-2147483636;
    }
  }
  else
  {
    RoOriginateError(v4, 0LL);
  }
  return v4;
}
