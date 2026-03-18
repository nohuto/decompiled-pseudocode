/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@4@Z @ 0x1401F8054
 * Callers:
 *     ?TraceChildWindowDpiTelemetry@@YAXPEAUtagWND@@0W4_CHILD_WINDOW_DPI_TELEMETRY@@@Z @ 0x1401F4C58 (-TraceChildWindowDpiTelemetry@@YAXPEAUtagWND@@0W4_CHILD_WINDOW_DPI_TELEMETRY@@@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140119524 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

NTSTATUS __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        const wchar_t **a6,
        const wchar_t **a7)
{
  __int64 v8; // rcx
  int v9; // r8d
  const wchar_t *v10; // rdx
  __int64 v11; // rax
  int v12; // eax
  const wchar_t *v13; // rdx
  struct _EVENT_DATA_DESCRIPTOR v15; // [rsp+30h] [rbp-68h] BYREF
  __int64 v16; // [rsp+50h] [rbp-48h]
  __int64 v17; // [rsp+58h] [rbp-40h]
  const wchar_t *v18; // [rsp+60h] [rbp-38h]
  int v19; // [rsp+68h] [rbp-30h]
  int v20; // [rsp+6Ch] [rbp-2Ch]
  const wchar_t *v21; // [rsp+70h] [rbp-28h]
  int v22; // [rsp+78h] [rbp-20h]
  int v23; // [rsp+7Ch] [rbp-1Ch]

  v8 = -1LL;
  v9 = 2;
  v10 = *a7;
  if ( *a7 )
  {
    v11 = -1LL;
    do
      ++v11;
    while ( v10[v11] );
    v12 = 2 * v11 + 2;
  }
  else
  {
    v10 = &pszFormat;
    v12 = 2;
  }
  v22 = v12;
  v21 = v10;
  v23 = 0;
  v13 = *a6;
  if ( *a6 )
  {
    do
      ++v8;
    while ( v13[v8] );
    v9 = 2 * v8 + 2;
  }
  else
  {
    v13 = &pszFormat;
  }
  v16 = a5;
  v18 = v13;
  v19 = v9;
  v20 = 0;
  v17 = 4LL;
  return tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140398BB8, a2, 0LL, 0LL, 5u, &v15);
}
