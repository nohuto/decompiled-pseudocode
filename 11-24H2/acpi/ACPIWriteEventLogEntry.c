/*
 * XREFs of ACPIWriteEventLogEntry @ 0x140053A50
 * Callers:
 *     PciConfigSpaceHandlerWorker @ 0x140014A50 (PciConfigSpaceHandlerWorker.c)
 *     ACPIBuildProcessDevicePhasePrx @ 0x14001FDA0 (ACPIBuildProcessDevicePhasePrx.c)
 *     ACPIBuildProcessDevicePhasePrw @ 0x1400213A0 (ACPIBuildProcessDevicePhasePrw.c)
 *     LinkNodeCrackPrt @ 0x14002B0F8 (LinkNodeCrackPrt.c)
 *     ACPIBuildProcessDevicePhasePr3 @ 0x140048850 (ACPIBuildProcessDevicePhasePr3.c)
 *     ACPIBuildProcessDevicePhasePrr @ 0x140049E60 (ACPIBuildProcessDevicePhasePrr.c)
 *     ACPIVerifyAndCopyFirmwareDependencies @ 0x140053814 (ACPIVerifyAndCopyFirmwareDependencies.c)
 *     ACPIGpeInstallRemoveIndexErrorWorker @ 0x1400611B0 (ACPIGpeInstallRemoveIndexErrorWorker.c)
 *     LogInErrorLog @ 0x14006BFC8 (LogInErrorLog.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1400283FC (WPP_RECORDER_SF_.c)
 *     memset @ 0x140070F40 (memset.c)
 */

__int64 __fastcall ACPIWriteEventLogEntry(int a1, __int16 **a2, unsigned int a3)
{
  unsigned int v3; // ebx
  __int64 v4; // rsi
  __int16 **v5; // r14
  int v7; // ebp
  const WCHAR **v8; // rdi
  __int64 v9; // r15
  const WCHAR *v10; // rdx
  unsigned int v11; // ebp
  _WORD *ErrorLogEntry; // rax
  int v13; // edx
  _WORD *v14; // rdi
  _WORD *v15; // rcx
  __int64 v16; // r8
  __int16 *v17; // rdx
  __int16 v18; // ax
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-28h] BYREF

  v3 = 0;
  v4 = a3;
  v5 = a2;
  v7 = 0;
  if ( a3 )
  {
    v8 = (const WCHAR **)a2;
    v9 = a3;
    do
    {
      v10 = *v8;
      DestinationString = 0LL;
      RtlInitUnicodeString(&DestinationString, v10);
      ++v8;
      v7 += DestinationString.Length + 2;
      --v9;
    }
    while ( v9 );
  }
  v11 = v7 + 48;
  if ( v11 > 0xF0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a2) = 2;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        (_DWORD)a2,
        22,
        11,
        (__int64)&WPP_1dc68f7f758f380608aba8924886457d_Traceguids);
    }
    return (unsigned int)-1073741823;
  }
  else
  {
    ErrorLogEntry = IoAllocateErrorLogEntry(AcpiDriverObject, v11);
    v14 = ErrorLogEntry;
    if ( ErrorLogEntry )
    {
      memset(ErrorLogEntry, 0, v11);
      v14[1] = 0;
      v14[2] = v4;
      *((_DWORD *)v14 + 3) = a1;
      if ( (_DWORD)v4 )
        v14[3] = 48;
      v15 = (_WORD *)((char *)v14 + (unsigned __int16)v14[3]);
      if ( (_DWORD)v4 )
      {
        v16 = v4;
        do
        {
          v17 = *v5;
          do
          {
            v18 = *v17++;
            *v15++ = v18;
          }
          while ( v18 );
          ++v5;
          --v16;
        }
        while ( v16 );
      }
      IoWriteErrorLogEntry(v14);
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v13) = 2;
        WPP_RECORDER_SF_(
          WPP_GLOBAL_Control->DeviceExtension,
          v13,
          22,
          10,
          (__int64)&WPP_1dc68f7f758f380608aba8924886457d_Traceguids);
      }
      return (unsigned int)-1073741670;
    }
  }
  return v3;
}
