/*
 * XREFs of ??_G?$SimpleVectorIterator@UEventRegistrationToken@@V?$Vector@UEventRegistrationToken@@UEventRegistrationTokenEqual@Internal@Devices@Media@Windows@@UPodLifetimeTraits@XWinRT@@U?$DefaultVectorOptions@UEventRegistrationToken@@@3Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@UPodLifetimeTraits@XWinRT@@UIntVersionTag@8@$0A@@Internal@Collections@Foundation@Windows@@UEAAPEAXI@Z @ 0x140077450
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1400590C4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1?$SimpleVectorIterator@UEventRegistrationToken@@V?$Vector@UEventRegistrationToken@@UEventRegistrationTokenEqual@Internal@Devices@Media@Windows@@UPodLifetimeTraits@XWinRT@@U?$DefaultVectorOptions@UEventRegistrationToken@@@3Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@UPodLifetimeTraits@XWinRT@@UIntVersionTag@8@$0A@@Internal@Collections@Foundation@Windows@@UEAA@XZ @ 0x140076D34 (--1-$SimpleVectorIterator@UEventRegistrationToken@@V-$Vector@UEventRegistrationToken@@UEventRegi.c)
 */

void *__fastcall Windows::Foundation::Collections::Internal::SimpleVectorIterator<EventRegistrationToken,Windows::Foundation::Collections::Internal::Vector<EventRegistrationToken,Windows::Media::Devices::Internal::EventRegistrationTokenEqual,XWinRT::PodLifetimeTraits,Windows::Foundation::Collections::Internal::DefaultVectorOptions<EventRegistrationToken>>,XWinRT::PodLifetimeTraits,XWinRT::IntVersionTag,0>::`scalar deleting destructor'(
        void *Block,
        char a2)
{
  Windows::Foundation::Collections::Internal::SimpleVectorIterator<EventRegistrationToken,Windows::Foundation::Collections::Internal::Vector<EventRegistrationToken,Windows::Media::Devices::Internal::EventRegistrationTokenEqual,XWinRT::PodLifetimeTraits,Windows::Foundation::Collections::Internal::DefaultVectorOptions<EventRegistrationToken>>,XWinRT::PodLifetimeTraits,XWinRT::IntVersionTag,0>::~SimpleVectorIterator<EventRegistrationToken,Windows::Foundation::Collections::Internal::Vector<EventRegistrationToken,Windows::Media::Devices::Internal::EventRegistrationTokenEqual,XWinRT::PodLifetimeTraits,Windows::Foundation::Collections::Internal::DefaultVectorOptions<EventRegistrationToken>>,XWinRT::PodLifetimeTraits,XWinRT::IntVersionTag,0>((__int64)Block);
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}
