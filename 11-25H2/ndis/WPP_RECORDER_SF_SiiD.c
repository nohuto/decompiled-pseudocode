/*
 * XREFs of WPP_RECORDER_SF_SiiD @ 0x1400D660C
 * Callers:
 *     ?CommitSingleKnob@KnobCollection@@QEAAXAEBUKnobDescriptor@@AEAUKnobState@@_K_N@Z @ 0x140154678 (-CommitSingleKnob@KnobCollection@@QEAAXAEBUKnobDescriptor@@AEAUKnobState@@_K_N@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400EDFC0 (_guard_dispatch_icall.c)
 */

__int64 WPP_RECORDER_SF_SiiD(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, const wchar_t *a6, ...)
{
  const wchar_t *v6; // rbx
  __int64 v7; // rdi
  __int64 v9; // rsi
  __int64 v10; // rax
  __int64 v11; // rax
  const wchar_t *v12; // rcx
  bool v13; // zf
  int v15; // [rsp+20h] [rbp-68h]
  __int64 v16; // [rsp+C0h] [rbp+38h] BYREF
  va_list va; // [rsp+C0h] [rbp+38h]
  __int64 v18; // [rsp+C8h] [rbp+40h] BYREF
  va_list va1; // [rsp+C8h] [rbp+40h]
  va_list va2; // [rsp+D0h] [rbp+48h] BYREF

  va_start(va2, a6);
  va_start(va1, a6);
  va_start(va, a6);
  v16 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v18 = va_arg(va2, _QWORD);
  v6 = a6;
  v7 = -1LL;
  v9 = 10LL;
  if ( (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u )
  {
    if ( a6 )
    {
      v10 = -1LL;
      do
        ++v10;
      while ( a6[v10] );
      v11 = 2 * v10 + 2;
    }
    else
    {
      v11 = 10LL;
    }
    v12 = a6;
    if ( !a6 )
      v12 = L"NULL";
    ((void (__fastcall *)(_QWORD, __int64, const struct _GUID *, __int64, const wchar_t *, __int64, __int64 *, __int64, __int64 *, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      43LL,
      &WPP_0d3df21b34c634c4ec6d6bcb69b42c7f_Traceguids,
      18LL,
      v12,
      v11,
      (__int64 *)va,
      8LL,
      (__int64 *)va1,
      8LL,
      va2,
      4LL,
      0LL);
  }
  v13 = a6 == 0LL;
  if ( a6 )
  {
    do
      ++v7;
    while ( a6[v7] );
    v9 = 2 * v7 + 2;
    v13 = a6 == 0LL;
  }
  if ( v13 )
    v6 = L"NULL";
  LOWORD(v15) = 18;
  return WppAutoLogTrace(a1, 4LL, 1LL, &WPP_0d3df21b34c634c4ec6d6bcb69b42c7f_Traceguids, v15, v6, v9, (__int64 *)va);
}
