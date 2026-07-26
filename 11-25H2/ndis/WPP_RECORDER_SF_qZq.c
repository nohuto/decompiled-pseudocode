/*
 * XREFs of WPP_RECORDER_SF_qZq @ 0x1400A2F4C
 * Callers:
 *     ?ndisIMCheckDeviceInstance@@YAEPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_UNICODE_STRING@@PEAPEAX@Z @ 0x14009A200 (-ndisIMCheckDeviceInstance@@YAEPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_UNICODE_STRING@@PEAPEAX@Z.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1400270E0 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

__int64 WPP_RECORDER_SF_qZq(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, ...)
{
  const wchar_t *v5; // rbx
  __int64 v7; // rcx
  const wchar_t *v8; // rdx
  const wchar_t *v9; // rax
  int v11; // [rsp+20h] [rbp-68h]
  __int64 v12; // [rsp+B8h] [rbp+30h] BYREF
  va_list va; // [rsp+B8h] [rbp+30h]
  unsigned __int16 *v14; // [rsp+C0h] [rbp+38h]
  va_list va1; // [rsp+C8h] [rbp+40h] BYREF

  va_start(va1, a5);
  va_start(va, a5);
  v12 = va_arg(va1, _QWORD);
  v14 = va_arg(va1, unsigned __int16 *);
  v5 = v14;
  if ( (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0 || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
    goto LABEL_11;
  if ( !v14 )
  {
    v7 = 8LL;
    goto LABEL_7;
  }
  v7 = *v14;
  if ( !*v14 )
  {
LABEL_7:
    v8 = L"NULL";
    goto LABEL_8;
  }
  v8 = (const wchar_t *)*((_QWORD *)v14 + 1);
LABEL_8:
  v9 = v14;
  if ( !v14 )
    v9 = L"\b";
  ndisWppFastTraceMessage(
    &WPP_901e3e1acd0b36a9ab86c452924f7c21_Traceguids,
    0x34u,
    va,
    8LL,
    v9,
    2LL,
    v8,
    v7,
    va1,
    8LL,
    0LL);
LABEL_11:
  if ( !v5 )
    v5 = L"\b";
  LOWORD(v11) = 52;
  return WppAutoLogTrace(a1, 4LL, 1LL, &WPP_901e3e1acd0b36a9ab86c452924f7c21_Traceguids, v11, (__int64 *)va, 8LL, v5);
}
