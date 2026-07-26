/*
 * XREFs of WPP_RECORDER_SF_LqqZZ @ 0x140057A00
 * Callers:
 *     ?ndisPnPNotifyBinding@@_Y2PAGENPNP@@AHPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z @ 0x140173270 (-ndisPnPNotifyBinding@@_Y2PAGENPNP@@AHPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x140015A30 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

__int64 __fastcall WPP_RECORDER_SF_LqqZZ(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        char a6,
        char a7,
        char a8,
        unsigned __int16 *a9,
        unsigned __int16 *a10)
{
  __int64 v12; // rcx
  const wchar_t *v13; // r10
  const wchar_t *v14; // r8
  __int64 v15; // rdx
  const wchar_t *v16; // r9
  const wchar_t *v17; // rax
  int v18; // [rsp+20h] [rbp-98h]

  if ( (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x100) == 0 || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
    goto LABEL_2;
  if ( a10 )
  {
    v12 = *a10;
    if ( *a10 )
    {
      v13 = (const wchar_t *)*((_QWORD *)a10 + 1);
      goto LABEL_9;
    }
  }
  else
  {
    v12 = 8LL;
  }
  v13 = L"NULL";
LABEL_9:
  v14 = a10;
  if ( !a10 )
    v14 = L"\b";
  if ( !a9 )
  {
    v15 = 8LL;
    goto LABEL_15;
  }
  v15 = *a9;
  if ( !*a9 )
  {
LABEL_15:
    v16 = L"NULL";
    goto LABEL_16;
  }
  v16 = (const wchar_t *)*((_QWORD *)a9 + 1);
LABEL_16:
  v17 = a9;
  if ( !a9 )
    v17 = L"\b";
  ndisWppFastTraceMessage(
    &WPP_c993d3286aac3856ef9e8dc1fba97826_Traceguids,
    0x19u,
    &a6,
    4LL,
    &a7,
    8LL,
    &a8,
    8LL,
    v17,
    2LL,
    v16,
    v15,
    v14,
    2LL,
    v13,
    v12,
    0LL);
LABEL_2:
  LOWORD(v18) = 25;
  return WppAutoLogTrace(a1, 4LL, 9LL, &WPP_c993d3286aac3856ef9e8dc1fba97826_Traceguids, v18, &a6, 4LL, &a7, 8LL, &a8);
}
