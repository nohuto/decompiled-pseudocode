/*
 * XREFs of WPP_RECORDER_SF_qZddD @ 0x14007E430
 * Callers:
 *     ?ndisInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEBU_UNICODE_STRING@@PEAX@Z @ 0x14004EA00 (-ndisInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEBU_UNICODE_STRI.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1400270E0 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

__int64 WPP_RECORDER_SF_qZddD(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, ...)
{
  const wchar_t *v5; // rbx
  __int64 v8; // rcx
  const wchar_t *v9; // rdx
  const wchar_t *v10; // rax
  int v11; // [rsp+20h] [rbp-88h]
  __int64 v12; // [rsp+D8h] [rbp+30h] BYREF
  va_list va; // [rsp+D8h] [rbp+30h]
  unsigned __int16 *v14; // [rsp+E0h] [rbp+38h]
  __int64 v15; // [rsp+E8h] [rbp+40h] BYREF
  va_list va1; // [rsp+E8h] [rbp+40h]
  __int64 v17; // [rsp+F0h] [rbp+48h] BYREF
  va_list va2; // [rsp+F0h] [rbp+48h]
  va_list va3; // [rsp+F8h] [rbp+50h] BYREF

  va_start(va3, a5);
  va_start(va2, a5);
  va_start(va1, a5);
  va_start(va, a5);
  v12 = va_arg(va1, _QWORD);
  v14 = va_arg(va1, unsigned __int16 *);
  va_copy(va2, va1);
  v15 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v17 = va_arg(va3, _QWORD);
  v5 = v14;
  if ( (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x100) == 0 || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
    goto LABEL_2;
  if ( !v14 )
  {
    v8 = 8LL;
    goto LABEL_10;
  }
  v8 = *v14;
  if ( !*v14 )
  {
LABEL_10:
    v9 = L"NULL";
    goto LABEL_11;
  }
  v9 = (const wchar_t *)*((_QWORD *)v14 + 1);
LABEL_11:
  v10 = v14;
  if ( !v14 )
    v10 = L"\b";
  ndisWppFastTraceMessage(
    &WPP_901e3e1acd0b36a9ab86c452924f7c21_Traceguids,
    0x24u,
    va,
    8LL,
    v10,
    2LL,
    v9,
    v8,
    va1,
    4LL,
    va2,
    4LL,
    va3,
    4LL,
    0LL);
LABEL_2:
  if ( !v5 )
    v5 = L"\b";
  LOWORD(v11) = 36;
  return WppAutoLogTrace(a1, 4LL, 9LL, &WPP_901e3e1acd0b36a9ab86c452924f7c21_Traceguids, v11, (__int64 *)va, 8LL, v5);
}
