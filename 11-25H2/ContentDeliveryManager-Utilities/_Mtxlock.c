/*
 * XREFs of _Mtxlock @ 0x18000CFF0
 * Callers:
 *     ??0_Lockit@std@@QEAA@H@Z @ 0x180005114 (--0_Lockit@std@@QEAA@H@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall Mtxlock(LPCRITICAL_SECTION lpCriticalSection)
{
  EnterCriticalSection(lpCriticalSection);
}
