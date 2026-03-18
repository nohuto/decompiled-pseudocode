/*
 * XREFs of HalpSetSystemInformation @ 0x140A94780
 * Callers:
 *     <none>
 * Callees:
 *     HalpGetCpuInfo @ 0x14048D3A0 (HalpGetCpuInfo.c)
 *     HalpSetProfileSourceInterval @ 0x1404F82E0 (HalpSetProfileSourceInterval.c)
 *     HalpRegisterProcessorTraceInterruptHandler @ 0x14055FFE0 (HalpRegisterProcessorTraceInterruptHandler.c)
 *     HalpRegisterProfileSourceInterruptHandler @ 0x140560080 (HalpRegisterProfileSourceInterruptHandler.c)
 *     HalpRegisterTimerInterruptHandler @ 0x140560120 (HalpRegisterTimerInterruptHandler.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     HaliSetSystemInformation @ 0x1406F69E4 (HaliSetSystemInformation.c)
 *     HalpRegisterPmuNotification @ 0x1406F6E1C (HalpRegisterPmuNotification.c)
 *     HalpUnregisterPmuNotification @ 0x140AAD9FC (HalpUnregisterPmuNotification.c)
 */

__int64 __fastcall HalpSetSystemInformation(int a1, __int64 a2, __int64 *a3)
{
  int v4; // ebx
  unsigned __int8 v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = 0;
  v4 = a2;
  if ( !a1 )
  {
    if ( (_DWORD)a2 == 8 )
      return HalpSetProfileSourceInterval(*(unsigned int *)a3, (__int64)a3 + 4);
    return 3221225476LL;
  }
  if ( a1 != 1 )
  {
    if ( a1 == 10 )
    {
      if ( (_DWORD)a2 == 8 )
        return HalpRegisterTimerInterruptHandler(*a3);
      return 3221225476LL;
    }
    if ( a1 != 19 )
    {
      if ( a1 == 20 )
      {
        if ( (unsigned int)(a2 - 288) <= 0x1F6 )
          return guard_dispatch_icall_no_overrides(a3);
      }
      else
      {
        if ( a1 != 21 )
        {
          if ( a1 == 24 )
          {
            if ( (unsigned int)a2 >= 0x18 )
              return HalpRegisterPmuNotification((__int64)a3);
          }
          else
          {
            if ( a1 != 25 )
              return HaliSetSystemInformation(a1, a2, (int *)a3);
            if ( (unsigned int)a2 >= 8 )
              return HalpUnregisterPmuNotification(a3);
          }
          return 3221225476LL;
        }
        if ( (_DWORD)a2 == 272 )
          return guard_dispatch_icall_no_overrides(a3);
      }
      return 3221225476LL;
    }
    if ( HalpGetCpuInfo(0LL, 0LL, 0LL, &v6) && v6 == 2 )
    {
      if ( v4 != 8 )
        return 3221225476LL;
      if ( (HalpFeatureBits & 0x41) == 0x41 )
        return HalpRegisterProcessorTraceInterruptHandler(*a3);
    }
    return 3221225659LL;
  }
  if ( (_DWORD)a2 != 8 )
    return 3221225476LL;
  if ( (HalpFeatureBits & 1) != 0 )
    return HalpRegisterProfileSourceInterruptHandler(*a3);
  else
    return 3221225473LL;
}
