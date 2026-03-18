/*
 * XREFs of MiEnumerateBasePatches @ 0x140B53228
 * Callers:
 *     MiReapplyImportOptimizationForDriverVerifier @ 0x140670958 (MiReapplyImportOptimizationForDriverVerifier.c)
 *     MmReplaceImportEntriesForVerifier @ 0x1407DD510 (MmReplaceImportEntriesForVerifier.c)
 *     MiApplyHotPatchToLoadedDriver @ 0x1407E1548 (MiApplyHotPatchToLoadedDriver.c)
 *     MiMarkHotPatchesForHiberPhase @ 0x140B53300 (MiMarkHotPatchesForHiberPhase.c)
 * Callees:
 *     MiGetBaseLoaderPortion @ 0x1404D0B80 (MiGetBaseLoaderPortion.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall MiEnumerateBasePatches(__int64 a1)
{
  __int64 result; // rax
  _QWORD *v2; // rdi
  _QWORD *i; // rbx
  __int64 BaseLoaderPortion; // rax

  result = MiGetBaseLoaderPortion(a1);
  v2 = (_QWORD *)(result + 256);
  for ( i = *(_QWORD **)(result + 256); i != v2; i = (_QWORD *)*i )
  {
    BaseLoaderPortion = MiGetBaseLoaderPortion((__int64)(i - 32));
    result = guard_dispatch_icall_no_overrides(BaseLoaderPortion);
    if ( !(_DWORD)result )
      break;
  }
  return result;
}
