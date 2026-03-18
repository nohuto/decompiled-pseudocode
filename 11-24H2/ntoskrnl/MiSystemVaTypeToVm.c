/*
 * XREFs of MiSystemVaTypeToVm @ 0x14022ABF0
 * Callers:
 *     MiVaToFlushVm @ 0x1402293EC (MiVaToFlushVm.c)
 *     MiSystemFault @ 0x140229570 (MiSystemFault.c)
 *     MiLockStealSystemVm @ 0x14022A3E0 (MiLockStealSystemVm.c)
 *     MiFlushSingleTbEntry @ 0x14022A7E0 (MiFlushSingleTbEntry.c)
 *     MiCheckLinearProtectedPteAccessedBit @ 0x140232A20 (MiCheckLinearProtectedPteAccessedBit.c)
 *     MiDecommitSystemPageTables @ 0x1402342AC (MiDecommitSystemPageTables.c)
 *     MiTrimSharedPageFromViews @ 0x1402BB5D0 (MiTrimSharedPageFromViews.c)
 *     MiTranslatePageForCopy @ 0x1403961F0 (MiTranslatePageForCopy.c)
 *     MiMakeZeroedPageTablesEx @ 0x1403A62E0 (MiMakeZeroedPageTablesEx.c)
 *     MiFreedUnusedPfnPagesDpc @ 0x14066D068 (MiFreedUnusedPfnPagesDpc.c)
 *     MiGetFileOnlyRanges @ 0x14066D370 (MiGetFileOnlyRanges.c)
 *     MiGetNextNonGapPfnPage @ 0x14066D5C4 (MiGetNextNonGapPfnPage.c)
 *     MmAddRangeToCrashDump @ 0x140677990 (MmAddRangeToCrashDump.c)
 *     MiInitializeDynamicVa @ 0x140C54F1C (MiInitializeDynamicVa.c)
 * Callees:
 *     MiGetAnyMultiplexedVm @ 0x140442630 (MiGetAnyMultiplexedVm.c)
 */

struct _LIST_ENTRY **__fastcall MiSystemVaTypeToVm(int a1)
{
  struct _LIST_ENTRY **result; // rax

  result = 0LL;
  switch ( a1 )
  {
    case 1:
      return &KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink;
    case 5:
      return (struct _LIST_ENTRY **)&unk_140E37FC0;
    case 7:
      return (struct _LIST_ENTRY **)&unk_140E3D580;
  }
  switch ( a1 )
  {
    case 2:
    case 11:
      result = (struct _LIST_ENTRY **)&unk_140E37D40;
      break;
    case 3:
      result = (struct _LIST_ENTRY **)MiGetAnyMultiplexedVm(2LL);
      break;
    case 4:
    case 9:
    case 14:
    case 19:
      result = (struct _LIST_ENTRY **)&unk_140E38380;
      break;
    case 6:
    case 8:
    case 10:
    case 12:
      result = (struct _LIST_ENTRY **)&unk_140E38100;
      break;
    case 13:
      result = (struct _LIST_ENTRY **)&unk_140E38240;
      break;
    case 15:
    case 18:
      result = (struct _LIST_ENTRY **)&unk_140E38600;
      break;
    case 16:
      result = (struct _LIST_ENTRY **)&unk_140E2F140;
      break;
    case 17:
      result = (struct _LIST_ENTRY **)&unk_140E37E80;
      break;
    default:
      return result;
  }
  return result;
}
