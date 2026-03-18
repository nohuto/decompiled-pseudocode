/*
 * XREFs of IopTraceCrashDumpDisabledOnBoot @ 0x1407053FC
 * Callers:
 *     IoInitSystemPreDrivers @ 0x140C0996C (IoInitSystemPreDrivers.c)
 * Callees:
 *     EtwWrite @ 0x140257AF0 (EtwWrite.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1404265C0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x14042F500 (_tlgKeywordOn.c)
 *     IopDumpIsTracingEnabled @ 0x1404F8514 (IopDumpIsTracingEnabled.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 */

char IopTraceCrashDumpDisabledOnBoot()
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
    UserData.Ptr = (ULONGLONG)&AllowCrashDump;
    UserData.Size = 4;
    result = EtwWrite(IopDumpEtwRegHandle, &DUMP_EVENT_CRASHDUMP_DISABLED_ON_BOOT_BY_POLICY, 0LL, 1u, &UserData);
  }
  if ( (unsigned int)dword_140E06DC8 > 5 )
  {
    result = tlgKeywordOn((__int64)&dword_140E06DC8, 0x400000000000LL);
    if ( result )
    {
      v7 = 0;
      v10 = 0;
      v5 = &v2;
      v1 = AllowCrashDump;
      v2 = 0x1000000LL;
      v8 = &v1;
      v6 = 8;
      v9 = 1;
      return tlgWriteTransfer_EtwWriteTransfer(
               (__int64)&dword_140E06DC8,
               (unsigned __int8 *)byte_140044DD5,
               0LL,
               0LL,
               4u,
               &v4);
    }
  }
  return result;
}
