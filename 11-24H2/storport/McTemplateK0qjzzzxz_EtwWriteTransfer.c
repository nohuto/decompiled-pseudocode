/*
 * XREFs of McTemplateK0qjzzzxz_EtwWriteTransfer @ 0x1400A72DC
 * Callers:
 *     StorEtwNVMeICEInterfaceEvent @ 0x1400A8EE0 (StorEtwNVMeICEInterfaceEvent.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x140024158 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0qjzzzxz_EtwWriteTransfer(
        __int64 a1,
        const EVENT_DESCRIPTOR *a2,
        __int64 a3,
        int a4,
        __int64 a5,
        const wchar_t *a6,
        const wchar_t *a7,
        const wchar_t *a8,
        char a9,
        const wchar_t *a10)
{
  const wchar_t *v10; // r8
  const wchar_t *v11; // r11
  const wchar_t *v12; // r10
  const wchar_t *v14; // rdx
  int v15; // r9d
  __int64 v16; // rax
  __int64 v17; // rcx
  int v18; // ecx
  __int64 v19; // rcx
  int v20; // ecx
  __int64 v21; // rcx
  int v22; // ecx
  bool v23; // zf
  struct _EVENT_DATA_DESCRIPTOR v25; // [rsp+30h] [rbp-79h] BYREF
  int *v26; // [rsp+40h] [rbp-69h]
  __int64 v27; // [rsp+48h] [rbp-61h]
  __int64 v28; // [rsp+50h] [rbp-59h]
  __int64 v29; // [rsp+58h] [rbp-51h]
  const wchar_t *v30; // [rsp+60h] [rbp-49h]
  int v31; // [rsp+68h] [rbp-41h]
  int v32; // [rsp+6Ch] [rbp-3Dh]
  const wchar_t *v33; // [rsp+70h] [rbp-39h]
  int v34; // [rsp+78h] [rbp-31h]
  int v35; // [rsp+7Ch] [rbp-2Dh]
  const wchar_t *v36; // [rsp+80h] [rbp-29h]
  int v37; // [rsp+88h] [rbp-21h]
  int v38; // [rsp+8Ch] [rbp-1Dh]
  char *v39; // [rsp+90h] [rbp-19h]
  __int64 v40; // [rsp+98h] [rbp-11h]
  const wchar_t *v41; // [rsp+A0h] [rbp-9h]
  int v42; // [rsp+A8h] [rbp-1h]
  int v43; // [rsp+ACh] [rbp+3h]
  int v44; // [rsp+F8h] [rbp+4Fh] BYREF

  v44 = a4;
  v10 = a6;
  v11 = a10;
  v12 = a8;
  v14 = a7;
  v26 = &v44;
  v15 = 10;
  v28 = a5;
  v16 = -1LL;
  v27 = 4LL;
  v29 = 16LL;
  if ( a6 )
  {
    v17 = -1LL;
    do
      ++v17;
    while ( a6[v17] );
    v18 = 2 * v17 + 2;
  }
  else
  {
    v18 = 10;
  }
  v31 = v18;
  v32 = 0;
  if ( !a6 )
    v10 = L"NULL";
  v30 = v10;
  if ( a7 )
  {
    v19 = -1LL;
    do
      ++v19;
    while ( a7[v19] );
    v20 = 2 * v19 + 2;
  }
  else
  {
    v20 = 10;
  }
  v34 = v20;
  v35 = 0;
  if ( !a7 )
    v14 = L"NULL";
  v33 = v14;
  if ( a8 )
  {
    v21 = -1LL;
    do
      ++v21;
    while ( a8[v21] );
    v22 = 2 * v21 + 2;
  }
  else
  {
    v22 = 10;
  }
  v37 = v22;
  v38 = 0;
  if ( !a8 )
    v12 = L"NULL";
  v39 = &a9;
  v36 = v12;
  v40 = 8LL;
  v23 = a10 == 0LL;
  if ( a10 )
  {
    do
      ++v16;
    while ( a10[v16] );
    v15 = 2 * v16 + 2;
    v23 = a10 == 0LL;
  }
  if ( v23 )
    v11 = L"NULL";
  v42 = v15;
  v41 = v11;
  v43 = 0;
  return McGenEventWrite_EtwWriteTransfer(8LL, a2, 0LL, 8u, &v25);
}
