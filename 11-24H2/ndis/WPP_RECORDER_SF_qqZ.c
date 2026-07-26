/*
 * XREFs of WPP_RECORDER_SF_qqZ @ 0x140065A10
 * Callers:
 *     ndisMEmitTraceRundown @ 0x1400C50DC (ndisMEmitTraceRundown.c)
 *     ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1401788C0 (-ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BI.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x140015A30 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

__int64 __fastcall WPP_RECORDER_SF_qqZ(
        __int64 a1,
        unsigned __int8 a2,
        unsigned int a3,
        unsigned __int16 a4,
        struct _GUID *a5,
        char a6,
        char a7,
        unsigned __int16 *a8)
{
  const wchar_t *v8; // rbx
  unsigned __int64 v11; // rdi
  unsigned int v12; // r14d
  int v14; // eax
  __int64 v16; // rcx
  const wchar_t *v17; // rdx
  const wchar_t *v18; // rax
  int v19; // [rsp+20h] [rbp-78h]

  v8 = a8;
  v11 = (unsigned __int64)a3 >> 16;
  v12 = a2;
  v14 = *((_DWORD *)WPP_GLOBAL_Control + 20 * v11 + (((a3 - 1) >> 5) & 0x7FF) + 11);
  if ( !_bittest(&v14, (a3 - 1) & 0x1F) || *((_BYTE *)WPP_GLOBAL_Control + 80 * v11 + 41) < a2 )
    goto LABEL_2;
  if ( !a8 )
  {
    v16 = 8LL;
    goto LABEL_10;
  }
  v16 = *a8;
  if ( !*a8 )
  {
LABEL_10:
    v17 = L"NULL";
    goto LABEL_11;
  }
  v17 = (const wchar_t *)*((_QWORD *)a8 + 1);
LABEL_11:
  v18 = a8;
  if ( !a8 )
    v18 = L"\b";
  ndisWppFastTraceMessage(a5, a4, &a6, 8LL, &a7, 8LL, v18, 2LL, v17, v16, 0LL);
LABEL_2:
  if ( !v8 )
    v8 = L"\b";
  LOWORD(v19) = a4;
  return WppAutoLogTrace(a1, v12, a3, a5, v19, &a6, 8LL, &a7, 8LL, v8);
}
