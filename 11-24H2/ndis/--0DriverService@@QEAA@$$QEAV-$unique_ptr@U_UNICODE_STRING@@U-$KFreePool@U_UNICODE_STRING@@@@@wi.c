/*
 * XREFs of ??0DriverService@@QEAA@$$QEAV?$unique_ptr@U_UNICODE_STRING@@U?$KFreePool@U_UNICODE_STRING@@@@@wistd@@@Z @ 0x14014B424
 * Callers:
 *     ??0KModule@@QEAA@AEBU_GUID@@$$QEAV?$unique_ptr@U_UNICODE_STRING@@U?$KFreePool@U_UNICODE_STRING@@@@@wistd@@@Z @ 0x14014B890 (--0KModule@@QEAA@AEBU_GUID@@$$QEAV-$unique_ptr@U_UNICODE_STRING@@U-$KFreePool@U_UNICODE_STRING@@.c)
 * Callees:
 *     ??0?$unique_ptr@U_NDIS_PM_WOL_PATTERN@@U?$KFreePool@U_NDIS_PM_WOL_PATTERN@@@@@wistd@@QEAA@$$QEAV01@@Z @ 0x1400912A8 (--0-$unique_ptr@U_NDIS_PM_WOL_PATTERN@@U-$KFreePool@U_NDIS_PM_WOL_PATTERN@@@@@wistd@@QEAA@$$QEAV.c)
 */

__int64 __fastcall DriverService::DriverService(_QWORD *a1, __int64 *a2)
{
  __int64 v2; // rcx
  __int64 result; // rax

  wistd::unique_ptr<_NDIS_PM_WOL_PATTERN,KFreePool<_NDIS_PM_WOL_PATTERN>>::unique_ptr<_NDIS_PM_WOL_PATTERN,KFreePool<_NDIS_PM_WOL_PATTERN>>(
    a1,
    a2);
  result = v2;
  *(_QWORD *)(v2 + 8) = 0LL;
  *(_DWORD *)(v2 + 16) = 0;
  *(_QWORD *)(v2 + 24) = 0LL;
  *(_QWORD *)(v2 + 32) = 0LL;
  *(_QWORD *)(v2 + 40) = 0LL;
  return result;
}
