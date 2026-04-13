/*
 * XREFs of _Mtxinit @ 0x18000CFDC
 * Callers:
 *     ??0_Init_locks@std@@QEAA@XZ @ 0x1800050C0 (--0_Init_locks@std@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

BOOL __fastcall Mtxinit(struct _RTL_CRITICAL_SECTION *a1)
{
  return _crtInitializeCriticalSectionEx(a1, 0xFA0u, 0);
}
