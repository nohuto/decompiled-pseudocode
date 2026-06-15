/*
 * XREFs of McTemplateU0zqq_EventWriteTransfer @ 0x180043D38
 * Callers:
 *     ?OnStreamStarted@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@PEAUIAudioStreamInfo@@@Z @ 0x180002360 (-OnStreamStarted@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@PEAUIAudioStream.c)
 *     ?OnStreamStopped@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@PEAUIAudioStreamInfo@@@Z @ 0x180004B00 (-OnStreamStopped@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@PEAUIAudioStream.c)
 *     wil::details::lambda_call__lambda_fff9119fb840d357cf7d24802c9bd62a___::_lambda_call__lambda_fff9119fb840d357cf7d24802c9bd62a___ @ 0x18001DEC4 (wil--details--lambda_call__lambda_fff9119fb840d357cf7d24802c9bd62a___--_lambda_call__lambda_fff9.c)
 *     wil::details::lambda_call__lambda_74057df9902ed01acca6389457a5e2ac___::_lambda_call__lambda_74057df9902ed01acca6389457a5e2ac___ @ 0x18001F3C0 (wil--details--lambda_call__lambda_74057df9902ed01acca6389457a5e2ac___--_lambda_call__lambda_7405.c)
 * Callees:
 *     __security_check_cookie @ 0x180020100 (__security_check_cookie.c)
 *     McGenEventWrite_EventWriteTransfer @ 0x1800382BC (McGenEventWrite_EventWriteTransfer.c)
 */

ULONG __fastcall McTemplateU0zqq_EventWriteTransfer(
        __int64 a1,
        const EVENT_DESCRIPTOR *a2,
        const wchar_t *a3,
        int a4,
        char a5)
{
  __int64 v5; // rax
  int v6; // eax
  struct _EVENT_DATA_DESCRIPTOR v8; // [rsp+30h] [rbp-50h] BYREF
  const wchar_t *v9; // [rsp+40h] [rbp-40h]
  int v10; // [rsp+48h] [rbp-38h]
  int v11; // [rsp+4Ch] [rbp-34h]
  int *v12; // [rsp+50h] [rbp-30h]
  __int64 v13; // [rsp+58h] [rbp-28h]
  char *v14; // [rsp+60h] [rbp-20h]
  __int64 v15; // [rsp+68h] [rbp-18h]
  int v16; // [rsp+A8h] [rbp+28h] BYREF

  v16 = a4;
  if ( a3 )
  {
    v5 = -1LL;
    do
      ++v5;
    while ( a3[v5] );
    v6 = 2 * v5 + 2;
  }
  else
  {
    v6 = 10;
  }
  v10 = v6;
  v11 = 0;
  v13 = 4LL;
  v12 = &v16;
  v15 = 4LL;
  v14 = &a5;
  if ( !a3 )
    a3 = L"NULL";
  v9 = a3;
  return McGenEventWrite_EventWriteTransfer((__int64)L"NULL", a2, (__int64)a3, 4u, &v8);
}
