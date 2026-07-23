/*
 * XREFs of PnpNotifyDriverCallback @ 0x1409EC7F0
 * Callers:
 *     PnpNotifyHwProfileChange @ 0x14071E214 (PnpNotifyHwProfileChange.c)
 *     PnpNotifyTargetDeviceChangeNotifyEntry @ 0x14071E464 (PnpNotifyTargetDeviceChangeNotifyEntry.c)
 *     PipKsrNotifyDrivers @ 0x14073216C (PipKsrNotifyDrivers.c)
 *     IoRegisterPlugPlayNotification @ 0x1409EB2A0 (IoRegisterPlugPlayNotification.c)
 *     PnpNotifyDeviceClassChange @ 0x1409EC16C (PnpNotifyDeviceClassChange.c)
 *     PnpNotifyTargetDeviceChange @ 0x1409EC4E0 (PnpNotifyTargetDeviceChange.c)
 * Callees:
 *     IoAddTriageDumpDataBlock @ 0x1403E65A0 (IoAddTriageDumpDataBlock.c)
 *     Feature_PreventInterfaceChangeConcurrentNotify__private_ReportDeviceUsage @ 0x140478D64 (Feature_PreventInterfaceChangeConcurrentNotify__private_ReportDeviceUsage.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     McTemplateK0qhzr1jxjhzr6_EtwWriteTransfer @ 0x1405A1800 (McTemplateK0qhzr1jxjhzr6_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     PnpExtractNotificationSpecificData @ 0x14071E1B0 (PnpExtractNotificationSpecificData.c)
 */

__int64 __fastcall PnpNotifyDriverCallback(__int64 a1, __int64 a2, _DWORD *a3)
{
  unsigned __int8 CurrentIrql; // r12
  __int64 v7; // rbx
  LONG SpareLong; // r13d
  int v9; // eax
  __int64 v10; // rcx
  unsigned __int8 v11; // r14
  unsigned __int16 v12; // di
  ULONG_PTR BugCheckParameter4; // rbp
  __int64 v15; // r8
  char v16; // r11
  __int64 v17; // rax
  __int64 v18; // rcx
  _WORD *v19; // rcx
  __int64 v20; // [rsp+B0h] [rbp+8h] BYREF
  __int64 v21; // [rsp+B8h] [rbp+10h]
  __int64 v22; // [rsp+C0h] [rbp+18h] BYREF
  __int64 v23; // [rsp+C8h] [rbp+20h] BYREF

  v21 = a2;
  Feature_PreventInterfaceChangeConcurrentNotify__private_ReportDeviceUsage();
  CurrentIrql = KeGetCurrentIrql();
  v7 = MEMORY[0xFFFFF78000000014];
  SpareLong = KeGetCurrentThread()->WaitBlock[3].SpareLong;
  v9 = guard_dispatch_icall_no_overrides(a2, *(_QWORD *)(a1 + 40));
  v10 = MEMORY[0xFFFFF78000000014];
  v11 = KeGetCurrentIrql();
  v12 = 0;
  BugCheckParameter4 = KeGetCurrentThread()->CombinedApcDisable;
  if ( a3 )
    *a3 = v9;
  if ( CurrentIrql != v11 || SpareLong != (_DWORD)BugCheckParameter4 )
  {
    v18 = *(_QWORD *)(a1 + 48);
    if ( v18 )
    {
      IoAddTriageDumpDataBlock(v18, (PVOID)(unsigned int)*(__int16 *)(v18 + 2));
      v19 = (_WORD *)(*(_QWORD *)(a1 + 48) + 56LL);
      if ( *v19 )
      {
        IoAddTriageDumpDataBlock((ULONG)v19, (PVOID)2);
        IoAddTriageDumpDataBlock(
          *(_QWORD *)(*(_QWORD *)(a1 + 48) + 64LL),
          (PVOID)*(unsigned __int16 *)(*(_QWORD *)(a1 + 48) + 56LL));
      }
    }
    KeBugCheckEx(0xCAu, 0xAuLL, *(_QWORD *)(a1 + 48), v11, BugCheckParameter4);
  }
  if ( (v10 - v7) / 10000 > (unsigned __int16)PiNotifyLongRunningMs && (byte_140EEFF64 & 2) != 0 )
  {
    v23 = 0LL;
    v22 = 0LL;
    v20 = 0LL;
    PnpExtractNotificationSpecificData(v21, &v23, &v22, &v20);
    if ( v20 )
    {
      v17 = *(_QWORD *)(v20 + 8);
      v12 = *(_WORD *)v20 >> 1;
    }
    else
    {
      v17 = 0LL;
    }
    McTemplateK0qhzr1jxjhzr6_EtwWriteTransfer(
      *(_QWORD *)(a1 + 48),
      *(_WORD *)(*(_QWORD *)(a1 + 48) + 56LL) >> 1,
      v15,
      *(_DWORD *)(a1 + 16),
      *(_WORD *)(*(_QWORD *)(a1 + 48) + 56LL) >> 1,
      *(_QWORD *)(*(_QWORD *)(a1 + 48) + 64LL),
      v23,
      v16,
      v22,
      v12,
      v17);
  }
  return 0LL;
}
