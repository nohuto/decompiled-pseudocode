/*
 * XREFs of WPP_RECORDER_SF_DZd @ 0x14000F9DC
 * Callers:
 *     HUBFDO_AssignUsb4PortMappingProperty @ 0x14007A80C (HUBFDO_AssignUsb4PortMappingProperty.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140045D00 (_guard_dispatch_icall.c)
 */

__int64 WPP_RECORDER_SF_DZd(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, ...)
{
  const wchar_t *v5; // rbx
  __int64 v7; // rcx
  const wchar_t *v8; // r8
  const wchar_t *v9; // rdx
  bool v10; // zf
  int v12; // [rsp+20h] [rbp-68h]
  __int64 v13; // [rsp+B8h] [rbp+30h] BYREF
  va_list va; // [rsp+B8h] [rbp+30h]
  unsigned __int16 *v15; // [rsp+C0h] [rbp+38h]
  va_list va1; // [rsp+C8h] [rbp+40h] BYREF

  va_start(va1, a5);
  va_start(va, a5);
  v13 = va_arg(va1, _QWORD);
  v15 = va_arg(va1, unsigned __int16 *);
  v5 = v15;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) == 0 || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    goto LABEL_11;
  if ( !v15 )
  {
    v7 = 8LL;
    goto LABEL_7;
  }
  v7 = *v15;
  if ( !*v15 )
  {
LABEL_7:
    v8 = L"NULL";
    goto LABEL_8;
  }
  v8 = (const wchar_t *)*((_QWORD *)v15 + 1);
LABEL_8:
  v9 = v15;
  if ( !v15 )
    v9 = L"\b";
  pfnWppTraceMessage(
    WPP_GLOBAL_Control->AttachedDevice,
    43LL,
    &WPP_15d974077bc73d0eebd93ea2bffbd60f_Traceguids,
    37LL,
    (__int64 *)va,
    4LL,
    v9,
    2LL,
    v8,
    v7,
    va1,
    4LL,
    0LL);
LABEL_11:
  v10 = v5 == 0LL;
  if ( v5 )
    v10 = 0;
  if ( v10 )
    v5 = L"\b";
  LOWORD(v12) = 37;
  return WppAutoLogTrace(a1, 2LL, 3LL, &WPP_15d974077bc73d0eebd93ea2bffbd60f_Traceguids, v12, (__int64 *)va, 4LL, v5);
}
