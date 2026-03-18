/*
 * XREFs of wcsncmp_0 @ 0x140064F45
 * Callers:
 *     ?ParseAndCompareBlockListCondition@@YAJPEBGII0W4_QAI_DRIVERVERSION@@PEAE@Z @ 0x140238810 (-ParseAndCompareBlockListCondition@@YAJPEBGII0W4_QAI_DRIVERVERSION@@PEAE@Z.c)
 *     DpiAddDevice @ 0x1402393B0 (DpiAddDevice.c)
 *     DpiIndirectFindDeviceFromInstanceId @ 0x14024F850 (DpiIndirectFindDeviceFromInstanceId.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
int __cdecl wcsncmp_0(const wchar_t *Str1, const wchar_t *Str2, size_t MaxCount)
{
  return wcsncmp(Str1, Str2, MaxCount);
}
