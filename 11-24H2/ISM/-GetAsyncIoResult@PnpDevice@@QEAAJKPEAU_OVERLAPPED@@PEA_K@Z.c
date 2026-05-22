/*
 * XREFs of ?GetAsyncIoResult@PnpDevice@@QEAAJKPEAU_OVERLAPPED@@PEA_K@Z @ 0x1800E540C
 * Callers:
 *     ?OutputIoctl@PnpDevice@@QEAAJK_KPEAXPEA_K@Z @ 0x1800E59C4 (-OutputIoctl@PnpDevice@@QEAAJK_KPEAXPEA_K@Z.c)
 * Callees:
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x180085630 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     ?load@?$_Atomic_storage@_K$07@std@@QEBA_KW4memory_order@2@@Z @ 0x18008D5A4 (-load@-$_Atomic_storage@_K$07@std@@QEBA_KW4memory_order@2@@Z.c)
 *     ?CancelAsyncIo@PnpDevice@@QEAAJPEAU_OVERLAPPED@@@Z @ 0x1800E5310 (-CancelAsyncIo@PnpDevice@@QEAAJPEAU_OVERLAPPED@@@Z.c)
 */

signed int __fastcall PnpDevice::GetAsyncIoResult(
        PnpDevice *this,
        DWORD a2,
        struct _OVERLAPPED *a3,
        unsigned __int64 *a4)
{
  void *v7; // rax
  signed int LastError; // ebx
  signed int result; // eax
  DWORD v10; // eax
  DWORD v11; // ebx
  __int64 v12; // rdx
  void *v13; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  DWORD NumberOfBytesTransferred; // [rsp+48h] [rbp+10h] BYREF

  NumberOfBytesTransferred = a2;
  if ( a4 )
    *a4 = 0LL;
  NumberOfBytesTransferred = 0;
  v7 = (void *)std::_Atomic_storage<unsigned __int64,8>::load((__int64)this + 40);
  if ( GetOverlappedResult(v7, a3, &NumberOfBytesTransferred, 0) )
    goto LABEL_18;
  LastError = GetLastError();
  if ( LastError != 996 )
  {
    PnpDevice::CancelAsyncIo(this, a3);
    if ( LastError )
    {
      if ( LastError > 0 )
        return (unsigned __int16)LastError | 0x80070000;
      return LastError;
    }
  }
  v10 = WaitForSingleObject(a3->hEvent, 0xFFFFFFFF);
  v11 = v10;
  if ( v10 )
  {
    if ( v10 == 1460 )
    {
      v12 = 155LL;
    }
    else
    {
      PnpDevice::CancelAsyncIo(this, a3);
      v12 = 159LL;
    }
    return wil::details::in1diag3::Return_Win32(
             retaddr,
             (void *)v12,
             (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\pnpdevice.cpp",
             (const char *)v11);
  }
  v13 = (void *)std::_Atomic_storage<unsigned __int64,8>::load((__int64)this + 40);
  if ( GetOverlappedResult(v13, a3, &NumberOfBytesTransferred, 0)
    || (PnpDevice::CancelAsyncIo(this, a3), (result = GetLastError()) == 0) )
  {
LABEL_18:
    if ( a4 )
      *a4 = NumberOfBytesTransferred;
    return 0;
  }
  else if ( result > 0 )
  {
    return (unsigned __int16)result | 0x80070000;
  }
  return result;
}
