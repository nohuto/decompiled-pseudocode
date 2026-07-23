/*
 * XREFs of TtmiLogDeviceSetInputWakeCapability @ 0x14076CE18
 * Callers:
 *     TtmiSetInputWakeCapability @ 0x140768E44 (TtmiSetInputWakeCapability.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402B92F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     PsGetSessionIdEx @ 0x14030CBE0 (PsGetSessionIdEx.c)
 *     _tlgKeywordOn @ 0x14041A970 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

char __fastcall TtmiLogDeviceSetInputWakeCapability(int a1, int a2, int a3)
{
  _UNKNOWN **v3; // rax
  int SessionId; // eax
  int v9; // [rsp+38h] [rbp-29h] BYREF
  int v10; // [rsp+3Ch] [rbp-25h] BYREF
  int v11; // [rsp+40h] [rbp-21h] BYREF
  int v12; // [rsp+44h] [rbp-1Dh] BYREF
  struct _EVENT_DATA_DESCRIPTOR v13; // [rsp+48h] [rbp-19h] BYREF
  int *v14; // [rsp+68h] [rbp+7h]
  int v15; // [rsp+70h] [rbp+Fh]
  int v16; // [rsp+74h] [rbp+13h]
  int *v17; // [rsp+78h] [rbp+17h]
  int v18; // [rsp+80h] [rbp+1Fh]
  int v19; // [rsp+84h] [rbp+23h]
  int *v20; // [rsp+88h] [rbp+27h]
  int v21; // [rsp+90h] [rbp+2Fh]
  int v22; // [rsp+94h] [rbp+33h]
  int *v23; // [rsp+98h] [rbp+37h]
  int v24; // [rsp+A0h] [rbp+3Fh]
  int v25; // [rsp+A4h] [rbp+43h]
  _UNKNOWN *retaddr; // [rsp+C0h] [rbp+5Fh] BYREF

  v3 = &retaddr;
  if ( (unsigned int)dword_140FD88C8 > 5 )
  {
    LOBYTE(v3) = tlgKeywordOn((__int64)&dword_140FD88C8, 1LL);
    if ( (_BYTE)v3 )
    {
      SessionId = PsGetSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
      v16 = 0;
      v19 = 0;
      v22 = 0;
      v25 = 0;
      v9 = SessionId;
      v14 = &v9;
      v17 = &v10;
      v20 = &v11;
      v23 = &v12;
      v15 = 4;
      v18 = 4;
      v21 = 4;
      v24 = 4;
      v10 = a1;
      v11 = a2;
      v12 = a3;
      LOBYTE(v3) = tlgWriteTransfer_EtwWriteTransfer(
                     (__int64)&dword_140FD88C8,
                     (unsigned __int8 *)byte_140050C4F,
                     0LL,
                     0LL,
                     6u,
                     &v13);
    }
  }
  return (char)v3;
}
