/*
 * XREFs of WdipSemWriteTimeoutEvent @ 0x140A3DE1C
 * Callers:
 *     WdipSemLogTimeoutInformation @ 0x140A3DD3C (WdipSemLogTimeoutInformation.c)
 * Callees:
 *     EtwEventEnabled @ 0x1402D1300 (EtwEventEnabled.c)
 *     EtwWrite @ 0x14040FFB0 (EtwWrite.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

NTSTATUS __fastcall WdipSemWriteTimeoutEvent(ULONGLONG a1, __int16 a2, const GUID *a3)
{
  REGHANDLE v4; // rdi
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-38h] BYREF
  __int16 *v7; // [rsp+40h] [rbp-28h]
  int v8; // [rsp+48h] [rbp-20h]
  int v9; // [rsp+4Ch] [rbp-1Ch]
  __int16 v10; // [rsp+78h] [rbp+10h] BYREF

  v10 = a2;
  if ( !a1 || !a3 )
    return -1073741811;
  v4 = WdipSemRegHandle;
  UserData.Ptr = a1;
  UserData.Reserved = 0;
  UserData.Size = 16;
  v7 = &v10;
  v9 = 0;
  v8 = 2;
  if ( EtwEventEnabled(WdipSemRegHandle, &WDI_SEM_EVENT_SCENARIO_TIMEOUT) )
    return EtwWrite(v4, &WDI_SEM_EVENT_SCENARIO_TIMEOUT, a3, 2u, &UserData);
  else
    return -1073741816;
}
