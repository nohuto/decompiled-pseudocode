/*
 * XREFs of WPP_SF_SSSSSSS @ 0x18003C4DC
 * Callers:
 *     ?GetApplicationPBMStatus@CApplicationManager@@QEAAJPEAVCApplication@@PEAW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@1PEAW4_PLM_EXEMPTION@@@Z @ 0x180005CE0 (-GetApplicationPBMStatus@CApplicationManager@@QEAAJPEAVCApplication@@PEAW4__MIDL___MIDL_itf_audi.c)
 * Callees:
 *     <none>
 */

ULONG __fastcall WPP_SF_SSSSSSS(
        TRACEHANDLE a1,
        __int64 a2,
        __int64 a3,
        const wchar_t *a4,
        const wchar_t *a5,
        const wchar_t *a6,
        const wchar_t *a7,
        const wchar_t *a8,
        const wchar_t *a9,
        const wchar_t *a10)
{
  const wchar_t *v10; // r15
  __int64 v11; // rcx
  const wchar_t *v12; // rbx
  const wchar_t *v13; // rdi
  const wchar_t *v14; // r12
  const wchar_t *v15; // rsi
  __int64 v16; // r8
  const wchar_t *v17; // rbp
  const wchar_t *v18; // r14
  __int64 v19; // rax
  __int64 v20; // r13
  __int64 v21; // rax
  __int64 v22; // r11
  __int64 v23; // rax
  __int64 v24; // r10
  __int64 v25; // rax
  __int64 v26; // r9
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rax
  __int64 v30; // rax
  bool v31; // zf

  v10 = a10;
  v11 = -1LL;
  v12 = a5;
  v13 = a6;
  v14 = a4;
  v15 = a7;
  v16 = 10LL;
  v17 = a8;
  v18 = a9;
  if ( a10 )
  {
    v19 = -1LL;
    do
      ++v19;
    while ( a10[v19] );
    v20 = 2 * v19 + 2;
  }
  else
  {
    v20 = 10LL;
  }
  if ( !a10 )
    v10 = L"NULL";
  if ( a9 )
  {
    v21 = -1LL;
    do
      ++v21;
    while ( a9[v21] );
    v22 = 2 * v21 + 2;
  }
  else
  {
    v22 = 10LL;
  }
  if ( !a9 )
    v18 = L"NULL";
  if ( a8 )
  {
    v23 = -1LL;
    do
      ++v23;
    while ( a8[v23] );
    v24 = 2 * v23 + 2;
  }
  else
  {
    v24 = 10LL;
  }
  if ( !a8 )
    v17 = L"NULL";
  if ( a7 )
  {
    v25 = -1LL;
    do
      ++v25;
    while ( a7[v25] );
    v26 = 2 * v25 + 2;
  }
  else
  {
    v26 = 10LL;
  }
  if ( !a7 )
    v15 = L"NULL";
  if ( a6 )
  {
    v27 = -1LL;
    do
      ++v27;
    while ( a6[v27] );
    v28 = 2 * v27 + 2;
  }
  else
  {
    v28 = 10LL;
  }
  if ( !a6 )
    v13 = L"NULL";
  if ( a5 )
  {
    v29 = -1LL;
    do
      ++v29;
    while ( a5[v29] );
    v14 = a4;
    v30 = 2 * v29 + 2;
  }
  else
  {
    v30 = 10LL;
  }
  if ( !a5 )
    v12 = L"NULL";
  v31 = v14 == 0LL;
  if ( v14 )
  {
    do
      ++v11;
    while ( v14[v11] );
    v16 = 2 * v11 + 2;
    v31 = v14 == 0LL;
  }
  if ( v31 )
    v14 = L"NULL";
  return TraceMessage(
           a1,
           0x2Bu,
           &WPP_7ac9f868b6f432f4e1ddc0ca024d1633_Traceguids,
           0x28u,
           v14,
           v16,
           v12,
           v30,
           v13,
           v28,
           v15,
           v26,
           v17,
           v24,
           v18,
           v22,
           v10,
           v20,
           0LL);
}
