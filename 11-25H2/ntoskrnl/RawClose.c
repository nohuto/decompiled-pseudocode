/*
 * XREFs of RawClose @ 0x14099D6CC
 * Callers:
 *     RawDispatch @ 0x14099D320 (RawDispatch.c)
 * Callees:
 *     IofCompleteRequest @ 0x140251700 (IofCompleteRequest.c)
 *     KeReleaseGuardedMutex @ 0x140286F40 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14029C580 (ExAcquireFastMutex.c)
 *     RawInitiateDeleteVolume @ 0x14048397C (RawInitiateDeleteVolume.c)
 */

__int64 __fastcall RawClose(PFSRTL_ADVANCED_FCB_HEADER AdvancedHeader, PIRP Irp, __int64 a3)
{
  struct _FAST_MUTEX *v5; // rsi

  if ( (*(_DWORD *)(*(_QWORD *)(a3 + 48) + 80LL) & 0x100) == 0 )
  {
    v5 = (struct _FAST_MUTEX *)&AdvancedHeader[2];
    ExAcquireFastMutex((PKGUARDED_MUTEX)&AdvancedHeader[2]);
    --*(_DWORD *)&AdvancedHeader[1].Flags;
    --LODWORD(AdvancedHeader[1].Resource);
    if ( *(_DWORD *)&AdvancedHeader[1].Flags || !RawInitiateDeleteVolume(AdvancedHeader, 0, 0) )
      KeReleaseGuardedMutex(v5);
  }
  Irp->IoStatus.Status = 0;
  IofCompleteRequest(Irp, 1);
  return 0LL;
}
