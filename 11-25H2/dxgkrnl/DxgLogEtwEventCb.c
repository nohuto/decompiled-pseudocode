/*
 * XREFs of DxgLogEtwEventCb @ 0x140070260
 * Callers:
 *     <none>
 * Callees:
 *     DpiGetDxgAdapter @ 0x140016C90 (DpiGetDxgAdapter.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     McTemplateK0juhbr2_EtwWriteTransfer @ 0x140070494 (McTemplateK0juhbr2_EtwWriteTransfer.c)
 */

int __fastcall DxgLogEtwEventCb(_QWORD *a1, int a2, unsigned __int16 a3, __int64 a4)
{
  __int64 v5; // rax
  __int64 v6; // rdi
  const wchar_t *v7; // rdi
  __int64 DxgAdapter; // rax

  v5 = *a1 - *(_QWORD *)&GUID_DXGKDDI_AZURE_TRIAGE_EVENT.Data1;
  v6 = a3;
  if ( *a1 == *(_QWORD *)&GUID_DXGKDDI_AZURE_TRIAGE_EVENT.Data1 )
    v5 = a1[1] - *(_QWORD *)GUID_DXGKDDI_AZURE_TRIAGE_EVENT.Data4;
  if ( v5 )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
      LODWORD(v5) = McTemplateK0juhbr2_EtwWriteTransfer((_DWORD)a1, a2, a3, (_DWORD)a1, a2, a3, a4);
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
        262146,
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
    LODWORD(v5) = DxgkLogInternalTriageEvent(
                    DxgAdapter,
                    *(_DWORD *)(a4 + 8),
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
      262146,
      0xFFFFFFFFLL,
      L"EventBufferSize == sizeof(DXGKDDICB_PARTITIONING_EVENT_NOTIFICATION)",
      294LL,
      0LL,
      0LL,
      0LL,
      0LL);
    WdLogSingleEntry1(2LL, v6);
    WdLogGlobalForLineNumber = 298;
    LODWORD(v5) = DxgkLogInternalTriageEvent(
                    0LL,
                    0x40000,
                    0xFFFFFFFFLL,
                    L"Driver requested partitioning event with wrong event size: %d",
                    v6,
                    0LL,
                    0LL,
                    0LL,
                    0LL);
  }
  return v5;
}
