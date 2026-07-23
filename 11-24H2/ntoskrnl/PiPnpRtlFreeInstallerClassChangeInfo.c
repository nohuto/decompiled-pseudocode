/*
 * XREFs of PiPnpRtlFreeInstallerClassChangeInfo @ 0x1406F8C14
 * Callers:
 *     PiPnpRtlCmActionCallback @ 0x1408C4E80 (PiPnpRtlCmActionCallback.c)
 *     PiPnpRtlGatherInstallerClassChangeInfo @ 0x140AB4894 (PiPnpRtlGatherInstallerClassChangeInfo.c)
 * Callees:
 *     PiDmRemoveCacheReferenceForObject @ 0x1408B2184 (PiDmRemoveCacheReferenceForObject.c)
 *     PiDmObjectRelease @ 0x1408CE420 (PiDmObjectRelease.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
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
