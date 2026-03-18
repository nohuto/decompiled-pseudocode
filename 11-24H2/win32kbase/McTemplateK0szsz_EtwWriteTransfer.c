/*
 * XREFs of McTemplateK0szsz_EtwWriteTransfer @ 0x1401CDCE4
 * Callers:
 *     EtwTraceTrappedAppContainerRender @ 0x1401CD9B0 (EtwTraceTrappedAppContainerRender.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x140033530 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0szsz_EtwWriteTransfer(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4,
        const wchar_t *a5,
        const char *a6,
        const wchar_t *a7)
{
  const wchar_t *v7; // r10
  __int64 v8; // rcx
  const char *v9; // rdx
  const wchar_t *v10; // r8
  __int64 v11; // rax
  int v12; // eax
  int v13; // r9d
  __int64 v14; // rax
  int v15; // eax
  __int64 v16; // rax
  int v17; // eax
  bool v18; // zf
  struct _EVENT_DATA_DESCRIPTOR v20; // [rsp+30h] [rbp-21h] BYREF
  const char *v21; // [rsp+40h] [rbp-11h]
  int v22; // [rsp+48h] [rbp-9h]
  int v23; // [rsp+4Ch] [rbp-5h]
  const wchar_t *v24; // [rsp+50h] [rbp-1h]
  int v25; // [rsp+58h] [rbp+7h]
  int v26; // [rsp+5Ch] [rbp+Bh]
  const char *v27; // [rsp+60h] [rbp+Fh]
  int v28; // [rsp+68h] [rbp+17h]
  int v29; // [rsp+6Ch] [rbp+1Bh]
  const wchar_t *v30; // [rsp+70h] [rbp+1Fh]
  int v31; // [rsp+78h] [rbp+27h]
  int v32; // [rsp+7Ch] [rbp+2Bh]

  v7 = a7;
  v8 = -1LL;
  v9 = a6;
  v10 = a5;
  if ( a4 )
  {
    v11 = -1LL;
    do
      ++v11;
    while ( a4[v11] );
    v12 = v11 + 1;
  }
  else
  {
    v12 = 5;
  }
  v22 = v12;
  v23 = 0;
  if ( !a4 )
    a4 = "NULL";
  v21 = a4;
  v13 = 10;
  if ( a5 )
  {
    v14 = -1LL;
    do
      ++v14;
    while ( a5[v14] );
    v15 = 2 * v14 + 2;
  }
  else
  {
    v15 = 10;
  }
  v25 = v15;
  v26 = 0;
  if ( !a5 )
    v10 = L"NULL";
  v24 = v10;
  if ( a6 )
  {
    v16 = -1LL;
    do
      ++v16;
    while ( a6[v16] );
    v17 = v16 + 1;
  }
  else
  {
    v17 = 5;
  }
  v28 = v17;
  v29 = 0;
  if ( !a6 )
    v9 = "NULL";
  v27 = v9;
  v18 = a7 == 0LL;
  if ( a7 )
  {
    do
      ++v8;
    while ( a7[v8] );
    v13 = 2 * v8 + 2;
    v18 = a7 == 0LL;
  }
  if ( v18 )
    v7 = L"NULL";
  v31 = v13;
  v30 = v7;
  v32 = 0;
  return McGenEventWrite_EtwWriteTransfer(v8, &TrappedAppContainerRenderEvent, &W32kControlGuid, 5u, &v20);
}
