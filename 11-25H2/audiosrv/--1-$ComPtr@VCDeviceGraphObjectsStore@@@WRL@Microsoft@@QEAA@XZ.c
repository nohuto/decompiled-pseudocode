/*
 * XREFs of ??1?$ComPtr@VCDeviceGraphObjectsStore@@@WRL@Microsoft@@QEAA@XZ @ 0x1800A6C58
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_CDeviceGraphObjectsStore_IDeviceGraphObjectsStore_IMMDevice____::_1_::dtor$2 @ 0x180166E4E (_Microsoft--WRL--Details--MakeAndInitialize_CDeviceGraphObjectsStore_IDeviceGraphOb_ea_180166E4E.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIDeviceGraphObjectsStore@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18004FF10 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIDeviceGraphObje.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<CDeviceGraphObjectsStore>::~ComPtr<CDeviceGraphObjectsStore>(
        __int64 *a1,
        volatile int *a2)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IDeviceGraphObjectsStore>::Release(
             result,
             a2);
  }
  return result;
}
