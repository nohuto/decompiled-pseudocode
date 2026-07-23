/*
 * XREFs of IopDumpTraceForceDumpDisabled @ 0x14070E9A8
 * Callers:
 *     IoInitSystemPreDrivers @ 0x140C1CA4C (IoInitSystemPreDrivers.c)
 *     IopInitCrashDumpDuringSysInit @ 0x140C1E8F4 (IopInitCrashDumpDuringSysInit.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402B92F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     EtwWrite @ 0x14040FFB0 (EtwWrite.c)
 *     _tlgKeywordOn @ 0x14041A970 (_tlgKeywordOn.c)
 *     IopDumpIsTracingEnabled @ 0x1404F82A8 (IopDumpIsTracingEnabled.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

char IopDumpTraceForceDumpDisabled()
{
  char result; // al
  char v1; // [rsp+30h] [rbp-19h] BYREF
  __int64 v2; // [rsp+38h] [rbp-11h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-9h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v4; // [rsp+50h] [rbp+7h] BYREF
  __int64 *v5; // [rsp+70h] [rbp+27h]
  int v6; // [rsp+78h] [rbp+2Fh]
  int v7; // [rsp+7Ch] [rbp+33h]
  char *v8; // [rsp+80h] [rbp+37h]
  int v9; // [rsp+88h] [rbp+3Fh]
  int v10; // [rsp+8Ch] [rbp+43h]

  result = IopDumpIsTracingEnabled();
  if ( result )
  {
    UserData.Reserved = 0;
    UserData.Ptr = (ULONGLONG)&ForceDumpDisabled;
    UserData.Size = 4;
    result = EtwWrite(IopDumpEtwRegHandle, &DUMP_EVENT_FORCE_DUMP_DISABLED, 0LL, 1u, &UserData);
  }
  if ( (unsigned int)dword_140E06DC8 > 5 )
  {
    result = tlgKeywordOn((__int64)&dword_140E06DC8, 0x400000000000LL);
    if ( result )
    {
      v7 = 0;
      v10 = 0;
      v5 = &v2;
      v1 = ForceDumpDisabled;
      v2 = 0x1000000LL;
      v8 = &v1;
      v6 = 8;
      v9 = 1;
      return tlgWriteTransfer_EtwWriteTransfer(
               (__int64)&dword_140E06DC8,
               (unsigned __int8 *)&dword_1400457DC,
               0LL,
               0LL,
               4u,
               &v4);
    }
  }
  return result;
}
