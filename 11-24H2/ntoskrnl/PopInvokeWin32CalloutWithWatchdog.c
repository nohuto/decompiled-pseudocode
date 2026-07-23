/*
 * XREFs of PopInvokeWin32CalloutWithWatchdog @ 0x1409A1980
 * Callers:
 *     PopNotifyConsoleUserPresent @ 0x1409A1CB0 (PopNotifyConsoleUserPresent.c)
 *     PopInvokeWin32Callout @ 0x1409A49A8 (PopInvokeWin32Callout.c)
 *     PopPowerAggregatorNotifyCsStateExited @ 0x140A6E534 (PopPowerAggregatorNotifyCsStateExited.c)
 * Callees:
 *     ZwPowerInformation @ 0x1406A7F90 (ZwPowerInformation.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     PsInvokeWin32Callout @ 0x1409A1420 (PsInvokeWin32Callout.c)
 */

__int64 __fastcall PopInvokeWin32CalloutWithWatchdog(int a1, __int128 *a2, int a3, int *a4, __int64 a5)
{
  unsigned int v9; // ebx
  int InputBuffer; // [rsp+38h] [rbp-21h] BYREF
  __int64 v12; // [rsp+40h] [rbp-19h]
  int v13; // [rsp+48h] [rbp-11h]
  int v14; // [rsp+4Ch] [rbp-Dh]
  int v15; // [rsp+50h] [rbp-9h]
  struct _KTHREAD *CurrentThread; // [rsp+58h] [rbp-1h]
  __int64 (__fastcall *v17)(__int64, int, ULONG_PTR, ULONG_PTR, ULONG_PTR, ULONG_PTR); // [rsp+80h] [rbp+27h]
  int *p_InputBuffer; // [rsp+88h] [rbp+2Fh]

  memset_0(&InputBuffer, 0, 0x60uLL);
  if ( a5 )
  {
    InputBuffer = 21;
    v12 = a5;
    v13 = 1000 * PopWin32kCalloutWatchdogTimeoutSeconds;
    if ( a4 )
      v14 = *a4;
    else
      v14 = -1;
    v15 = 417;
    CurrentThread = KeGetCurrentThread();
    p_InputBuffer = &InputBuffer;
    v17 = PopWin32CalloutWatchdogCallback;
    ZwPowerInformation(PowerInformationInternal, &InputBuffer, 0x60u, 0LL, 0);
  }
  v9 = PsInvokeWin32Callout(a1, a2, a3, (__int64)a4);
  if ( a5 )
  {
    memset_0(&InputBuffer, 0, 0x60uLL);
    InputBuffer = 21;
    v12 = a5;
    ZwPowerInformation(PowerInformationInternal, &InputBuffer, 0x60u, 0LL, 0);
  }
  return v9;
}
