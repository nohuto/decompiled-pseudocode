/*
 * XREFs of PiPnpRtlFreeInstallerClassChangeInfo @ 0x1406EF194
 * Callers:
 *     PiPnpRtlCmActionCallback @ 0x1408C95E0 (PiPnpRtlCmActionCallback.c)
 *     PiPnpRtlGatherInstallerClassChangeInfo @ 0x140AB53E8 (PiPnpRtlGatherInstallerClassChangeInfo.c)
 * Callees:
 *     PiDmObjectRelease @ 0x1408CE5E0 (PiDmObjectRelease.c)
 *     PiDmRemoveCacheReferenceForObject @ 0x140968AC8 (PiDmRemoveCacheReferenceForObject.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
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
