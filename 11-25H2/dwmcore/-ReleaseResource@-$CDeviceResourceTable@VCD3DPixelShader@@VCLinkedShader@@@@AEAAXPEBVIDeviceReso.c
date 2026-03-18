/*
 * XREFs of ?ReleaseResource@?$CDeviceResourceTable@VCD3DPixelShader@@VCLinkedShader@@@@AEAAXPEBVIDeviceResource@@@Z @ 0x1801C6D08
 * Callers:
 *     ?NotifyInvalidResource@?$CDeviceResourceTable@VCD3DPixelShader@@VCLinkedShader@@@@EEAAXPEBVIDeviceResource@@@Z @ 0x180239790 (-NotifyInvalidResource@-$CDeviceResourceTable@VCD3DPixelShader@@VCLinkedShader@@@@EEAAXPEBVIDevi.c)
 * Callees:
 *     ?RemoveResourceNotifier@CD3DResource@@UEAAXPEBVIDeviceResourceNotify@@@Z @ 0x1801C7820 (-RemoveResourceNotifier@CD3DResource@@UEAAXPEBVIDeviceResourceNotify@@@Z.c)
 *     ?clear_region@?$vector_facade@V?$com_ptr_t@VCD3DPixelShader@@Uerr_returncode_policy@wil@@@wil@@V?$buffer_impl@V?$com_ptr_t@VCD3DPixelShader@@Uerr_returncode_policy@wil@@@wil@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1801C810C (-clear_region@-$vector_facade@V-$com_ptr_t@VCD3DPixelShader@@Uerr_returncode_policy@wil@@@wil@@V.c)
 */

__int64 __fastcall CDeviceResourceTable<CD3DPixelShader,CLinkedShader>::ReleaseResource(
        struct IDeviceResourceNotify *a1,
        CD3DResource *a2)
{
  __int64 *v2; // rsi
  CD3DResource **v4; // rbx
  __int64 v6; // rbx
  __int64 result; // rax

  v2 = (__int64 *)((char *)a1 + 16);
  v4 = (CD3DResource **)*((_QWORD *)a1 + 2);
  while ( v4 != *((CD3DResource ***)a1 + 3) )
  {
    if ( *v4 == a2 )
    {
      CD3DResource::RemoveResourceNotifier(*v4, a1);
      v6 = ((__int64)v4 - *v2) >> 3;
      detail::vector_facade<wil::com_ptr_t<CD3DPixelShader,wil::err_returncode_policy>,detail::buffer_impl<wil::com_ptr_t<CD3DPixelShader,wil::err_returncode_policy>,2,1,detail::liberal_expansion_policy>>::clear_region(
        v2,
        v6,
        1LL);
      result = *v2;
      v4 = (CD3DResource **)(*v2 + 8 * v6);
    }
    else
    {
      ++v4;
    }
  }
  return result;
}
