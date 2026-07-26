/*
 * XREFs of WPP_RECORDER_SF_qqZZ @ 0x140070750
 * Callers:
 *     ?ndisPnPNotifyBinding@@_Y2PAGENPNP@@AHPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z @ 0x14017E230 (-ndisPnPNotifyBinding@@_Y2PAGENPNP@@AHPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z.c)
 *     NdisCloseAdapter @ 0x14017F9C0 (NdisCloseAdapter.c)
 *     ?ndisRestartFilterInner@@YAHPEAU_NDIS_FILTER_BLOCK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x140182EC0 (-ndisRestartFilterInner@@YAHPEAU_NDIS_FILTER_BLOCK@@PEAUNDIS_RESTART_INFORMATION@@@Z.c)
 *     ?ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1401893D0 (-ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1400270E0 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
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
  __int64 v12; // rcx
  const wchar_t *v13; // r10
  const wchar_t *v14; // r9
  __int64 v15; // rdx
  const wchar_t *v16; // r8
  const wchar_t *v17; // rax
  int v18; // [rsp+20h] [rbp-88h]

  if ( (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x100) == 0 || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
    goto LABEL_2;
  if ( a9 )
  {
    v12 = *a9;
    if ( *a9 )
    {
      v13 = (const wchar_t *)*((_QWORD *)a9 + 1);
      goto LABEL_9;
    }
  }
  else
  {
    v12 = 8LL;
  }
  v13 = L"NULL";
LABEL_9:
  v14 = a9;
  if ( !a9 )
    v14 = L"\b";
  if ( !a8 )
  {
    v15 = 8LL;
    goto LABEL_15;
  }
  v15 = *a8;
  if ( !*a8 )
  {
LABEL_15:
    v16 = L"NULL";
    goto LABEL_16;
  }
  v16 = (const wchar_t *)*((_QWORD *)a8 + 1);
LABEL_16:
  v17 = a8;
  if ( !a8 )
    v17 = L"\b";
  ndisWppFastTraceMessage(a5, a4, &a6, 8LL, &a7, 8LL, v17, 2LL, v16, v15, v14, 2LL, v13, v12, 0LL);
LABEL_2:
  LOWORD(v18) = a4;
  return WppAutoLogTrace(a1, 4LL, 9LL, a5, v18, &a6, 8LL, &a7);
}
