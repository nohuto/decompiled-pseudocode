/*
 * XREFs of WPP_RECORDER_SF_qqZddZ @ 0x14005B6A0
 * Callers:
 *     ?ndisMOpenAdapter@@YAXPEAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14017E480 (-ndisMOpenAdapter@@YAXPEAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x140015A30 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
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
  const wchar_t *v11; // rdi
  __int64 v14; // rcx
  const wchar_t *v15; // r10
  const wchar_t *v16; // r8
  __int64 v17; // rdx
  const wchar_t *v18; // r9
  const wchar_t *v19; // rax
  int v20; // [rsp+20h] [rbp-A8h]

  v11 = a8;
  if ( (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x100) == 0 || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
    goto LABEL_2;
  if ( a11 )
  {
    v14 = *a11;
    if ( *a11 )
    {
      v15 = (const wchar_t *)*((_QWORD *)a11 + 1);
      goto LABEL_11;
    }
  }
  else
  {
    v14 = 8LL;
  }
  v15 = L"NULL";
LABEL_11:
  v16 = a11;
  if ( !a11 )
    v16 = L"\b";
  if ( !a8 )
  {
    v17 = 8LL;
    goto LABEL_17;
  }
  v17 = *a8;
  if ( !*a8 )
  {
LABEL_17:
    v18 = L"NULL";
    goto LABEL_18;
  }
  v18 = (const wchar_t *)*((_QWORD *)a8 + 1);
LABEL_18:
  v19 = a8;
  if ( !a8 )
    v19 = L"\b";
  ndisWppFastTraceMessage(
    &WPP_af651eb67934303d7b17b39d6bfcb024_Traceguids,
    0x2Au,
    &a6,
    8LL,
    &a7,
    8LL,
    v19,
    2LL,
    v18,
    v17,
    &a9,
    4LL,
    &a10,
    4LL,
    v16,
    2LL,
    v15,
    v14,
    0LL);
LABEL_2:
  if ( !v11 )
    v11 = L"\b";
  LOWORD(v20) = 42;
  return WppAutoLogTrace(a1, 4LL, 9LL, &WPP_af651eb67934303d7b17b39d6bfcb024_Traceguids, v20, &a6, 8LL, &a7, 8LL, v11);
}
