/*
 * XREFs of ??$DxgkSafeConvertUnicodeToAnsi@$03@@YAXAEAY03$$CBGAEAY03D@Z @ 0x1401874B0
 * Callers:
 *     ?_GetMonitorDiagInfo@DXGMONITOR@@QEBAJPEAU_DXGK_DIAG_MONITOR_MGR_EXTRA_INFO@@@Z @ 0x140353E40 (-_GetMonitorDiagInfo@DXGMONITOR@@QEBAJPEAU_DXGK_DIAG_MONITOR_MGR_EXTRA_INFO@@@Z.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall DxgkSafeConvertUnicodeToAnsi<4>(PCWSTR SourceString, PCSZ a2)
{
  struct _STRING v4; // [rsp+20h] [rbp-28h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF

  *a2 = 0;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, SourceString);
  v4 = 0LL;
  RtlInitAnsiString(&v4, a2);
  v4.MaximumLength = 4;
  return RtlUnicodeStringToAnsiString(&v4, &DestinationString, 0);
}
