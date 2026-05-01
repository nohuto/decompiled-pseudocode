/*
 * XREFs of McTemplateU0zzzq_EventWriteTransfer @ 0x1804E8790
 * Callers:
 *     ?SwitchToAppByIdWithArguments@CSwitchController@@UEAAJPEBG00PEBUSWITCH_TO_APP_OPTIONS@@@Z @ 0x1801CB650 (-SwitchToAppByIdWithArguments@CSwitchController@@UEAAJPEBG00PEBUSWITCH_TO_APP_OPTIONS@@@Z.c)
 * Callees:
 *     McGenEventWrite_EventWriteTransfer @ 0x18008A004 (McGenEventWrite_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 */

ULONG __fastcall McTemplateU0zzzq_EventWriteTransfer(
        __int64 a1,
        __int64 a2,
        const wchar_t *a3,
        const wchar_t *a4,
        const wchar_t *a5,
        char a6)
{
  const wchar_t *v6; // r10
  __int64 v7; // rax
  int v8; // edx
  __int64 v9; // rcx
  int v10; // ecx
  __int64 v11; // rcx
  int v12; // ecx
  bool v13; // zf
  struct _EVENT_DATA_DESCRIPTOR v15; // [rsp+30h] [rbp-19h] BYREF
  const wchar_t *v16; // [rsp+40h] [rbp-9h]
  int v17; // [rsp+48h] [rbp-1h]
  int v18; // [rsp+4Ch] [rbp+3h]
  const wchar_t *v19; // [rsp+50h] [rbp+7h]
  int v20; // [rsp+58h] [rbp+Fh]
  int v21; // [rsp+5Ch] [rbp+13h]
  const wchar_t *v22; // [rsp+60h] [rbp+17h]
  int v23; // [rsp+68h] [rbp+1Fh]
  int v24; // [rsp+6Ch] [rbp+23h]
  char *v25; // [rsp+70h] [rbp+27h]
  __int64 v26; // [rsp+78h] [rbp+2Fh]

  v6 = a5;
  v7 = -1LL;
  v8 = 10;
  if ( a3 )
  {
    v9 = -1LL;
    do
      ++v9;
    while ( a3[v9] );
    v10 = 2 * v9 + 2;
  }
  else
  {
    v10 = 10;
  }
  v17 = v10;
  v18 = 0;
  if ( !a3 )
    a3 = L"NULL";
  v16 = a3;
  if ( a4 )
  {
    v11 = -1LL;
    do
      ++v11;
    while ( a4[v11] );
    v12 = 2 * v11 + 2;
  }
  else
  {
    v12 = 10;
  }
  v20 = v12;
  v21 = 0;
  if ( !a4 )
    a4 = L"NULL";
  v19 = a4;
  v13 = a5 == 0LL;
  if ( a5 )
  {
    do
      ++v7;
    while ( a5[v7] );
    v8 = 2 * v7 + 2;
    v13 = a5 == 0LL;
  }
  v23 = v8;
  v25 = &a6;
  v24 = 0;
  if ( v13 )
    v6 = L"NULL";
  v22 = v6;
  v26 = 4LL;
  return McGenEventWrite_EventWriteTransfer(
           MICROSOFT_TWINUI_PUBLISHER_Context,
           &SwitchToAppByIdWithArguments_Stop,
           (__int64)a3,
           5u,
           &v15);
}
