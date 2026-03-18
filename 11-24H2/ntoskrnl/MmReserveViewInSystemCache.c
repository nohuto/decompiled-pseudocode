/*
 * XREFs of MmReserveViewInSystemCache @ 0x1407ED6D8
 * Callers:
 *     CcGetVirtualAddress @ 0x140273EF0 (CcGetVirtualAddress.c)
 *     CcInitializePartitionVacbs @ 0x14057D3B0 (CcInitializePartitionVacbs.c)
 * Callees:
 *     MiObtainSystemCacheView @ 0x140241D90 (MiObtainSystemCacheView.c)
 */

__int64 __fastcall MmReserveViewInSystemCache(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  result = MiObtainSystemCacheView(*a1, a2, a3);
  if ( !result )
    ++dword_140E387E0;
  return result;
}
