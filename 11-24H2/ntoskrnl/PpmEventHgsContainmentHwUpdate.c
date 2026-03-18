/*
 * XREFs of PpmEventHgsContainmentHwUpdate @ 0x1404CDF38
 * Callers:
 *     PpmHeteroUpdateHgsConfiguration @ 0x140203248 (PpmHeteroUpdateHgsConfiguration.c)
 *     PpmEventTraceControlCallback @ 0x140ACA960 (PpmEventTraceControlCallback.c)
 * Callees:
 *     EtwWriteEx @ 0x140259680 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x1402A1BD0 (EtwEventEnabled.c)
 *     Feature_Servicing_WpsContainmentFixNoneZone__private_IsEnabledDeviceUsageNoInline @ 0x140457B34 (Feature_Servicing_WpsContainmentFixNoneZone__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 */

char __fastcall PpmEventHgsContainmentHwUpdate(__int64 a1, __int64 a2, char a3)
{
  const EVENT_DESCRIPTOR *v3; // rax
  const EVENT_DESCRIPTOR *v7; // rbx
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-38h] BYREF
  __int64 v10; // [rsp+50h] [rbp-28h]
  int v11; // [rsp+58h] [rbp-20h]
  int v12; // [rsp+5Ch] [rbp-1Ch]

  LOBYTE(v3) = PpmHeteroHgsContainmentState;
  if ( (PpmHeteroHgsContainmentState & 4) != 0 )
  {
    LODWORD(v3) = Feature_Servicing_WpsContainmentFixNoneZone__private_IsEnabledDeviceUsageNoInline();
    if ( (_DWORD)v3 )
    {
      v3 = &PPM_ETW_WPS_CONTAINMENT_HW_UPDATE;
      v7 = (const EVENT_DESCRIPTOR *)PPM_ETW_WPS_CONTAINMENT_HW_RUNDOWN;
      if ( !a3 )
        v7 = &PPM_ETW_WPS_CONTAINMENT_HW_UPDATE;
    }
    else
    {
      v7 = &PPM_ETW_WPS_CONTAINMENT_HW_UPDATE;
    }
    if ( PpmEtwRegistered )
    {
      LOBYTE(v3) = EtwEventEnabled(PpmEtwHandle, v7);
      if ( (_BYTE)v3 )
      {
        UserData.Reserved = 0;
        v12 = 0;
        UserData.Ptr = a1 + 8;
        UserData.Size = 8;
        v10 = a2;
        v11 = 4;
        LOBYTE(v3) = EtwWriteEx(PpmEtwHandle, v7, 0LL, 0, 0LL, 0LL, 2u, &UserData);
      }
    }
  }
  return (char)v3;
}
