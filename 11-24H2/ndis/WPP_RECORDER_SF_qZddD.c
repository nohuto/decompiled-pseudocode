/*
 * XREFs of WPP_RECORDER_SF_qZddD @ 0x1400627C0
 * Callers:
 *     ?ndisPnPStartDevice@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z @ 0x140076E70 (-ndisPnPStartDevice@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x140015A30 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

__int64 WPP_RECORDER_SF_qZddD(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, ...)
{
  const wchar_t *v5; // rdi
  const wchar_t *v6; // rbx
  __int64 v9; // rcx
  const wchar_t *v10; // rdx
  const wchar_t *v11; // rax
  int v12; // [rsp+20h] [rbp-88h]
  __int64 v13; // [rsp+D8h] [rbp+30h] BYREF
  va_list va; // [rsp+D8h] [rbp+30h]
  unsigned __int16 *v15; // [rsp+E0h] [rbp+38h]
  __int64 v16; // [rsp+E8h] [rbp+40h] BYREF
  va_list va1; // [rsp+E8h] [rbp+40h]
  __int64 v18; // [rsp+F0h] [rbp+48h] BYREF
  va_list va2; // [rsp+F0h] [rbp+48h]
  va_list va3; // [rsp+F8h] [rbp+50h] BYREF

  va_start(va3, a5);
  va_start(va2, a5);
  va_start(va1, a5);
  va_start(va, a5);
  v13 = va_arg(va1, _QWORD);
  v15 = va_arg(va1, unsigned __int16 *);
  va_copy(va2, va1);
  v16 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v18 = va_arg(va3, _QWORD);
  v5 = L"NULL";
  v6 = v15;
  if ( (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x100) == 0 || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
    goto LABEL_2;
  if ( !v15 )
  {
    v9 = 8LL;
    goto LABEL_14;
  }
  v9 = *v15;
  if ( !*v15 )
  {
LABEL_14:
    v10 = L"NULL";
    goto LABEL_15;
  }
  v10 = (const wchar_t *)*((_QWORD *)v15 + 1);
LABEL_15:
  v11 = v15;
  if ( !v15 )
    v11 = L"\b";
  ndisWppFastTraceMessage(
    &WPP_901e3e1acd0b36a9ab86c452924f7c21_Traceguids,
    0x24u,
    va,
    8LL,
    v11,
    2LL,
    v10,
    v9,
    va1,
    4LL,
    va2,
    4LL,
    va3,
    4LL,
    0LL);
LABEL_2:
  if ( v6 && *v6 )
    v5 = (const wchar_t *)*((_QWORD *)v6 + 1);
  if ( !v6 )
    v6 = L"\b";
  LOWORD(v12) = 36;
  return WppAutoLogTrace(
           a1,
           4LL,
           9LL,
           &WPP_901e3e1acd0b36a9ab86c452924f7c21_Traceguids,
           v12,
           (__int64 *)va,
           8LL,
           v6,
           2LL,
           v5);
}
