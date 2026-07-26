/*
 * XREFs of WPP_RECORDER_SF_qqZddZD @ 0x140079FF0
 * Callers:
 *     ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x140189A40 (-ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BI.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1400270E0 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

__int64 WPP_RECORDER_SF_qqZddZD(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, ...)
{
  __int64 v7; // rcx
  const wchar_t *v8; // r10
  const wchar_t *v9; // r8
  __int64 v10; // rdx
  const wchar_t *v11; // r9
  const wchar_t *v12; // rax
  int v13; // [rsp+20h] [rbp-B8h]
  __int64 v14; // [rsp+108h] [rbp+30h] BYREF
  va_list va; // [rsp+108h] [rbp+30h]
  __int64 v16; // [rsp+110h] [rbp+38h] BYREF
  va_list va1; // [rsp+110h] [rbp+38h]
  unsigned __int16 *v18; // [rsp+118h] [rbp+40h]
  __int64 v19; // [rsp+120h] [rbp+48h] BYREF
  va_list va2; // [rsp+120h] [rbp+48h]
  __int64 v21; // [rsp+128h] [rbp+50h] BYREF
  va_list va3; // [rsp+128h] [rbp+50h]
  unsigned __int16 *v23; // [rsp+130h] [rbp+58h]
  va_list va4; // [rsp+138h] [rbp+60h] BYREF

  va_start(va4, a5);
  va_start(va3, a5);
  va_start(va2, a5);
  va_start(va1, a5);
  va_start(va, a5);
  v14 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v16 = va_arg(va2, _QWORD);
  v18 = va_arg(va2, unsigned __int16 *);
  va_copy(va3, va2);
  v19 = va_arg(va3, _QWORD);
  va_copy(va4, va3);
  v21 = va_arg(va4, _QWORD);
  v23 = va_arg(va4, unsigned __int16 *);
  if ( (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x100) == 0 || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
    goto LABEL_2;
  if ( v23 )
  {
    v7 = *v23;
    if ( *v23 )
    {
      v8 = (const wchar_t *)*((_QWORD *)v23 + 1);
      goto LABEL_9;
    }
  }
  else
  {
    v7 = 8LL;
  }
  v8 = L"NULL";
LABEL_9:
  v9 = v23;
  if ( !v23 )
    v9 = L"\b";
  if ( !v18 )
  {
    v10 = 8LL;
    goto LABEL_15;
  }
  v10 = *v18;
  if ( !*v18 )
  {
LABEL_15:
    v11 = L"NULL";
    goto LABEL_16;
  }
  v11 = (const wchar_t *)*((_QWORD *)v18 + 1);
LABEL_16:
  v12 = v18;
  if ( !v18 )
    v12 = L"\b";
  ndisWppFastTraceMessage(
    &WPP_b6f031e119d53d3b975f13e0c06480b9_Traceguids,
    0x19u,
    va,
    8LL,
    va1,
    8LL,
    v12,
    2LL,
    v11,
    v10,
    va2,
    4LL,
    va3,
    4LL,
    v9,
    2LL,
    v8,
    v7,
    va4,
    4LL,
    0LL);
LABEL_2:
  LOWORD(v13) = 25;
  return WppAutoLogTrace(
           a1,
           4LL,
           9LL,
           &WPP_b6f031e119d53d3b975f13e0c06480b9_Traceguids,
           v13,
           (__int64 *)va,
           8LL,
           (__int64 *)va1);
}
