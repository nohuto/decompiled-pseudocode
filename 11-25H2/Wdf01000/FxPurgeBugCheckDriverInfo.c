/*
 * XREFs of FxPurgeBugCheckDriverInfo @ 0x14007DA9C
 * Callers:
 *     FxDestroy @ 0x140081CD8 (FxDestroy.c)
 * Callees:
 *     memmove @ 0x1400ACC80 (memmove.c)
 */

void __fastcall FxPurgeBugCheckDriverInfo(_FX_DRIVER_GLOBALS *FxDriverGlobals)
{
  KIRQL v2; // al
  __int64 BugCheckDriverInfoIndex; // rbx
  KIRQL v4; // si
  _FX_DUMP_DRIVER_INFO_ENTRY *v5; // rcx
  __int64 v6; // rax

  v2 = KeAcquireSpinLockRaiseToDpc(&FxLibraryGlobals.FxDriverGlobalsListLock.m_Lock);
  BugCheckDriverInfoIndex = FxDriverGlobals->BugCheckDriverInfoIndex;
  v4 = v2;
  if ( (_DWORD)BugCheckDriverInfoIndex )
  {
    if ( FxLibraryGlobals.BugCheckDriverInfo )
    {
      if ( (unsigned int)BugCheckDriverInfoIndex < FxLibraryGlobals.BugCheckDriverInfoIndex )
      {
        v5 = &FxLibraryGlobals.BugCheckDriverInfo[BugCheckDriverInfoIndex];
        if ( v5->FxDriverGlobals == FxDriverGlobals )
        {
          if ( FxLibraryGlobals.BugCheckDriverInfoIndex - (_DWORD)BugCheckDriverInfoIndex != 1 )
            memmove(
              v5,
              &v5[1],
              56LL * (unsigned int)(FxLibraryGlobals.BugCheckDriverInfoIndex - BugCheckDriverInfoIndex - 1));
          if ( (unsigned int)BugCheckDriverInfoIndex < --FxLibraryGlobals.BugCheckDriverInfoIndex )
          {
            do
            {
              v6 = (unsigned int)BugCheckDriverInfoIndex;
              LODWORD(BugCheckDriverInfoIndex) = BugCheckDriverInfoIndex + 1;
              --FxLibraryGlobals.BugCheckDriverInfo[v6].FxDriverGlobals->BugCheckDriverInfoIndex;
            }
            while ( (unsigned int)BugCheckDriverInfoIndex < FxLibraryGlobals.BugCheckDriverInfoIndex );
          }
        }
      }
    }
  }
  KeReleaseSpinLock(&FxLibraryGlobals.FxDriverGlobalsListLock.m_Lock, v4);
}
