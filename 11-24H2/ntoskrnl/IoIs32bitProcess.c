/*
 * XREFs of IoIs32bitProcess @ 0x14040A050
 * Callers:
 *     IoIsInitiator32bitProcess @ 0x140409FB0 (IoIsInitiator32bitProcess.c)
 *     FsRtlGetMarkHandleInfo @ 0x14058052C (FsRtlGetMarkHandleInfo.c)
 *     EtwpGetScsiPassThroughCdb @ 0x14064E4F4 (EtwpGetScsiPassThroughCdb.c)
 *     PiCMFastIoDeviceDispatch @ 0x1408C3290 (PiCMFastIoDeviceDispatch.c)
 *     NtCopyFileChunk @ 0x1409886C0 (NtCopyFileChunk.c)
 *     WmipIoControl @ 0x1409CCBD0 (WmipIoControl.c)
 *     PiDqDispatch @ 0x1409F9680 (PiDqDispatch.c)
 *     WmipProbeAndCaptureGuidObjectAttributes @ 0x140A4C17C (WmipProbeAndCaptureGuidObjectAttributes.c)
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
