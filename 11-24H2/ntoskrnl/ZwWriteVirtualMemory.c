/*
 * XREFs of ZwWriteVirtualMemory @ 0x1406A6B50
 * Callers:
 *     SepAdtCopyToLsaSharedMemory @ 0x14079516C (SepAdtCopyToLsaSharedMemory.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwWriteVirtualMemory(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
