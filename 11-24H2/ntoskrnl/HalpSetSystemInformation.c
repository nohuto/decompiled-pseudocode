/*
 * XREFs of HalpSetSystemInformation @ 0x140A9A4A0
 * Callers:
 *     <none>
 * Callees:
 *     HalpGetCpuInfo @ 0x14048CB70 (HalpGetCpuInfo.c)
 *     HalpSetProfileSourceInterval @ 0x1404FA7C0 (HalpSetProfileSourceInterval.c)
 *     HalpRegisterProcessorTraceInterruptHandler @ 0x1405628E0 (HalpRegisterProcessorTraceInterruptHandler.c)
 *     HalpRegisterProfileSourceInterruptHandler @ 0x140562980 (HalpRegisterProfileSourceInterruptHandler.c)
 *     HalpRegisterTimerInterruptHandler @ 0x140562A20 (HalpRegisterTimerInterruptHandler.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     HaliSetSystemInformation @ 0x1407027D4 (HaliSetSystemInformation.c)
 *     HalpRegisterPmuNotification @ 0x140702C0C (HalpRegisterPmuNotification.c)
 *     HalpUnregisterPmuNotification @ 0x140AB2A9C (HalpUnregisterPmuNotification.c)
 */

__int64 __fastcall HalpSetSystemInformation(unsigned int a1, __int64 a2, __int64 *a3)
{
  int v4; // ebx
  unsigned __int8 v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = 0;
  v4 = a2;
  if ( !a1 )
  {
    if ( (_DWORD)a2 == 8 )
      return HalpSetProfileSourceInterval(*(unsigned int *)a3, (__int64)a3 + 4, (__int64)a3, a1);
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
        case 0x14u:
          if ( (unsigned int)(a2 - 288) <= 0x1F6 )
            return guard_dispatch_icall_no_overrides(a3, 0LL, a3, a1 - 20);
          break;
        case 0x15u:
          if ( (_DWORD)a2 == 272 )
            return guard_dispatch_icall_no_overrides(a3, a2, a3, a1 - 21);
          break;
        case 0x18u:
          if ( (unsigned int)a2 >= 0x18 )
            return HalpRegisterPmuNotification((__int64)a3);
          break;
        case 0x19u:
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
