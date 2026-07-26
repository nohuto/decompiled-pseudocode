/*
 * XREFs of WPP_RECORDER_SF_ZZ @ 0x1400CC5D8
 * Callers:
 *     ?ndisIfAliasChange@@YAJPEBU_UNICODE_STRING@@0@Z @ 0x1400CC0E8 (-ndisIfAliasChange@@YAJPEBU_UNICODE_STRING@@0@Z.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x140015A30 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

__int64 __fastcall WPP_RECORDER_SF_ZZ(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        unsigned __int16 *a6,
        unsigned __int16 *a7)
{
  const wchar_t *v7; // rbp
  const wchar_t *v8; // rdi
  const wchar_t *v9; // rbx
  __int64 v11; // rsi
  __int64 v12; // rax
  const wchar_t *v13; // r11
  const wchar_t *v14; // r10
  __int64 v15; // rcx
  const wchar_t *v16; // r9
  const wchar_t *v17; // r8
  bool v18; // zf
  int v20; // [rsp+20h] [rbp-78h]

  v7 = L"NULL";
  v8 = a6;
  v9 = a7;
  v11 = 8LL;
  if ( (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x200000) == 0 || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
    goto LABEL_18;
  if ( a7 )
  {
    v12 = *a7;
    if ( *a7 )
    {
      v13 = (const wchar_t *)*((_QWORD *)a7 + 1);
      goto LABEL_8;
    }
  }
  else
  {
    v12 = 8LL;
  }
  v13 = L"NULL";
LABEL_8:
  v14 = a7;
  if ( !a7 )
    v14 = L"\b";
  if ( !a6 )
  {
    v15 = 8LL;
    goto LABEL_14;
  }
  v15 = *a6;
  if ( !*a6 )
  {
LABEL_14:
    v16 = L"NULL";
    goto LABEL_15;
  }
  v16 = (const wchar_t *)*((_QWORD *)a6 + 1);
LABEL_15:
  v17 = a6;
  if ( !a6 )
    v17 = L"\b";
  ndisWppFastTraceMessage(
    &WPP_ec7904e244ab3ff37c3c2f5002e64fc8_Traceguids,
    0x10u,
    v17,
    2LL,
    v16,
    v15,
    v14,
    2LL,
    v13,
    v12,
    0LL);
LABEL_18:
  if ( !a7 )
    v9 = L"\b";
  v18 = a6 == 0LL;
  if ( a6 )
  {
    v11 = *a6;
    if ( *a6 )
      v7 = (const wchar_t *)*((_QWORD *)a6 + 1);
    v18 = a6 == 0LL;
  }
  if ( v18 )
    v8 = L"\b";
  LOWORD(v20) = 16;
  return WppAutoLogTrace(a1, 4LL, 22LL, &WPP_ec7904e244ab3ff37c3c2f5002e64fc8_Traceguids, v20, v8, 2LL, v7, v11, v9);
}
