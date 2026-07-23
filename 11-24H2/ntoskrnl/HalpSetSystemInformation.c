/*
 * XREFs of HalpSetSystemInformation @ 0x140A95A10
 * Callers:
 *     <none>
 * Callees:
 *     HalpGetCpuInfo @ 0x140487890 (HalpGetCpuInfo.c)
 *     HalpSetProfileSourceInterval @ 0x1404F80A0 (HalpSetProfileSourceInterval.c)
 *     HalpRegisterProcessorTraceInterruptHandler @ 0x140560510 (HalpRegisterProcessorTraceInterruptHandler.c)
 *     HalpRegisterProfileSourceInterruptHandler @ 0x1405605B0 (HalpRegisterProfileSourceInterruptHandler.c)
 *     HalpRegisterTimerInterruptHandler @ 0x140560650 (HalpRegisterTimerInterruptHandler.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     HaliSetSystemInformation @ 0x140700414 (HaliSetSystemInformation.c)
 *     HalpRegisterPmuNotification @ 0x14070084C (HalpRegisterPmuNotification.c)
 *     HalpUnregisterPmuNotification @ 0x140AADA0C (HalpUnregisterPmuNotification.c)
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
      switch ( a1 )
      {
        case 20:
          if ( (unsigned int)(a2 - 288) <= 0x1F6 )
            return guard_dispatch_icall_no_overrides(a3, 0LL);
          break;
        case 21:
          if ( (_DWORD)a2 == 272 )
            return guard_dispatch_icall_no_overrides(a3, a2);
          break;
        case 24:
          if ( (unsigned int)a2 >= 0x18 )
            return HalpRegisterPmuNotification((__int64)a3);
          break;
        case 25:
          if ( (unsigned int)a2 >= 8 )
            return HalpUnregisterPmuNotification(a3);
          break;
        default:
          return HaliSetSystemInformation(a1, a2, (int *)a3);
      }
      return 3221225476LL;
    }
    if ( !HalpGetCpuInfo(0LL, 0LL, 0LL, &v6) || v6 != 2 )
      return 3221225659LL;
    if ( v4 == 8 )
    {
      if ( (HalpFeatureBits & 0x41) == 0x41 )
        return HalpRegisterProcessorTraceInterruptHandler(*a3);
      return 3221225659LL;
    }
    return 3221225476LL;
  }
  if ( (_DWORD)a2 != 8 )
    return 3221225476LL;
  if ( (HalpFeatureBits & 1) != 0 )
    return HalpRegisterProfileSourceInterruptHandler(*a3);
  else
    return 3221225473LL;
}
