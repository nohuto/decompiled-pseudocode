/*
 * XREFs of PiUEventProcessRegistry @ 0x140C25CE0
 * Callers:
 *     IopInitializePlugPlayServices @ 0x140C210BC (IopInitializePlugPlayServices.c)
 * Callees:
 *     PnpGetRegistryDword @ 0x1404AFC44 (PnpGetRegistryDword.c)
 */

__int64 __fastcall PiUEventProcessRegistry(void *a1)
{
  __int16 v2; // ax
  __int16 v3; // ax
  __int64 result; // rax
  unsigned int v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = 0;
  if ( (int)PnpGetRegistryDword(a1, (__int64)L"UEventSyncTimeout", &v5) < 0 )
  {
    v2 = 30000;
  }
  else
  {
    v2 = v5;
    if ( v5 < 0x3E8 )
    {
      PiUEventSyncTimeoutMs = 1000;
      goto LABEL_8;
    }
    if ( v5 > 0xEA60 )
    {
      PiUEventSyncTimeoutMs = -5536;
      goto LABEL_8;
    }
  }
  PiUEventSyncTimeoutMs = v2;
LABEL_8:
  if ( (int)PnpGetRegistryDword(a1, (__int64)L"UEventSyncNotificationLong", &v5) < 0 )
  {
    v3 = 10000;
  }
  else
  {
    v3 = v5;
    if ( v5 < 0xFA )
    {
      PiUEventSyncLongRunningMs = 250;
      goto LABEL_15;
    }
    if ( v5 > 0xEA60 )
    {
      PiUEventSyncLongRunningMs = -5536;
      goto LABEL_15;
    }
  }
  PiUEventSyncLongRunningMs = v3;
LABEL_15:
  if ( (int)PnpGetRegistryDword(a1, (__int64)L"UEventRegistrationPendingResponseLong", &v5) < 0 )
  {
    PiUEventPendingQueueTimeMs = 5000;
  }
  else if ( v5 >= 0xFA )
  {
    if ( v5 <= 0xEA60 )
      PiUEventPendingQueueTimeMs = v5;
    else
      PiUEventPendingQueueTimeMs = -5536;
  }
  else
  {
    PiUEventPendingQueueTimeMs = 250;
  }
  result = PnpGetRegistryDword(a1, (__int64)L"UEventRegistrationSyncResponseLong", &v5);
  if ( (int)result < 0 )
  {
    PiUEventSyncEventTimeMs = 5000;
  }
  else
  {
    result = v5;
    if ( v5 >= 0xFA )
    {
      if ( v5 <= 0xEA60 )
        PiUEventSyncEventTimeMs = v5;
      else
        PiUEventSyncEventTimeMs = -5536;
    }
    else
    {
      PiUEventSyncEventTimeMs = 250;
    }
  }
  return result;
}
