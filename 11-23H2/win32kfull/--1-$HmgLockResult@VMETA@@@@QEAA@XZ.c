/*
 * XREFs of ??1?$HmgLockResult@VMETA@@@@QEAA@XZ @ 0x1C013FE3C
 * Callers:
 *     GreDeleteServerMetaFile @ 0x1C02D2218 (GreDeleteServerMetaFile.c)
 *     NtGdiGetServerMetaFileBits @ 0x1C02D23E0 (NtGdiGetServerMetaFileBits.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HmgLockResult<META>::~HmgLockResult<META>(__int64 a1)
{
  if ( *(_QWORD *)a1 )
  {
    _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)a1 + 12LL));
    *(_QWORD *)a1 = 0LL;
  }
  return PopThreadGuardedObject(a1 + 8);
}
