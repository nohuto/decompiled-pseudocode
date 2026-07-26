/*
 * XREFs of WPP_RECORDER_SF_Zqq @ 0x140052BB0
 * Callers:
 *     ?ndisRestartProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1401556B0 (-ndisRestartProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_RESTART.c)
 *     ?ndisPauseProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z @ 0x140155BA0 (-ndisPauseProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z.c)
 *     ?ndisUnbindEachProtocolOpenOnMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z @ 0x14015FEA0 (-ndisUnbindEachProtocolOpenOnMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@.c)
 *     ndisFindRootDevice @ 0x140175C60 (ndisFindRootDevice.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x140015A30 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

__int64 WPP_RECORDER_SF_Zqq(
        __int64 a1,
        int a2,
        unsigned int a3,
        unsigned __int16 a4,
        struct _GUID *a5,
        unsigned __int16 *a6,
        char a7,
        ...)
{
  const wchar_t *v7; // rbx
  const wchar_t *v8; // rsi
  unsigned __int64 v11; // r11
  int v13; // eax
  __int64 v14; // rax
  __int64 v16; // rax
  const wchar_t *v17; // rcx
  const wchar_t *v18; // r8
  int v19; // [rsp+20h] [rbp-68h]
  va_list va; // [rsp+C8h] [rbp+40h] BYREF

  va_start(va, a7);
  v7 = a6;
  v8 = L"NULL";
  v11 = (unsigned __int64)a3 >> 16;
  v13 = *((_DWORD *)WPP_GLOBAL_Control + 20 * v11 + (((a3 - 1) >> 5) & 0x7FF) + 11);
  if ( !_bittest(&v13, ((_BYTE)a3 - 1) & 0x1F) || *((_BYTE *)WPP_GLOBAL_Control + 80 * v11 + 41) < 4u )
    goto LABEL_2;
  if ( !a6 )
  {
    v16 = 8LL;
    goto LABEL_14;
  }
  v16 = *a6;
  if ( !*a6 )
  {
LABEL_14:
    v17 = L"NULL";
    goto LABEL_15;
  }
  v17 = (const wchar_t *)*((_QWORD *)a6 + 1);
LABEL_15:
  v18 = a6;
  if ( !a6 )
    v18 = L"\b";
  ndisWppFastTraceMessage(a5, a4, v18, 2LL, v17, v16, &a7, 8LL, va, 8LL, 0LL);
LABEL_2:
  if ( a6 )
  {
    v14 = *a6;
    if ( *a6 )
      v8 = (const wchar_t *)*((_QWORD *)a6 + 1);
  }
  else
  {
    v14 = 8LL;
  }
  if ( !a6 )
    v7 = L"\b";
  LOWORD(v19) = a4;
  return WppAutoLogTrace(a1, 4LL, a3, a5, v19, v7, 2LL, v8, v14, &a7);
}
