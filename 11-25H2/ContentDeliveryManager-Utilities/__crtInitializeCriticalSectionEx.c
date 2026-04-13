/*
 * XREFs of __crtInitializeCriticalSectionEx @ 0x18000DE1C
 * Callers:
 *     _Mtxinit @ 0x18000CFDC (_Mtxinit.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
BOOL __stdcall _crtInitializeCriticalSectionEx(LPCRITICAL_SECTION lpCriticalSection, DWORD dwSpinCount, DWORD Flags)
{
  return InitializeCriticalSectionEx(lpCriticalSection, dwSpinCount, Flags);
}
