/*
 * XREFs of ?ReleaseUmfdFileviewWithNoLock@UmfdHostLifeTimeManager@@CAXXZ @ 0x14026899C
 * Callers:
 *     ?UninitializeProcess@UmfdHostLifeTimeManager@@SAXXZ @ 0x140102480 (-UninitializeProcess@UmfdHostLifeTimeManager@@SAXXZ.c)
 *     ?InitializeUmfdAndRegisterHost@UmfdHostLifeTimeManager@@SAHPEAX@Z @ 0x140205C3C (-InitializeUmfdAndRegisterHost@UmfdHostLifeTimeManager@@SAHPEAX@Z.c)
 *     ?TerminateUmfdHost@UmfdHostLifeTimeManager@@SAX_N@Z @ 0x14025E194 (-TerminateUmfdHost@UmfdHostLifeTimeManager@@SAX_N@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall UmfdHostLifeTimeManager::ReleaseUmfdFileviewWithNoLock(int a1, __int64 a2)
{
  __int64 v2; // rdi
  PVOID *v3; // rbx

  v2 = *(_QWORD *)(W32GetSessionState(a1, a2) + 96);
  v3 = *(PVOID **)(v2 + 24168);
  if ( v3 )
  {
    ExFreePoolWithTag(v3[6], 0);
    ExFreePoolWithTag(v3, 0);
    *(_QWORD *)(v2 + 24168) = 0LL;
  }
}
