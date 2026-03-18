/*
 * XREFs of CarEtwRegister @ 0x140609A04
 * Callers:
 *     CarInitLogging @ 0x14060A0E0 (CarInitLogging.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1404265C0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgCreate1Sz_wchar_t @ 0x140426678 (_tlgCreate1Sz_wchar_t.c)
 *     _tlgKeywordOn @ 0x14042F500 (_tlgKeywordOn.c)
 *     McGenEventRegister_EtwRegister @ 0x14057A434 (McGenEventRegister_EtwRegister.c)
 *     CarTipLogDriverLoad @ 0x14060A2F0 (CarTipLogDriverLoad.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x1408B73B4 (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
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

  TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(&dword_140E08F20, 0LL, 0LL);
  result = McGenEventRegister_EtwRegister((const GUID *)EtwProvider, v0, EtwProvider_Context, EtwProvider_Context);
  v2 = result;
  if ( result >= 0 )
  {
    if ( dword_140E08F20
      && tlgKeywordOn((__int64)&dword_140E08F20, 0x800000000000LL)
      && v3 > 5
      && tlgKeywordOn((__int64)&dword_140E08F20, 0x400000000000LL) )
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
        (__int64)&dword_140E08F20,
        (unsigned __int8 *)word_140050332,
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
