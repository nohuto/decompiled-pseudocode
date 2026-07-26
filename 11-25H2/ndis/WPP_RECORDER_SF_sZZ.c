/*
 * XREFs of WPP_RECORDER_SF_sZZ @ 0x1400AB750
 * Callers:
 *     ndisHandleUModePnPOp @ 0x140089FC0 (ndisHandleUModePnPOp.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1400270E0 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

__int64 __fastcall WPP_RECORDER_SF_sZZ(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int16 a4,
        __int64 a5,
        const char *a6,
        unsigned __int16 *a7,
        unsigned __int16 *a8)
{
  const char *v8; // rbp
  const wchar_t *v9; // rdi
  __int64 v10; // rsi
  __int64 v11; // r10
  __int64 v13; // rax
  const wchar_t *v14; // r15
  const wchar_t *v15; // r11
  __int64 v16; // rdx
  const wchar_t *v17; // r10
  const wchar_t *v18; // rcx
  __int64 v19; // r9
  __int64 v20; // r9
  const char *v21; // r8
  bool v22; // zf
  __int64 v23; // rsi
  int v25; // [rsp+20h] [rbp-88h]

  v8 = a6;
  v9 = a7;
  v10 = -1LL;
  v11 = a1;
  if ( (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x1000) == 0 || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
    goto LABEL_25;
  if ( a8 )
  {
    v13 = *a8;
    if ( *a8 )
    {
      v14 = (const wchar_t *)*((_QWORD *)a8 + 1);
      goto LABEL_8;
    }
  }
  else
  {
    v13 = 8LL;
  }
  v14 = L"NULL";
LABEL_8:
  v15 = a8;
  if ( !a8 )
    v15 = L"\b";
  if ( !a7 )
  {
    v16 = 8LL;
    goto LABEL_14;
  }
  v16 = *a7;
  if ( !*a7 )
  {
LABEL_14:
    v17 = L"NULL";
    goto LABEL_15;
  }
  v17 = (const wchar_t *)*((_QWORD *)a7 + 1);
LABEL_15:
  v18 = a7;
  if ( !a7 )
    v18 = L"\b";
  if ( a6 )
  {
    v19 = -1LL;
    do
      ++v19;
    while ( a6[v19] );
    v20 = v19 + 1;
  }
  else
  {
    v20 = 5LL;
  }
  v21 = a6;
  if ( !a6 )
    v21 = "NULL";
  ndisWppFastTraceMessage(
    &WPP_d2b6eda2588e3a9c075e152401def421_Traceguids,
    a4,
    v21,
    v20,
    v18,
    2LL,
    v17,
    v16,
    v15,
    2LL,
    v14,
    v13,
    0LL);
  v11 = a1;
LABEL_25:
  v22 = a7 == 0LL;
  if ( a7 )
    v22 = 0;
  if ( v22 )
    v9 = L"\b";
  if ( a6 )
  {
    do
      ++v10;
    while ( a6[v10] );
    v23 = v10 + 1;
  }
  else
  {
    v23 = 5LL;
  }
  if ( !a6 )
    v8 = "NULL";
  LOWORD(v25) = a4;
  return WppAutoLogTrace(v11, 4LL, 13LL, &WPP_d2b6eda2588e3a9c075e152401def421_Traceguids, v25, v8, v23, v9);
}
