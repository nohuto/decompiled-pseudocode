/*
 * XREFs of SmFpFree @ 0x14042F2B0
 * Callers:
 *     SmKmStoreHelperCommandProcess @ 0x14037AA90 (SmKmStoreHelperCommandProcess.c)
 *     ?SmpPageEvict@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@KPEAX@Z @ 0x14037BED0 (-SmpPageEvict@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@KPEAX@Z.c)
 *     SmKmUnlockMdl @ 0x14039C804 (SmKmUnlockMdl.c)
 *     SmKmStoreHelperCommandCleanup @ 0x1404C6288 (SmKmStoreHelperCommandCleanup.c)
 * Callees:
 *     SmAcquireReleaseCharges @ 0x140210CF0 (SmAcquireReleaseCharges.c)
 *     KeSetEvent @ 0x1402725A0 (KeSetEvent.c)
 *     MmUnmapLockedPages @ 0x14028D9C0 (MmUnmapLockedPages.c)
 *     MmUnmapReservedMapping @ 0x14040F6F0 (MmUnmapReservedMapping.c)
 *     SmpFpReleaseResource @ 0x1404F9720 (SmpFpReleaseResource.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void __fastcall SmFpFree(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  unsigned int *v4; // rdi
  struct _MDL *v7; // rsi

  v4 = (unsigned int *)a4;
  v7 = (struct _MDL *)a4;
  if ( a2 < 5 )
    v7 = 0LL;
  else
    v4 = *(unsigned int **)(a4 + 24);
  if ( *(_QWORD *)(a1 + 112) == a3 && (unsigned int)SmpFpReleaseResource((PEX_SPIN_LOCK)a1) )
  {
    if ( a2 >= 5 )
      MmUnmapReservedMapping(v4, 0x6D526D73u, v7);
    if ( !*(_BYTE *)(a1 + 94) )
    {
      _InterlockedExchange64((volatile __int64 *)(a1 + 112), 0LL);
      KeSetEvent((PRKEVENT)(a1 + 8), 0, 0);
    }
  }
  else if ( a2 < 5 )
  {
    if ( a2 == 2 )
    {
      SmAcquireReleaseCharges(*(_QWORD *)(a1 + 32), v4[10], 3, 1);
      ExFreePoolWithTag(v4, 0);
    }
    else if ( a2 == 3 )
    {
      SmAcquireReleaseCharges(*(_QWORD *)(a1 + 32), (unsigned __int64)*(unsigned __int16 *)(a1 + 102) << 12, 1, 1);
    }
    else
    {
      ExFreePoolWithTag(v4, 0);
    }
  }
  else
  {
    MmUnmapLockedPages(v4, v7);
  }
}
