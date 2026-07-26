/*
 * XREFs of WPP_RECORDER_SF__guid_ZDIDIII @ 0x1400CB540
 * Callers:
 *     ?ndisTraceNicAutoPowerSaver@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x140066770 (-ndisTraceNicAutoPowerSaver@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1400270E0 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
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
  const wchar_t *v7; // rbx
  __int64 v9; // rcx
  const wchar_t *v10; // rdx
  const wchar_t *v11; // rax
  int v13; // [rsp+28h] [rbp-99h]
  __int64 v14; // [rsp+130h] [rbp+6Fh] BYREF
  va_list va; // [rsp+130h] [rbp+6Fh]
  __int64 v16; // [rsp+138h] [rbp+77h] BYREF
  va_list va1; // [rsp+138h] [rbp+77h]
  __int64 v18; // [rsp+140h] [rbp+7Fh] BYREF
  va_list va2; // [rsp+140h] [rbp+7Fh]
  __int64 v20; // [rsp+148h] [rbp+87h] BYREF
  va_list va3; // [rsp+148h] [rbp+87h]
  __int64 v22; // [rsp+150h] [rbp+8Fh] BYREF
  va_list va4; // [rsp+150h] [rbp+8Fh]
  va_list va5; // [rsp+158h] [rbp+97h] BYREF

  va_start(va5, a7);
  va_start(va4, a7);
  va_start(va3, a7);
  va_start(va2, a7);
  va_start(va1, a7);
  va_start(va, a7);
  v14 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v16 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v18 = va_arg(va3, _QWORD);
  va_copy(va4, va3);
  v20 = va_arg(va4, _QWORD);
  va_copy(va5, va4);
  v22 = va_arg(va5, _QWORD);
  v7 = a7;
  if ( (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x4000) == 0 || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
    goto LABEL_11;
  if ( !a7 )
  {
    v9 = 8LL;
    goto LABEL_7;
  }
  v9 = *a7;
  if ( !*a7 )
  {
LABEL_7:
    v10 = L"NULL";
    goto LABEL_8;
  }
  v10 = (const wchar_t *)*((_QWORD *)a7 + 1);
LABEL_8:
  v11 = a7;
  if ( !a7 )
    v11 = L"\b";
  ndisWppFastTraceMessage(
    &WPP_0da1f7415b08391dc91ed9194dfe6793_Traceguids,
    0x2Bu,
    a6,
    16LL,
    v11,
    2LL,
    v10,
    v9,
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
  if ( !a7 )
    v7 = L"\b";
  LOWORD(v13) = 43;
  return WppAutoLogTrace(a1, 4LL, 15LL, &WPP_0da1f7415b08391dc91ed9194dfe6793_Traceguids, v13, a6, 16LL, v7);
}
