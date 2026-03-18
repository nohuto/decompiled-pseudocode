/*
 * XREFs of EtwpReleaseProviderTraitsReference @ 0x140A00320
 * Callers:
 *     EtwpSetProviderTraitsCommon @ 0x1408361EC (EtwpSetProviderTraitsCommon.c)
 *     EtwpDeleteRegistrationObject @ 0x14083C380 (EtwpDeleteRegistrationObject.c)
 *     EtwUnregister @ 0x140A00060 (EtwUnregister.c)
 * Callees:
 *     RtlRbRemoveNode @ 0x1402BE130 (RtlRbRemoveNode.c)
 *     KeReleaseGuardedMutex @ 0x14031E470 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14033E850 (ExAcquireFastMutex.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwpReleaseProviderTraitsReference(__int64 a1)
{
  __int64 v1; // rbx
  char v3; // si
  struct _FAST_MUTEX *v4; // rdi
  __int64 *v6; // rcx

  v1 = _InterlockedExchange64((volatile __int64 *)(a1 + 112), 0LL);
  if ( v1 )
  {
    v3 = *(_BYTE *)(a1 + 98) & 1;
    v4 = &EtwpProviderTraitsKmMutex;
    if ( !v3 )
      v4 = &EtwpProviderTraitsUmMutex;
    ExAcquireFastMutex(v4);
    if ( (*(_DWORD *)(v1 + 24))-- == 1 )
    {
      v6 = &EtwpProviderTraitsKmTree;
      if ( !v3 )
        v6 = &EtwpProviderTraitsUmTree;
      RtlRbRemoveNode((unsigned __int64 *)v6, (unsigned __int64 *)v1);
    }
    else
    {
      v1 = 0LL;
    }
    KeReleaseGuardedMutex(v4);
    if ( v1 )
      ExFreePoolWithTag((PVOID)v1, 0);
  }
  return 0LL;
}
