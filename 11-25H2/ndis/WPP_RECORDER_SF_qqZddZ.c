/*
 * XREFs of WPP_RECORDER_SF_qqZddZ @ 0x1400760D0
 * Callers:
 *     ?ndisMOpenAdapter@@YAXPEAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14018B420 (-ndisMOpenAdapter@@YAXPEAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1400270E0 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

__int64 __fastcall WPP_RECORDER_SF_qqZddZ(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        char a6,
        char a7,
        unsigned __int16 *a8,
        char a9,
        char a10,
        unsigned __int16 *a11)
{
  __int64 v13; // rcx
  const wchar_t *v14; // r10
  const wchar_t *v15; // r8
  __int64 v16; // rdx
  const wchar_t *v17; // r9
  const wchar_t *v18; // rax
  int v19; // [rsp+20h] [rbp-A8h]

  if ( (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x100) == 0 || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
    goto LABEL_2;
  if ( a11 )
  {
    v13 = *a11;
    if ( *a11 )
    {
      v14 = (const wchar_t *)*((_QWORD *)a11 + 1);
      goto LABEL_9;
    }
  }
  else
  {
    v13 = 8LL;
  }
  v14 = L"NULL";
LABEL_9:
  v15 = a11;
  if ( !a11 )
    v15 = L"\b";
  if ( !a8 )
  {
    v16 = 8LL;
    goto LABEL_15;
  }
  v16 = *a8;
  if ( !*a8 )
  {
LABEL_15:
    v17 = L"NULL";
    goto LABEL_16;
  }
  v17 = (const wchar_t *)*((_QWORD *)a8 + 1);
LABEL_16:
  v18 = a8;
  if ( !a8 )
    v18 = L"\b";
  ndisWppFastTraceMessage(
    &WPP_43271d933b6d32d160b64a5fa7a4854c_Traceguids,
    0x2Au,
    &a6,
    8LL,
    &a7,
    8LL,
    v18,
    2LL,
    v17,
    v16,
    &a9,
    4LL,
    &a10,
    4LL,
    v15,
    2LL,
    v14,
    v13,
    0LL);
LABEL_2:
  LOWORD(v19) = 42;
  return WppAutoLogTrace(a1, 4LL, 9LL, &WPP_43271d933b6d32d160b64a5fa7a4854c_Traceguids, v19, &a6, 8LL, &a7);
}
