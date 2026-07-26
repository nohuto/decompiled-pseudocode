/*
 * XREFs of WPP_RECORDER_SF_LZq @ 0x1400A084C
 * Callers:
 *     ?ndisBindProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z @ 0x140154760 (-ndisBindProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z.c)
 *     ?ndisRestartProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1401556B0 (-ndisRestartProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_RESTART.c)
 *     ?SetSource@BindState@Ndis@@QEAA_NW4BIND_SOURCE_STATE@@W4Flags@BindSource@2@@Z @ 0x14015E370 (-SetSource@BindState@Ndis@@QEAA_NW4BIND_SOURCE_STATE@@W4Flags@BindSource@2@@Z.c)
 *     ?ndisMSetMiniportReadyForBinding@@YAXPEAU_NDIS_MINIPORT_BLOCK@@_NW4NDIS_DO_NOT_BIND_REASON@@W4CallRunMode@@@Z @ 0x140161630 (-ndisMSetMiniportReadyForBinding@@YAXPEAU_NDIS_MINIPORT_BLOCK@@_NW4NDIS_DO_NOT_BIND_REASON@@W4Ca.c)
 *     ?ndisMRestartMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x140164600 (-ndisMRestartMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_INFORMATION@@@Z.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x140015A30 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

__int64 WPP_RECORDER_SF_LZq(
        __int64 a1,
        int a2,
        int a3,
        unsigned __int16 a4,
        struct _GUID *a5,
        char a6,
        unsigned __int16 *a7,
        ...)
{
  const wchar_t *v7; // rdi
  const wchar_t *v8; // rbx
  __int64 v11; // rcx
  const wchar_t *v12; // rdx
  const wchar_t *v13; // rax
  int v15; // [rsp+20h] [rbp-68h]
  va_list va; // [rsp+C8h] [rbp+40h] BYREF

  va_start(va, a7);
  v7 = L"NULL";
  v8 = a7;
  if ( (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x8000000) == 0 || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
    goto LABEL_11;
  if ( !a7 )
  {
    v11 = 8LL;
    goto LABEL_7;
  }
  v11 = *a7;
  if ( !*a7 )
  {
LABEL_7:
    v12 = L"NULL";
    goto LABEL_8;
  }
  v12 = (const wchar_t *)*((_QWORD *)a7 + 1);
LABEL_8:
  v13 = a7;
  if ( !a7 )
    v13 = L"\b";
  ndisWppFastTraceMessage(a5, a4, &a6, 4LL, v13, 2LL, v12, v11, va, 8LL, 0LL);
LABEL_11:
  if ( v8 && *v8 )
    v7 = (const wchar_t *)*((_QWORD *)v8 + 1);
  if ( !v8 )
    v8 = L"\b";
  LOWORD(v15) = a4;
  return WppAutoLogTrace(a1, 4LL, 28LL, a5, v15, &a6, 4LL, v8, 2LL, v7);
}
