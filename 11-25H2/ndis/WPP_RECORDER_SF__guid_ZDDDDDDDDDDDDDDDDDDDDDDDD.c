/*
 * XREFs of WPP_RECORDER_SF__guid_ZDDDDDDDDDDDDDDDDDDDDDDDD @ 0x1400CAA40
 * Callers:
 *     ?ndisTraceNicAutoPowerSaver@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x140066770 (-ndisTraceNicAutoPowerSaver@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1400270E0 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
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
  const wchar_t *v31; // rbx
  __int64 v33; // rcx
  const wchar_t *v34; // rdx
  const wchar_t *v35; // rax
  bool v36; // zf
  int v38; // [rsp+28h] [rbp-240h]

  v31 = a7;
  if ( (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x4000) == 0 || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
    goto LABEL_11;
  if ( !a7 )
  {
    v33 = 8LL;
    goto LABEL_7;
  }
  v33 = *a7;
  if ( !*a7 )
  {
LABEL_7:
    v34 = L"NULL";
    goto LABEL_8;
  }
  v34 = (const wchar_t *)*((_QWORD *)a7 + 1);
LABEL_8:
  v35 = a7;
  if ( !a7 )
    v35 = L"\b";
  ndisWppFastTraceMessage(
    &WPP_0da1f7415b08391dc91ed9194dfe6793_Traceguids,
    0x2Du,
    a6,
    16LL,
    v35,
    2LL,
    v34,
    v33,
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
  v36 = a7 == 0LL;
  if ( a7 )
    v36 = 0;
  if ( v36 )
    v31 = L"\b";
  LOWORD(v38) = 45;
  return WppAutoLogTrace(a1, 4LL, 15LL, &WPP_0da1f7415b08391dc91ed9194dfe6793_Traceguids, v38, a6, 16LL, v31);
}
