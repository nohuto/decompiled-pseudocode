/*
 * XREFs of ??1?$ComPtr@VCDeviceGraphObjectCache@@@WRL@Microsoft@@QEAA@XZ @ 0x14001C3A4
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_CDeviceGraphObjectCache_CDeviceGraphObjectCache___int64_&_float_&_unsigned_int_&__tlgProvider_t_const___&__::_1_::dtor$1 @ 0x140092C76 (_Microsoft--WRL--Details--MakeAndInitialize_CDeviceGraphObjectCache_CDeviceGraphObj_ea_140092C76.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIDeviceGraphObjectCache@@UIDeviceGraphObjectCacheInternal@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x14001C6A0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIDeviceGraphObjec.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<CDeviceGraphObjectCache>::~ComPtr<CDeviceGraphObjectCache>(__int64 *a1)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IDeviceGraphObjectCache,IDeviceGraphObjectCacheInternal>::Release(result);
  }
  return result;
}
