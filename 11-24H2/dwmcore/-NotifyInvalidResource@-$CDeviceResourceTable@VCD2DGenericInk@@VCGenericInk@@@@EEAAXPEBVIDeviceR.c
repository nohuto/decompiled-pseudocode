/*
 * XREFs of ?NotifyInvalidResource@?$CDeviceResourceTable@VCD2DGenericInk@@VCGenericInk@@@@EEAAXPEBVIDeviceResource@@@Z @ 0x180277BB0
 * Callers:
 *     <none>
 * Callees:
 *     ?RemoveResourceNotifier@?$CDeviceResourceT@V?$CMILCOMBaseT@VIDeviceResource@@V1@VCMilObjectDeleter@@@@@@UEAAXPEBVIDeviceResourceNotify@@@Z @ 0x1801FFD40 (-RemoveResourceNotifier@-$CDeviceResourceT@V-$CMILCOMBaseT@VIDeviceResource@@V1@VCMilObjectDelet.c)
 *     ?clear_region@?$vector_facade@V?$com_ptr_t@VCD2DGenericInk@@Uerr_returncode_policy@wil@@@wil@@V?$buffer_impl@V?$com_ptr_t@VCD2DGenericInk@@Uerr_returncode_policy@wil@@@wil@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x18021D89C (-clear_region@-$vector_facade@V-$com_ptr_t@VCD2DGenericInk@@Uerr_returncode_policy@wil@@@wil@@V-.c)
 */

__int64 __fastcall CDeviceResourceTable<CD2DGenericInk,CGenericInk>::NotifyInvalidResource(__int64 a1, __int64 a2)
{
  __int64 *v2; // rsi
  __int64 *v4; // rbx
  __int64 v6; // rbx
  __int64 result; // rax

  v2 = (__int64 *)(a1 + 16);
  v4 = *(__int64 **)(a1 + 16);
  while ( v4 != *(__int64 **)(a1 + 24) )
  {
    if ( *v4 == a2 )
    {
      CDeviceResourceT<CMILCOMBaseT<IDeviceResource,IDeviceResource,CMilObjectDeleter>>::RemoveResourceNotifier(*v4, a1);
      v6 = ((__int64)v4 - *v2) >> 3;
      detail::vector_facade<wil::com_ptr_t<CD2DGenericInk,wil::err_returncode_policy>,detail::buffer_impl<wil::com_ptr_t<CD2DGenericInk,wil::err_returncode_policy>,2,1,detail::liberal_expansion_policy>>::clear_region(
        v2,
        v6,
        1LL);
      result = *v2;
      v4 = (__int64 *)(*v2 + 8 * v6);
    }
    else
    {
      ++v4;
    }
  }
  return result;
}
