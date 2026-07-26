/*
 * XREFs of WPP_RECORDER_SF__guid_ZDDDDDDDDDDDDDDDDDDDDDDDD @ 0x1400C3A8C
 * Callers:
 *     ?ndisTraceNicAutoPowerSaver@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x140070AA0 (-ndisTraceNicAutoPowerSaver@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x140015A30 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

__int64 __fastcall WPP_RECORDER_SF__guid_ZDDDDDDDDDDDDDDDDDDDDDDDD(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6,
        unsigned __int16 *a7,
        char a8,
        char a9,
        char a10,
        char a11,
        char a12,
        char a13,
        char a14,
        char a15,
        char a16,
        char a17,
        char a18,
        char a19,
        char a20,
        char a21,
        char a22,
        char a23,
        char a24,
        char a25,
        char a26,
        char a27,
        char a28,
        char a29,
        char a30,
        char a31)
{
  const wchar_t *v31; // rsi
  const wchar_t *v32; // rbx
  __int64 v34; // rcx
  const wchar_t *v35; // rdx
  const wchar_t *v36; // rax
  bool v37; // zf
  int v39; // [rsp+28h] [rbp-240h]

  v31 = L"NULL";
  v32 = a7;
  if ( (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x4000) == 0 || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
    goto LABEL_11;
  if ( !a7 )
  {
    v34 = 8LL;
    goto LABEL_7;
  }
  v34 = *a7;
  if ( !*a7 )
  {
LABEL_7:
    v35 = L"NULL";
    goto LABEL_8;
  }
  v35 = (const wchar_t *)*((_QWORD *)a7 + 1);
LABEL_8:
  v36 = a7;
  if ( !a7 )
    v36 = L"\b";
  ndisWppFastTraceMessage(
    (const struct _GUID *)&WPP_d69e2148828f3cdf9c5ee0d0c96342c3_Traceguids,
    0x2Eu,
    a6,
    16LL,
    v36,
    2LL,
    v35,
    v34,
    &a8,
    4LL,
    &a9,
    4LL,
    &a10,
    4LL,
    &a11,
    4LL,
    &a12,
    4LL,
    &a13,
    4LL,
    &a14,
    4LL,
    &a15,
    4LL,
    &a16,
    4LL,
    &a17,
    4LL,
    &a18,
    4LL,
    &a19,
    4LL,
    &a20,
    4LL,
    &a21,
    4LL,
    &a22,
    4LL,
    &a23,
    4LL,
    &a24,
    4LL,
    &a25,
    4LL,
    &a26,
    4LL,
    &a27,
    4LL,
    &a28,
    4LL,
    &a29,
    4LL,
    &a30,
    4LL,
    &a31,
    4LL,
    0LL);
LABEL_11:
  v37 = a7 == 0LL;
  if ( a7 )
  {
    if ( *a7 )
      v31 = (const wchar_t *)*((_QWORD *)a7 + 1);
    v37 = a7 == 0LL;
  }
  if ( v37 )
    v32 = L"\b";
  LOWORD(v39) = 46;
  return WppAutoLogTrace(a1, 4LL, 15LL, &WPP_d69e2148828f3cdf9c5ee0d0c96342c3_Traceguids, v39, a6, 16LL, v32, 2LL, v31);
}
