/*
 * XREFs of ?SendIOCTLMessage@MobileButtonDeviceCollection@@AEAAXW4_Button@@_N@Z @ 0x1800DAFB8
 * Callers:
 *     ?OnButtonEnabledOnIdleChanged@MobileButtonDeviceCollection@@QEAAXKW4_Button@@_N@Z @ 0x1800DA56C (-OnButtonEnabledOnIdleChanged@MobileButtonDeviceCollection@@QEAAXKW4_Button@@_N@Z.c)
 * Callees:
 *     ??1?$unique_storage@U?$handle_invalid_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAA@XZ @ 0x180093428 (--1-$unique_storage@U-$handle_invalid_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@w.c)
 *     ??4?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x18009AC50 (--4-$unique_any_t@V-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009D758 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?ButtonToGPIOButtonMapping@MobileButtonDeviceCollection@@AEAAJW4_Button@@PEAW4GPIOBUTTONS_BUTTON_TYPE@@@Z @ 0x1800D9FE0 (-ButtonToGPIOButtonMapping@MobileButtonDeviceCollection@@AEAAJW4_Button@@PEAW4GPIOBUTTONS_BUTTON.c)
 *     ?GetDevicePath@MobileButtonDeviceCollection@@AEAAPEAGXZ @ 0x1800DA278 (-GetDevicePath@MobileButtonDeviceCollection@@AEAAPEAGXZ.c)
 */

void __fastcall MobileButtonDeviceCollection::SendIOCTLMessage(__int64 a1, int a2, char a3)
{
  MobileButtonDeviceCollection *v5; // rcx
  const WCHAR *DevicePath; // rax
  WCHAR *v7; // rdi
  HANDLE FileW; // rsi
  const struct std::nothrow_t *v9; // rdx
  void *v10; // rcx
  __int64 InBuffer; // [rsp+40h] [rbp-18h] BYREF
  void *v12[2]; // [rsp+48h] [rbp-10h] BYREF
  int v13; // [rsp+78h] [rbp+20h] BYREF

  InBuffer = 0LL;
  v13 = 0;
  if ( (int)MobileButtonDeviceCollection::ButtonToGPIOButtonMapping(a1, a2, &v13) >= 0 )
  {
    if ( ((*(_QWORD *)(a1 + 2888) + 1LL) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
    {
LABEL_6:
      v10 = *(void **)(a1 + 2888);
      LODWORD(InBuffer) = v13;
      BYTE4(InBuffer) = a3;
      DeviceIoControl(v10, 0xB02A8u, &InBuffer, 8u, 0LL, 0, 0LL, 0LL);
      return;
    }
    DevicePath = MobileButtonDeviceCollection::GetDevicePath(v5);
    v7 = (WCHAR *)DevicePath;
    if ( DevicePath )
    {
      FileW = CreateFileW(DevicePath, 0xC0000000, 3u, 0LL, 3u, 0, 0LL);
      operator delete(v7, v9);
      if ( FileW != (HANDLE)-1LL )
      {
        v12[0] = FileW;
        wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>::operator=(
          (void **)(a1 + 2888),
          v12);
        wil::details::unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(v12);
        goto LABEL_6;
      }
    }
  }
}
