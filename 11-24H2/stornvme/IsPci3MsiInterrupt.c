/*
 * XREFs of IsPci3MsiInterrupt @ 0x14001B66C
 * Callers:
 *     NVMeControllerFilterResourceRequirements @ 0x14001C804 (NVMeControllerFilterResourceRequirements.c)
 * Callees:
 *     <none>
 */

bool __fastcall IsPci3MsiInterrupt(__int64 a1)
{
  return *(_BYTE *)(a1 + 1) == 2
      && (*(_BYTE *)(a1 + 4) & 3) != 0
      && *(_DWORD *)(a1 + 8) == -2
      && *(_DWORD *)(a1 + 12) == -2;
}
