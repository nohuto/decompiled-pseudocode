/*
 * XREFs of MiIsPageTableLocked @ 0x140295EE4
 * Callers:
 *     MiTrimPte @ 0x1402130B0 (MiTrimPte.c)
 *     MiWalkVaCheckCommon @ 0x140295E20 (MiWalkVaCheckCommon.c)
 *     MiEmptyWorkingSetHelper @ 0x140296F20 (MiEmptyWorkingSetHelper.c)
 *     MiEmptyPte @ 0x1402976F0 (MiEmptyPte.c)
 *     MiAgePte @ 0x140303CD0 (MiAgePte.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140246FA0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiTranslateVmToLock @ 0x1403FC970 (MiTranslateVmToLock.c)
 */

_BOOL8 __fastcall MiIsPageTableLocked(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rax
  bool v4; // zf
  unsigned __int64 v5; // rax
  __int128 v6; // [rsp+20h] [rbp-18h] BYREF

  if ( a2 == 0xFFFFF6FB7DBEDF68uLL )
  {
    v6 = 0LL;
    MiTranslateVmToLock(a1, &v6, a1);
    v4 = *(_QWORD *)v6 == 0LL;
    return !v4;
  }
  if ( (*(_DWORD *)(a1 + 184) & 0xF) == 0 && a2 >= 0xFFFFF6FB7DBED000uLL && a2 <= 0xFFFFF6FB7DBEDFFFuLL )
  {
    v5 = KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[5].StaticBitmap[7];
    if ( v5 )
    {
      v4 = *(_DWORD *)(v5 + 4 * ((a2 >> 3) & 0x1FF)) == 0;
      return !v4;
    }
  }
  if ( (*(_DWORD *)(a1 + 184) & 0xF) != 0 && a2 >= 0xFFFFF6FB7DBED000uLL && a2 <= 0xFFFFF6FB7DBEDFFFuLL )
    LODWORD(v2) = (unsigned int)dword_140E2F1EC[(unsigned __int64)(2
                                                                 * (unsigned int)((__int64)(a2 + 0x90482413000LL) >> 3)) >> 5] >> ((2 * ((__int64)(a2 + 0x90482413000LL) >> 3)) & 0x1F);
  else
    v2 = (unsigned __int64)MI_READ_PTE_LOCK_FREE(a2) >> 60;
  return v2 & 1;
}
