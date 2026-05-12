/*
 * XREFs of McTemplateK0zx_EtwWriteTransfer @ 0x140053848
 * Callers:
 *     RaidUnitCompleteRequest @ 0x14001F490 (RaidUnitCompleteRequest.c)
 *     TranslateToExtendedSrb @ 0x140027B60 (TranslateToExtendedSrb.c)
 *     RaUnitAsyncError @ 0x140029460 (RaUnitAsyncError.c)
 *     RaidUnitProcessBusyRequest @ 0x140031200 (RaidUnitProcessBusyRequest.c)
 *     RaidUnitCompleteResetRequest @ 0x14003C670 (RaidUnitCompleteResetRequest.c)
 *     RaUnitStartIo @ 0x14004E6F0 (RaUnitStartIo.c)
 *     RaUnitStartResetIo @ 0x14009942C (RaUnitStartResetIo.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x140024158 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0zx_EtwWriteTransfer(__int64 a1, __int64 a2, __int64 a3, const wchar_t *a4, char a5)
{
  __int64 v5; // rax
  int v6; // eax
  struct _EVENT_DATA_DESCRIPTOR v8; // [rsp+30h] [rbp-48h] BYREF
  const wchar_t *v9; // [rsp+40h] [rbp-38h]
  int v10; // [rsp+48h] [rbp-30h]
  int v11; // [rsp+4Ch] [rbp-2Ch]
  char *v12; // [rsp+50h] [rbp-28h]
  __int64 v13; // [rsp+58h] [rbp-20h]

  if ( a4 )
  {
    v5 = -1LL;
    do
      ++v5;
    while ( a4[v5] );
    v6 = 2 * v5 + 2;
  }
  else
  {
    v6 = 10;
  }
  v10 = v6;
  v11 = 0;
  if ( !a4 )
    a4 = L"NULL";
  v13 = 8LL;
  v9 = a4;
  v12 = &a5;
  return McGenEventWrite_EtwWriteTransfer((__int64)L"NULL", &EventOperationDuration, 0LL, 3u, &v8);
}
