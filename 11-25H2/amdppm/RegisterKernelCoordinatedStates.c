/*
 * XREFs of RegisterKernelCoordinatedStates @ 0x140034AA8
 * Callers:
 *     RegisterIdleComplete @ 0x140034408 (RegisterIdleComplete.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x140003B54 (WPP_RECORDER_SF_d.c)
 *     _guard_dispatch_icall @ 0x14000D700 (_guard_dispatch_icall.c)
 *     PepNotifyQueryCoordinatedStates @ 0x140037DC8 (PepNotifyQueryCoordinatedStates.c)
 *     ProcLibTraceCoordinatedIdleStates @ 0x14003F82C (ProcLibTraceCoordinatedIdleStates.c)
 */

__int64 __fastcall RegisterKernelCoordinatedStates(__int64 a1)
{
  int v1; // edi
  int v2; // eax
  _QWORD *v3; // rbx
  PVOID v4; // rcx
  int v5; // edx
  PVOID P; // [rsp+48h] [rbp+10h] BYREF

  P = 0LL;
  if ( dword_140014C3C )
  {
    v2 = PepNotifyQueryCoordinatedStates(a1, &P);
    v3 = P;
    v1 = v2;
    if ( v2 >= 0 )
    {
      v4 = P;
      *(_DWORD *)P = dword_140014C3C;
      v3[4] = PepQueryPlatformStateResidency;
      v3[2] = PepIdlePreExecute;
      v3[3] = PepIdleComplete;
      v1 = ((__int64 (__fastcall *)(PVOID))qword_1400148F0)(v4);
      if ( v1 >= 0 )
      {
        qword_140014C48 = (__int64)v3;
        v3 = 0LL;
        ProcLibTraceCoordinatedIdleStates(0LL);
        v1 = 0;
      }
      else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v5) = 2;
        WPP_RECORDER_SF_d(
          WPP_GLOBAL_Control->DeviceExtension,
          v5,
          3,
          20,
          (__int64)&WPP_98f9ac7a230638fb843a3fa300c5ade8_Traceguids,
          v1);
      }
    }
    if ( v3 )
      ExFreePoolWithTag(v3, (ULONG)1919119952);
  }
  else
  {
    return 0;
  }
  return (unsigned int)v1;
}
