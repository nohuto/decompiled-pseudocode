/*
 * XREFs of PopPowerRequestInitialize @ 0x140C2FFAC
 * Callers:
 *     PoInitSystem @ 0x140C63AE4 (PoInitSystem.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     ObCreateObjectType @ 0x1406F96E0 (ObCreateObjectType.c)
 *     PopInitializeTimer @ 0x1407476B8 (PopInitializeTimer.c)
 *     PopInitializeWorkItem @ 0x140747708 (PopInitializeWorkItem.c)
 *     TtmIsEnabled @ 0x1409A2438 (TtmIsEnabled.c)
 *     PopPowerRequestStatsInitialize @ 0x140C359C4 (PopPowerRequestStatsInitialize.c)
 */

__int64 PopPowerRequestInitialize()
{
  __int64 result; // rax
  __int64 v1; // r8
  char *v2; // rcx
  __int64 v3; // rdx
  _QWORD *v4; // rax
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-49h] BYREF
  __int16 v6; // [rsp+40h] [rbp-39h] BYREF
  char v7; // [rsp+42h] [rbp-37h]
  int v8; // [rsp+48h] [rbp-31h]
  __int128 v9; // [rsp+4Ch] [rbp-2Dh]
  int v10; // [rsp+5Ch] [rbp-1Dh]
  int v11; // [rsp+64h] [rbp-15h]
  int v12; // [rsp+6Ch] [rbp-Dh]
  void (__fastcall *v13)(__int64, _BYTE *, __int64, __int64); // [rsp+80h] [rbp+7h]
  void (__fastcall *v14)(unsigned int *); // [rsp+88h] [rbp+Fh]

  DestinationString = 0LL;
  memset_0(&v6, 0, 0x78uLL);
  RtlInitUnicodeString(&DestinationString, L"PowerRequest");
  v7 |= 0x14u;
  v13 = PopPowerRequestClose;
  v6 = 120;
  v14 = PopPowerRequestDelete;
  v11 = 512;
  v12 = 168;
  v8 = 402;
  v9 = PopPowerRequestMapping;
  v10 = 2031616;
  result = ObCreateObjectType(&DestinationString, &v6, 0LL, (__int64)&PopPowerRequestObjectType);
  if ( (int)result >= 0 )
  {
    qword_140F0E4A8 = 0LL;
    PopPowerRequestLock = 0LL;
    PopPowerRequestSpinLock = 0LL;
    PopInitializeWorkItem(
      (__int64)&PopPowerRequestUpdateWorkItem,
      (__int64)PopPowerRequestCallbackWorker,
      (__int64)&PopPowerRequestUpdateQueue);
    qword_140F0E478 = v1;
    PopPowerRequestUpdateQueue = v1;
    qword_140F0E498 = (__int64)&PopPowerRequestObjectList;
    PopPowerRequestObjectList = &PopPowerRequestObjectList;
    memset_0(&PopPowerRequestTable, 0, sizeof(PopPowerRequestTable));
    PopPowerRequestTable.TableContext = 0LL;
    PopPowerRequestTable.CompareRoutine = (_RTL_GENERIC_COMPARE_RESULTS (__fastcall *)(_RTL_AVL_TABLE *, void *, void *))PopPowerRequestTableCompare;
    v2 = (char *)&unk_140E019B9;
    PopPowerRequestTable.BalancedRoot.Parent = (_RTL_BALANCED_LINKS *)&PopPowerRequestTable;
    PopPowerRequestTable.AllocateRoutine = (void *(__fastcall *)(_RTL_AVL_TABLE *, unsigned int))PopPowerRequestTableAllocate;
    v3 = 6LL;
    PopPowerRequestTable.FreeRoutine = (void (__fastcall *)(_RTL_AVL_TABLE *, void *))PopPowerRequestTableFree;
    do
    {
      *(_WORD *)(v2 - 1) = 0;
      v4 = v2 + 7;
      v2[1] = 6;
      *(_DWORD *)(v2 + 3) = 1;
      *(_QWORD *)(v2 + 15) = v2 + 7;
      v2 += 48;
      *v4 = v4;
      --v3;
    }
    while ( v3 );
    PopExecutionRequiredContext = 0LL;
    PopInitializeTimer(
      (__int64)&PopPowerRequestExecutionRequiredTimeoutTimer,
      (__int64)PopPowerRequestExecutionRequiredTimeoutCallback,
      0LL,
      (__int64)PopPowerRequestExecutionRequiredTimeoutWorker,
      0LL);
    PopInitializeTimer(
      (__int64)&PopPowerRequestDebounceTimer,
      (__int64)PopPowerRequestDebounceTimerCallback,
      0LL,
      (__int64)PopPowerRequestDebounceTimerWorker,
      0LL);
    PopPowerRequestStatsInitialize();
    if ( TtmIsEnabled() )
      PopPowerRequestGlobalOverrideMask = 1;
    return 0LL;
  }
  return result;
}
