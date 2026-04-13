/*
 * XREFs of _Mtxunlock @ 0x18000D000
 * Callers:
 *     ??1_Lockit@std@@QEAA@XZ @ 0x1800051A4 (--1_Lockit@std@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall Mtxunlock(LPCRITICAL_SECTION lpCriticalSection)
{
  LeaveCriticalSection(lpCriticalSection);
}
