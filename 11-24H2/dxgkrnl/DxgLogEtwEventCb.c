/*
 * XREFs of DxgLogEtwEventCb @ 0x140070BE0
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     DpiGetDxgAdapter @ 0x1400107F0 (DpiGetDxgAdapter.c)
 *     McTemplateK0juhbr2_EtwWriteTransfer @ 0x140070E14 (McTemplateK0juhbr2_EtwWriteTransfer.c)
 */

__int64 __fastcall DxgLogEtwEventCb(_QWORD *a1, int a2, unsigned __int16 a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v6; // rdi
  const wchar_t *v7; // rdi
  __int64 DxgAdapter; // rax

  result = *a1 - *(_QWORD *)&GUID_DXGKDDI_AZURE_TRIAGE_EVENT.Data1;
  v6 = a3;
  if ( *a1 == *(_QWORD *)&GUID_DXGKDDI_AZURE_TRIAGE_EVENT.Data1 )
    result = a1[1] - *(_QWORD *)GUID_DXGKDDI_AZURE_TRIAGE_EVENT.Data4;
  if ( result )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
      return McTemplateK0juhbr2_EtwWriteTransfer((_DWORD)a1, a2, a3, (_DWORD)a1, a2, a3, a4);
  }
  else if ( a3 == 568 )
  {
    v7 = (const wchar_t *)(a4 + 16);
    if ( a4 != -16 && wcsnlen((const wchar_t *)(a4 + 16), 0xFFuLL) >= 0xFF )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 304;
      DxgkLogInternalTriageEvent(
        0LL,
        262146LL,
        0xFFFFFFFFLL,
        L"wcsnlen_s(eventNotification->EventDescription, DXGKDDI_PARTITION_EVENT_DESCRIPTION_MAX) < DXGKDDI_PARTITION_EVEN"
         "T_DESCRIPTION_MAX",
        304LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    DxgAdapter = DpiGetDxgAdapter(*(_QWORD *)a4);
    return DxgkLogInternalTriageEvent(
             DxgAdapter,
             *(unsigned int *)(a4 + 8),
             *(unsigned int *)(a4 + 12),
             v7,
             *(_QWORD *)(a4 + 528),
             *(_QWORD *)(a4 + 536),
             *(_QWORD *)(a4 + 544),
             *(_QWORD *)(a4 + 552),
             *(_QWORD *)(a4 + 560));
  }
  else
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 294;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"EventBufferSize == sizeof(DXGKDDICB_PARTITIONING_EVENT_NOTIFICATION)",
      294LL,
      0LL,
      0LL,
      0LL,
      0LL);
    WdLogSingleEntry1(2LL, v6);
    WdLogGlobalForLineNumber = 298;
    return DxgkLogInternalTriageEvent(
             0LL,
             0x40000LL,
             0xFFFFFFFFLL,
             L"Driver requested partitioning event with wrong event size: %d",
             v6,
             0LL,
             0LL,
             0LL,
             0LL);
  }
  return result;
}
