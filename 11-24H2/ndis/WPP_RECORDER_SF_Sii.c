/*
 * XREFs of WPP_RECORDER_SF_Sii @ 0x1400CEE44
 * Callers:
 *     ?CommitSingleKnob@KnobCollection@@QEAAXAEBUKnobDescriptor@@AEAUKnobState@@_K_N@Z @ 0x1401499A8 (-CommitSingleKnob@KnobCollection@@QEAAXAEBUKnobDescriptor@@AEAUKnobState@@_K_N@Z.c)
 *     ?ValidateKnobValue@KnobCollection@@QEAAJAEA_KAEBUKnobDescriptor@@@Z @ 0x140160CF0 (-ValidateKnobValue@KnobCollection@@QEAAJAEA_KAEBUKnobDescriptor@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400E7130 (_guard_dispatch_icall.c)
 */

__int64 WPP_RECORDER_SF_Sii(
        __int64 a1,
        unsigned __int8 a2,
        __int64 a3,
        unsigned __int16 a4,
        int a5,
        const wchar_t *a6,
        ...)
{
  const wchar_t *v6; // rbx
  __int64 v7; // rdi
  unsigned int v8; // ebp
  __int64 v11; // rsi
  __int64 v12; // rax
  __int64 v13; // rax
  const wchar_t *v14; // rcx
  bool v15; // zf
  int v17; // [rsp+20h] [rbp-68h]
  __int64 v18; // [rsp+C0h] [rbp+38h] BYREF
  va_list va; // [rsp+C0h] [rbp+38h]
  va_list va1; // [rsp+C8h] [rbp+40h] BYREF

  va_start(va1, a6);
  va_start(va, a6);
  v18 = va_arg(va1, _QWORD);
  v6 = a6;
  v7 = -1LL;
  v8 = a2;
  v11 = 10LL;
  if ( (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= a2 )
  {
    if ( a6 )
    {
      v12 = -1LL;
      do
        ++v12;
      while ( a6[v12] );
      v13 = 2 * v12 + 2;
    }
    else
    {
      v13 = 10LL;
    }
    v14 = a6;
    if ( !a6 )
      v14 = L"NULL";
    ((void (__fastcall *)(_QWORD, __int64, const struct _GUID *, _QWORD, const wchar_t *, __int64, __int64 *, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      43LL,
      &WPP_0d3df21b34c634c4ec6d6bcb69b42c7f_Traceguids,
      a4,
      v14,
      v13,
      (__int64 *)va,
      8LL,
      va1,
      8LL,
      0LL);
  }
  v15 = a6 == 0LL;
  if ( a6 )
  {
    do
      ++v7;
    while ( a6[v7] );
    v11 = 2 * v7 + 2;
    v15 = a6 == 0LL;
  }
  if ( v15 )
    v6 = L"NULL";
  LOWORD(v17) = a4;
  return WppAutoLogTrace(
           a1,
           v8,
           1LL,
           &WPP_0d3df21b34c634c4ec6d6bcb69b42c7f_Traceguids,
           v17,
           v6,
           v11,
           (__int64 *)va,
           8LL,
           va1);
}
