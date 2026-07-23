/*
 * XREFs of MiCleanProcessPhysicalPages @ 0x140A036E8
 * Callers:
 *     MmCleanProcessAddressSpace @ 0x140A03374 (MmCleanProcessAddressSpace.c)
 * Callees:
 *     MiReturnProcessCommitment @ 0x14044AEE4 (MiReturnProcessCommitment.c)
 *     MiDeleteAweInfoPages @ 0x1407F9E50 (MiDeleteAweInfoPages.c)
 */

void __fastcall MiCleanProcessPhysicalPages(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rax

  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 1040) + 1096LL);
  if ( v2 )
  {
    v3 = MiDeleteAweInfoPages(v2);
    if ( v3 )
    {
      *(_QWORD *)(a1 + 1392) = 0LL;
      MiReturnProcessCommitment(a1, v3);
    }
  }
}
