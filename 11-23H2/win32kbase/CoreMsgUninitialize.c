/*
 * XREFs of CoreMsgUninitialize @ 0x1C00C115C
 * Callers:
 *     ?Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z @ 0x1C0134430 (-Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C0079EA8 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ?Uninitialize@ServerPorts@CoreMessagingK@@SAXXZ @ 0x1C00C1258 (-Uninitialize@ServerPorts@CoreMessagingK@@SAXXZ.c)
 *     __security_check_cookie @ 0x1C00CDBD0 (__security_check_cookie.c)
 */

NTSTATUS CoreMsgUninitialize()
{
  _QWORD *v0; // rcx
  _QWORD *v1; // rbx
  REGHANDLE v2; // rcx
  NTSTATUS result; // eax
  struct _EVENT_DATA_DESCRIPTOR v4; // [rsp+30h] [rbp-38h] BYREF

  if ( CoreMessagingK::EntryLock::s_Initialized )
  {
    if ( (unsigned int)dword_1C0288500 > 5 )
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_1C0288500,
        (unsigned __int8 *)dword_1C0261025,
        0LL,
        0LL,
        2u,
        &v4);
    v0 = CoreMessagingK::BufferCache::s_FreeList;
    CoreMessagingK::BufferCache::s_FreeList = 0LL;
    if ( v0 )
    {
      do
      {
        v1 = (_QWORD *)v0[1];
        ExFreePoolWithTag(v0, 0x43424D43u);
        v0 = v1;
      }
      while ( v1 );
    }
    CoreMessagingK::ServerPorts::Uninitialize();
    if ( CoreMessagingK::RegistrarClient::s_Port )
    {
      ZwClose(CoreMessagingK::RegistrarClient::s_Port);
      CoreMessagingK::RegistrarClient::s_Port = 0LL;
    }
    if ( Mutex )
    {
      ExFreePoolWithTag(Mutex, 0x4C454D43u);
      Mutex = 0LL;
    }
    CoreMessagingK::EntryLock::s_Initialized = 0;
    if ( (unsigned int)dword_1C0288500 > 5 )
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_1C0288500,
        (unsigned __int8 *)dword_1C0260EDA,
        0LL,
        0LL,
        2u,
        &v4);
    v2 = qword_1C0288520;
    qword_1C0288520 = 0LL;
    dword_1C0288500 = 0;
    return EtwUnregister(v2);
  }
  return result;
}
