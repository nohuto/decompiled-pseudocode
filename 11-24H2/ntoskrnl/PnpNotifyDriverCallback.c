/*
 * XREFs of PnpNotifyDriverCallback @ 0x1409EEDB0
 * Callers:
 *     PnpNotifyHwProfileChange @ 0x140720684 (PnpNotifyHwProfileChange.c)
 *     PnpNotifyTargetDeviceChangeNotifyEntry @ 0x1407208D4 (PnpNotifyTargetDeviceChangeNotifyEntry.c)
 *     PipKsrNotifyDrivers @ 0x14073423C (PipKsrNotifyDrivers.c)
 *     IoRegisterPlugPlayNotification @ 0x1409ED860 (IoRegisterPlugPlayNotification.c)
 *     PnpNotifyDeviceClassChange @ 0x1409EE72C (PnpNotifyDeviceClassChange.c)
 *     PnpNotifyTargetDeviceChange @ 0x1409EEAA0 (PnpNotifyTargetDeviceChange.c)
 * Callees:
 *     IoAddTriageDumpDataBlock @ 0x1403F2880 (IoAddTriageDumpDataBlock.c)
 *     Feature_PreventInterfaceChangeConcurrentNotify__private_ReportDeviceUsage @ 0x14047DAD0 (Feature_PreventInterfaceChangeConcurrentNotify__private_ReportDeviceUsage.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     McTemplateK0qhzr1jxjhzr6_EtwWriteTransfer @ 0x1405A48C0 (McTemplateK0qhzr1jxjhzr6_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     PnpExtractNotificationSpecificData @ 0x140720620 (PnpExtractNotificationSpecificData.c)
 */

__int64 __fastcall PnpNotifyDriverCallback(__int64 a1, __int64 a2, _DWORD *a3)
{
  unsigned __int8 CurrentIrql; // r12
  __int64 v7; // rbx
  LONG SpareLong; // r13d
  __int64 v9; // r8
  __int64 v10; // r9
  int v11; // eax
  __int64 v12; // rcx
  unsigned __int8 v13; // r14
  unsigned __int16 v14; // di
  ULONG_PTR BugCheckParameter4; // rbp
  __int64 v17; // r8
  char v18; // r11
  __int64 v19; // rax
  __int64 v20; // rcx
  _WORD *v21; // rcx
  __int64 v22; // [rsp+B0h] [rbp+8h] BYREF
  __int64 v23; // [rsp+B8h] [rbp+10h]
  __int64 v24; // [rsp+C0h] [rbp+18h] BYREF
  __int64 v25; // [rsp+C8h] [rbp+20h] BYREF

  v23 = a2;
  Feature_PreventInterfaceChangeConcurrentNotify__private_ReportDeviceUsage();
  CurrentIrql = KeGetCurrentIrql();
  v7 = MEMORY[0xFFFFF78000000014];
  SpareLong = KeGetCurrentThread()->WaitBlock[3].SpareLong;
  v11 = guard_dispatch_icall_no_overrides(a2, *(_QWORD *)(a1 + 40), v9, v10);
  v12 = MEMORY[0xFFFFF78000000014];
  v13 = KeGetCurrentIrql();
  v14 = 0;
  BugCheckParameter4 = KeGetCurrentThread()->CombinedApcDisable;
  if ( a3 )
    *a3 = v11;
  if ( CurrentIrql != v13 || SpareLong != (_DWORD)BugCheckParameter4 )
  {
    v20 = *(_QWORD *)(a1 + 48);
    if ( v20 )
    {
      IoAddTriageDumpDataBlock(v20, (PVOID)(unsigned int)*(__int16 *)(v20 + 2));
      v21 = (_WORD *)(*(_QWORD *)(a1 + 48) + 56LL);
      if ( *v21 )
      {
        IoAddTriageDumpDataBlock((ULONG)v21, (PVOID)2);
        IoAddTriageDumpDataBlock(
          *(_QWORD *)(*(_QWORD *)(a1 + 48) + 64LL),
          (PVOID)*(unsigned __int16 *)(*(_QWORD *)(a1 + 48) + 56LL));
      }
    }
    KeBugCheckEx(0xCAu, 0xAuLL, *(_QWORD *)(a1 + 48), v13, BugCheckParameter4);
  }
  if ( (v12 - v7) / 10000 > (unsigned __int16)PiNotifyLongRunningMs && (byte_140EEFD24 & 2) != 0 )
  {
    v25 = 0LL;
    v24 = 0LL;
    v22 = 0LL;
    PnpExtractNotificationSpecificData(v23, &v25, &v24, &v22);
    if ( v22 )
    {
      v19 = *(_QWORD *)(v22 + 8);
      v14 = *(_WORD *)v22 >> 1;
    }
    else
    {
      v19 = 0LL;
    }
    McTemplateK0qhzr1jxjhzr6_EtwWriteTransfer(
      *(_QWORD *)(a1 + 48),
      *(_WORD *)(*(_QWORD *)(a1 + 48) + 56LL) >> 1,
      v17,
      *(_DWORD *)(a1 + 16),
      *(_WORD *)(*(_QWORD *)(a1 + 48) + 56LL) >> 1,
      *(_QWORD *)(*(_QWORD *)(a1 + 48) + 64LL),
      v25,
      v18,
      v24,
      v14,
      v19);
  }
  return 0LL;
}
