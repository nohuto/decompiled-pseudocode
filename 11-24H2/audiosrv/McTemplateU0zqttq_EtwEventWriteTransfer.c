/*
 * XREFs of McTemplateU0zqttq_EtwEventWriteTransfer @ 0x180046CC0
 * Callers:
 *     ?CreateStream@CVADServer@@UEAAJPEAUIAudioProcess@@W4SYSTEM_AUDIO_STREAM_TYPE@@_J2PEBGPEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x180080980 (-CreateStream@CVADServer@@UEAAJPEAUIAudioProcess@@W4SYSTEM_AUDIO_STREAM_TYPE@@_J2PEBGPEAUSYSTEM_.c)
 *     AudioServerGetMixFormat @ 0x1800827D0 (AudioServerGetMixFormat.c)
 *     AudioServerIsFormatSupported @ 0x180083480 (AudioServerIsFormatSupported.c)
 * Callees:
 *     McGenEventWrite_EtwEventWriteTransfer @ 0x180046DBC (McGenEventWrite_EtwEventWriteTransfer.c)
 *     __security_check_cookie @ 0x1800A3DA0 (__security_check_cookie.c)
 */

__int64 __fastcall McTemplateU0zqttq_EtwEventWriteTransfer(
        __int64 a1,
        int a2,
        const wchar_t *a3,
        int a4,
        char a5,
        char a6,
        char a7)
{
  __int64 v7; // rax
  int v9; // eax
  _BYTE v11[16]; // [rsp+30h] [rbp-78h] BYREF
  const wchar_t *v12; // [rsp+40h] [rbp-68h]
  int v13; // [rsp+48h] [rbp-60h]
  int v14; // [rsp+4Ch] [rbp-5Ch]
  int *v15; // [rsp+50h] [rbp-58h]
  __int64 v16; // [rsp+58h] [rbp-50h]
  char *v17; // [rsp+60h] [rbp-48h]
  __int64 v18; // [rsp+68h] [rbp-40h]
  char *v19; // [rsp+70h] [rbp-38h]
  __int64 v20; // [rsp+78h] [rbp-30h]
  char *v21; // [rsp+80h] [rbp-28h]
  __int64 v22; // [rsp+88h] [rbp-20h]
  int v23; // [rsp+C8h] [rbp+20h] BYREF

  v23 = a4;
  if ( a3 )
  {
    v7 = -1LL;
    while ( a3[++v7] != 0 )
      ;
    v9 = 2 * v7 + 2;
  }
  else
  {
    v9 = 10;
  }
  v13 = v9;
  v16 = 4LL;
  v15 = &v23;
  v18 = 4LL;
  v17 = &a5;
  if ( !a3 )
    a3 = L"NULL";
  v12 = a3;
  v14 = 0;
  v19 = &a6;
  v21 = &a7;
  v20 = 4LL;
  v22 = 4LL;
  return McGenEventWrite_EtwEventWriteTransfer(0, a2, (_DWORD)a3, 6, (__int64)v11);
}
