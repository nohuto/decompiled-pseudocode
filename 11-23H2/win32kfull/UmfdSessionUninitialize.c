/*
 * XREFs of UmfdSessionUninitialize @ 0x1C009BBC0
 * Callers:
 *     <none>
 * Callees:
 *     ?Uninitialize@UmfdAllocation@@SAXXZ @ 0x1C009BC64 (-Uninitialize@UmfdAllocation@@SAXXZ.c)
 *     ?UmfdCallSessionUninitialize@@YAXXZ @ 0x1C009BCF0 (-UmfdCallSessionUninitialize@@YAXXZ.c)
 *     ?SessionUninitialize@UmfdHostLifeTimeManager@@CAXXZ @ 0x1C009BD4C (-SessionUninitialize@UmfdHostLifeTimeManager@@CAXXZ.c)
 *     ?IsSessionGlobalsAreaAllocated@Umfd@Gre@@YA_NXZ @ 0x1C00EEF44 (-IsSessionGlobalsAreaAllocated@Umfd@Gre@@YA_NXZ.c)
 */

void __fastcall UmfdSessionUninitialize(Gre::Umfd *a1)
{
  __int64 v1; // rcx
  __int64 v2; // rcx
  __int64 v3; // rdi
  PVOID *v4; // rbx
  __int64 v5; // rbx
  void *v6; // rcx

  if ( Gre::Umfd::IsSessionGlobalsAreaAllocated(a1) )
  {
    UmfdCallSessionUninitialize();
    UmfdAllocation::Uninitialize();
    UmfdHostLifeTimeManager::SessionUninitialize();
    v3 = *(_QWORD *)(SGDGetSessionState(v1) + 32);
    v4 = *(PVOID **)(v3 + 23480);
    if ( v4 )
    {
      ExFreePoolWithTag(v4[6], 0);
      ExFreePoolWithTag(v4, 0);
      *(_QWORD *)(v3 + 23480) = 0LL;
    }
    v5 = SGDGetSessionState(v2);
    v6 = *(void **)(v5 + 40);
    if ( v6 )
    {
      EngFreeMem(v6);
      *(_QWORD *)(v5 + 40) = 0LL;
    }
  }
}
