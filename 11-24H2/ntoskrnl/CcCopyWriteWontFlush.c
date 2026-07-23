/*
 * XREFs of CcCopyWriteWontFlush @ 0x1404D5D60
 * Callers:
 *     FsRtlCopyWrite @ 0x140A2FA90 (FsRtlCopyWrite.c)
 * Callees:
 *     CcForceWriteThrough @ 0x14040C010 (CcForceWriteThrough.c)
 *     KeRcuReadUnlock @ 0x14040C230 (KeRcuReadUnlock.c)
 *     KeRcuReadLock @ 0x14040C360 (KeRcuReadLock.c)
 */

BOOLEAN __stdcall CcCopyWriteWontFlush(PFILE_OBJECT FileObject, PLARGE_INTEGER FileOffset, ULONG Length)
{
  struct _KTHREAD *CurrentThread; // rcx
  int v5; // edx
  unsigned __int64 v6; // rax
  int v7; // eax
  PSECTION_OBJECT_POINTERS SectionObjectPointer; // rax
  _DWORD *SharedCacheMap; // rax

  if ( Length < 0x1000000 && (FileObject->Flags & 0x10) == 0 )
  {
    CurrentThread = KeGetCurrentThread();
    v5 = (*((_DWORD *)&CurrentThread[1].SwapListEntry + 2) >> 9) & 7;
    v6 = CurrentThread->Process[1].Padding[3];
    if ( v6 )
    {
      v7 = *(_DWORD *)(v6 + 1084);
      if ( v5 >= v7 )
        v5 = v7;
    }
    if ( (v5 < 2 && CurrentThread == KeGetCurrentThread() && LODWORD(CurrentThread[1].Timer.TimerListEntry.Flink)
       || v5 > 0)
      && !CcForceWriteThrough(FileObject, Length, 0LL, 0) )
    {
      return 1;
    }
  }
  KeRcuReadLock();
  SectionObjectPointer = FileObject->SectionObjectPointer;
  if ( SectionObjectPointer )
  {
    SharedCacheMap = SectionObjectPointer->SharedCacheMap;
    if ( SharedCacheMap )
    {
      if ( (SharedCacheMap[38] & 0x40000000) != 0 )
      {
        KeRcuReadUnlock();
        return 1;
      }
    }
  }
  KeRcuReadUnlock();
  return 0;
}
