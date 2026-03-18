/*
 * XREFs of MmReserveViewInSystemCache @ 0x1407DD838
 * Callers:
 *     CcGetVirtualAddress @ 0x1402D8300 (CcGetVirtualAddress.c)
 *     CcInitializePartitionVacbs @ 0x14057A08C (CcInitializePartitionVacbs.c)
 * Callees:
 *     MiObtainSystemCacheView @ 0x1402C0010 (MiObtainSystemCacheView.c)
 */

__int64 __fastcall MmReserveViewInSystemCache(__int64 *a1)
{
  __int64 result; // rax

  result = MiObtainSystemCacheView(*a1);
  if ( !result )
    ++dword_140E385A0;
  return result;
}
