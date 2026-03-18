/*
 * XREFs of MiPrepareDriverPatchState @ 0x1407E7E2C
 * Callers:
 *     MiLockPatchIatForDV @ 0x14067BF00 (MiLockPatchIatForDV.c)
 *     MmWriteSystemImageTracepoint @ 0x14067DBF0 (MmWriteSystemImageTracepoint.c)
 *     MiLockAndMapEntireDriver @ 0x1407F0938 (MiLockAndMapEntireDriver.c)
 *     MiApplyDriverHotPatch @ 0x1407F0C5C (MiApplyDriverHotPatch.c)
 *     MmReapplyBootPatchImports @ 0x140C56B08 (MmReapplyBootPatchImports.c)
 * Callees:
 *     MI_IS_PHYSICAL_ADDRESS @ 0x1402637E0 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiAllocatePool @ 0x1402ACA70 (MiAllocatePool.c)
 */

__int64 __fastcall MiPrepareDriverPatchState(__int64 *a1, __int64 a2)
{
  __int64 Pool; // rcx
  __int64 v6; // rcx

  Pool = MiAllocatePool(0x40uLL, 8 * ((*((_DWORD *)a1 + 6) >> 6) + (unsigned int)((a1[3] & 0x3F) != 0)), 1296191556);
  if ( !Pool )
    return 3221225626LL;
  a1[4] = *((unsigned int *)a1 + 6);
  a1[5] = Pool;
  v6 = *a1;
  *((_DWORD *)a1 + 24) = 0;
  if ( (unsigned int)MI_IS_PHYSICAL_ADDRESS(*(_QWORD *)(v6 + 48)) )
    *((_DWORD *)a1 + 24) |= 2u;
  a1[2] = a2;
  return 0LL;
}
