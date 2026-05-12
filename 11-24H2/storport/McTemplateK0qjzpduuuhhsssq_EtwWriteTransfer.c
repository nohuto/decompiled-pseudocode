/*
 * XREFs of McTemplateK0qjzpduuuhhsssq_EtwWriteTransfer @ 0x1400DD838
 * Callers:
 *     NvmeAdapterProcessFabricControllerDiscoveryEntry @ 0x1400E66F0 (NvmeAdapterProcessFabricControllerDiscoveryEntry.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x140024158 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0qjzpduuuhhsssq_EtwWriteTransfer(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 a5,
        const wchar_t *a6,
        char a7,
        char a8,
        char a9,
        char a10,
        char a11,
        char a12,
        char a13,
        const char *a14,
        const char *a15,
        const char *a16,
        char a17)
{
  const wchar_t *v17; // r10
  const char *v18; // r9
  const char *v19; // rdx
  const char *v20; // r8
  __int64 v21; // rax
  __int64 v22; // rcx
  unsigned int v23; // ecx
  __int64 v24; // rcx
  int v25; // ecx
  __int64 v26; // rcx
  __int64 v27; // rcx
  int v28; // eax
  struct _EVENT_DATA_DESCRIPTOR v30; // [rsp+38h] [rbp-D0h] BYREF
  int *v31; // [rsp+48h] [rbp-C0h]
  __int64 v32; // [rsp+50h] [rbp-B8h]
  __int64 v33; // [rsp+58h] [rbp-B0h]
  __int64 v34; // [rsp+60h] [rbp-A8h]
  const wchar_t *v35; // [rsp+68h] [rbp-A0h]
  __int64 v36; // [rsp+70h] [rbp-98h]
  char *v37; // [rsp+78h] [rbp-90h]
  __int64 v38; // [rsp+80h] [rbp-88h]
  char *v39; // [rsp+88h] [rbp-80h]
  __int64 v40; // [rsp+90h] [rbp-78h]
  char *v41; // [rsp+98h] [rbp-70h]
  __int64 v42; // [rsp+A0h] [rbp-68h]
  char *v43; // [rsp+A8h] [rbp-60h]
  __int64 v44; // [rsp+B0h] [rbp-58h]
  char *v45; // [rsp+B8h] [rbp-50h]
  __int64 v46; // [rsp+C0h] [rbp-48h]
  char *v47; // [rsp+C8h] [rbp-40h]
  __int64 v48; // [rsp+D0h] [rbp-38h]
  char *v49; // [rsp+D8h] [rbp-30h]
  __int64 v50; // [rsp+E0h] [rbp-28h]
  const char *v51; // [rsp+E8h] [rbp-20h]
  int v52; // [rsp+F0h] [rbp-18h]
  int v53; // [rsp+F4h] [rbp-14h]
  const char *v54; // [rsp+F8h] [rbp-10h]
  int v55; // [rsp+100h] [rbp-8h]
  int v56; // [rsp+104h] [rbp-4h]
  const char *v57; // [rsp+108h] [rbp+0h]
  int v58; // [rsp+110h] [rbp+8h]
  int v59; // [rsp+114h] [rbp+Ch]
  char *v60; // [rsp+118h] [rbp+10h]
  __int64 v61; // [rsp+120h] [rbp+18h]
  int v62; // [rsp+160h] [rbp+58h] BYREF

  v62 = a4;
  v17 = a6;
  v18 = a16;
  v19 = a15;
  v20 = a14;
  v31 = &v62;
  v33 = a5;
  v21 = -1LL;
  v32 = 4LL;
  v34 = 16LL;
  if ( a6 )
  {
    v22 = -1LL;
    do
      ++v22;
    while ( a6[v22] );
    v23 = 2 * v22 + 2;
  }
  else
  {
    v23 = 10;
  }
  v36 = v23;
  v38 = 8LL;
  v37 = &a7;
  if ( !a6 )
    v17 = L"NULL";
  v35 = v17;
  v40 = 4LL;
  v39 = &a8;
  v41 = &a9;
  v43 = &a10;
  v45 = &a11;
  v47 = &a12;
  v49 = &a13;
  v42 = 1LL;
  v44 = 1LL;
  v46 = 1LL;
  v48 = 2LL;
  v50 = 2LL;
  if ( a14 )
  {
    v24 = -1LL;
    do
      ++v24;
    while ( a14[v24] );
    v25 = v24 + 1;
  }
  else
  {
    v25 = 5;
  }
  v52 = v25;
  v53 = 0;
  if ( !a14 )
    v20 = "NULL";
  v51 = v20;
  if ( a15 )
  {
    v26 = -1LL;
    do
      ++v26;
    while ( a15[v26] );
    v27 = (unsigned int)(v26 + 1);
  }
  else
  {
    v27 = 5LL;
  }
  v55 = v27;
  v56 = 0;
  if ( !a15 )
    v19 = "NULL";
  v54 = v19;
  if ( a16 )
  {
    do
      ++v21;
    while ( a16[v21] );
    v28 = v21 + 1;
  }
  else
  {
    v28 = 5;
  }
  v58 = v28;
  v59 = 0;
  if ( !a16 )
    v18 = "NULL";
  v60 = &a17;
  v57 = v18;
  v61 = 4LL;
  return McGenEventWrite_EtwWriteTransfer(v27, &EventNVMeoFProcessDiscoveryEntryFailure, 0LL, 0xFu, &v30);
}
