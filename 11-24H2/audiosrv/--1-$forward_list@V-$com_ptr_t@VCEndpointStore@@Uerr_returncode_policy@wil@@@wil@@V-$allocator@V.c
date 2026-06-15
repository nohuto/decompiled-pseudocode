/*
 * XREFs of ??1?$forward_list@V?$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAA@XZ @ 0x180029970
 * Callers:
 *     _CEndpointStoreCache::ForEachEndpoint_::_1_::dtor$0 @ 0x18016A3B9 (_CEndpointStoreCache--ForEachEndpoint_--_1_--dtor$0.c)
 *     _CEndpointStoreCache::FindFirstEndpoint_::_1_::dtor$0 @ 0x18017028B (_CEndpointStoreCache--FindFirstEndpoint_--_1_--dtor$0.c)
 * Callees:
 *     ??1?$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180029ADC (--1-$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800A426C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall std::forward_list<wil::com_ptr_t<CEndpointStore,wil::err_returncode_policy>>::~forward_list<wil::com_ptr_t<CEndpointStore,wil::err_returncode_policy>>(
        _QWORD **a1)
{
  _QWORD *v1; // rdi
  _QWORD *v2; // rbx

  v1 = *a1;
  *a1 = 0LL;
  if ( v1 )
  {
    do
    {
      v2 = (_QWORD *)*v1;
      wil::com_ptr_t<CEndpointStore,wil::err_returncode_policy>::~com_ptr_t<CEndpointStore,wil::err_returncode_policy>(v1 + 1);
      operator delete(v1, (const struct std::nothrow_t *)0x10);
      v1 = v2;
    }
    while ( v2 );
  }
}
