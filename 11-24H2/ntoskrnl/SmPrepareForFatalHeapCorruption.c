/*
 * XREFs of SmPrepareForFatalHeapCorruption @ 0x14037A040
 * Callers:
 *     SmHpChunkHeapProtect @ 0x140379518 (SmHpChunkHeapProtect.c)
 *     ?StCompactRegions@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEADK1KK@Z @ 0x14037AAF0 (-StCompactRegions@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEADK1KK@Z.c)
 *     ?StDmPageRemove@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14037F670 (-StDmPageRemove@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     SmHpChunkFree @ 0x140380F50 (SmHpChunkFree.c)
 *     ?StDmPageRecordUnprotect@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_RECORD@1@@Z @ 0x140381180 (-StDmPageRecordUnprotect@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_RECORD@1@@Z.c)
 *     SmHpBufferUpdateFullness @ 0x140381C40 (SmHpBufferUpdateFullness.c)
 *     SmHpUnprotectListNeighbors @ 0x140381E34 (SmHpUnprotectListNeighbors.c)
 *     SmHpBufferProtectEx @ 0x140382050 (SmHpBufferProtectEx.c)
 *     SmHpChunkAlloc @ 0x140382D30 (SmHpChunkAlloc.c)
 *     SmHpChunkUnprotect @ 0x140382F80 (SmHpChunkUnprotect.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x1402932D0 (MmGetPhysicalAddress.c)
 *     KeRegisterBugCheckReasonCallback @ 0x1404606D0 (KeRegisterBugCheckReasonCallback.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SmPrepareForFatalHeapCorruption(
        void *Src,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        LONGLONG *a5)
{
  __int64 v5; // rbp
  __int64 v7; // r15
  __int64 Pool2; // rax
  unsigned int v9; // ebx
  struct _KBUGCHECK_REASON_CALLBACK_RECORD *v10; // rdi
  _QWORD *v11; // rcx

  v5 = a4;
  v7 = a3;
  *a5 = MmGetPhysicalAddress(Src).QuadPart / 4096;
  Pool2 = ExAllocatePool2(0x40uLL, 0x1060uLL, 0x50626D73u);
  v9 = 0;
  v10 = (struct _KBUGCHECK_REASON_CALLBACK_RECORD *)Pool2;
  if ( Pool2 )
  {
    *(_BYTE *)(Pool2 + 44) = 0;
    v11 = (_QWORD *)((Pool2 + 55) & 0xFFFFFFFFFFFFFFF8uLL);
    *v11 = 1LL;
    v11[6] = 0LL;
    v11[5] = *a5;
    v11[1] = Src;
    v11[2] = 4096LL;
    v11[4] = v5;
    v11[3] = v7;
    memmove(v11 + 6, Src, 0x1000uLL);
    if ( !KeRegisterBugCheckReasonCallback(
            v10,
            SmFatalHeapCorruptionDumpCallback,
            KbCallbackSecondaryDumpData,
            (PUCHAR)"nt!store memory compression") )
    {
      v9 = -1073741670;
      ExFreePoolWithTag(v10, 0);
    }
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v9;
}
