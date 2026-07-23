/*
 * XREFs of CarEtwRegister @ 0x140613F84
 * Callers:
 *     CarInitLogging @ 0x140614660 (CarInitLogging.c)
 * Callees:
 *     _tlgCreate1Sz_wchar_t @ 0x1402B92A8 (_tlgCreate1Sz_wchar_t.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402B92F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x14041A970 (_tlgKeywordOn.c)
 *     McGenEventRegister_EtwRegister @ 0x14057ABE4 (McGenEventRegister_EtwRegister.c)
 *     CarTipLogDriverLoad @ 0x140614870 (CarTipLogDriverLoad.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x1409EA0B8 (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 */

NTSTATUS CarEtwRegister()
{
  __int64 v0; // rdx
  NTSTATUS result; // eax
  NTSTATUS v2; // ebx
  unsigned int v3; // r8d
  __int64 v4; // r10
  int v5; // r10d
  int v6; // [rsp+30h] [rbp-69h] BYREF
  int v7; // [rsp+34h] [rbp-65h] BYREF
  int v8; // [rsp+38h] [rbp-61h] BYREF
  int v9; // [rsp+3Ch] [rbp-5Dh] BYREF
  __int64 v10; // [rsp+40h] [rbp-59h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v11; // [rsp+50h] [rbp-49h] BYREF
  int *v12; // [rsp+70h] [rbp-29h]
  __int64 v13; // [rsp+78h] [rbp-21h]
  __int64 *v14; // [rsp+80h] [rbp-19h]
  __int64 v15; // [rsp+88h] [rbp-11h]
  _BYTE v16[16]; // [rsp+90h] [rbp-9h] BYREF
  _BYTE v17[16]; // [rsp+A0h] [rbp+7h] BYREF
  int *v18; // [rsp+B0h] [rbp+17h]
  __int64 v19; // [rsp+B8h] [rbp+1Fh]
  int *v20; // [rsp+C0h] [rbp+27h]
  __int64 v21; // [rsp+C8h] [rbp+2Fh]
  int *v22; // [rsp+D0h] [rbp+37h]
  __int64 v23; // [rsp+D8h] [rbp+3Fh]

  TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(&dword_140E09070, 0LL, 0LL);
  result = McGenEventRegister_EtwRegister((const GUID *)EtwProvider, v0, EtwProvider_Context, EtwProvider_Context);
  v2 = result;
  if ( result >= 0 )
  {
    if ( dword_140E09070
      && tlgKeywordOn((__int64)&dword_140E09070, 0x800000000000LL)
      && v3 > 5
      && tlgKeywordOn((__int64)&dword_140E09070, 0x400000000000LL) )
    {
      v6 = CarTipTag;
      v13 = 4LL;
      v12 = &v6;
      v14 = &v10;
      v10 = v4;
      v15 = 8LL;
      tlgCreate1Sz_wchar_t((__int64)v16, CarDrivers);
      tlgCreate1Sz_wchar_t((__int64)v17, L"NA");
      v7 = v5;
      v18 = &v7;
      v8 = CarXdvOptions;
      v19 = 4LL;
      v20 = &v8;
      v9 = CarRuleClasses;
      v22 = &v9;
      v21 = 4LL;
      v23 = 4LL;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_140E09070,
        (unsigned __int8 *)&byte_1400522B7,
        0LL,
        0LL,
        9u,
        &v11);
    }
    CarTipLogDriverLoad();
    return v2;
  }
  return result;
}
