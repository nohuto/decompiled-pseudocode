/*
 * XREFs of ?ResizeStorage@?$Vector@UEventRegistrationToken@@UEventRegistrationTokenEqual@Internal@Devices@Media@Windows@@UPodLifetimeTraits@XWinRT@@U?$DefaultVectorOptions@UEventRegistrationToken@@@3Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@AEAAJI@Z @ 0x140041FF8
 * Callers:
 *     ?InsertAtInternal@?$Vector@UEventRegistrationToken@@UEventRegistrationTokenEqual@Internal@Devices@Media@Windows@@UPodLifetimeTraits@XWinRT@@U?$DefaultVectorOptions@UEventRegistrationToken@@@3Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@AEAAJIUEventRegistrationToken@@_N@Z @ 0x140041E48 (-InsertAtInternal@-$Vector@UEventRegistrationToken@@UEventRegistrationTokenEqual@Internal@Device.c)
 *     ?RemoveAtInternal@?$Vector@UEventRegistrationToken@@UEventRegistrationTokenEqual@Internal@Devices@Media@Windows@@UPodLifetimeTraits@XWinRT@@U?$DefaultVectorOptions@UEventRegistrationToken@@@3Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@AEAAJI_N@Z @ 0x14007EB60 (-RemoveAtInternal@-$Vector@UEventRegistrationToken@@UEventRegistrationTokenEqual@Internal@Device.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<EventRegistrationToken,Windows::Media::Devices::Internal::EventRegistrationTokenEqual,XWinRT::PodLifetimeTraits,Windows::Foundation::Collections::Internal::DefaultVectorOptions<EventRegistrationToken>>::ResizeStorage(
        __int64 a1,
        unsigned int a2)
{
  __int64 v4; // rcx
  unsigned int v5; // ebx
  size_t v6; // rdx
  void *v7; // rax

  v4 = *(_QWORD *)(a1 + 64);
  v5 = 0;
  v6 = 8LL * a2;
  if ( v4 )
    v7 = (void *)_o_realloc(v4, v6);
  else
    v7 = malloc(v6);
  if ( v7 )
  {
    *(_QWORD *)(a1 + 64) = v7;
    *(_DWORD *)(a1 + 52) = a2;
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v5;
}
