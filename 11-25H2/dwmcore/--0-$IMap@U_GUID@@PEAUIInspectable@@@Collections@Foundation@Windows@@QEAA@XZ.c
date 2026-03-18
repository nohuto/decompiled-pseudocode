/*
 * XREFs of ??0?$IMap@U_GUID@@PEAUIInspectable@@@Collections@Foundation@Windows@@QEAA@XZ @ 0x1802CA0C0
 * Callers:
 *     ??0?$RuntimeClass@U?$IMap@U_GUID@@PEAUIInspectable@@@Collections@Foundation@Windows@@U?$IIterable@PEAU?$IKeyValuePair@U_GUID@@PEAUIInspectable@@@Collections@Foundation@Windows@@@234@VFtmBase@WRL@Microsoft@@@WRL@Microsoft@@QEAA@XZ @ 0x1802CA280 (--0-$RuntimeClass@U-$IMap@U_GUID@@PEAUIInspectable@@@Collections@Foundation@Windows@@U-$IIterabl.c)
 * Callees:
 *     ??0?$IMap_impl@U_GUID@@PEAUIInspectable@@@Collections@Foundation@Windows@@QEAA@XZ @ 0x1802CA120 (--0-$IMap_impl@U_GUID@@PEAUIInspectable@@@Collections@Foundation@Windows@@QEAA@XZ.c)
 */

_QWORD *Windows::Foundation::Collections::IMap<_GUID,IInspectable *>::IMap<_GUID,IInspectable *>()
{
  _QWORD *v0; // rcx
  _QWORD *result; // rax

  Windows::Foundation::Collections::IMap_impl<_GUID,IInspectable *>::IMap_impl<_GUID,IInspectable *>();
  result = v0;
  *v0 = &Windows::Foundation::Collections::IMap<_GUID,IInspectable *>::`vftable';
  return result;
}
