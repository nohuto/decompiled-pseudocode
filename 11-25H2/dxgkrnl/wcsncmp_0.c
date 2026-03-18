/*
 * XREFs of wcsncmp_0 @ 0x140065325
 * Callers:
 *     ?ParseAndCompareBlockListCondition@@YAJPEBGII0W4_QAI_DRIVERVERSION@@PEAE@Z @ 0x140231E30 (-ParseAndCompareBlockListCondition@@YAJPEBGII0W4_QAI_DRIVERVERSION@@PEAE@Z.c)
 *     DpiAddDevice @ 0x1402329D0 (DpiAddDevice.c)
 *     DpiIndirectFindDeviceFromInstanceId @ 0x140248A20 (DpiIndirectFindDeviceFromInstanceId.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
int __cdecl wcsncmp_0(const wchar_t *Str1, const wchar_t *Str2, size_t MaxCount)
{
  return wcsncmp(Str1, Str2, MaxCount);
}
