/*
 * XREFs of MiChargeProcessPhysicalPages @ 0x140A82FDC
 * Callers:
 *     MiCommitExistingVad @ 0x140213020 (MiCommitExistingVad.c)
 *     MiAllocateUserPhysicalPages @ 0x1407F84C8 (MiAllocateUserPhysicalPages.c)
 *     MiCreateLargePageVad @ 0x140A82E50 (MiCreateLargePageVad.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiChargeProcessPhysicalPages(__int64 a1, unsigned __int64 a2)
{
  signed __int64 v3; // rax
  signed __int64 v4; // rtt

  if ( *(_QWORD *)(a1 + 1400) )
  {
    v3 = *(_QWORD *)(a1 + 1392);
    while ( v3 + a2 <= *(_QWORD *)(a1 + 1400) )
    {
      v4 = v3;
      v3 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 1392), v3 + a2, v3);
      if ( v4 == v3 )
        return 1LL;
    }
    return 0LL;
  }
  else
  {
    _InterlockedAdd64((volatile signed __int64 *)(a1 + 1392), a2);
    return 1LL;
  }
}
