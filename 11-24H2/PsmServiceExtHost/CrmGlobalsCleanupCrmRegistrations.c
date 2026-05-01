/*
 * XREFs of CrmGlobalsCleanupCrmRegistrations @ 0x18007B618
 * Callers:
 *     CrmGlobalsCleanup @ 0x1800786E8 (CrmGlobalsCleanup.c)
 * Callees:
 *     ?HampFreeHeap@@YAXPEAX@Z @ 0x18000F760 (-HampFreeHeap@@YAXPEAX@Z.c)
 *     CrmRegistrationCleanup @ 0x180030E04 (CrmRegistrationCleanup.c)
 *     CrmSrvUnregister @ 0x180064644 (CrmSrvUnregister.c)
 */

void __fastcall CrmGlobalsCleanupCrmRegistrations(__int64 a1)
{
  unsigned int i; // edi
  _QWORD *v3; // rcx
  char *v4; // rcx
  char *v5; // rcx

  if ( *(_QWORD *)(a1 + 560) )
  {
    for ( i = 0; i < *(_DWORD *)(a1 + 568); ++i )
      CrmRegistrationCleanup((_QWORD *)(*(_QWORD *)(a1 + 560) + 152LL * i), 1);
    HampFreeHeap(*(void **)(a1 + 560));
  }
  v3 = *(_QWORD **)(a1 + 576);
  if ( v3 )
  {
    CrmRegistrationCleanup(v3, 1);
    HampFreeHeap(*(void **)(a1 + 576));
  }
  v4 = *(char **)(a1 + 552);
  if ( v4 )
    CrmSrvUnregister(v4);
  v5 = *(char **)(a1 + 544);
  if ( v5 )
    CrmSrvUnregister(v5);
}
