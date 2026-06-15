/*
 * XREFs of ??0?$IIterator@UEventRegistrationToken@@@Collections@Foundation@Windows@@QEAA@XZ @ 0x1400788EC
 * Callers:
 *     ??0?$ImplementsHelper@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$0A@U?$IIterator@UEventRegistrationToken@@@Collections@Foundation@Windows@@UIWeakReferenceSource@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x140078960 (--0-$ImplementsHelper@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$0A@U-$IIterator@UEventRegistratio.c)
 *     ??0?$ImplementsHelper@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$0A@U?$IVectorView@UEventRegistrationToken@@@Collections@Foundation@Windows@@UIWeakReferenceSource@@U?$IIterable@UEventRegistrationToken@@@567@@Details@WRL@Microsoft@@QEAA@XZ @ 0x140078978 (--0-$ImplementsHelper@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$0A@U-$IVectorView@UEventRegistrat.c)
 * Callees:
 *     ??0?$IVectorView_impl@UEventRegistrationToken@@$0A@@Collections@Foundation@Windows@@QEAA@XZ @ 0x140078910 (--0-$IVectorView_impl@UEventRegistrationToken@@$0A@@Collections@Foundation@Windows@@QEAA@XZ.c)
 */

_QWORD *Windows::Foundation::Collections::IIterator<EventRegistrationToken>::IIterator<EventRegistrationToken>()
{
  _QWORD *v0; // rcx
  _QWORD *result; // rax

  Windows::Foundation::Collections::IVectorView_impl<EventRegistrationToken,0>::IVectorView_impl<EventRegistrationToken,0>();
  result = v0;
  *v0 = &Windows::Foundation::Collections::IVectorView_impl<EventRegistrationToken,0>::`vftable';
  return result;
}
