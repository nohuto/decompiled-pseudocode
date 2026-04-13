/*
 * XREFs of _Mtxdst @ 0x18000CFDC
 * Callers:
 *     ??1_Init_locks@std@@QEAA@XZ @ 0x180005168 (--1_Init_locks@std@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall Mtxdst(LPCRITICAL_SECTION lpCriticalSection)
{
  DeleteCriticalSection(lpCriticalSection);
}
