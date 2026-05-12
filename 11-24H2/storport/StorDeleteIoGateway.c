/*
 * XREFs of StorDeleteIoGateway @ 0x14003D820
 * Callers:
 *     RaidAdapterReleaseResources @ 0x1401BD580 (RaidAdapterReleaseResources.c)
 * Callees:
 *     <none>
 */

void __fastcall StorDeleteIoGateway(__int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)(a1 + 960);
  if ( v2 )
  {
    *(_DWORD *)(a1 + 972) = 0;
    ExFreePoolWithTag(v2, 0x41476152u);
    *(_QWORD *)(a1 + 960) = 0LL;
  }
}
