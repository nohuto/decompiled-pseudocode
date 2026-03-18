/*
 * XREFs of NVMeHwRegistryNotify @ 0x1400186D0
 * Callers:
 *     <none>
 * Callees:
 *     GetDynamicRegistrySettings @ 0x14002D4E0 (GetDynamicRegistrySettings.c)
 */

__int64 __fastcall NVMeHwRegistryNotify(__int64 a1)
{
  __int64 result; // rax

  if ( (*(_DWORD *)(a1 + 24) & 0x8008) == 0 )
    return GetDynamicRegistrySettings();
  return result;
}
