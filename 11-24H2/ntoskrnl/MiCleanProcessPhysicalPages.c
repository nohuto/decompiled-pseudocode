/*
 * XREFs of MiCleanProcessPhysicalPages @ 0x140A071B8
 * Callers:
 *     MmCleanProcessAddressSpace @ 0x140A06E44 (MmCleanProcessAddressSpace.c)
 * Callees:
 *     MiReturnProcessCommitment @ 0x1404561A4 (MiReturnProcessCommitment.c)
 *     MiDeleteAweInfoPages @ 0x1407F96E0 (MiDeleteAweInfoPages.c)
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
