/*
 * XREFs of RawReadWriteDeviceControl @ 0x1408AD8D0
 * Callers:
 *     RawDispatch @ 0x1408AD4A0 (RawDispatch.c)
 * Callees:
 *     IofCallDriver @ 0x14025CA20 (IofCallDriver.c)
 *     KeReleaseGuardedMutex @ 0x1402C7000 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14031DD30 (ExAcquireFastMutex.c)
 *     IofCompleteRequest @ 0x1403CCDA0 (IofCompleteRequest.c)
 *     RawBeginOperation @ 0x1404052F0 (RawBeginOperation.c)
 *     RawEndOperation @ 0x14047ED8C (RawEndOperation.c)
 *     RawInitiateDeleteVolume @ 0x14047F73C (RawInitiateDeleteVolume.c)
 */

NTSTATUS __fastcall RawReadWriteDeviceControl(PFSRTL_ADVANCED_FCB_HEADER AdvancedHeader, PIRP Irp, char *a3)
{
  BOOLEAN v6; // al
  char v7; // cl
  NTSTATUS v8; // ebx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  struct _IO_STACK_LOCATION *v10; // rax

  v6 = RawBeginOperation((__int64)AdvancedHeader, *((_QWORD *)a3 + 6));
  v7 = *a3;
  v8 = 0;
  if ( v6 )
  {
    if ( (unsigned __int8)(v7 - 3) > 1u || *((_DWORD *)a3 + 2) )
    {
      CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
      *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = *(_OWORD *)a3;
      *(_OWORD *)&CurrentStackLocation[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *((_OWORD *)a3 + 1);
      *(_OWORD *)(&CurrentStackLocation[-1].Parameters.SetQuota + 6) = *((_OWORD *)a3 + 2);
      *(_OWORD *)&CurrentStackLocation[-1].FileObject = *((_OWORD *)a3 + 3);
      CurrentStackLocation[-1].Context = (PVOID)*((_QWORD *)a3 + 8);
      CurrentStackLocation[-1].Flags |= 2u;
      v10 = Irp->Tail.Overlay.CurrentStackLocation;
      v10[-1].CompletionRoutine = (PIO_COMPLETION_ROUTINE)RawCompletionRoutine;
      v10[-1].Context = AdvancedHeader;
      v10[-1].Control = -32;
      return IofCallDriver((PDEVICE_OBJECT)AdvancedHeader[1].PushLock.Value, Irp);
    }
    RawEndOperation((__int64)AdvancedHeader, *((_QWORD *)a3 + 6));
  }
  else
  {
    if ( v7 == 27 )
    {
      ExAcquireFastMutex((PKGUARDED_MUTEX)&AdvancedHeader[2]);
      --LODWORD(AdvancedHeader[1].Resource);
      if ( *(_DWORD *)&AdvancedHeader[1].Flags || !RawInitiateDeleteVolume(AdvancedHeader, 0, 0) )
        KeReleaseGuardedMutex((PKGUARDED_MUTEX)&AdvancedHeader[2]);
    }
    v8 = -1073741202;
  }
  Irp->IoStatus.Status = v8;
  IofCompleteRequest(Irp, 1);
  return v8;
}
