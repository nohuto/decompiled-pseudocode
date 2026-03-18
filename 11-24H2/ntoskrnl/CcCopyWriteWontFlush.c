/*
 * XREFs of CcCopyWriteWontFlush @ 0x1404DC340
 * Callers:
 *     FsRtlCopyWrite @ 0x140A3A470 (FsRtlCopyWrite.c)
 * Callees:
 *     CcForceWriteThrough @ 0x1402CE010 (CcForceWriteThrough.c)
 *     KeRcuReadUnlock @ 0x1402CE230 (KeRcuReadUnlock.c)
 *     KeRcuReadLock @ 0x1402CE360 (KeRcuReadLock.c)
 */

BOOLEAN __stdcall CcCopyWriteWontFlush(PFILE_OBJECT FileObject, PLARGE_INTEGER FileOffset, ULONG Length)
{
  PFILE_OBJECT v3; // rbx
  int v4; // edx
  __int64 v5; // rax
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  PSECTION_OBJECT_POINTERS SectionObjectPointer; // rax
  _DWORD *SharedCacheMap; // rax

  v3 = FileObject;
  if ( Length < 0x1000000 && (FileObject->Flags & 0x10) == 0 )
  {
    FileObject = (PFILE_OBJECT)KeGetCurrentThread();
    v4 = (LODWORD(FileObject[6].Lock.Header.WaitListHead.Blink) >> 9) & 7;
    v5 = *(_QWORD *)(*(_QWORD *)&FileObject[2].Waiters + 672LL);
    if ( v5 )
    {
      v6 = *(_DWORD *)(v5 + 1084);
      if ( v4 >= v6 )
        v4 = v6;
    }
    if ( (v4 < 2 && FileObject == (PFILE_OBJECT)KeGetCurrentThread() && LODWORD(FileObject[6].FileObjectExtension)
       || v4 > 0)
      && !CcForceWriteThrough(v3, Length, 0LL, 0) )
    {
      return 1;
    }
  }
  KeRcuReadLock((__int64)FileObject);
  SectionObjectPointer = v3->SectionObjectPointer;
  if ( SectionObjectPointer )
  {
    SharedCacheMap = SectionObjectPointer->SharedCacheMap;
    if ( SharedCacheMap )
    {
      if ( (SharedCacheMap[38] & 0x40000000) != 0 )
      {
        KeRcuReadUnlock(v8, v7, v9);
        return 1;
      }
    }
  }
  KeRcuReadUnlock(v8, v7, v9);
  return 0;
}
