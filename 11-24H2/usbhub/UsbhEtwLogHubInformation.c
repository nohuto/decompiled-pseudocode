/*
 * XREFs of UsbhEtwLogHubInformation @ 0x14002F554
 * Callers:
 *     UsbhEtwRundown @ 0x14002DB8C (UsbhEtwRundown.c)
 *     UsbhSetFdoPnpState @ 0x140050CB4 (UsbhSetFdoPnpState.c)
 * Callees:
 *     UsbhEtwWrite @ 0x14000D0C0 (UsbhEtwWrite.c)
 *     UsbhEtwGetHubInfo @ 0x140030E60 (UsbhEtwGetHubInfo.c)
 *     __security_check_cookie @ 0x140060F40 (__security_check_cookie.c)
 */

NTSTATUS __fastcall UsbhEtwLogHubInformation(__int64 a1, __int64 a2, __int64 a3)
{
  NTSTATUS result; // eax
  __int64 v4; // r9
  __int64 v5; // rcx
  PCEVENT_DESCRIPTOR v6; // r10
  _DWORD v7[2]; // [rsp+60h] [rbp+7h] BYREF
  int v8; // [rsp+68h] [rbp+Fh] BYREF
  __int16 v9; // [rsp+6Ch] [rbp+13h]
  __int16 v10; // [rsp+6Eh] [rbp+15h]
  __int16 v11; // [rsp+70h] [rbp+17h]
  __int16 v12; // [rsp+72h] [rbp+19h]
  _OWORD v13[2]; // [rsp+78h] [rbp+1Fh] BYREF
  int v14; // [rsp+98h] [rbp+3Fh]

  result = 0;
  v14 = 0;
  memset(v13, 0, sizeof(v13));
  if ( dword_14006F6D0 )
  {
    v8 = *(_DWORD *)(a1 + 5192);
    v9 = *(_WORD *)(a1 + 5196);
    v10 = *(_DWORD *)(a1 + 5200);
    v11 = *(_WORD *)(a1 + 5228);
    v12 = *(_WORD *)(a1 + 5230);
    UsbhEtwGetHubInfo(a1, v13, a3, a1);
    LODWORD(v5) = *(_DWORD *)(v5 + 4208);
    v7[1] = *(_DWORD *)(v4 + 3124);
    v7[0] = v5;
    return UsbhEtwWrite(v6, 0LL, &v8, 12LL, v13, 36LL, v7, 8LL, v4 + 2936, 71LL, 0LL);
  }
  return result;
}
