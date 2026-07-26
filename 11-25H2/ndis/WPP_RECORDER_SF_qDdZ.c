/*
 * XREFs of WPP_RECORDER_SF_qDdZ @ 0x1400A8F8C
 * Callers:
 *     ?ndisMResetCompleteStage1@@YAHPEAU_NDIS_MINIPORT_BLOCK@@HE@Z @ 0x1400A6CA4 (-ndisMResetCompleteStage1@@YAHPEAU_NDIS_MINIPORT_BLOCK@@HE@Z.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1400270E0 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

__int64 __fastcall WPP_RECORDER_SF_qDdZ(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        char a6,
        char a7,
        char a8,
        unsigned __int16 *a9)
{
  __int64 v10; // rcx
  const wchar_t *v11; // rdx
  const wchar_t *v12; // rax
  int v14; // [rsp+20h] [rbp-78h]

  if ( (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x100) == 0 || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
    goto LABEL_11;
  if ( !a9 )
  {
    v10 = 8LL;
    goto LABEL_7;
  }
  v10 = *a9;
  if ( !*a9 )
  {
LABEL_7:
    v11 = L"NULL";
    goto LABEL_8;
  }
  v11 = (const wchar_t *)*((_QWORD *)a9 + 1);
LABEL_8:
  v12 = a9;
  if ( !a9 )
    v12 = L"\b";
  ndisWppFastTraceMessage(
    &WPP_43271d933b6d32d160b64a5fa7a4854c_Traceguids,
    0x4Du,
    &a6,
    8LL,
    &a7,
    4LL,
    &a8,
    4LL,
    v12,
    2LL,
    v11,
    v10,
    0LL);
LABEL_11:
  LOWORD(v14) = 77;
  return WppAutoLogTrace(a1, 4LL, 9LL, &WPP_43271d933b6d32d160b64a5fa7a4854c_Traceguids, v14, &a6, 8LL, &a7);
}
