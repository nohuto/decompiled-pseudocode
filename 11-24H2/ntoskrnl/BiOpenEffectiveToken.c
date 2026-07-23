/*
 * XREFs of BiOpenEffectiveToken @ 0x1409A7498
 * Callers:
 *     BiAdjustPrivilege @ 0x1409A7390 (BiAdjustPrivilege.c)
 * Callees:
 *     ZwOpenThreadTokenEx @ 0x1406A7990 (ZwOpenThreadTokenEx.c)
 *     ZwOpenProcessTokenEx @ 0x1406A79B0 (ZwOpenProcessTokenEx.c)
 */

int __fastcall BiOpenEffectiveToken(PHANDLE TokenHandle)
{
  int result; // eax

  if ( (*(_DWORD *)(&KeGetCurrentThread()[1].SwapListEntry + 1) & 8) == 0 )
    return ZwOpenProcessTokenEx((HANDLE)0xFFFFFFFFFFFFFFFFLL, 0x28u, 0x200u, TokenHandle);
  result = ZwOpenThreadTokenEx((HANDLE)0xFFFFFFFFFFFFFFFELL, 0x28u, 1u, 0x200u, TokenHandle);
  if ( result < 0 )
    return ZwOpenThreadTokenEx((HANDLE)0xFFFFFFFFFFFFFFFELL, 0x28u, 0, 0x200u, TokenHandle);
  return result;
}
