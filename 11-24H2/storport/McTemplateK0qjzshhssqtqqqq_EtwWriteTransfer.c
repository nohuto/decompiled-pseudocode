/*
 * XREFs of McTemplateK0qjzshhssqtqqqq_EtwWriteTransfer @ 0x1401393D8
 * Callers:
 *     StorLogDLRMDripsCallback @ 0x140139EA8 (StorLogDLRMDripsCallback.c)
 *     StorLogDLRMEffectivePowerModeCallback @ 0x14013A058 (StorLogDLRMEffectivePowerModeCallback.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x140024158 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0qjzshhssqtqqqq_EtwWriteTransfer(
        __int64 a1,
        const EVENT_DESCRIPTOR *a2,
        __int64 a3,
        int a4,
        __int64 a5,
        const wchar_t *a6,
        const char *a7,
        char a8,
        char a9,
        const char *a10,
        const char *a11,
        char a12,
        char a13,
        char a14,
        char a15,
        char a16,
        char a17)
{
  const char *v17; // r10
  const char *v18; // r8
  const wchar_t *v20; // rdx
  const char *v21; // r9
  __int64 v22; // rax
  __int64 v23; // rcx
  unsigned int v24; // ecx
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
  const char *v45; // [rsp+A8h] [rbp-60h]
  int v46; // [rsp+B0h] [rbp-58h]
  int v47; // [rsp+B4h] [rbp-54h]
  const char *v48; // [rsp+B8h] [rbp-50h]
  int v49; // [rsp+C0h] [rbp-48h]
  int v50; // [rsp+C4h] [rbp-44h]
  char *v51; // [rsp+C8h] [rbp-40h]
  __int64 v52; // [rsp+D0h] [rbp-38h]
  char *v53; // [rsp+D8h] [rbp-30h]
  __int64 v54; // [rsp+E0h] [rbp-28h]
  char *v55; // [rsp+E8h] [rbp-20h]
  __int64 v56; // [rsp+F0h] [rbp-18h]
  char *v57; // [rsp+F8h] [rbp-10h]
  __int64 v58; // [rsp+100h] [rbp-8h]
  char *v59; // [rsp+108h] [rbp+0h]
  __int64 v60; // [rsp+110h] [rbp+8h]
  char *v61; // [rsp+118h] [rbp+10h]
  __int64 v62; // [rsp+120h] [rbp+18h]
  int v63; // [rsp+170h] [rbp+68h] BYREF

  v63 = a4;
  v17 = a11;
  v18 = a10;
  v20 = a6;
  v21 = a7;
  v32 = &v63;
  v34 = a5;
  v22 = -1LL;
  v33 = 4LL;
  v35 = 16LL;
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
  v37 = v24;
  if ( !a6 )
    v20 = L"NULL";
  v36 = v20;
  if ( a7 )
  {
    v25 = -1LL;
    do
      ++v25;
    while ( a7[v25] );
    v26 = v25 + 1;
  }
  else
  {
    v26 = 5;
  }
  v39 = v26;
  v40 = 0;
  v41 = &a8;
  v42 = 2LL;
  if ( !a7 )
    v21 = "NULL";
  v43 = &a9;
  v38 = v21;
  v44 = 2LL;
  if ( a10 )
  {
    v27 = -1LL;
    do
      ++v27;
    while ( a10[v27] );
    v28 = (unsigned int)(v27 + 1);
  }
  else
  {
    v28 = 5LL;
  }
  v46 = v28;
  v47 = 0;
  if ( !a10 )
    v18 = "NULL";
  v45 = v18;
  if ( a11 )
  {
    do
      ++v22;
    while ( a11[v22] );
    v29 = v22 + 1;
  }
  else
  {
    v29 = 5;
  }
  v49 = v29;
  v50 = 0;
  v51 = &a12;
  if ( !a11 )
    v17 = "NULL";
  v48 = v17;
  v53 = &a13;
  v52 = 4LL;
  v55 = &a14;
  v54 = 4LL;
  v57 = &a15;
  v56 = 4LL;
  v59 = &a16;
  v61 = &a17;
  v58 = 4LL;
  v60 = 4LL;
  v62 = 4LL;
  return McGenEventWrite_EtwWriteTransfer(v28, a2, 0LL, 0xFu, &v31);
}
