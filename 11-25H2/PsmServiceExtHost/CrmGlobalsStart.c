/*
 * XREFs of CrmGlobalsStart @ 0x180078A08
 * Callers:
 *     PsmCrmStart @ 0x180077870 (PsmCrmStart.c)
 * Callees:
 *     CrmGlobalsStartWorkers @ 0x180078B44 (CrmGlobalsStartWorkers.c)
 *     CrmGlobalsStartCrmRegistrations @ 0x18007B748 (CrmGlobalsStartCrmRegistrations.c)
 *     CrmGlobalsStartTelemetry @ 0x18007B968 (CrmGlobalsStartTelemetry.c)
 *     CrmLaunchRPCServer @ 0x18007BA80 (CrmLaunchRPCServer.c)
 *     TlgRegisterAggregateProviderEx @ 0x1800918F8 (TlgRegisterAggregateProviderEx.c)
 */

signed int CrmGlobalsStart()
{
  int v0; // eax
  signed int result; // eax
  RPC_STATUS v2; // eax
  ULONG v3; // [rsp+30h] [rbp+8h] BYREF
  __int64 v4; // [rsp+38h] [rbp+10h] BYREF

  v4 = 8LL;
  v3 = 0;
  if ( NtQuerySystemInformation(MaxSystemInfoClass|SystemProcessInformation, &v4, 8u, &v3) >= 0 )
    v0 = (HIDWORD(v4) >> 1) & 1;
  else
    v0 = 0;
  dword_1800E9C48 = v0;
  hObject = CreateEventW(0LL, 1, 0, 0LL);
  if ( hObject )
  {
    v2 = UuidCreate(&Uuid);
    if ( v2 )
    {
      return I_RpcMapWin32Status(v2);
    }
    else
    {
      RtlGetDeviceFamilyInfoEnum(0LL, &unk_1800E9C28, &unk_1800E9C2C);
      TlgRegisterAggregateProviderEx();
      result = CrmGlobalsStartWorkers(&CrmGlobals);
      if ( result >= 0 )
      {
        result = CrmGlobalsStartCrmRegistrations(&CrmGlobals);
        if ( result >= 0 )
        {
          result = CrmGlobalsStartTelemetry(&CrmGlobals);
          if ( result >= 0 )
            return CrmLaunchRPCServer(&BindingVector);
        }
      }
    }
  }
  else if ( (int)GetLastError() > 0 )
  {
    return (unsigned __int16)GetLastError() | 0xC0070000;
  }
  else
  {
    return GetLastError();
  }
  return result;
}
