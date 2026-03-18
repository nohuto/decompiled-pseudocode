/*
 * XREFs of ??0?$IKeyValuePair@U_GUID@@PEAUIInspectable@@@Collections@Foundation@Windows@@QEAA@XZ @ 0x1802CA084
 * Callers:
 *     ??0?$SimpleKeyValuePair@U_GUID@@PEAUIInspectable@@U?$DefaultLifetimeTraits@U_GUID@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@$00@Internal@Collections@Foundation@Windows@@QEAA@Upermission@01234@@Z @ 0x1802CA38C (--0-$SimpleKeyValuePair@U_GUID@@PEAUIInspectable@@U-$DefaultLifetimeTraits@U_GUID@@@Internal@Col.c)
 * Callees:
 *     ??0?$IKeyValuePair_impl@U_GUID@@PEAUIInspectable@@@Collections@Foundation@Windows@@QEAA@XZ @ 0x1802CA0A8 (--0-$IKeyValuePair_impl@U_GUID@@PEAUIInspectable@@@Collections@Foundation@Windows@@QEAA@XZ.c)
 */

_QWORD *Windows::Foundation::Collections::IKeyValuePair<_GUID,IInspectable *>::IKeyValuePair<_GUID,IInspectable *>()
{
  _QWORD *v0; // rcx
  _QWORD *result; // rax

  Windows::Foundation::Collections::IKeyValuePair_impl<_GUID,IInspectable *>::IKeyValuePair_impl<_GUID,IInspectable *>();
  result = v0;
  *v0 = &Windows::Foundation::Collections::IKeyValuePair_impl<_GUID,IInspectable *>::`vftable';
  return result;
}
