/*
 * XREFs of IoIs32bitProcess @ 0x140402530
 * Callers:
 *     IoIsInitiator32bitProcess @ 0x140402490 (IoIsInitiator32bitProcess.c)
 *     FsRtlGetMarkHandleInfo @ 0x14057D99C (FsRtlGetMarkHandleInfo.c)
 *     EtwpGetScsiPassThroughCdb @ 0x14064CB04 (EtwpGetScsiPassThroughCdb.c)
 *     PiCMFastIoDeviceDispatch @ 0x1408C0C50 (PiCMFastIoDeviceDispatch.c)
 *     WmipProbeAndCaptureGuidObjectAttributes @ 0x1409B0F78 (WmipProbeAndCaptureGuidObjectAttributes.c)
 *     WmipIoControl @ 0x1409B1150 (WmipIoControl.c)
 *     PiDqDispatch @ 0x1409F1FF0 (PiDqDispatch.c)
 *     NtCopyFileChunk @ 0x140ABE950 (NtCopyFileChunk.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall IoIs32bitProcess(PIRP Irp)
{
  _KPROCESS *Process; // rcx
  PETHREAD Thread; // rdx
  CCHAR ApcEnvironment; // al
  unsigned __int64 v5; // rax
  __int16 v6; // cx
  __int16 v7; // dx

  if ( !Irp )
  {
    if ( KeGetCurrentThread()->PreviousMode == 1 )
    {
      Process = KeGetCurrentThread()->ApcState.Process;
      if ( Process[1].ReadyTime )
      {
        v7 = WORD2(Process[3].PerProcessorCycleTimes);
        if ( v7 == 332 || v7 == 452 )
          return 1;
      }
    }
    return 0;
  }
  if ( Irp->RequestorMode != 1 )
    return 0;
  Thread = Irp->Tail.Overlay.Thread;
  if ( (Irp->Flags & 0x2000) != 0 )
  {
    v5 = Irp->Overlay.AllocationSize.QuadPart & 0xFFFFFFFFFFFFFFF9uLL;
  }
  else
  {
    if ( !Thread )
      return 0;
    ApcEnvironment = Irp->ApcEnvironment;
    if ( ApcEnvironment )
    {
      if ( ApcEnvironment != 1 )
        return 0;
      v5 = (unsigned __int64)Thread->ApcState.Process;
    }
    else
    {
      v5 = (unsigned __int64)Thread->Process;
    }
  }
  if ( !v5 || !*(_QWORD *)(v5 + 784) )
    return 0;
  v6 = *(_WORD *)(v5 + 1772);
  if ( v6 != 332 )
    return v6 == 452;
  return 1;
}
