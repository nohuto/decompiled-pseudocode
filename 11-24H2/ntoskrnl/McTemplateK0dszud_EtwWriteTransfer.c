/*
 * XREFs of McTemplateK0dszud_EtwWriteTransfer @ 0x1406149AC
 * Callers:
 *     CarEtwWriteBugCheckEvent @ 0x140614118 (CarEtwWriteBugCheckEvent.c)
 *     CarEtwWriteLiveDumpEvent @ 0x140614288 (CarEtwWriteLiveDumpEvent.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1402B8E28 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0dszud_EtwWriteTransfer(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        const char *a5,
        const wchar_t *a6,
        char a7,
        char a8)
{
  const char *v8; // rcx
  const wchar_t *v9; // r8
  __int64 v10; // rdx
  __int64 v11; // rax
  int v12; // eax
  int v13; // edx
  struct _EVENT_DATA_DESCRIPTOR v15; // [rsp+30h] [rbp-39h] BYREF
  int *v16; // [rsp+40h] [rbp-29h]
  __int64 v17; // [rsp+48h] [rbp-21h]
  const char *v18; // [rsp+50h] [rbp-19h]
  int v19; // [rsp+58h] [rbp-11h]
  int v20; // [rsp+5Ch] [rbp-Dh]
  const wchar_t *v21; // [rsp+60h] [rbp-9h]
  int v22; // [rsp+68h] [rbp-1h]
  int v23; // [rsp+6Ch] [rbp+3h]
  char *v24; // [rsp+70h] [rbp+7h]
  __int64 v25; // [rsp+78h] [rbp+Fh]
  char *v26; // [rsp+80h] [rbp+17h]
  __int64 v27; // [rsp+88h] [rbp+1Fh]
  int v28; // [rsp+C8h] [rbp+5Fh] BYREF

  v28 = a4;
  v8 = a5;
  v9 = a6;
  v10 = -1LL;
  v16 = &v28;
  v17 = 4LL;
  if ( a5 )
  {
    v11 = -1LL;
    do
      ++v11;
    while ( a5[v11] );
    v12 = v11 + 1;
  }
  else
  {
    v12 = 5;
  }
  v19 = v12;
  v20 = 0;
  if ( !a5 )
    v8 = "NULL";
  v18 = v8;
  if ( a6 )
  {
    do
      ++v10;
    while ( a6[v10] );
    v13 = 2 * v10 + 2;
  }
  else
  {
    v13 = 10;
  }
  v22 = v13;
  v23 = 0;
  if ( !a6 )
    v9 = L"NULL";
  v25 = 1LL;
  v21 = v9;
  v24 = &a7;
  v27 = 4LL;
  v26 = &a8;
  return McGenEventWrite_EtwWriteTransfer(
           EtwProvider_Context,
           (const EVENT_DESCRIPTOR *)BugCheckEvent,
           (const GUID *)EtwProvider,
           6u,
           &v15);
}
