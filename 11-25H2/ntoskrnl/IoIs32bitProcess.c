/*
 * XREFs of IoIs32bitProcess @ 0x140401A30
 * Callers:
 *     IoIsInitiator32bitProcess @ 0x140401990 (IoIsInitiator32bitProcess.c)
 *     FsRtlGetMarkHandleInfo @ 0x14057D23C (FsRtlGetMarkHandleInfo.c)
 *     EtwpGetScsiPassThroughCdb @ 0x140642534 (EtwpGetScsiPassThroughCdb.c)
 *     PiDqDispatch @ 0x1408377C0 (PiDqDispatch.c)
 *     PiCMFastIoDeviceDispatch @ 0x1408C53B0 (PiCMFastIoDeviceDispatch.c)
 *     NtCopyFileChunk @ 0x140970910 (NtCopyFileChunk.c)
 *     WmipIoControl @ 0x1409B4870 (WmipIoControl.c)
 *     WmipProbeAndCaptureGuidObjectAttributes @ 0x140A491D8 (WmipProbeAndCaptureGuidObjectAttributes.c)
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
    if ( KeGetCurrentThread()->PreviousMode != 1 )
      return 0;
    Process = KeGetCurrentThread()->ApcState.Process;
    if ( !Process[1].ReadyTime )
      return 0;
    v7 = WORD2(Process[3].PerProcessorCycleTimes);
    return v7 == 332 || v7 == 452;
  }
  if ( Irp->RequestorMode != 1 )
    return 0;
  Thread = Irp->Tail.Overlay.Thread;
  if ( (Irp->Flags & 0x2000) != 0 )
  {
    v5 = Irp->Overlay.AllocationSize.QuadPart & 0xFFFFFFFFFFFFFFF9uLL;
    goto LABEL_10;
  }
  if ( !Thread )
    return 0;
  ApcEnvironment = Irp->ApcEnvironment;
  if ( ApcEnvironment )
  {
    if ( ApcEnvironment == 1 )
    {
      v5 = (unsigned __int64)Thread->ApcState.Process;
      goto LABEL_10;
    }
    return 0;
  }
  v5 = (unsigned __int64)Thread->Process;
LABEL_10:
  if ( !v5 || !*(_QWORD *)(v5 + 784) )
    return 0;
  v6 = *(_WORD *)(v5 + 1772);
  return v6 == 332 || v6 == 452;
}
