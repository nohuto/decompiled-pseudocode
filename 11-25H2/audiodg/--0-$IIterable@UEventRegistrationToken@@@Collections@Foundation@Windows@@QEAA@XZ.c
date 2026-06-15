/*
 * XREFs of ??0?$IIterable@UEventRegistrationToken@@@Collections@Foundation@Windows@@QEAA@XZ @ 0x14001BE5C
 * Callers:
 *     ??0?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00U?$IIterable@UEventRegistrationToken@@@Collections@Foundation@Windows@@U?$CloakedIid@UIVersionedVector@Internal@Collections@Foundation@Windows@@@23@@Details@WRL@Microsoft@@QEAA@XZ @ 0x14001BE38 (--0-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00U-$IIterable@UEventRegistration.c)
 *     ??0?$ImplementsHelper@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00U?$IIterable@UEventRegistrationToken@@@Collections@Foundation@Windows@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x140078928 (--0-$ImplementsHelper@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00U-$IIterable@UEventRegistration.c)
 * Callees:
 *     ??0?$IIterable_impl@UEventRegistrationToken@@@Collections@Foundation@Windows@@QEAA@XZ @ 0x14001BE80 (--0-$IIterable_impl@UEventRegistrationToken@@@Collections@Foundation@Windows@@QEAA@XZ.c)
 */

_QWORD *Windows::Foundation::Collections::IIterable<EventRegistrationToken>::IIterable<EventRegistrationToken>()
{
  _QWORD *v0; // rcx
  _QWORD *result; // rax

  Windows::Foundation::Collections::IIterable_impl<EventRegistrationToken>::IIterable_impl<EventRegistrationToken>();
  result = v0;
  *v0 = &Windows::Foundation::Collections::IIterable<EventRegistrationToken>::`vftable';
  return result;
}
