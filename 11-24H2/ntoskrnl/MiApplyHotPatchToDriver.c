/*
 * XREFs of MiApplyHotPatchToDriver @ 0x1407F11D4
 * Callers:
 *     MiLoadHotPatch @ 0x140A9F9D4 (MiLoadHotPatch.c)
 * Callees:
 *     MiGetBaseLoaderPortion @ 0x1404D0508 (MiGetBaseLoaderPortion.c)
 *     MiApplyHotPatchToLoadedDriver @ 0x1407F13E8 (MiApplyHotPatchToLoadedDriver.c)
 *     MiLogHotPatchOperationStatus @ 0x1407F3CA4 (MiLogHotPatchOperationStatus.c)
 *     RtlIsPatchMachineApplicable @ 0x14082F36C (RtlIsPatchMachineApplicable.c)
 */

__int64 __fastcall MiApplyHotPatchToDriver(int a1, int a2, __int64 a3, unsigned int a4, __int64 a5)
{
  PVOID *v5; // rbx
  int v7; // r10d
  int v8; // r11d
  __int64 v9; // rcx
  unsigned int v10; // edi

  v5 = (PVOID *)PsLoadedModuleList;
  v7 = a2;
  v8 = a1;
  while ( v5 != &PsLoadedModuleList )
  {
    if ( *((_DWORD *)v5 + 30) == v8
      && *((_DWORD *)v5 + 39) == v7
      && (unsigned __int8)RtlIsPatchMachineApplicable(34404LL, a4)
      && (*(_DWORD *)(MiGetBaseLoaderPortion((__int64)v5) + 184) & 0x2080) == 0 )
    {
      if ( v5 )
      {
        v10 = MiApplyHotPatchToLoadedDriver(v9, a3, a5);
        MiLogHotPatchOperationStatus(*((_DWORD *)v5 + 30), *((_DWORD *)v5 + 39), a3, v10, 1);
        return v10;
      }
      return (unsigned int)-1073741515;
    }
    v5 = (PVOID *)*v5;
  }
  return (unsigned int)-1073741515;
}
