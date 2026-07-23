/*
 * XREFs of PnpTraceSecureDeviceEnumeration @ 0x140982060
 * Callers:
 *     PiProcessDriversLoadedOnSecureDevice @ 0x140981CA0 (PiProcessDriversLoadedOnSecureDevice.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402B92F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x14041A970 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

void PnpTraceSecureDeviceEnumeration()
{
  int v0; // r8d
  __int64 v1; // r9
  int v2; // r10d
  int v3; // [rsp+30h] [rbp-39h] BYREF
  int v4; // [rsp+34h] [rbp-35h] BYREF
  __int64 v5; // [rsp+38h] [rbp-31h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v6; // [rsp+40h] [rbp-29h] BYREF
  __int64 *v7; // [rsp+60h] [rbp-9h]
  __int64 v8; // [rsp+68h] [rbp-1h]
  _DWORD *v9; // [rsp+70h] [rbp+7h]
  __int64 v10; // [rsp+78h] [rbp+Fh]
  __int64 v11; // [rsp+80h] [rbp+17h]
  _DWORD v12[2]; // [rsp+88h] [rbp+1Fh] BYREF
  int *v13; // [rsp+90h] [rbp+27h]
  __int64 v14; // [rsp+98h] [rbp+2Fh]
  int *v15; // [rsp+A0h] [rbp+37h]
  __int64 v16; // [rsp+A8h] [rbp+3Fh]

  if ( (unsigned int)dword_140E06FA8 > 5 && tlgKeywordOn((__int64)&dword_140E06FA8, 0x400000000000LL) )
  {
    v4 = v0;
    v7 = &v5;
    v5 = 2048LL;
    v9 = v12;
    v11 = *(_QWORD *)(v1 + 48);
    v12[0] = *(unsigned __int16 *)(v1 + 40);
    v13 = &v3;
    v15 = &v4;
    v8 = 8LL;
    v10 = 2LL;
    v12[1] = 0;
    v3 = v2;
    v14 = 4LL;
    v16 = 4LL;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140E06FA8, (unsigned __int8 *)&dword_1400470EC, 0LL, 0LL, 7u, &v6);
  }
}
