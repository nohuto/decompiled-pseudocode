/*
 * XREFs of ZwLockVirtualMemory @ 0x1406A86F0
 * Callers:
 *     CmSiLockViewOfSection @ 0x140494F5C (CmSiLockViewOfSection.c)
 *     SmKmVirtualLockCtxLockMemory @ 0x14060DFFC (SmKmVirtualLockCtxLockMemory.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwLockVirtualMemory(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
