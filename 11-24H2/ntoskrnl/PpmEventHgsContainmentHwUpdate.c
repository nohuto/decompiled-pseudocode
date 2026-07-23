/*
 * XREFs of PpmEventHgsContainmentHwUpdate @ 0x1404E466C
 * Callers:
 *     PpmHeteroUpdateHgsConfiguration @ 0x1404E2E24 (PpmHeteroUpdateHgsConfiguration.c)
 *     PpmEventTraceControlCallback @ 0x140AC8550 (PpmEventTraceControlCallback.c)
 * Callees:
 *     EtwWriteEx @ 0x140289C90 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x1402D1300 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

char __fastcall PpmEventHgsContainmentHwUpdate(__int64 a1, __int64 a2, char a3)
{
  const EVENT_DESCRIPTOR *v3; // rax
  const EVENT_DESCRIPTOR *v6; // rbx
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-38h] BYREF
  __int64 v9; // [rsp+50h] [rbp-28h]
  int v10; // [rsp+58h] [rbp-20h]
  int v11; // [rsp+5Ch] [rbp-1Ch]

  LOBYTE(v3) = PpmHeteroHgsContainmentState;
  if ( (PpmHeteroHgsContainmentState & 4) != 0 )
  {
    v3 = &PPM_ETW_WPS_CONTAINMENT_HW_UPDATE;
    v6 = (const EVENT_DESCRIPTOR *)PPM_ETW_WPS_CONTAINMENT_HW_RUNDOWN;
    if ( !a3 )
      v6 = &PPM_ETW_WPS_CONTAINMENT_HW_UPDATE;
    if ( PpmEtwRegistered )
    {
      LOBYTE(v3) = EtwEventEnabled(PpmEtwHandle, v6);
      if ( (_BYTE)v3 )
      {
        UserData.Reserved = 0;
        v11 = 0;
        UserData.Ptr = a1 + 8;
        UserData.Size = 8;
        v9 = a2;
        v10 = 4;
        LOBYTE(v3) = EtwWriteEx(PpmEtwHandle, v6, 0LL, 0, 0LL, 0LL, 2u, &UserData);
      }
    }
  }
  return (char)v3;
}
