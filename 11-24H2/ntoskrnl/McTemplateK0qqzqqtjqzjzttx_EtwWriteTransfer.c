/*
 * XREFs of McTemplateK0qqzqqtjqzjzttx_EtwWriteTransfer @ 0x1405A348C
 * Callers:
 *     PiUEventDequeuePendingEventWorker @ 0x1408570E0 (PiUEventDequeuePendingEventWorker.c)
 *     PiUEventHandleGetEvent @ 0x140857350 (PiUEventHandleGetEvent.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1402B8E28 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0qqzqqtjqzjzttx_EtwWriteTransfer(
        __int64 a1,
        const EVENT_DESCRIPTOR *a2,
        __int64 a3,
        int a4,
        char a5,
        const wchar_t *a6,
        char a7,
        char a8,
        char a9,
        __int64 a10,
        char a11,
        const wchar_t *a12,
        __int64 a13,
        const wchar_t *a14,
        char a15,
        char a16,
        char a17)
{
  const wchar_t *v17; // r9
  const wchar_t *v18; // r10
  __int64 v19; // rcx
  const wchar_t *v21; // rdx
  int v22; // r8d
  __int64 v23; // rax
  int v24; // eax
  __int64 v25; // rax
  int v26; // eax
  bool v27; // zf
  struct _EVENT_DATA_DESCRIPTOR v29; // [rsp+30h] [rbp-D0h] BYREF
  int *v30; // [rsp+40h] [rbp-C0h]
  __int64 v31; // [rsp+48h] [rbp-B8h]
  char *v32; // [rsp+50h] [rbp-B0h]
  __int64 v33; // [rsp+58h] [rbp-A8h]
  const wchar_t *v34; // [rsp+60h] [rbp-A0h]
  int v35; // [rsp+68h] [rbp-98h]
  int v36; // [rsp+6Ch] [rbp-94h]
  char *v37; // [rsp+70h] [rbp-90h]
  __int64 v38; // [rsp+78h] [rbp-88h]
  char *v39; // [rsp+80h] [rbp-80h]
  __int64 v40; // [rsp+88h] [rbp-78h]
  char *v41; // [rsp+90h] [rbp-70h]
  __int64 v42; // [rsp+98h] [rbp-68h]
  __int64 v43; // [rsp+A0h] [rbp-60h]
  __int64 v44; // [rsp+A8h] [rbp-58h]
  char *v45; // [rsp+B0h] [rbp-50h]
  __int64 v46; // [rsp+B8h] [rbp-48h]
  const wchar_t *v47; // [rsp+C0h] [rbp-40h]
  int v48; // [rsp+C8h] [rbp-38h]
  int v49; // [rsp+CCh] [rbp-34h]
  __int64 v50; // [rsp+D0h] [rbp-30h]
  __int64 v51; // [rsp+D8h] [rbp-28h]
  const wchar_t *v52; // [rsp+E0h] [rbp-20h]
  int v53; // [rsp+E8h] [rbp-18h]
  int v54; // [rsp+ECh] [rbp-14h]
  char *v55; // [rsp+F0h] [rbp-10h]
  __int64 v56; // [rsp+F8h] [rbp-8h]
  char *v57; // [rsp+100h] [rbp+0h]
  __int64 v58; // [rsp+108h] [rbp+8h]
  char *v59; // [rsp+110h] [rbp+10h]
  __int64 v60; // [rsp+118h] [rbp+18h]
  int v61; // [rsp+168h] [rbp+68h] BYREF

  v61 = a4;
  v17 = a6;
  v18 = a14;
  v30 = &v61;
  v19 = -1LL;
  v31 = 4LL;
  v32 = &a5;
  v21 = a12;
  v22 = 10;
  v33 = 4LL;
  if ( a6 )
  {
    v23 = -1LL;
    do
      ++v23;
    while ( a6[v23] );
    v24 = 2 * v23 + 2;
  }
  else
  {
    v24 = 10;
  }
  v35 = v24;
  v36 = 0;
  v37 = &a7;
  v38 = 4LL;
  v39 = &a8;
  if ( !a6 )
    v17 = L"NULL";
  v34 = v17;
  v41 = &a9;
  v43 = a10;
  v45 = &a11;
  v40 = 4LL;
  v42 = 4LL;
  v44 = 16LL;
  v46 = 4LL;
  if ( a12 )
  {
    v25 = -1LL;
    do
      ++v25;
    while ( a12[v25] );
    v26 = 2 * v25 + 2;
  }
  else
  {
    v26 = 10;
  }
  v48 = v26;
  if ( !a12 )
    v21 = L"NULL";
  v49 = 0;
  v47 = v21;
  v50 = a13;
  v51 = 16LL;
  v27 = a14 == 0LL;
  if ( a14 )
  {
    do
      ++v19;
    while ( a14[v19] );
    v22 = 2 * v19 + 2;
    v27 = a14 == 0LL;
  }
  if ( v27 )
    v18 = L"NULL";
  v53 = v22;
  v52 = v18;
  v55 = &a15;
  v54 = 0;
  v57 = &a16;
  v56 = 4LL;
  v59 = &a17;
  v58 = 4LL;
  v60 = 8LL;
  return McGenEventWrite_EtwWriteTransfer(MS_KernelPnP_Provider_Context, a2, 0LL, 0xFu, &v29);
}
