/*
 * XREFs of ??0?$IVector@UEventRegistrationToken@@@Collections@Foundation@Windows@@QEAA@XZ @ 0x14001BDDC
 * Callers:
 *     ??0?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$0A@U?$IVector@UEventRegistrationToken@@@Collections@Foundation@Windows@@UIWeakReferenceSource@@U?$IIterable@UEventRegistrationToken@@@567@U?$CloakedIid@UIVersionedVector@Internal@Collections@Foundation@Windows@@@23@@Details@WRL@Microsoft@@QEAA@XZ @ 0x14001BDB8 (--0-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$0A@U-$IVector@UEventRegistrationT.c)
 * Callees:
 *     ??0?$IVector_impl@UEventRegistrationToken@@$0A@@Collections@Foundation@Windows@@QEAA@XZ @ 0x14001BE00 (--0-$IVector_impl@UEventRegistrationToken@@$0A@@Collections@Foundation@Windows@@QEAA@XZ.c)
 */

_QWORD *Windows::Foundation::Collections::IVector<EventRegistrationToken>::IVector<EventRegistrationToken>()
{
  _QWORD *v0; // rcx
  _QWORD *result; // rax

  Windows::Foundation::Collections::IVector_impl<EventRegistrationToken,0>::IVector_impl<EventRegistrationToken,0>();
  result = v0;
  *v0 = &Windows::Foundation::Collections::IVector_impl<EventRegistrationToken,0>::`vftable';
  return result;
}
