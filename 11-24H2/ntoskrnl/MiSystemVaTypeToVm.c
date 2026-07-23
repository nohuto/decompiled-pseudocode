/*
 * XREFs of MiSystemVaTypeToVm @ 0x1402FDE60
 * Callers:
 *     MiCheckLinearProtectedPteAccessedBit @ 0x140203550 (MiCheckLinearProtectedPteAccessedBit.c)
 *     MiMakeZeroedPageTablesEx @ 0x14026D5D0 (MiMakeZeroedPageTablesEx.c)
 *     MiVaToFlushVm @ 0x1402FC5EC (MiVaToFlushVm.c)
 *     MiSystemFault @ 0x1402FC7E0 (MiSystemFault.c)
 *     MiLockStealSystemVm @ 0x1402FD650 (MiLockStealSystemVm.c)
 *     MiFlushSingleTbEntry @ 0x1402FDA50 (MiFlushSingleTbEntry.c)
 *     MiTrimSharedPageFromViews @ 0x140362D10 (MiTrimSharedPageFromViews.c)
 *     MiTranslatePageForCopy @ 0x1403F3CE0 (MiTranslatePageForCopy.c)
 *     MiDecommitSystemPageTables @ 0x14045B6DC (MiDecommitSystemPageTables.c)
 *     MiFreedUnusedPfnPagesDpc @ 0x14066E238 (MiFreedUnusedPfnPagesDpc.c)
 *     MiGetFileOnlyRanges @ 0x14066E544 (MiGetFileOnlyRanges.c)
 *     MiGetNextNonGapPfnPage @ 0x14066E798 (MiGetNextNonGapPfnPage.c)
 *     MmAddRangeToCrashDump @ 0x140678B70 (MmAddRangeToCrashDump.c)
 *     MiInitializeDynamicVa @ 0x140C570AC (MiInitializeDynamicVa.c)
 * Callees:
 *     MiGetAnyMultiplexedVm @ 0x140439200 (MiGetAnyMultiplexedVm.c)
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
      return (struct _LIST_ENTRY **)&unk_140E38100;
    case 7:
      return (struct _LIST_ENTRY **)&unk_140E3D6C0;
  }
  switch ( a1 )
  {
    case 2:
    case 11:
      result = (struct _LIST_ENTRY **)&unk_140E37E80;
      break;
    case 3:
      result = (struct _LIST_ENTRY **)MiGetAnyMultiplexedVm(2LL);
      break;
    case 4:
    case 9:
    case 14:
    case 19:
      result = (struct _LIST_ENTRY **)&unk_140E384C0;
      break;
    case 6:
    case 8:
    case 10:
    case 12:
      result = (struct _LIST_ENTRY **)&unk_140E38240;
      break;
    case 13:
      result = (struct _LIST_ENTRY **)&unk_140E38380;
      break;
    case 15:
    case 18:
      result = (struct _LIST_ENTRY **)&unk_140E38740;
      break;
    case 16:
      result = (struct _LIST_ENTRY **)&unk_140E2F280;
      break;
    case 17:
      result = (struct _LIST_ENTRY **)&unk_140E37FC0;
      break;
    default:
      return result;
  }
  return result;
}
