/*
 * XREFs of WPP_RECORDER_SF_sZZ @ 0x1400A35A0
 * Callers:
 *     ndisHandleUModePnPOp @ 0x14006DBD0 (ndisHandleUModePnPOp.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x140015A30 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
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
  const wchar_t *v9; // r12
  const wchar_t *v10; // rdi
  __int64 v11; // rsi
  __int64 v12; // r10
  __int64 v14; // rax
  const wchar_t *v15; // r15
  const wchar_t *v16; // r11
  __int64 v17; // rdx
  const wchar_t *v18; // r10
  const wchar_t *v19; // rcx
  __int64 v20; // r9
  __int64 v21; // r9
  const char *v22; // r8
  bool v23; // zf
  __int64 v24; // rsi
  int v26; // [rsp+20h] [rbp-88h]

  v8 = a6;
  v9 = L"NULL";
  v10 = a7;
  v11 = -1LL;
  v12 = a1;
  if ( (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x1000) == 0 || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
    goto LABEL_25;
  if ( a8 )
  {
    v14 = *a8;
    if ( *a8 )
    {
      v15 = (const wchar_t *)*((_QWORD *)a8 + 1);
      goto LABEL_8;
    }
  }
  else
  {
    v14 = 8LL;
  }
  v15 = L"NULL";
LABEL_8:
  v16 = a8;
  if ( !a8 )
    v16 = L"\b";
  if ( !a7 )
  {
    v17 = 8LL;
    goto LABEL_14;
  }
  v17 = *a7;
  if ( !*a7 )
  {
LABEL_14:
    v18 = L"NULL";
    goto LABEL_15;
  }
  v18 = (const wchar_t *)*((_QWORD *)a7 + 1);
LABEL_15:
  v19 = a7;
  if ( !a7 )
    v19 = L"\b";
  if ( a6 )
  {
    v20 = -1LL;
    do
      ++v20;
    while ( a6[v20] );
    v21 = v20 + 1;
  }
  else
  {
    v21 = 5LL;
  }
  v22 = a6;
  if ( !a6 )
    v22 = "NULL";
  ndisWppFastTraceMessage(
    &WPP_1554e880d08a3eb9ddfb9ea105b80242_Traceguids,
    a4,
    v22,
    v21,
    v19,
    2LL,
    v18,
    v17,
    v16,
    2LL,
    v15,
    v14,
    0LL);
  v12 = a1;
LABEL_25:
  v23 = a7 == 0LL;
  if ( a7 )
  {
    if ( *a7 )
      v9 = (const wchar_t *)*((_QWORD *)a7 + 1);
    v23 = a7 == 0LL;
  }
  if ( v23 )
    v10 = L"\b";
  if ( a6 )
  {
    do
      ++v11;
    while ( a6[v11] );
    v24 = v11 + 1;
  }
  else
  {
    v24 = 5LL;
  }
  if ( !a6 )
    v8 = "NULL";
  LOWORD(v26) = a4;
  return WppAutoLogTrace(v12, 4LL, 13LL, &WPP_1554e880d08a3eb9ddfb9ea105b80242_Traceguids, v26, v8, v24, v10, 2LL, v9);
}
