/*
 * XREFs of NVMeHwResetBus @ 0x1400186F0
 * Callers:
 *     <none>
 * Callees:
 *     NVMeControllerReset @ 0x14001D564 (NVMeControllerReset.c)
 */

char __fastcall NVMeHwResetBus(__int64 a1)
{
  char result; // al

  if ( *(_BYTE *)(a1 + 20) || (*(_DWORD *)(a1 + 4064) & 0x1000) != 0 )
    return 1;
  *(_DWORD *)(a1 + 24) |= 0x400000u;
  result = NVMeControllerReset(a1);
  if ( result )
    ++*(_DWORD *)(a1 + 4184);
  else
    ++*(_DWORD *)(a1 + 4188);
  *(_DWORD *)(a1 + 24) &= ~0x400000u;
  return result;
}
