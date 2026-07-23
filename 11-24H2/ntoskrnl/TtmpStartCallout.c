/*
 * XREFs of TtmpStartCallout @ 0x140769A64
 * Callers:
 *     TtmiSessionDeviceListWorker @ 0x140768C60 (TtmiSessionDeviceListWorker.c)
 *     TtmpCallAssignedToTerminal @ 0x140768F30 (TtmpCallAssignedToTerminal.c)
 *     TtmpCallSetBuiltinPanelState @ 0x140768FCC (TtmpCallSetBuiltinPanelState.c)
 *     TtmpCallSetDisplayState @ 0x14076904C (TtmpCallSetDisplayState.c)
 *     TtmpCallSetInputMode @ 0x1407690FC (TtmpCallSetInputMode.c)
 *     TtmpUpdatePrimaryDisplayWnf @ 0x140769CAC (TtmpUpdatePrimaryDisplayWnf.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14028AA60 (ExReleaseResourceLite.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     TtmpCalloutArmWatchdog @ 0x14076919C (TtmpCalloutArmWatchdog.c)
 *     TtmpGetCalloutTagFromCalloutType @ 0x140769560 (TtmpGetCalloutTagFromCalloutType.c)
 *     TtmpGetConfigOverride @ 0x1407695B8 (TtmpGetConfigOverride.c)
 *     TtmiLogCalloutStart @ 0x14076BE98 (TtmiLogCalloutStart.c)
 *     NtPowerInformation @ 0x1409EDB00 (NtPowerInformation.c)
 */

__int64 __fastcall TtmpStartCallout(__int64 a1, int *a2, __int64 a3, int a4, __int64 a5, unsigned int a6)
{
  _DWORD *v10; // rdi
  __int64 v11; // rsi
  __int64 v12; // rcx
  int v13; // edi
  unsigned int CalloutTagFromCalloutType; // eax
  __int64 result; // rax
  int InputBuffer; // [rsp+30h] [rbp-88h] BYREF
  _BYTE v17[132]; // [rsp+34h] [rbp-84h] BYREF
  int v18; // [rsp+C0h] [rbp+8h] BYREF
  int v19; // [rsp+D8h] [rbp+20h] BYREF

  if ( !TtmpDeviceCalloutTimeoutsSet )
  {
    v18 = 0;
    v10 = &unk_140E085B0;
    v19 = 0;
    v11 = 6LL;
    do
    {
      if ( TtmpGetConfigOverride(a1, *((const WCHAR **)v10 - 1), &v19) == 1 )
        *v10 = v19;
      v10 += 6;
      --v11;
    }
    while ( v11 );
    if ( TtmpGetConfigOverride(a1, L"TtmDeviceCalloutCrashEnabled", &v18) == 1 && v18 )
      TtmpDeviceCalloutCrashDumpEnabled = 1;
    TtmpDeviceCalloutTimeoutsSet = 1;
  }
  *(_QWORD *)a1 = a2;
  v12 = 0LL;
  *(_QWORD *)(a1 + 8) = a3;
  *(_DWORD *)(a1 + 16) = a4;
  while ( 1 )
  {
    if ( (unsigned int)v12 >= 6 )
    {
      v13 = 30000;
      goto LABEL_17;
    }
    if ( *((_DWORD *)&TtmpDeviceWatchdogTimeouts + 6 * v12) == a4 )
      break;
    v12 = (unsigned int)(v12 + 1);
  }
  v13 = *((_DWORD *)&TtmpDeviceWatchdogTimeouts + 6 * v12 + 4);
  if ( !v13 )
    goto LABEL_20;
LABEL_17:
  memset_0(v17, 0, 0x5CuLL);
  InputBuffer = 21;
  if ( NtPowerInformation(PowerInformationInternal, &InputBuffer, 0x60u, (PVOID)(a1 + 24), 8u) >= 0
    && *(_QWORD *)(a1 + 24) )
  {
    TtmpCalloutArmWatchdog(a1, *a2, v13, a5);
  }
LABEL_20:
  ExReleaseResourceLite(&TtmpSessionLock);
  KeLeaveCriticalRegion();
  CalloutTagFromCalloutType = TtmpGetCalloutTagFromCalloutType(a4);
  TtmiLogCalloutStart(*(unsigned int *)(a3 + 16), *(_QWORD *)(a3 + 24), CalloutTagFromCalloutType, a6);
  result = MEMORY[0xFFFFF78000000008];
  *(_QWORD *)(a1 + 32) = MEMORY[0xFFFFF78000000008];
  return result;
}
