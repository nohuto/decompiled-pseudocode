/*
 * XREFs of ??1?$HmgLockResult@VMETA@@@@QEAA@XZ @ 0x14030FB80
 * Callers:
 *     GreDeleteServerMetaFile @ 0x14025B104 (GreDeleteServerMetaFile.c)
 *     NtGdiGetServerMetaFileBits @ 0x14030FD20 (NtGdiGetServerMetaFileBits.c)
 * Callees:
 *     ?CleanupRoutine@?$HmgLockResult@VMETA@@@@QEAAXXZ @ 0x14030FBAC (-CleanupRoutine@-$HmgLockResult@VMETA@@@@QEAAXXZ.c)
 */

__int64 __fastcall HmgLockResult<META>::~HmgLockResult<META>(__int64 a1)
{
  HmgLockResult<META>::CleanupRoutine();
  return PopThreadGuardedObject(a1 + 8);
}
