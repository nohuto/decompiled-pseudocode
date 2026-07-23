/*
 * XREFs of EtwTraceLpacAccessFailure @ 0x1409EAD24
 * Callers:
 *     SepLogLpacAccessFailure @ 0x140231454 (SepLogLpacAccessFailure.c)
 * Callees:
 *     KeQuerySystemTimePrecise @ 0x14036D140 (KeQuerySystemTimePrecise.c)
 *     EtwWrite @ 0x14040FFB0 (EtwWrite.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

NTSTATUS __fastcall EtwTraceLpacAccessFailure(int a1)
{
  NTSTATUS result; // eax
  __int64 v2; // [rsp+30h] [rbp-30h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+38h] [rbp-28h] BYREF
  int *v4; // [rsp+48h] [rbp-18h]
  int v5; // [rsp+50h] [rbp-10h]
  int v6; // [rsp+54h] [rbp-Ch]
  int v7; // [rsp+70h] [rbp+10h] BYREF

  v7 = a1;
  v2 = 0LL;
  if ( EtwLpacProvRegHandle )
  {
    KeQuerySystemTimePrecise(&v2);
    UserData.Reserved = 0;
    v6 = 0;
    UserData.Ptr = (ULONGLONG)&v2;
    UserData.Size = 8;
    v4 = &v7;
    v5 = 4;
    return EtwWrite(EtwLpacProvRegHandle, &LpacAccessFailureLog, 0LL, 2u, &UserData);
  }
  return result;
}
