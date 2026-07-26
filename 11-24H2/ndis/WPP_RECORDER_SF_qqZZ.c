/*
 * XREFs of WPP_RECORDER_SF_qqZZ @ 0x1400555E0
 * Callers:
 *     ?ndisPnPNotifyBinding@@_Y2PAGENPNP@@AHPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z @ 0x140173270 (-ndisPnPNotifyBinding@@_Y2PAGENPNP@@AHPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z.c)
 *     NdisCloseAdapter @ 0x140173610 (NdisCloseAdapter.c)
 *     ?ndisRestartFilterInner@@YAHPEAU_NDIS_FILTER_BLOCK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x140174100 (-ndisRestartFilterInner@@YAHPEAU_NDIS_FILTER_BLOCK@@PEAUNDIS_RESTART_INFORMATION@@@Z.c)
 *     ?ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z @ 0x140176CB0 (-ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x140015A30 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

__int64 __fastcall WPP_RECORDER_SF_qqZZ(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int16 a4,
        struct _GUID *a5,
        char a6,
        char a7,
        unsigned __int16 *a8,
        unsigned __int16 *a9)
{
  const wchar_t *v9; // rdi
  __int64 v13; // rcx
  const wchar_t *v14; // r10
  const wchar_t *v15; // r9
  __int64 v16; // rdx
  const wchar_t *v17; // r8
  const wchar_t *v18; // rax
  int v19; // [rsp+20h] [rbp-88h]

  v9 = a8;
  if ( (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x100) == 0 || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
    goto LABEL_2;
  if ( a9 )
  {
    v13 = *a9;
    if ( *a9 )
    {
      v14 = (const wchar_t *)*((_QWORD *)a9 + 1);
      goto LABEL_11;
    }
  }
  else
  {
    v13 = 8LL;
  }
  v14 = L"NULL";
LABEL_11:
  v15 = a9;
  if ( !a9 )
    v15 = L"\b";
  if ( !a8 )
  {
    v16 = 8LL;
    goto LABEL_17;
  }
  v16 = *a8;
  if ( !*a8 )
  {
LABEL_17:
    v17 = L"NULL";
    goto LABEL_18;
  }
  v17 = (const wchar_t *)*((_QWORD *)a8 + 1);
LABEL_18:
  v18 = a8;
  if ( !a8 )
    v18 = L"\b";
  ndisWppFastTraceMessage(a5, a4, &a6, 8LL, &a7, 8LL, v18, 2LL, v17, v16, v15, 2LL, v14, v13, 0LL);
LABEL_2:
  if ( !v9 )
    v9 = L"\b";
  LOWORD(v19) = a4;
  return WppAutoLogTrace(a1, 4LL, 9LL, a5, v19, &a6, 8LL, &a7, 8LL, v9);
}
