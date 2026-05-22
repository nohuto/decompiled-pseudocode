/*
 * XREFs of ?Shutdown@LampArrayRawInputProvider@@AEAAXXZ @ 0x1800E40D0
 * Callers:
 *     ?Release@LampArrayRawInputProvider@@UEAAKXZ @ 0x180035A20 (-Release@LampArrayRawInputProvider@@UEAAKXZ.c)
 *     ?EnsureLampArrayThreadState@LampArrayRawInputProvider@@AEAAJXZ @ 0x1800E3728 (-EnsureLampArrayThreadState@LampArrayRawInputProvider@@AEAAJXZ.c)
 *     ?OnSessionNotification@LampArrayRawInputProvider@@UEAAJII@Z @ 0x1800E3DC0 (-OnSessionNotification@LampArrayRawInputProvider@@UEAAJII@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000F254 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??1?$unique_storage@U?$handle_invalid_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAA@XZ @ 0x180093428 (--1-$unique_storage@U-$handle_invalid_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@w.c)
 *     ?Clear@?$NtList@ULampArrayDeviceListEntry@LampArrayRawInputProvider@@@@QEAAXXZ @ 0x180099154 (-Clear@-$NtList@ULampArrayDeviceListEntry@LampArrayRawInputProvider@@@@QEAAXXZ.c)
 */

void __fastcall LampArrayRawInputProvider::Shutdown(ULONG_PTR dwData)
{
  char *v2; // rbx
  unsigned int v3; // edx
  unsigned int v4; // edx
  void *v5; // [rsp+30h] [rbp+8h] BYREF

  v2 = (char *)_InterlockedExchange64((volatile __int64 *)(dwData + 176), 0LL);
  v5 = v2;
  if ( (unsigned __int64)(v2 - 1) <= 0xFFFFFFFFFFFFFFFDuLL
    && WaitForSingleObject(v2, 0) == 258
    && QueueUserAPC(LampArrayRawInputProvider::TerminateWorkerThreadApc, v2, dwData) )
  {
    WaitForSingleObject(v2, 0x9C4u);
  }
  wil::details::unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&v5);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)(dwData + 48));
  *(_BYTE *)(dwData + 184) = 0;
  *(_BYTE *)(dwData + 320) = 0;
  NtList<LampArrayRawInputProvider::LampArrayDeviceListEntry>::Clear(
    (ConsumerControlManager::ConsumerControlNexusDeviceListEntry *)(dwData + 72),
    v3);
  NtList<LampArrayRawInputProvider::LampArrayClientListEntry>::Clear(
    (LampArrayRawInputProvider::LampArrayClientListEntry *)(dwData + 96),
    v4);
}
