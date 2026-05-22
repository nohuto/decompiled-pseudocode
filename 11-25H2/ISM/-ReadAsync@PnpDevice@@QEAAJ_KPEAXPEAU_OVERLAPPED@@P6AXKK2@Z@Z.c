/*
 * XREFs of ?ReadAsync@PnpDevice@@QEAAJ_KPEAXPEAU_OVERLAPPED@@P6AXKK2@Z@Z @ 0x1800E4670
 * Callers:
 *     ?QueueInputBuffers@ConsumerControlNexusDevice@@AEAAJXZ @ 0x1800E672C (-QueueInputBuffers@ConsumerControlNexusDevice@@AEAAJXZ.c)
 * Callees:
 *     ?load@?$_Atomic_storage@_K$07@std@@QEBA_KW4memory_order@2@@Z @ 0x18008CDE4 (-load@-$_Atomic_storage@_K$07@std@@QEBA_KW4memory_order@2@@Z.c)
 */

signed int __fastcall PnpDevice::ReadAsync(PnpDevice *this, __int64 a2, void *a3, struct _OVERLAPPED *a4)
{
  void *v4; // rax
  DWORD v5; // edx
  LPOVERLAPPED v6; // r9
  LPVOID v7; // r10
  signed int result; // eax

  *(_OWORD *)&a4->Internal = 0LL;
  a4->Pointer = 0LL;
  v4 = (void *)std::_Atomic_storage<unsigned __int64,8>::load((__int64)this + 40);
  if ( ReadFileEx(v4, v7, v5, v6, ConsumerControlNexusDevice::HandleReadCompletion) )
    return 0;
  result = GetLastError();
  if ( !result || result == 997 )
    return 0;
  if ( result > 0 )
    return (unsigned __int16)result | 0x80070000;
  return result;
}
