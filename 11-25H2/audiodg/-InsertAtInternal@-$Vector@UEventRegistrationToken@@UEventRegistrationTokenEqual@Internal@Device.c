/*
 * XREFs of ?InsertAtInternal@?$Vector@UEventRegistrationToken@@UEventRegistrationTokenEqual@Internal@Devices@Media@Windows@@UPodLifetimeTraits@XWinRT@@U?$DefaultVectorOptions@UEventRegistrationToken@@@3Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@AEAAJIUEventRegistrationToken@@_N@Z @ 0x140041E48
 * Callers:
 *     ?Append@?$Vector@UEventRegistrationToken@@UEventRegistrationTokenEqual@Internal@Devices@Media@Windows@@UPodLifetimeTraits@XWinRT@@U?$DefaultVectorOptions@UEventRegistrationToken@@@3Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@UEAAJUEventRegistrationToken@@@Z @ 0x14004BBA0 (-Append@-$Vector@UEventRegistrationToken@@UEventRegistrationTokenEqual@Internal@Devices@Media@Wi.c)
 *     ?InsertAt@?$Vector@UEventRegistrationToken@@UEventRegistrationTokenEqual@Internal@Devices@Media@Windows@@UPodLifetimeTraits@XWinRT@@U?$DefaultVectorOptions@UEventRegistrationToken@@@3Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@UEAAJIUEventRegistrationToken@@@Z @ 0x14007C6E0 (-InsertAt@-$Vector@UEventRegistrationToken@@UEventRegistrationTokenEqual@Internal@Devices@Media@.c)
 * Callees:
 *     memmove_s @ 0x14000C4A0 (memmove_s.c)
 *     ?ResizeStorage@?$Vector@UEventRegistrationToken@@UEventRegistrationTokenEqual@Internal@Devices@Media@Windows@@UPodLifetimeTraits@XWinRT@@U?$DefaultVectorOptions@UEventRegistrationToken@@@3Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@AEAAJI@Z @ 0x140041FF8 (-ResizeStorage@-$Vector@UEventRegistrationToken@@UEventRegistrationTokenEqual@Internal@Devices@M.c)
 *     ??0?$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ @ 0x140042068 (--0-$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ.c)
 *     ?RaiseEvent@?$VectorOptions@UEventRegistrationToken@@$0A@$0A@$0A@@Internal@Collections@Foundation@Windows@@SAJZZ @ 0x14004D6D4 (-RaiseEvent@-$VectorOptions@UEventRegistrationToken@@$0A@$0A@$0A@@Internal@Collections@Foundatio.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<EventRegistrationToken,Windows::Media::Devices::Internal::EventRegistrationTokenEqual,XWinRT::PodLifetimeTraits,Windows::Foundation::Collections::Internal::DefaultVectorOptions<EventRegistrationToken>>::InsertAtInternal(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        char a4)
{
  RTL_SRWLOCK *v4; // rbx
  bool v6; // zf
  RTL_SRWLOCK *v7; // rcx
  unsigned int *v11; // r14
  int v12; // esi
  unsigned int v13; // r9d
  _DWORD *v14; // r12
  int v15; // edx
  RTL_SRWLOCK *v16; // rcx
  unsigned __int8 v18; // [rsp+70h] [rbp+18h] BYREF

  v4 = (RTL_SRWLOCK *)(a1 + 80);
  v6 = *(_DWORD *)(a1 + 80) == 1;
  v7 = (RTL_SRWLOCK *)(a1 + 88);
  if ( v6 )
  {
    if ( !LODWORD(v7->Ptr) )
      LODWORD(v7->Ptr) = -268435456;
  }
  else
  {
    AcquireSRWLockExclusive(v7);
  }
  v11 = (unsigned int *)(a1 + 48);
  if ( a4 )
    a2 = *v11;
  if ( a2 > *v11 )
  {
    v12 = -2147483637;
    goto LABEL_23;
  }
  if ( *v11 >= 0x7FFFFFFF )
  {
    v12 = -2147024882;
    goto LABEL_11;
  }
  XWinRT::detail::ReentrancyGuard<0>::ReentrancyGuard<0>(&v18, *(unsigned __int8 *)(a1 + 101), a1 + 104);
  v12 = 0;
  v13 = *(_DWORD *)(a1 + 52);
  v14 = (_DWORD *)(a1 + 48);
  if ( *v11 + 1 <= v13 )
  {
LABEL_25:
    if ( a2 >= *v11
      || !memmove_s(
            (void *const)(*(_QWORD *)(a1 + 64) + 8LL * (a2 + 1)),
            8LL * (*(_DWORD *)(a1 + 52) - a2 - 1),
            (const void *const)(*(_QWORD *)(a1 + 64) + 8LL * a2),
            8LL * (*v11 - a2)) )
    {
      *(_QWORD *)(*(_QWORD *)(a1 + 64) + 8LL * a2) = a3;
      ++*v14;
      ++*(_DWORD *)(a1 + 96);
      goto LABEL_11;
    }
    v12 = -2147418113;
LABEL_23:
    RoOriginateError((unsigned int)v12, 0LL);
    goto LABEL_11;
  }
  v15 = 1;
  if ( v13 + 1 <= (v13 >> 1) + v13 )
    v15 = v13 >> 1;
  v12 = Windows::Foundation::Collections::Internal::Vector<EventRegistrationToken,Windows::Media::Devices::Internal::EventRegistrationTokenEqual,XWinRT::PodLifetimeTraits,Windows::Foundation::Collections::Internal::DefaultVectorOptions<EventRegistrationToken>>::ResizeStorage(
          a1,
          v13 + v15);
  if ( v12 >= 0 )
  {
    v14 = (_DWORD *)(a1 + 48);
    goto LABEL_25;
  }
LABEL_11:
  if ( v4 )
  {
    v16 = v4 + 1;
    if ( LODWORD(v4->Ptr) == 1 )
      LODWORD(v16->Ptr) += 0x10000000;
    else
      ReleaseSRWLockExclusive(v16);
  }
  if ( v12 >= 0 )
    return (unsigned int)Windows::Foundation::Collections::Internal::VectorOptions<EventRegistrationToken,0,0,0>::RaiseEvent(
                           v18,
                           *(unsigned __int8 *)(a1 + 100),
                           a1,
                           1LL,
                           a2);
  return (unsigned int)v12;
}
