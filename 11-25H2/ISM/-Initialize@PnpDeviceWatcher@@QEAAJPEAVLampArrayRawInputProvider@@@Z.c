/*
 * XREFs of ?Initialize@PnpDeviceWatcher@@QEAAJPEAVLampArrayRawInputProvider@@@Z @ 0x18008CCFC
 * Callers:
 *     ?WorkerThreadProc@LampArrayRawInputProvider@@AEAAJXZ @ 0x180060430 (-WorkerThreadProc@LampArrayRawInputProvider@@AEAAJXZ.c)
 * Callees:
 *     ?EnumerateDevices@Details@PnpApiWrapper@@YAJP6AKAEBU_GUID@@PEBGPEAGI@ZP6AK01AEAI@ZW4DeviceEventId@2@0PEAUHSTRING__@@P6AX67PEAX@Z8@Z @ 0x180037654 (-EnumerateDevices@Details@PnpApiWrapper@@YAJP6AKAEBU_GUID@@PEBGPEAGI@ZP6AK01AEAI@ZW4DeviceEventI.c)
 *     ?load@?$_Atomic_storage@_K$07@std@@QEBA_KW4memory_order@2@@Z @ 0x18008CDE4 (-load@-$_Atomic_storage@_K$07@std@@QEBA_KW4memory_order@2@@Z.c)
 *     ?Shutdown@PnpDeviceWatcher@@QEAAXXZ @ 0x18008CDF0 (-Shutdown@PnpDeviceWatcher@@QEAAXXZ.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18008CF24 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?RegisterDeviceInstanceNotification@PnpApiWrapper@@YAJPEAUHSTRING__@@P6AXW4DeviceEventId@1@0PEAX@Z2AEAPEAX@Z @ 0x1800E5590 (-RegisterDeviceInstanceNotification@PnpApiWrapper@@YAJPEAUHSTRING__@@P6AXW4DeviceEventId@1@0PEAX.c)
 *     ?RegisterDeviceInterfaceNotification@PnpApiWrapper@@YAJAEBU_GUID@@P6AXW4DeviceEventId@1@PEAUHSTRING__@@PEAX@Z3AEAPEAX@Z @ 0x1800E5680 (-RegisterDeviceInterfaceNotification@PnpApiWrapper@@YAJAEBU_GUID@@P6AXW4DeviceEventId@1@PEAUHSTR.c)
 */

__int64 __fastcall PnpDeviceWatcher::Initialize(PnpDeviceWatcher *this, struct LampArrayRawInputProvider *a2)
{
  DWORD CurrentThreadId; // eax
  const struct _GUID *v4; // rdx
  PnpApiWrapper *v5; // rcx
  const char *v6; // r9
  int LastError; // eax
  HSTRING v8; // rdx
  PnpApiWrapper *v9; // rcx
  unsigned int v10; // edi
  void **v12; // [rsp+20h] [rbp-28h]
  void **v13; // [rsp+20h] [rbp-28h]
  __int64 v14; // [rsp+20h] [rbp-28h]
  __int64 v15; // [rsp+20h] [rbp-28h]
  __int64 v16; // [rsp+28h] [rbp-20h]
  __int64 v17; // [rsp+28h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  *(_QWORD *)this = a2;
  CurrentThreadId = GetCurrentThreadId();
  _InterlockedExchange64((volatile __int64 *)this + 3, (__int64)OpenThread(0x1FFFFFu, 0, CurrentThreadId));
  if ( !std::_Atomic_storage<unsigned __int64,8>::load((char *)this + 24) )
  {
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0x26,
                  (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\pnpdevicewatcher.cpp",
                  v6);
LABEL_5:
    v10 = LastError;
    PnpDeviceWatcher::Shutdown(this);
    return v10;
  }
  LastError = PnpApiWrapper::RegisterDeviceInterfaceNotification(
                v5,
                v4,
                (void (__high *)(enum PnpApiWrapper::DeviceEventId, HSTRING, void *))this,
                (char *)this + 16,
                v12);
  if ( LastError < 0 )
    goto LABEL_5;
  LastError = PnpApiWrapper::RegisterDeviceInstanceNotification(
                v9,
                v8,
                (void (__high *)(enum PnpApiWrapper::DeviceEventId, HSTRING, void *))this,
                (char *)this + 8,
                v13);
  if ( LastError < 0 )
    goto LABEL_5;
  PnpApiWrapper::Details::EnumerateDevices(
    (__int64 (__fastcall *)(__int64, __int64, void *, _QWORD))PnpApiWrapper::Adapters::GetDeviceInterfaceList,
    (const wchar_t *)PnpApiWrapper::Adapters::GetDeviceInterfaceListSize,
    3u,
    (__int64)&xmmword_1801FB4B0,
    v14,
    v16,
    (__int64)this);
  PnpApiWrapper::Details::EnumerateDevices(
    (__int64 (__fastcall *)(__int64, __int64, void *, _QWORD))PnpApiWrapper::Adapters::GetDeviceInstanceList,
    (const wchar_t *)PnpApiWrapper::Adapters::GetDeviceInstanceListSize,
    1u,
    (__int64)&GUID_NULL,
    v15,
    v17,
    (__int64)this);
  return 0LL;
}
