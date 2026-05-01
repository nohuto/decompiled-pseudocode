/*
 * XREFs of WPP_SF_qSdL @ 0x18022536C
 * Callers:
 *     ?_ForgetApplicationNoLock@CApplicationManager@@AEAAXPEAUIImmersiveApplicationInternal@@W4ForgetReason@@@Z @ 0x180090E44 (-_ForgetApplicationNoLock@CApplicationManager@@AEAAXPEAUIImmersiveApplicationInternal@@W4ForgetR.c)
 * Callees:
 *     <none>
 */

ULONG WPP_SF_qSdL(TRACEHANDLE a1, __int64 a2, __int64 a3, ...)
{
  const wchar_t *v3; // rdx
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v7; // [rsp+98h] [rbp+20h] BYREF
  va_list va; // [rsp+98h] [rbp+20h]
  const wchar_t *v9; // [rsp+A0h] [rbp+28h]
  __int64 v10; // [rsp+A8h] [rbp+30h] BYREF
  va_list va1; // [rsp+A8h] [rbp+30h]
  va_list va2; // [rsp+B0h] [rbp+38h] BYREF

  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v7 = va_arg(va1, _QWORD);
  v9 = va_arg(va1, const wchar_t *);
  va_copy(va2, va1);
  v10 = va_arg(va2, _QWORD);
  v3 = v9;
  if ( v9 )
  {
    v4 = -1LL;
    do
      ++v4;
    while ( v9[v4] );
    v5 = 2 * v4 + 2;
  }
  else
  {
    v5 = 10LL;
  }
  if ( !v9 )
    v3 = L"NULL";
  return TraceMessage(
           a1,
           0x2Bu,
           &WPP_346778d1204c33ea06f131b6be9f54e9_Traceguids,
           0x10u,
           va,
           8LL,
           v3,
           v5,
           va1,
           4LL,
           va2,
           4LL,
           0LL);
}
