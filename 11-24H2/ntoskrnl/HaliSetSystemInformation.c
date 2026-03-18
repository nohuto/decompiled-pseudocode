/*
 * XREFs of HaliSetSystemInformation @ 0x1407027D4
 * Callers:
 *     HalpSetSystemInformation @ 0x140A9A4A0 (HalpSetSystemInformation.c)
 * Callees:
 *     HalpTimerSetClockTimerMinimumInterval @ 0x1405470D4 (HalpTimerSetClockTimerMinimumInterval.c)
 *     HalpRegisterSecondaryIcInterface @ 0x140555DBC (HalpRegisterSecondaryIcInterface.c)
 *     ZwQuerySystemInformation @ 0x1406A6AD0 (ZwQuerySystemInformation.c)
 *     HalpChannelPowerRequest @ 0x140703F2C (HalpChannelPowerRequest.c)
 */

__int64 __fastcall HaliSetSystemInformation(int a1, __int64 a2, int *a3)
{
  int v4; // edi
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  unsigned int v10; // ebx
  __int64 v13; // [rsp+48h] [rbp+20h] BYREF

  v4 = a2;
  v5 = a1 - 11;
  if ( !v5 )
    return (unsigned int)-1073741637;
  v6 = v5 - 2;
  if ( !v6 )
  {
    if ( (unsigned int)a2 >= 0x58 )
      return (unsigned int)HalpRegisterSecondaryIcInterface();
    return (unsigned int)-1073741820;
  }
  v7 = v6 - 1;
  if ( !v7 )
    return (unsigned int)HalpChannelPowerRequest(a3, a2, 0LL);
  v8 = v7 - 2;
  if ( !v8 )
  {
    if ( (_DWORD)a2 == 4 )
    {
      v10 = 0;
      HalpResetParkDisposition = *a3 != 0;
      return v10;
    }
    return (unsigned int)-1073741820;
  }
  v9 = v8 - 2;
  if ( !v9 )
  {
    if ( (_DWORD)a2 == 4 )
    {
      v10 = 0;
      HalpHvciEnabled = *a3 != 0;
      return v10;
    }
    return (unsigned int)-1073741820;
  }
  if ( v9 == 5 )
  {
    v13 = 8LL;
    if ( (int)ZwQuerySystemInformation(103LL, (__int64)&v13) < 0 || (v13 & 0x200000000LL) == 0 )
      return (unsigned int)-1073741790;
    if ( v4 == 4 )
      return (unsigned int)HalpTimerSetClockTimerMinimumInterval(*a3);
    return (unsigned int)-1073741820;
  }
  return (unsigned int)-1073741496;
}
