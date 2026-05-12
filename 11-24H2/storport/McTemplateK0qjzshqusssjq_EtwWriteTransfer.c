/*
 * XREFs of McTemplateK0qjzshqusssjq_EtwWriteTransfer @ 0x1400FA48C
 * Callers:
 *     NvmeNamespaceSurpriseRemovalIrp @ 0x1401B1928 (NvmeNamespaceSurpriseRemovalIrp.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x140024158 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0qjzshqusssjq_EtwWriteTransfer(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 a5,
        const wchar_t *a6,
        const char *a7,
        char a8,
        char a9,
        char a10,
        const char *a11,
        const char *a12,
        const char *a13,
        __int64 a14,
        char a15)
{
  const wchar_t *v15; // rdx
  const char *v16; // r11
  const char *v17; // r8
  const char *v18; // r9
  const char *v19; // r10
  __int64 v20; // rax
  __int64 v21; // rcx
  unsigned int v22; // ecx
  __int64 v23; // rcx
  int v24; // ecx
  __int64 v25; // rcx
  int v26; // ecx
  __int64 v27; // rcx
  __int64 v28; // rcx
  int v29; // eax
  struct _EVENT_DATA_DESCRIPTOR v31; // [rsp+38h] [rbp-D0h] BYREF
  int *v32; // [rsp+48h] [rbp-C0h]
  __int64 v33; // [rsp+50h] [rbp-B8h]
  __int64 v34; // [rsp+58h] [rbp-B0h]
  __int64 v35; // [rsp+60h] [rbp-A8h]
  const wchar_t *v36; // [rsp+68h] [rbp-A0h]
  __int64 v37; // [rsp+70h] [rbp-98h]
  const char *v38; // [rsp+78h] [rbp-90h]
  int v39; // [rsp+80h] [rbp-88h]
  int v40; // [rsp+84h] [rbp-84h]
  char *v41; // [rsp+88h] [rbp-80h]
  __int64 v42; // [rsp+90h] [rbp-78h]
  char *v43; // [rsp+98h] [rbp-70h]
  __int64 v44; // [rsp+A0h] [rbp-68h]
  char *v45; // [rsp+A8h] [rbp-60h]
  __int64 v46; // [rsp+B0h] [rbp-58h]
  const char *v47; // [rsp+B8h] [rbp-50h]
  int v48; // [rsp+C0h] [rbp-48h]
  int v49; // [rsp+C4h] [rbp-44h]
  const char *v50; // [rsp+C8h] [rbp-40h]
  int v51; // [rsp+D0h] [rbp-38h]
  int v52; // [rsp+D4h] [rbp-34h]
  const char *v53; // [rsp+D8h] [rbp-30h]
  int v54; // [rsp+E0h] [rbp-28h]
  int v55; // [rsp+E4h] [rbp-24h]
  __int64 v56; // [rsp+E8h] [rbp-20h]
  __int64 v57; // [rsp+F0h] [rbp-18h]
  char *v58; // [rsp+F8h] [rbp-10h]
  __int64 v59; // [rsp+100h] [rbp-8h]
  int v60; // [rsp+140h] [rbp+38h] BYREF

  v60 = a4;
  v15 = a6;
  v16 = a13;
  v17 = a12;
  v18 = a11;
  v19 = a7;
  v32 = &v60;
  v34 = a5;
  v20 = -1LL;
  v33 = 4LL;
  v35 = 16LL;
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
  v37 = v22;
  if ( !a6 )
    v15 = L"NULL";
  v36 = v15;
  if ( a7 )
  {
    v23 = -1LL;
    do
      ++v23;
    while ( a7[v23] );
    v24 = v23 + 1;
  }
  else
  {
    v24 = 5;
  }
  v39 = v24;
  v40 = 0;
  v41 = &a8;
  v42 = 2LL;
  if ( !a7 )
    v19 = "NULL";
  v43 = &a9;
  v38 = v19;
  v45 = &a10;
  v44 = 4LL;
  v46 = 1LL;
  if ( a11 )
  {
    v25 = -1LL;
    do
      ++v25;
    while ( a11[v25] );
    v26 = v25 + 1;
  }
  else
  {
    v26 = 5;
  }
  v48 = v26;
  v49 = 0;
  if ( !a11 )
    v18 = "NULL";
  v47 = v18;
  if ( a12 )
  {
    v27 = -1LL;
    do
      ++v27;
    while ( a12[v27] );
    v28 = (unsigned int)(v27 + 1);
  }
  else
  {
    v28 = 5LL;
  }
  v51 = v28;
  v52 = 0;
  if ( !a12 )
    v17 = "NULL";
  v50 = v17;
  if ( a13 )
  {
    do
      ++v20;
    while ( a13[v20] );
    v29 = v20 + 1;
  }
  else
  {
    v29 = 5;
  }
  v54 = v29;
  v56 = a14;
  if ( !a13 )
    v16 = "NULL";
  v55 = 0;
  v53 = v16;
  v58 = &a15;
  v57 = 16LL;
  v59 = 4LL;
  return McGenEventWrite_EtwWriteTransfer(v28, &EventNVMeNamespaceSurpriseRemoved, 0LL, 0xDu, &v31);
}
