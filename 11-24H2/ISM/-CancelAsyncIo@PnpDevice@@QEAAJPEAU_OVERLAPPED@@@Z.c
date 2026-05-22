/*
 * XREFs of ?CancelAsyncIo@PnpDevice@@QEAAJPEAU_OVERLAPPED@@@Z @ 0x1800E5310
 * Callers:
 *     ?GetAsyncIoResult@PnpDevice@@QEAAJKPEAU_OVERLAPPED@@PEA_K@Z @ 0x1800E540C (-GetAsyncIoResult@PnpDevice@@QEAAJKPEAU_OVERLAPPED@@PEA_K@Z.c)
 * Callees:
 *     ?load@?$_Atomic_storage@_K$07@std@@QEBA_KW4memory_order@2@@Z @ 0x18008D5A4 (-load@-$_Atomic_storage@_K$07@std@@QEBA_KW4memory_order@2@@Z.c)
 */

signed int __fastcall PnpDevice::CancelAsyncIo(PnpDevice *this, struct _OVERLAPPED *a2)
{
  void *v2; // rax
  LPOVERLAPPED v3; // rdx
  signed int result; // eax

  v2 = (void *)std::_Atomic_storage<unsigned __int64,8>::load((__int64)this + 40);
  if ( CancelIoEx(v2, v3) )
    return 0;
  result = GetLastError();
  if ( result == 1168 || !result )
    return 0;
  if ( result > 0 )
    return (unsigned __int16)result | 0x80070000;
  return result;
}
