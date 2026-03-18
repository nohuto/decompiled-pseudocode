/*
 * XREFs of MiSystemVaTypeToVm @ 0x140219640
 * Callers:
 *     MiLockStealSystemVm @ 0x140218E00 (MiLockStealSystemVm.c)
 *     MiFlushSingleTbEntry @ 0x140219200 (MiFlushSingleTbEntry.c)
 *     MiTrimSharedPageFromViews @ 0x140321850 (MiTrimSharedPageFromViews.c)
 *     MiVaToFlushVm @ 0x140327844 (MiVaToFlushVm.c)
 *     MiTranslatePageForCopy @ 0x1403783E0 (MiTranslatePageForCopy.c)
 *     MiCheckLinearProtectedPteAccessedBit @ 0x14037CB60 (MiCheckLinearProtectedPteAccessedBit.c)
 *     MiMakeZeroedPageTablesEx @ 0x14038F57C (MiMakeZeroedPageTablesEx.c)
 *     MiSystemFault @ 0x1403E1EBC (MiSystemFault.c)
 *     MiDecommitSystemPageTables @ 0x140465E88 (MiDecommitSystemPageTables.c)
 *     MiFreedUnusedPfnPagesDpc @ 0x140661528 (MiFreedUnusedPfnPagesDpc.c)
 *     MiGetFileOnlyRanges @ 0x140661830 (MiGetFileOnlyRanges.c)
 *     MiGetNextNonGapPfnPage @ 0x140661A84 (MiGetNextNonGapPfnPage.c)
 *     MmAddRangeToCrashDump @ 0x14066C040 (MmAddRangeToCrashDump.c)
 *     MiInitializeDynamicVa @ 0x140C43C9C (MiInitializeDynamicVa.c)
 * Callees:
 *     MiGetAnyMultiplexedVm @ 0x1404423A0 (MiGetAnyMultiplexedVm.c)
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
      return (struct _LIST_ENTRY **)&unk_140E37D80;
    case 7:
      return (struct _LIST_ENTRY **)&unk_140E3D340;
  }
  switch ( a1 )
  {
    case 2:
    case 11:
      result = (struct _LIST_ENTRY **)&unk_140E37B00;
      break;
    case 3:
      result = (struct _LIST_ENTRY **)MiGetAnyMultiplexedVm(2LL);
      break;
    case 4:
    case 9:
    case 14:
    case 19:
      result = (struct _LIST_ENTRY **)&unk_140E38140;
      break;
    case 6:
    case 8:
    case 10:
    case 12:
      result = (struct _LIST_ENTRY **)&unk_140E37EC0;
      break;
    case 13:
      result = (struct _LIST_ENTRY **)&unk_140E38000;
      break;
    case 15:
    case 18:
      result = (struct _LIST_ENTRY **)&unk_140E383C0;
      break;
    case 16:
      result = (struct _LIST_ENTRY **)&unk_140E2EF00;
      break;
    case 17:
      result = (struct _LIST_ENTRY **)&unk_140E37C40;
      break;
    default:
      return result;
  }
  return result;
}
