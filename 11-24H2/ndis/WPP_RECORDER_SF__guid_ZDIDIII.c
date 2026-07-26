/*
 * XREFs of WPP_RECORDER_SF__guid_ZDIDIII @ 0x1400C458C
 * Callers:
 *     ?ndisTraceNicAutoPowerSaver@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x140070AA0 (-ndisTraceNicAutoPowerSaver@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x140015A30 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

__int64 WPP_RECORDER_SF__guid_ZDIDIII(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6,
        unsigned __int16 *a7,
        ...)
{
  const wchar_t *v7; // rdi
  const wchar_t *v8; // rbx
  __int64 v10; // rcx
  const wchar_t *v11; // rdx
  const wchar_t *v12; // rax
  int v14; // [rsp+28h] [rbp-99h]
  __int64 v15; // [rsp+130h] [rbp+6Fh] BYREF
  va_list va; // [rsp+130h] [rbp+6Fh]
  __int64 v17; // [rsp+138h] [rbp+77h] BYREF
  va_list va1; // [rsp+138h] [rbp+77h]
  __int64 v19; // [rsp+140h] [rbp+7Fh] BYREF
  va_list va2; // [rsp+140h] [rbp+7Fh]
  __int64 v21; // [rsp+148h] [rbp+87h] BYREF
  va_list va3; // [rsp+148h] [rbp+87h]
  __int64 v23; // [rsp+150h] [rbp+8Fh] BYREF
  va_list va4; // [rsp+150h] [rbp+8Fh]
  va_list va5; // [rsp+158h] [rbp+97h] BYREF

  va_start(va5, a7);
  va_start(va4, a7);
  va_start(va3, a7);
  va_start(va2, a7);
  va_start(va1, a7);
  va_start(va, a7);
  v15 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v17 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v19 = va_arg(va3, _QWORD);
  va_copy(va4, va3);
  v21 = va_arg(va4, _QWORD);
  va_copy(va5, va4);
  v23 = va_arg(va5, _QWORD);
  v7 = L"NULL";
  v8 = a7;
  if ( (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x4000) == 0 || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
    goto LABEL_11;
  if ( !a7 )
  {
    v10 = 8LL;
    goto LABEL_7;
  }
  v10 = *a7;
  if ( !*a7 )
  {
LABEL_7:
    v11 = L"NULL";
    goto LABEL_8;
  }
  v11 = (const wchar_t *)*((_QWORD *)a7 + 1);
LABEL_8:
  v12 = a7;
  if ( !a7 )
    v12 = L"\b";
  ndisWppFastTraceMessage(
    (const struct _GUID *)&WPP_d69e2148828f3cdf9c5ee0d0c96342c3_Traceguids,
    0x2Cu,
    a6,
    16LL,
    v12,
    2LL,
    v11,
    v10,
    va,
    4LL,
    va1,
    8LL,
    va2,
    4LL,
    va3,
    8LL,
    va4,
    8LL,
    va5,
    8LL,
    0LL);
LABEL_11:
  if ( a7 && *a7 )
    v7 = (const wchar_t *)*((_QWORD *)a7 + 1);
  if ( !a7 )
    v8 = L"\b";
  LOWORD(v14) = 44;
  return WppAutoLogTrace(a1, 4LL, 15LL, &WPP_d69e2148828f3cdf9c5ee0d0c96342c3_Traceguids, v14, a6, 16LL, v8, 2LL, v7);
}
