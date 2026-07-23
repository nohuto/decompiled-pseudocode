/*
 * XREFs of MmReserveViewInSystemCache @ 0x1407EDCA8
 * Callers:
 *     CcGetVirtualAddress @ 0x140229480 (CcGetVirtualAddress.c)
 *     CcInitializePartitionVacbs @ 0x14057A840 (CcInitializePartitionVacbs.c)
 * Callees:
 *     MiObtainSystemCacheView @ 0x140209EE0 (MiObtainSystemCacheView.c)
 */

__int64 __fastcall MmReserveViewInSystemCache(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax

  result = MiObtainSystemCacheView(*a1, a2, a3, a4);
  if ( !result )
    ++dword_140E38920;
  return result;
}
