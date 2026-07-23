/*
 * XREFs of McTemplateK0qqzqqjqzjztx_EtwWriteTransfer @ 0x1405A32CC
 * Callers:
 *     PiUEventMovePendingEventToSynchronousQueue @ 0x1406F57B4 (PiUEventMovePendingEventToSynchronousQueue.c)
 *     PiUEventNotifyClient @ 0x1408D0228 (PiUEventNotifyClient.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1402B8E28 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0qqzqqjqzjztx_EtwWriteTransfer(
        __int64 a1,
        const EVENT_DESCRIPTOR *a2,
        __int64 a3,
        int a4,
        char a5,
        const wchar_t *a6,
        char a7,
        char a8,
        __int64 a9,
        char a10,
        const wchar_t *a11,
        __int64 a12,
        const wchar_t *a13,
        char a14,
        char a15)
{
  const wchar_t *v15; // r8
  const wchar_t *v16; // r10
  __int64 v17; // rcx
  const wchar_t *v19; // rdx
  int v20; // r9d
  __int64 v21; // rax
  int v22; // eax
  __int64 v23; // rax
  int v24; // eax
  bool v25; // zf
  struct _EVENT_DATA_DESCRIPTOR v27; // [rsp+30h] [rbp-D0h] BYREF
  int *v28; // [rsp+40h] [rbp-C0h]
  __int64 v29; // [rsp+48h] [rbp-B8h]
  char *v30; // [rsp+50h] [rbp-B0h]
  __int64 v31; // [rsp+58h] [rbp-A8h]
  const wchar_t *v32; // [rsp+60h] [rbp-A0h]
  int v33; // [rsp+68h] [rbp-98h]
  int v34; // [rsp+6Ch] [rbp-94h]
  char *v35; // [rsp+70h] [rbp-90h]
  __int64 v36; // [rsp+78h] [rbp-88h]
  char *v37; // [rsp+80h] [rbp-80h]
  __int64 v38; // [rsp+88h] [rbp-78h]
  __int64 v39; // [rsp+90h] [rbp-70h]
  __int64 v40; // [rsp+98h] [rbp-68h]
  char *v41; // [rsp+A0h] [rbp-60h]
  __int64 v42; // [rsp+A8h] [rbp-58h]
  const wchar_t *v43; // [rsp+B0h] [rbp-50h]
  int v44; // [rsp+B8h] [rbp-48h]
  int v45; // [rsp+BCh] [rbp-44h]
  __int64 v46; // [rsp+C0h] [rbp-40h]
  __int64 v47; // [rsp+C8h] [rbp-38h]
  const wchar_t *v48; // [rsp+D0h] [rbp-30h]
  int v49; // [rsp+D8h] [rbp-28h]
  int v50; // [rsp+DCh] [rbp-24h]
  char *v51; // [rsp+E0h] [rbp-20h]
  __int64 v52; // [rsp+E8h] [rbp-18h]
  char *v53; // [rsp+F0h] [rbp-10h]
  __int64 v54; // [rsp+F8h] [rbp-8h]
  int v55; // [rsp+148h] [rbp+48h] BYREF

  v55 = a4;
  v15 = a6;
  v16 = a13;
  v28 = &v55;
  v17 = -1LL;
  v29 = 4LL;
  v30 = &a5;
  v19 = a11;
  v20 = 10;
  v31 = 4LL;
  if ( a6 )
  {
    v21 = -1LL;
    do
      ++v21;
    while ( a6[v21] );
    v22 = 2 * v21 + 2;
  }
  else
  {
    v22 = 10;
  }
  v33 = v22;
  v34 = 0;
  v35 = &a7;
  v36 = 4LL;
  v37 = &a8;
  if ( !a6 )
    v15 = L"NULL";
  v39 = a9;
  v41 = &a10;
  v32 = v15;
  v38 = 4LL;
  v40 = 16LL;
  v42 = 4LL;
  if ( a11 )
  {
    v23 = -1LL;
    do
      ++v23;
    while ( a11[v23] );
    v24 = 2 * v23 + 2;
  }
  else
  {
    v24 = 10;
  }
  v44 = v24;
  if ( !a11 )
    v19 = L"NULL";
  v45 = 0;
  v43 = v19;
  v46 = a12;
  v47 = 16LL;
  v25 = a13 == 0LL;
  if ( a13 )
  {
    do
      ++v17;
    while ( a13[v17] );
    v20 = 2 * v17 + 2;
    v25 = a13 == 0LL;
  }
  if ( v25 )
    v16 = L"NULL";
  v49 = v20;
  v48 = v16;
  v51 = &a14;
  v50 = 0;
  v53 = &a15;
  v52 = 4LL;
  v54 = 8LL;
  return McGenEventWrite_EtwWriteTransfer(MS_KernelPnP_Provider_Context, a2, 0LL, 0xDu, &v27);
}
