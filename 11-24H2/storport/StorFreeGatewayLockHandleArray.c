/*
 * XREFs of StorFreeGatewayLockHandleArray @ 0x140055EDC
 * Callers:
 *     RaidAdapterReleaseResources @ 0x1401BD580 (RaidAdapterReleaseResources.c)
 * Callees:
 *     <none>
 */

void __fastcall StorFreeGatewayLockHandleArray(__int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)(a1 + 6072);
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0x41476152u);
    *(_QWORD *)(a1 + 6072) = 0LL;
  }
}
