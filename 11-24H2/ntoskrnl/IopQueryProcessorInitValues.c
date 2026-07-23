/*
 * XREFs of IopQueryProcessorInitValues @ 0x14070F3F0
 * Callers:
 *     IoInitializeProcessor @ 0x14070F18C (IoInitializeProcessor.c)
 *     PspInitializeQuotaBlock @ 0x140773E70 (PspInitializeQuotaBlock.c)
 *     IoInitSystemPreDrivers @ 0x140C1CA4C (IoInitSystemPreDrivers.c)
 * Callees:
 *     MmIsThisAnNtAsSystem @ 0x1404A33F0 (MmIsThisAnNtAsSystem.c)
 */

__int64 __fastcall IopQueryProcessorInitValues(__int64 a1)
{
  BOOLEAN IsThisAnNtAsSystem; // al
  __int16 v3; // r8
  __int16 v4; // r9
  __int64 result; // rax

  IsThisAnNtAsSystem = MmIsThisAnNtAsSystem();
  v3 = IsThisAnNtAsSystem != 0 ? 96 : 32;
  *(_WORD *)(a1 + 6) = v3;
  *(_WORD *)a1 = v3;
  v4 = IsThisAnNtAsSystem != 0 ? 128 : 64;
  *(_WORD *)(a1 + 4) = v4;
  *(_WORD *)(a1 + 8) = IsThisAnNtAsSystem != 0 ? 256 : 128;
  *(_WORD *)(a1 + 2) = v4;
  *(_DWORD *)(a1 + 12) = 280;
  *(_DWORD *)(a1 + 28) = (unsigned int)(IsThisAnNtAsSystem != 0 ? 0x10000 : 1536) >> 11;
  *(_DWORD *)(a1 + 16) = 72 * IopMediumIrpStackLocations + 208;
  result = (unsigned int)IopLargeIrpStackLocations;
  *(_DWORD *)(a1 + 24) = 184;
  *(_DWORD *)(a1 + 20) = 72 * result + 208;
  return result;
}
