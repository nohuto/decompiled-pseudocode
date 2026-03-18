/*
 * XREFs of PiPnpRtlFreeInstallerClassChangeInfo @ 0x1406FAFD4
 * Callers:
 *     PiPnpRtlCmActionCallback @ 0x1408C7450 (PiPnpRtlCmActionCallback.c)
 *     PiPnpRtlGatherInstallerClassChangeInfo @ 0x140AB97D4 (PiPnpRtlGatherInstallerClassChangeInfo.c)
 * Callees:
 *     PiDmRemoveCacheReferenceForObject @ 0x1408B4894 (PiDmRemoveCacheReferenceForObject.c)
 *     PiDmObjectRelease @ 0x1408D0A30 (PiDmObjectRelease.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void __fastcall PiPnpRtlFreeInstallerClassChangeInfo(PVOID P)
{
  void *v2; // rcx
  void *v3; // rcx
  __int64 v4; // rcx

  if ( P )
  {
    v2 = *(void **)P;
    if ( v2 )
      PiDmObjectRelease(v2);
    v3 = (void *)*((_QWORD *)P + 1);
    if ( v3 )
      PiDmObjectRelease(v3);
    v4 = *((_QWORD *)P + 2);
    if ( v4 )
    {
      PiDmRemoveCacheReferenceForObject(*(unsigned int *)(v4 + 28), *(_QWORD *)(v4 + 16));
      PiDmObjectRelease(*((PVOID *)P + 2));
    }
    ExFreePoolWithTag(P, 0x47706E50u);
  }
}
