/*
 * XREFs of MiMakeProtoReadOnly @ 0x140484268
 * Callers:
 *     MiMakeFaultPfnActive @ 0x14025A13C (MiMakeFaultPfnActive.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140246FA0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiUpdateProtectionMask @ 0x140248CFC (MiUpdateProtectionMask.c)
 */

__int64 __fastcall MiMakeProtoReadOnly(unsigned __int64 *a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v5; // r8

  MI_READ_PTE_LOCK_FREE((unsigned __int64)a1);
  result = MiUpdateProtectionMask(1u, (unsigned __int8)BYTE2(*(_DWORD *)(a2 + 32)) >> 6);
  *a1 = (32LL * (unsigned int)result) ^ (v5 ^ (32LL * (unsigned int)result)) & 0xFFFFFFFFFFFFFC1FuLL;
  return result;
}
