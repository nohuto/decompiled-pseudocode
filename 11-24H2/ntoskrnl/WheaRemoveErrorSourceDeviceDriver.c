/*
 * XREFs of WheaRemoveErrorSourceDeviceDriver @ 0x1407C7470
 * Callers:
 *     <none>
 * Callees:
 *     WheaGetErrorSource @ 0x140420000 (WheaGetErrorSource.c)
 *     RtlStringCchCopyA @ 0x14044D468 (RtlStringCchCopyA.c)
 *     WheapErrDescIsDeviceDriver @ 0x14065AE04 (WheapErrDescIsDeviceDriver.c)
 *     WheaLogInternalEvent @ 0x14065C840 (WheaLogInternalEvent.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     WheaRemoveErrorSource @ 0x1407C7080 (WheaRemoveErrorSource.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall WheaRemoveErrorSourceDeviceDriver(unsigned int a1)
{
  unsigned int v2; // ebx
  __int64 ErrorSource; // rdi
  signed __int32 v4; // eax
  __int64 v5; // rdx
  void *v6; // rcx
  _DWORD Src[8]; // [rsp+20h] [rbp-50h] BYREF
  char pszDest[16]; // [rsp+40h] [rbp-30h] BYREF
  __int128 v10; // [rsp+50h] [rbp-20h]

  *(_OWORD *)pszDest = 0LL;
  v10 = 0LL;
  v2 = 0;
  ErrorSource = WheaGetErrorSource(a1);
  if ( WheapErrDescIsDeviceDriver(ErrorSource) )
  {
    v4 = _InterlockedCompareExchange((volatile signed __int32 *)(ErrorSource + 152), -1, 0);
    if ( v4 != -1 )
    {
      if ( v4 )
      {
        Src[0] = 1733060695;
        Src[1] = 1;
        Src[3] = 1;
        Src[7] = 32;
        Src[2] = 64;
        Src[5] = -2147483604;
        Src[4] = 1280201291;
        Src[6] = 2;
        RtlStringCchCopyA(pszDest, 0x20uLL, "RemoveErrorSourceDeviceDriver");
        WheaLogInternalEvent(Src, v5);
        return (unsigned int)-1073740024;
      }
      else
      {
        v6 = *(void **)(ErrorSource + 72);
        if ( v6 )
        {
          ExFreePoolWithTag(v6, 0x41454857u);
          ExFreePoolWithTag(*(PVOID *)(ErrorSource + 144), 0x41454857u);
          *(_QWORD *)(ErrorSource + 72) = 0LL;
          *(_QWORD *)(ErrorSource + 144) = 0LL;
        }
        WheaRemoveErrorSource(a1);
        *(_QWORD *)(ErrorSource + 80) = PdcCreateWatchdogAroundClientCall;
        *(_QWORD *)(ErrorSource + 88) = xHalTimerWatchdogStop;
      }
    }
  }
  return v2;
}
