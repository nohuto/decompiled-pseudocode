/*
 * XREFs of GetWindowNCMetricsForDpi @ 0x140079A10
 * Callers:
 *     _SystemParametersInfoForDpi @ 0x140079DCC (_SystemParametersInfoForDpi.c)
 * Callees:
 *     GetDpiDependentMetric @ 0x140074FC4 (GetDpiDependentMetric.c)
 *     GetScaledLogFontForDpi @ 0x14007915C (GetScaledLogFontForDpi.c)
 *     Get96DpiServerInfo @ 0x1402F15E0 (Get96DpiServerInfo.c)
 */

_BOOL8 __fastcall GetWindowNCMetricsForDpi(_DWORD *a1, unsigned int a2)
{
  __int64 v4; // rax
  BOOL ScaledLogFontForDpi; // ebx
  BOOL v6; // edi
  BOOL v7; // ebx

  a1[5] = GetDpiDependentMetric(13, a2);
  a1[55] = GetDpiDependentMetric(26, a2);
  v4 = Get96DpiServerInfo();
  a1[1] = EngMulDiv(*(_DWORD *)(v4 + 4), a2, 96);
  a1[2] = GetDpiDependentMetric(0, a2);
  a1[3] = GetDpiDependentMetric(10, a2);
  a1[4] = GetDpiDependentMetric(12, a2);
  a1[29] = GetDpiDependentMetric(23, a2);
  a1[30] = GetDpiDependentMetric(24, a2);
  a1[54] = GetDpiDependentMetric(25, a2);
  a1[125] = GetDpiDependentMetric(29, a2);
  ScaledLogFontForDpi = GetScaledLogFontForDpi(4, a2, (__int64)(a1 + 6));
  v6 = ScaledLogFontForDpi & GetScaledLogFontForDpi(1, a2, (__int64)(a1 + 31));
  v7 = v6 & GetScaledLogFontForDpi(2, a2, (__int64)(a1 + 56));
  LOBYTE(v6) = v7 & GetScaledLogFontForDpi(3, a2, (__int64)(a1 + 79));
  return v6 & GetScaledLogFontForDpi(5, a2, (__int64)(a1 + 102));
}
