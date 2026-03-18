/*
 * XREFs of MiMakeProtoReadOnly @ 0x1403FDB80
 * Callers:
 *     MiMakeFaultPfnActive @ 0x1403FD984 (MiMakeFaultPfnActive.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140231F50 (MI_READ_PTE_LOCK_FREE.c)
 *     MiUpdateProtectionMask @ 0x140234CAC (MiUpdateProtectionMask.c)
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
