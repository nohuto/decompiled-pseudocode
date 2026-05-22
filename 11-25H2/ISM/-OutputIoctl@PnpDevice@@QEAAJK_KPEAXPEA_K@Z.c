/*
 * XREFs of ?OutputIoctl@PnpDevice@@QEAAJK_KPEAXPEA_K@Z @ 0x1800E4554
 * Callers:
 *     ?Initialize@ConsumerControlNexusDevice@@AEAAJPEAVPnpDevice@@@Z @ 0x1800E5B7C (-Initialize@ConsumerControlNexusDevice@@AEAAJPEAVPnpDevice@@@Z.c)
 * Callees:
 *     ?load@?$_Atomic_storage@_K$07@std@@QEBA_KW4memory_order@2@@Z @ 0x18008CDE4 (-load@-$_Atomic_storage@_K$07@std@@QEBA_KW4memory_order@2@@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18008CF24 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?GetAsyncIoResult@PnpDevice@@QEAAJKPEAU_OVERLAPPED@@PEA_K@Z @ 0x1800E3E2C (-GetAsyncIoResult@PnpDevice@@QEAAJKPEAU_OVERLAPPED@@PEA_K@Z.c)
 */

__int64 __fastcall PnpDevice::OutputIoctl(PnpDevice *this, __int64 a2, __int64 a3, void *a4, unsigned __int64 *a5)
{
  const char *v7; // r9
  int LastError; // eax
  void *v9; // rax
  DWORD v10; // edx
  bool v11; // sf
  unsigned int v12; // ebx
  struct _OVERLAPPED Overlapped; // [rsp+40h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  *a5 = 0LL;
  Overlapped.hEvent = CreateEventW(0LL, 1, 0, 0LL);
  if ( Overlapped.hEvent )
  {
    memset(&Overlapped, 0, 24);
    v9 = (void *)std::_Atomic_storage<unsigned __int64,8>::load((__int64)this + 40);
    if ( DeviceIoControl(v9, 0xB01A0u, 0LL, 0, a4, 4u, 0LL, &Overlapped) )
      goto LABEL_15;
    LastError = GetLastError();
    if ( !LastError || LastError == 997 )
      goto LABEL_15;
    v11 = LastError < 0;
    if ( LastError > 0 )
    {
      LastError = (unsigned __int16)LastError | 0x80070000;
      v11 = LastError < 0;
    }
    if ( !v11 )
    {
LABEL_15:
      LastError = PnpDevice::GetAsyncIoResult(this, v10, &Overlapped, a5);
      if ( LastError >= 0 )
      {
        v12 = 0;
        goto LABEL_12;
      }
    }
  }
  else
  {
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0x1D7,
                  (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\pnpdevice.cpp",
                  v7);
  }
  v12 = LastError;
LABEL_12:
  CloseHandle(Overlapped.hEvent);
  return v12;
}
