/*
 * XREFs of ?HampSlsBlockerEntryInitialize@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_SLEEP_STUDY_PDC_BLOCKER_ENTRY@@@Z @ 0x180067F0C
 * Callers:
 *     ?HampSlsBlockerEntryCreate@@YAJPEAU_HAM_SLEEP_STUDY_CONTEXT@@PEAU_RM_HAM_ACTIVITY_HOST@@PEAPEAU_HAM_SLEEP_STUDY_PDC_BLOCKER_ENTRY@@@Z @ 0x180067900 (-HampSlsBlockerEntryCreate@@YAJPEAU_HAM_SLEEP_STUDY_CONTEXT@@PEAU_RM_HAM_ACTIVITY_HOST@@PEAPEAU_.c)
 * Callees:
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x18001F220 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180029E90 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     memset_0 @ 0x1800A7B0A (memset_0.c)
 */

void __fastcall HampSlsBlockerEntryInitialize(
        struct _RM_HAM_ACTIVITY_HOST *a1,
        struct _HAM_SLEEP_STUDY_PDC_BLOCKER_ENTRY *a2)
{
  __int64 v4; // rdx

  memset_0(a2, 0, 0x68uLL);
  RmpAcquireGlobalLock();
  v4 = *((_QWORD *)a1 + 73);
  if ( _InterlockedIncrement64((volatile signed __int64 *)(v4 + 24)) <= 1 )
    __fastfail(0xEu);
  *((_QWORD *)a2 + 3) = v4;
  RmpReleaseGlobalLock();
  *((_BYTE *)a2 + 32) = 5;
}
