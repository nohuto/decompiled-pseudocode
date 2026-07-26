/*
 * XREFs of WPP_RECORDER_SF_qqZddZD @ 0x14005E000
 * Callers:
 *     ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1401788C0 (-ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BI.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x140015A30 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

__int64 WPP_RECORDER_SF_qqZddZD(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, ...)
{
  const wchar_t *v5; // rdi
  __int64 v8; // rcx
  const wchar_t *v9; // r10
  const wchar_t *v10; // r8
  __int64 v11; // rdx
  const wchar_t *v12; // r9
  const wchar_t *v13; // rax
  int v14; // [rsp+20h] [rbp-B8h]
  __int64 v15; // [rsp+108h] [rbp+30h] BYREF
  va_list va; // [rsp+108h] [rbp+30h]
  __int64 v17; // [rsp+110h] [rbp+38h] BYREF
  va_list va1; // [rsp+110h] [rbp+38h]
  unsigned __int16 *v19; // [rsp+118h] [rbp+40h]
  __int64 v20; // [rsp+120h] [rbp+48h] BYREF
  va_list va2; // [rsp+120h] [rbp+48h]
  __int64 v22; // [rsp+128h] [rbp+50h] BYREF
  va_list va3; // [rsp+128h] [rbp+50h]
  unsigned __int16 *v24; // [rsp+130h] [rbp+58h]
  va_list va4; // [rsp+138h] [rbp+60h] BYREF

  va_start(va4, a5);
  va_start(va3, a5);
  va_start(va2, a5);
  va_start(va1, a5);
  va_start(va, a5);
  v15 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v17 = va_arg(va2, _QWORD);
  v19 = va_arg(va2, unsigned __int16 *);
  va_copy(va3, va2);
  v20 = va_arg(va3, _QWORD);
  va_copy(va4, va3);
  v22 = va_arg(va4, _QWORD);
  v24 = va_arg(va4, unsigned __int16 *);
  v5 = v19;
  if ( (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x100) == 0 || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
    goto LABEL_2;
  if ( v24 )
  {
    v8 = *v24;
    if ( *v24 )
    {
      v9 = (const wchar_t *)*((_QWORD *)v24 + 1);
      goto LABEL_11;
    }
  }
  else
  {
    v8 = 8LL;
  }
  v9 = L"NULL";
LABEL_11:
  v10 = v24;
  if ( !v24 )
    v10 = L"\b";
  if ( !v19 )
  {
    v11 = 8LL;
    goto LABEL_17;
  }
  v11 = *v19;
  if ( !*v19 )
  {
LABEL_17:
    v12 = L"NULL";
    goto LABEL_18;
  }
  v12 = (const wchar_t *)*((_QWORD *)v19 + 1);
LABEL_18:
  v13 = v19;
  if ( !v19 )
    v13 = L"\b";
  ndisWppFastTraceMessage(
    &WPP_4f475340cee13bebfed3041a3a58f669_Traceguids,
    0x1Au,
    va,
    8LL,
    va1,
    8LL,
    v13,
    2LL,
    v12,
    v11,
    va2,
    4LL,
    va3,
    4LL,
    v10,
    2LL,
    v9,
    v8,
    va4,
    4LL,
    0LL);
LABEL_2:
  if ( !v5 )
    v5 = L"\b";
  LOWORD(v14) = 26;
  return WppAutoLogTrace(
           a1,
           4LL,
           9LL,
           &WPP_4f475340cee13bebfed3041a3a58f669_Traceguids,
           v14,
           (__int64 *)va,
           8LL,
           (__int64 *)va1,
           8LL,
           v5);
}
