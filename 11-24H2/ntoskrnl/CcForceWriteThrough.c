/*
 * XREFs of CcForceWriteThrough @ 0x14040C010
 * Callers:
 *     CcPrepareMdlWrite @ 0x14040B2B0 (CcPrepareMdlWrite.c)
 *     CcCopyWriteWontFlush @ 0x1404D5D60 (CcCopyWriteWontFlush.c)
 *     CcMapAndCopyInToCache @ 0x1404D6C60 (CcMapAndCopyInToCache.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x14022B260 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1403597C0 (KeAcquireInStackQueuedSpinLock.c)
 *     IoIsFileOriginRemote @ 0x14040C220 (IoIsFileOriginRemote.c)
 *     KeRcuReadUnlock @ 0x14040C230 (KeRcuReadUnlock.c)
 *     KeRcuReadLock @ 0x14040C360 (KeRcuReadLock.c)
 *     CcCanIWriteStreamEx @ 0x14040C5C0 (CcCanIWriteStreamEx.c)
 */

char __fastcall CcForceWriteThrough(PFILE_OBJECT FileObject, __int64 a2, __int64 a3, char a4)
{
  __int64 v4; // rbp
  int v7; // r14d
  __int64 v9; // r15
  __int64 *v10; // rdx
  PDEVICE_OBJECT DeviceObject; // rcx
  __int64 v12; // r8
  PSECTION_OBJECT_POINTERS SectionObjectPointer; // rax
  _QWORD *SharedCacheMap; // rbp
  struct _KTHREAD *CurrentThread; // r8
  int v17; // ecx
  unsigned __int64 v18; // rdx
  int v19; // edx
  PVPB Vpb; // rax
  __int64 *v21; // rax
  _QWORD *i; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-38h] BYREF

  LODWORD(v4) = 0;
  v7 = a2;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( a3 )
  {
    v9 = *(_QWORD *)(a3 + 536);
    v4 = *(_QWORD *)(a3 + 600);
  }
  else
  {
    v9 = *((_QWORD *)PspSystemPartition + 1);
    if ( CcEnablePerVolumeLazyWriter )
    {
      KeRcuReadLock(FileObject, a2, 0LL);
      if ( CcEnablePerVolumeLazyWriter )
      {
        SectionObjectPointer = FileObject->SectionObjectPointer;
        if ( SectionObjectPointer && (SharedCacheMap = SectionObjectPointer->SharedCacheMap) != 0LL )
        {
          v4 = SharedCacheMap[75];
        }
        else
        {
          Vpb = FileObject->Vpb;
          if ( Vpb )
            DeviceObject = Vpb->DeviceObject;
          else
            DeviceObject = FileObject->DeviceObject;
          v21 = (__int64 *)CcVolumeCacheMapList;
          v10 = &CcVolumeCacheMapList;
          while ( v21 != &CcVolumeCacheMapList )
          {
            if ( (PDEVICE_OBJECT)*(v21 - 1) == DeviceObject )
            {
              DeviceObject = (PDEVICE_OBJECT)(v21 + 24);
              for ( i = (_QWORD *)v21[24]; i != (_QWORD *)DeviceObject; i = (_QWORD *)*i )
              {
                LODWORD(v4) = (_DWORD)i - 592;
                if ( *(i - 70) == v9 )
                  goto LABEL_7;
              }
              break;
            }
            v21 = (__int64 *)*v21;
          }
          LODWORD(v4) = 0;
        }
      }
LABEL_7:
      KeRcuReadUnlock(DeviceObject, v10, v12);
    }
  }
  if ( !IoIsFileOriginRemote(FileObject)
    || (unsigned __int8)CcCanIWriteStreamEx(v9, v4, (_DWORD)FileObject, v7, 0, 0, 0LL) )
  {
    if ( !a4 )
      return 0;
    CurrentThread = KeGetCurrentThread();
    v17 = (*((_DWORD *)&CurrentThread[1].SwapListEntry + 2) >> 9) & 7;
    v18 = CurrentThread->Process[1].Padding[3];
    if ( v18 )
    {
      v19 = *(_DWORD *)(v18 + 1084);
      if ( v17 >= v19 )
        v17 = v19;
    }
    if ( v17 < 2 && CurrentThread == KeGetCurrentThread() && LODWORD(CurrentThread[1].Timer.TimerListEntry.Flink)
      || v17 > 0
      || (FileObject->Flags & 0x8000) != 0 )
    {
      return 0;
    }
  }
  if ( a4 )
  {
    if ( (*(_DWORD *)(a3 + 152) & 0x400) == 0 )
    {
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v9 + 768), &LockHandle);
      *(_DWORD *)(a3 + 152) |= 0x400u;
      KeReleaseInStackQueuedSpinLock(&LockHandle);
    }
  }
  return 1;
}
