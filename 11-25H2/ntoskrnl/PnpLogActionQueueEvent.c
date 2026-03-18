/*
 * XREFs of PnpLogActionQueueEvent @ 0x14046EC0C
 * Callers:
 *     PnpRequestDeviceAction @ 0x14046E128 (PnpRequestDeviceAction.c)
 *     PnpDeviceActionWorker @ 0x14046E540 (PnpDeviceActionWorker.c)
 * Callees:
 *     McTemplateK0zd_EtwWriteTransfer @ 0x140423368 (McTemplateK0zd_EtwWriteTransfer.c)
 *     McTemplateK0z_EtwWriteTransfer @ 0x1404D5600 (McTemplateK0z_EtwWriteTransfer.c)
 *     McTemplateK0zdq_EtwWriteTransfer @ 0x1405A3918 (McTemplateK0zdq_EtwWriteTransfer.c)
 */

__int64 __fastcall PnpLogActionQueueEvent(__int64 a1, int a2, __int64 a3, char a4)
{
  const wchar_t *v5; // r9
  __int64 v6; // r9
  const wchar_t *v7; // r9
  const wchar_t *v8; // r9
  __int64 result; // rax
  __int64 *v10; // rdx

  if ( a2 > 16 )
  {
    if ( a2 == 21 || a2 == 22 || (unsigned int)(a2 - 23) < 2 )
    {
      v8 = 0LL;
      if ( (_DWORD)a3 )
      {
        if ( (_DWORD)a3 == 1 )
        {
          if ( (byte_140EEFA69 & 0x40) != 0 )
          {
            if ( a1 )
              v8 = *(const wchar_t **)(a1 + 48);
            return McTemplateK0zd_EtwWriteTransfer(a1, (__int64)KMPnPEvt_ConfigureDevice_Start, a3, v8, a2);
          }
        }
        else if ( (_DWORD)a3 == 2 && (byte_140EEFA69 & 0x40) != 0 )
        {
          if ( a1 )
            v8 = *(const wchar_t **)(a1 + 48);
          return McTemplateK0zdq_EtwWriteTransfer(
                   a1,
                   (unsigned int)KMPnPEvt_ConfigureDevice_Stop,
                   2,
                   (_DWORD)v8,
                   a2,
                   a4);
        }
      }
      else if ( (byte_140EEFA69 & 0x40) != 0 )
      {
        if ( a1 )
          v8 = *(const wchar_t **)(a1 + 48);
        return McTemplateK0zd_EtwWriteTransfer(a1, (__int64)KMPnPEvt_ConfigureDevice_Queue, a3, v8, a2);
      }
    }
  }
  else
  {
    if ( a2 != 16 )
    {
      if ( a2 == 8 )
      {
        v6 = 0LL;
        if ( (_DWORD)a3 )
        {
          if ( (_DWORD)a3 == 1 )
          {
            if ( (byte_140EEFA6B & 0x10) == 0 )
              return result;
            if ( a1 )
              v6 = *(_QWORD *)(a1 + 48);
            v10 = KMPnPEvt_ReenumerateDeviceOnly_Start;
          }
          else
          {
            if ( (_DWORD)a3 != 2 || (byte_140EEFA6B & 0x10) == 0 )
              return result;
            if ( a1 )
              v6 = *(_QWORD *)(a1 + 48);
            v10 = KMPnPEvt_ReenumerateDeviceOnly_Stop;
          }
        }
        else
        {
          if ( (byte_140EEFA6B & 0x10) == 0 )
            return result;
          if ( a1 )
            v6 = *(_QWORD *)(a1 + 48);
          v10 = KMPnPEvt_ReenumerateDeviceOnly_Queue;
        }
        return McTemplateK0z_EtwWriteTransfer(a1, v10, a3, v6);
      }
      if ( a2 == 9 || a2 == 10 )
        goto LABEL_8;
      if ( a2 != 12 )
      {
        if ( a2 != 14 )
          return result;
LABEL_8:
        v5 = 0LL;
        if ( (_DWORD)a3 )
        {
          if ( (_DWORD)a3 == 1 )
          {
            if ( (byte_140EEFA6B & 0x10) != 0 )
            {
              if ( a1 )
                v5 = *(const wchar_t **)(a1 + 48);
              return McTemplateK0zd_EtwWriteTransfer(a1, (__int64)KMPnPEvt_ReenumerateDeviceTree_Start, a3, v5, a2);
            }
          }
          else if ( (_DWORD)a3 == 2 && (byte_140EEFA6B & 0x10) != 0 )
          {
            if ( a1 )
              v5 = *(const wchar_t **)(a1 + 48);
            return McTemplateK0zd_EtwWriteTransfer(a1, (__int64)KMPnPEvt_ReenumerateDeviceTree_Stop, a3, v5, a2);
          }
        }
        else if ( (byte_140EEFA6B & 0x10) != 0 )
        {
          if ( a1 )
            v5 = *(const wchar_t **)(a1 + 48);
          return McTemplateK0zd_EtwWriteTransfer(a1, (__int64)KMPnPEvt_ReenumerateDeviceTree_Queue, a3, v5, a2);
        }
        return result;
      }
    }
    v7 = 0LL;
    if ( (_DWORD)a3 )
    {
      if ( (_DWORD)a3 == 1 )
      {
        if ( (byte_140EEFA6B & 0x20) != 0 )
        {
          if ( a1 )
            v7 = *(const wchar_t **)(a1 + 48);
          return McTemplateK0zd_EtwWriteTransfer(a1, (__int64)KMPnPEvt_DeviceAction_Start, a3, v7, a2);
        }
      }
      else if ( (_DWORD)a3 == 2 && (byte_140EEFA6B & 0x20) != 0 )
      {
        if ( a1 )
          v7 = *(const wchar_t **)(a1 + 48);
        return McTemplateK0zdq_EtwWriteTransfer(a1, (unsigned int)KMPnPEvt_DeviceAction_Stop, 2, (_DWORD)v7, a2, a4);
      }
    }
    else if ( (byte_140EEFA6B & 0x20) != 0 )
    {
      if ( a1 )
        v7 = *(const wchar_t **)(a1 + 48);
      return McTemplateK0zd_EtwWriteTransfer(a1, (__int64)KMPnPEvt_DeviceAction_Queue, a3, v7, a2);
    }
  }
  return result;
}
