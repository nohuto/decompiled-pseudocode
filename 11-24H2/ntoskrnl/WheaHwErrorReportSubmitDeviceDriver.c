/*
 * XREFs of WheaHwErrorReportSubmitDeviceDriver @ 0x14065A9D0
 * Callers:
 *     WheaReportFatalHwErrorDeviceDriverEx @ 0x14065AAF0 (WheaReportFatalHwErrorDeviceDriverEx.c)
 *     WheaReportHwErrorDeviceDriverEx @ 0x14065AC10 (WheaReportHwErrorDeviceDriverEx.c)
 * Callees:
 *     WheaReportHwError @ 0x140420030 (WheaReportHwError.c)
 *     WheapGetErrorSource @ 0x1404204D8 (WheapGetErrorSource.c)
 *     WheapErrDescIsDeviceDriver @ 0x14065AE04 (WheapErrDescIsDeviceDriver.c)
 *     WheapErrorHandleIsValid @ 0x14065AE1C (WheapErrorHandleIsValid.c)
 *     WheapFreeDriverPacketBuffer @ 0x14065AE38 (WheapFreeDriverPacketBuffer.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 */

__int64 __fastcall WheaHwErrorReportSubmitDeviceDriver(char *P)
{
  __int64 v2; // rcx
  unsigned int v3; // edi
  __int64 *ErrorSource; // rax
  __int64 v5; // rsi
  int v6; // edx
  unsigned __int64 v7; // rdi

  if ( (unsigned __int8)WheapErrorHandleIsValid() )
  {
    *(_DWORD *)(*(_QWORD *)(v2 + 40) + 8LL) = *((_DWORD *)P + 2);
    ErrorSource = WheapGetErrorSource((__int64)&WheapErrorSourceTable, *((_DWORD *)P + 3));
    v5 = (unsigned __int64)(ErrorSource + 12) & -(__int64)(ErrorSource != 0LL);
    if ( (unsigned __int8)WheapErrDescIsDeviceDriver(v5) )
    {
      if ( (**((_DWORD **)P + 2) & 0x3FF0u) >= 0x10 )
      {
        v6 = *((_DWORD *)P + 25);
        v7 = (*((_QWORD *)P + 3) + 7LL) & 0xFFFFFFFFFFFFFFF8uLL;
        if ( (unsigned int)(v6 + *((_DWORD *)P + 2)) <= *(_DWORD *)(v5 + 64) )
        {
          if ( (unsigned int)(v6 - 1) > 0x22 )
          {
            *(_DWORD *)(v7 + 88) = 0;
          }
          else
          {
            memmove((void *)((*((_QWORD *)P + 3) + 7LL) & 0xFFFFFFFFFFFFFFF8uLL), P + 64, *((unsigned int *)P + 25));
            *(_DWORD *)(v7 + 88) = *((_DWORD *)P + 25);
            *(_WORD *)(v7 + 92) = *(_WORD *)(v5 + 60);
          }
          *(_QWORD *)(v7 + 72) = v5 + 44;
          *(_QWORD *)(v7 + 80) = *((_QWORD *)P + 7);
          PshedRetrieveErrorInfo(*((_QWORD *)P + 5), v5);
          v3 = WheaReportHwError(*((_QWORD *)P + 5));
          WheapFreeDriverPacketBuffer(P);
        }
        else
        {
          return (unsigned int)-1073741670;
        }
      }
      else
      {
        return (unsigned int)-1073741789;
      }
    }
    else
    {
      return (unsigned int)-1073741130;
    }
  }
  else
  {
    return (unsigned int)-1073741816;
  }
  return v3;
}
