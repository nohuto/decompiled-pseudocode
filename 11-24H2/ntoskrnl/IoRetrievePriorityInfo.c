/*
 * XREFs of IoRetrievePriorityInfo @ 0x1404068D0
 * Callers:
 *     <none>
 * Callees:
 *     PsGetIoPriorityThread @ 0x14022BEB0 (PsGetIoPriorityThread.c)
 */

NTSTATUS __stdcall IoRetrievePriorityInfo(
        PIRP Irp,
        PFILE_OBJECT FileObject,
        PETHREAD Thread,
        PIO_PRIORITY_INFO PriorityInfo)
{
  _IO_PRIORITY_HINT v4; // r10d
  PETHREAD v5; // r11
  _DWORD *FileObjectExtension; // rax
  _IO_PRIORITY_HINT v7; // ecx
  unsigned __int64 v8; // rax
  _IO_PRIORITY_HINT v9; // eax
  ULONG Flags; // eax
  int v11; // eax
  int v12; // eax
  unsigned int v13; // eax
  unsigned __int64 v14; // rcx
  unsigned int v15; // ecx
  int v17; // eax
  _IO_PRIORITY_HINT IoPriorityThread; // eax
  PETHREAD v19; // r8

  v4 = IoPriorityNormal;
  v5 = Thread;
  PriorityInfo->IoPriority = IoPriorityNormal;
  if ( Irp )
  {
    Flags = Irp->Flags;
    if ( (Flags & 0xE0000) != 0 )
    {
      v11 = (Flags >> 17) & 7;
      if ( v11 )
      {
        v12 = v11 - 1;
        if ( v12 < 2 )
        {
          v19 = Irp->Tail.Overlay.Thread;
          if ( v19 )
          {
            if ( LODWORD(v19[1].Timer.TimerListEntry.Flink) )
              goto LABEL_14;
          }
        }
      }
      else
      {
        v12 = 2;
      }
      v4 = v12;
LABEL_14:
      PriorityInfo->IoPriority = v4;
      goto LABEL_15;
    }
  }
  if ( FileObject )
  {
    FileObjectExtension = FileObject->FileObjectExtension;
    if ( !FileObjectExtension || (v17 = FileObjectExtension[22]) == 0 )
    {
      if ( Thread )
      {
        v7 = (*((_DWORD *)&Thread[1].SwapListEntry + 2) >> 9) & 7;
        v8 = Thread->Process[1].Padding[3];
        if ( v8 )
        {
          v9 = *(_DWORD *)(v8 + 1084);
          if ( v7 >= v9 )
            v7 = v9;
        }
        if ( v7 < IoPriorityNormal && Thread == KeGetCurrentThread() && LODWORD(Thread[1].Timer.TimerListEntry.Flink) )
          v7 = IoPriorityNormal;
        PriorityInfo->IoPriority = v7;
        goto LABEL_16;
      }
      goto LABEL_29;
    }
    PriorityInfo->IoPriority = v17 - 1;
LABEL_15:
    if ( v5 )
      goto LABEL_16;
LABEL_29:
    *(_QWORD *)&PriorityInfo->ThreadPriority = -1LL;
    return 0;
  }
  if ( !Thread )
    goto LABEL_29;
  IoPriorityThread = (unsigned int)PsGetIoPriorityThread((__int64)Thread);
  PriorityInfo->IoPriority = IoPriorityThread;
LABEL_16:
  PriorityInfo->ThreadPriority = v5->BasePriority;
  v13 = (*((_DWORD *)&v5[1].SwapListEntry + 2) >> 12) & 7;
  v14 = v5->Process[1].Padding[3];
  if ( v14 )
  {
    v15 = *(_DWORD *)(v14 + 1092);
    if ( v13 >= v15 )
      v13 = v15;
  }
  PriorityInfo->PagePriority = v13;
  return 0;
}
