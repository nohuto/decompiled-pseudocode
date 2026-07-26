/*
 * XREFs of WPP_RECORDER_SF_qZq @ 0x14009982C
 * Callers:
 *     ?ndisIMCheckDeviceInstance@@YAEPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_UNICODE_STRING@@PEAPEAX@Z @ 0x14008E6C0 (-ndisIMCheckDeviceInstance@@YAEPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_UNICODE_STRING@@PEAPEAX@Z.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x140015A30 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

__int64 WPP_RECORDER_SF_qZq(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, ...)
{
  const wchar_t *v5; // rdi
  const wchar_t *v6; // rbx
  __int64 v8; // rcx
  const wchar_t *v9; // rdx
  const wchar_t *v10; // rax
  int v12; // [rsp+20h] [rbp-68h]
  __int64 v13; // [rsp+B8h] [rbp+30h] BYREF
  va_list va; // [rsp+B8h] [rbp+30h]
  unsigned __int16 *v15; // [rsp+C0h] [rbp+38h]
  va_list va1; // [rsp+C8h] [rbp+40h] BYREF

  va_start(va1, a5);
  va_start(va, a5);
  v13 = va_arg(va1, _QWORD);
  v15 = va_arg(va1, unsigned __int16 *);
  v5 = L"NULL";
  v6 = v15;
  if ( (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0 || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
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
    &WPP_901e3e1acd0b36a9ab86c452924f7c21_Traceguids,
    0x34u,
    va,
    8LL,
    v10,
    2LL,
    v9,
    v8,
    va1,
    8LL,
    0LL);
LABEL_11:
  if ( v6 && *v6 )
    v5 = (const wchar_t *)*((_QWORD *)v6 + 1);
  if ( !v6 )
    v6 = L"\b";
  LOWORD(v12) = 52;
  return WppAutoLogTrace(
           a1,
           4LL,
           1LL,
           &WPP_901e3e1acd0b36a9ab86c452924f7c21_Traceguids,
           v12,
           (__int64 *)va,
           8LL,
           v6,
           2LL,
           v5);
}
