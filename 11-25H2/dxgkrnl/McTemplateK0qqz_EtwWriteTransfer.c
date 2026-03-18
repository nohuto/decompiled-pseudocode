/*
 * XREFs of McTemplateK0qqz_EtwWriteTransfer @ 0x1400819FC
 * Callers:
 *     DpiMiracastTearDownAssociation @ 0x14007FF0C (DpiMiracastTearDownAssociation.c)
 *     DxgkMiracastStartMiracastSession @ 0x140080698 (DxgkMiracastStartMiracastSession.c)
 *     DpiMiracastHandleStartSessionDone @ 0x140244CC8 (DpiMiracastHandleStartSessionDone.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1400156A8 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0qqz_EtwWriteTransfer(
        __int64 a1,
        const EVENT_DESCRIPTOR *a2,
        __int64 a3,
        int a4,
        char a5,
        const wchar_t *a6)
{
  const wchar_t *v6; // rcx
  __int64 v7; // rax
  int v8; // eax
  struct _EVENT_DATA_DESCRIPTOR v10; // [rsp+30h] [rbp-50h] BYREF
  int *v11; // [rsp+40h] [rbp-40h]
  __int64 v12; // [rsp+48h] [rbp-38h]
  char *v13; // [rsp+50h] [rbp-30h]
  __int64 v14; // [rsp+58h] [rbp-28h]
  const wchar_t *v15; // [rsp+60h] [rbp-20h]
  int v16; // [rsp+68h] [rbp-18h]
  int v17; // [rsp+6Ch] [rbp-14h]
  int v18; // [rsp+A8h] [rbp+28h] BYREF

  v18 = a4;
  v6 = a6;
  v11 = &v18;
  v12 = 4LL;
  v14 = 4LL;
  v13 = &a5;
  if ( a6 )
  {
    v7 = -1LL;
    do
      ++v7;
    while ( a6[v7] );
    v8 = 2 * v7 + 2;
  }
  else
  {
    v8 = 10;
  }
  v16 = v8;
  v17 = 0;
  if ( !a6 )
    v6 = L"NULL";
  v15 = v6;
  return McGenEventWrite_EtwWriteTransfer((REGHANDLE *)&DxgkControlGuid_Context, a2, (__int64)L"NULL", 4u, &v10);
}
