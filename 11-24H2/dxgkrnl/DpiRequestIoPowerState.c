/*
 * XREFs of DpiRequestIoPowerState @ 0x14039F1A8
 * Callers:
 *     DpiFdoExcludeAdapterAccess @ 0x140240710 (DpiFdoExcludeAdapterAccess.c)
 *     DpiFdoHandleStopDevice @ 0x1402421F0 (DpiFdoHandleStopDevice.c)
 *     DpiFdoInitializeFdo @ 0x140242CBC (DpiFdoInitializeFdo.c)
 *     DpiFdoResetFdo @ 0x1402453A8 (DpiFdoResetFdo.c)
 *     DpiFdoHandleDevicePower @ 0x1403B9530 (DpiFdoHandleDevicePower.c)
 *     DpiFdoSetAdapterPowerState @ 0x1404032B8 (DpiFdoSetAdapterPowerState.c)
 * Callees:
 *     ?DpiInsertEntryToPowerActionQueue@@YAXPEAU_FDO_CONTEXT@@PEAU_DPI_POWER_ACTION@@@Z @ 0x140048990 (-DpiInsertEntryToPowerActionQueue@@YAXPEAU_FDO_CONTEXT@@PEAU_DPI_POWER_ACTION@@@Z.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     memset @ 0x1400A2000 (memset.c)
 */

__int64 __fastcall DpiRequestIoPowerState(__int64 a1, LONG a2, __int64 a3, int a4)
{
  __int64 v4; // rsi
  NTSTATUS v7; // ebx
  struct _KEVENT v9[4]; // [rsp+30h] [rbp-88h] BYREF

  v4 = *(_QWORD *)(a1 + 64);
  memset(v9, 0, sizeof(v9));
  v9[1].Header.WaitListHead.Flink = 0LL;
  v9[0].Header.WaitListHead.Blink = (struct _LIST_ENTRY *)0xB74727044LL;
  v9[1].Header.LockNV = a2;
  LODWORD(v9[1].Header.WaitListHead.Blink) = a4;
  KeInitializeEvent(&v9[2], SynchronizationEvent, 0);
  _InterlockedIncrement((volatile signed __int32 *)(v4 + 4432));
  DpiInsertEntryToPowerActionQueue((KSPIN_LOCK *)v4, (struct _DPI_POWER_ACTION *)v9);
  KeSetEvent((PRKEVENT)(v4 + 4072), 0, 0);
  if ( a2 == 7 )
  {
    v7 = KeWaitForSingleObject(*(PVOID *)(v4 + 4064), Executive, 0, 0, 0LL);
    ObfDereferenceObject(*(PVOID *)(v4 + 4064));
  }
  else
  {
    v7 = KeWaitForSingleObject(&v9[2], Executive, 0, 0, 0LL);
  }
  _InterlockedDecrement((volatile signed __int32 *)(v4 + 4432));
  if ( v7 )
  {
    WdLogSingleEntry1(2LL, v7);
    WdLogGlobalForLineNumber = 2945;
  }
  else
  {
    return (unsigned int)v9[3].Header.Lock;
  }
  return (unsigned int)v7;
}
