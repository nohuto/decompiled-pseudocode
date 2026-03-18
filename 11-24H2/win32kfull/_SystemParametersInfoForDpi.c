/*
 * XREFs of _SystemParametersInfoForDpi @ 0x140079DCC
 * Callers:
 *     NtUserSystemParametersInfoForDpi @ 0x140079C40 (NtUserSystemParametersInfoForDpi.c)
 * Callees:
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 *     GetDpiDependentMetric @ 0x140074FC4 (GetDpiDependentMetric.c)
 *     GetScaledLogFontForDpi @ 0x14007915C (GetScaledLogFontForDpi.c)
 *     GetWindowNCMetricsForDpi @ 0x140079A10 (GetWindowNCMetricsForDpi.c)
 */

__int64 __fastcall SystemParametersInfoForDpi(int a1, __int64 a2, _DWORD *a3, __int64 a4, unsigned int a5)
{
  unsigned int v5; // ebx
  _DWORD *v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 UserSessionState; // rax
  __int64 v10; // rdx

  v5 = 0;
  v6 = a3;
  switch ( a1 )
  {
    case 41:
      if ( *a3 == 504 )
        return GetWindowNCMetricsForDpi(a3, a5);
      goto LABEL_12;
    case 31:
      v10 = a5;
      return GetScaledLogFontForDpi(0, v10, (__int64)a3);
    case 45:
      if ( *a3 == 108 )
      {
        a3[1] = GetDpiDependentMetric(18, a5);
        v6[2] = GetDpiDependentMetric(19, a5);
        UserSessionState = W32GetUserSessionState(v8, v7);
        a3 = v6 + 4;
        v10 = a5;
        v6[3] = (*(_DWORD *)(UserSessionState + 67056) >> 21) & 1;
        return GetScaledLogFontForDpi(0, v10, (__int64)a3);
      }
LABEL_12:
      UserSetLastError(87);
      break;
  }
  return v5;
}
