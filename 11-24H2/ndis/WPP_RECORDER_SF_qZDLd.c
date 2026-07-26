/*
 * XREFs of WPP_RECORDER_SF_qZDLd @ 0x1400A8FB8
 * Callers:
 *     ?ndisQuerySetMiniportDeviceState@@YAHPEAU_NDIS_MINIPORT_BLOCK@@W4_DEVICE_POWER_STATE@@KE@Z @ 0x140035510 (-ndisQuerySetMiniportDeviceState@@YAHPEAU_NDIS_MINIPORT_BLOCK@@W4_DEVICE_POWER_STATE@@KE@Z.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x140015A30 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

__int64 WPP_RECORDER_SF_qZDLd(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, ...)
{
  const wchar_t *v5; // rdi
  const wchar_t *v6; // rbx
  __int64 v8; // rcx
  const wchar_t *v9; // rdx
  const wchar_t *v10; // rax
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
  if ( (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x2000) == 0 || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
    goto LABEL_11;
  if ( !v15 )
  {
    v8 = 8LL;
    goto LABEL_7;
  }
  v8 = *v15;
  if ( !*v15 )
  {
LABEL_7:
    v9 = L"NULL";
    goto LABEL_8;
  }
  v9 = (const wchar_t *)*((_QWORD *)v15 + 1);
LABEL_8:
  v10 = v15;
  if ( !v15 )
    v10 = L"\b";
  ndisWppFastTraceMessage(
    &WPP_4a94757187d03d50151c0070042f9279_Traceguids,
    0x36u,
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
LABEL_11:
  if ( v6 && *v6 )
    v5 = (const wchar_t *)*((_QWORD *)v6 + 1);
  if ( !v6 )
    v6 = L"\b";
  LOWORD(v12) = 54;
  return WppAutoLogTrace(
           a1,
           4LL,
           14LL,
           &WPP_4a94757187d03d50151c0070042f9279_Traceguids,
           v12,
           (__int64 *)va,
           8LL,
           v6,
           2LL,
           v5);
}
