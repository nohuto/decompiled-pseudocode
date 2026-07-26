/*
 * XREFs of WPP_RECORDER_SF_DqZ @ 0x1400AFEC0
 * Callers:
 *     ?ndisMValidatePMWakeReason@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1400547E0 (-ndisMValidatePMWakeReason@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z.c)
 *     ?ndisWdfNotifySystemPower@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4POWER_ACTION@@W4_DEVICE_POWER_STATE@@@Z @ 0x140082890 (-ndisWdfNotifySystemPower@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4POWER_ACTION@@W4_DEVICE_POWER_STATE@@@.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x140015A30 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

__int64 __fastcall WPP_RECORDER_SF_DqZ(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned __int16 a4,
        struct _GUID *a5,
        char a6,
        char a7,
        unsigned __int16 *a8)
{
  const wchar_t *v8; // rbx
  unsigned __int64 v11; // r11
  int v13; // eax
  __int64 v14; // rcx
  const wchar_t *v15; // rdx
  const wchar_t *v16; // rax
  int v18; // [rsp+20h] [rbp-68h]

  v8 = a8;
  v11 = (unsigned __int64)a3 >> 16;
  v13 = *((_DWORD *)WPP_GLOBAL_Control + 20 * v11 + (((a3 - 1) >> 5) & 0x7FF) + 11);
  if ( !_bittest(&v13, (a3 - 1) & 0x1F) || *((_BYTE *)WPP_GLOBAL_Control + 80 * v11 + 41) < 4u )
    goto LABEL_11;
  if ( !a8 )
  {
    v14 = 8LL;
    goto LABEL_7;
  }
  v14 = *a8;
  if ( !*a8 )
  {
LABEL_7:
    v15 = L"NULL";
    goto LABEL_8;
  }
  v15 = (const wchar_t *)*((_QWORD *)a8 + 1);
LABEL_8:
  v16 = a8;
  if ( !a8 )
    v16 = L"\b";
  ndisWppFastTraceMessage(a5, a4, &a6, 4LL, &a7, 8LL, v16, 2LL, v15, v14, 0LL);
LABEL_11:
  if ( !v8 )
    v8 = L"\b";
  LOWORD(v18) = a4;
  return WppAutoLogTrace(a1, 4LL, a3, a5, v18, &a6, 4LL, &a7, 8LL, v8);
}
