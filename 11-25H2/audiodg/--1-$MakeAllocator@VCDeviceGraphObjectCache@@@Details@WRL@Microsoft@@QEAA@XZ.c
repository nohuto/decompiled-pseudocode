/*
 * XREFs of ??1?$MakeAllocator@VCDeviceGraphObjectCache@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x14004C118
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_CDeviceGraphObjectCache_CDeviceGraphObjectCache___int64_&_float_&_unsigned_int_&__tlgProvider_t_const___&__::_1_::dtor$0 @ 0x140093204 (_Microsoft--WRL--Details--MakeAndInitialize_CDeviceGraphObjectCache_CDeviceGraphObjectCache___in.c)
 * Callees:
 *     <none>
 */

void __fastcall Microsoft::WRL::Details::MakeAllocator<CDeviceGraphObjectCache>::~MakeAllocator<CDeviceGraphObjectCache>(
        void **a1)
{
  void *v1; // rcx

  v1 = *a1;
  if ( v1 )
    operator delete(v1);
}
