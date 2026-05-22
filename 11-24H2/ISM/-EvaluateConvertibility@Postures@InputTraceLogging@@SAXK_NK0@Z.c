/*
 * XREFs of ?EvaluateConvertibility@Postures@InputTraceLogging@@SAXK_NK0@Z @ 0x1801136C4
 * Callers:
 *     ?QueryDeviceConvertibility@DevicePostureHelpers@@YA?AW4DeviceConvertibility@1@W4QueryOptions@1@@Z @ 0x180113F70 (-QueryDeviceConvertibility@DevicePostureHelpers@@YA-AW4DeviceConvertibility@1@W4QueryOptions@1@@.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180011720 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?Provider@InputTraceLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x18001AFF0 (-Provider@InputTraceLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     _tlgKeywordOn @ 0x180031A40 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x18009D650 (__security_check_cookie.c)
 */

void __fastcall InputTraceLogging::Postures::EvaluateConvertibility(int a1, char a2, int a3, char a4)
{
  const struct _tlgProvider_t *v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // r9
  char v11; // [rsp+38h] [rbp-29h] BYREF
  char v12; // [rsp+39h] [rbp-28h] BYREF
  int v13; // [rsp+3Ch] [rbp-25h] BYREF
  int v14; // [rsp+40h] [rbp-21h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v15; // [rsp+48h] [rbp-19h] BYREF
  int *v16; // [rsp+68h] [rbp+7h]
  __int64 v17; // [rsp+70h] [rbp+Fh]
  char *v18; // [rsp+78h] [rbp+17h]
  __int64 v19; // [rsp+80h] [rbp+1Fh]
  int *v20; // [rsp+88h] [rbp+27h]
  __int64 v21; // [rsp+90h] [rbp+2Fh]
  char *v22; // [rsp+98h] [rbp+37h]
  __int64 v23; // [rsp+A0h] [rbp+3Fh]

  v8 = InputTraceLogging::Provider();
  if ( *(_DWORD *)v8 > 4u && tlgKeywordOn((__int64)v8, 2LL) )
  {
    v21 = v10;
    v22 = &v11;
    v17 = v10;
    v20 = &v13;
    v11 = a4;
    v18 = &v12;
    v13 = a3;
    v16 = &v14;
    v12 = a2;
    v14 = a1;
    v23 = 1LL;
    v19 = 1LL;
    tlgWriteTransfer_EventWriteTransfer(v9, byte_18021547E, 0LL, 0LL, 6u, &v15);
  }
}
