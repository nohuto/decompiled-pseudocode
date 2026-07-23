/*
 * XREFs of MiCaptureUlongPtrArray @ 0x1407F9A74
 * Callers:
 *     NtFreeUserPhysicalPages @ 0x1407FA340 (NtFreeUserPhysicalPages.c)
 *     NtMapUserPhysicalPages @ 0x1407FA870 (NtMapUserPhysicalPages.c)
 *     NtMapUserPhysicalPagesScatter @ 0x1407FAB20 (NtMapUserPhysicalPagesScatter.c)
 * Callees:
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408A3890 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall MiCaptureUlongPtrArray(_QWORD *a1, unsigned int *a2, unsigned __int64 a3)
{
  _KPROCESS *Process; // rax
  __int16 v5; // ax
  bool v6; // zf
  char v7; // al
  unsigned __int64 i; // rax
  __int64 v9; // rcx
  size_t v10; // r8

  Process = KeGetCurrentThread()->ApcState.Process;
  if ( !Process[1].ReadyTime )
    goto LABEL_14;
  v5 = WORD2(Process[3].PerProcessorCycleTimes);
  if ( v5 == 332 || (v6 = v5 == 452, v7 = 0, v6) )
    v7 = 1;
  if ( v7 )
  {
    if ( 4 * a3 && ((unsigned __int8)a2 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    for ( i = 0LL; i < a3; ++i )
    {
      v9 = a2[i];
      a1[i] = v9;
      if ( (v9 & 0xFFFFFFFF80000000uLL) != 0 )
      {
        LODWORD(v9) = v9 & 0x7FFFFFFF;
        a1[i] = v9;
        a1[i] = v9 | 0x8000000000000000uLL;
      }
    }
  }
  else
  {
LABEL_14:
    v10 = 8 * a3;
    if ( v10 && ((unsigned __int8)a2 & 7) != 0 )
      ExRaiseDatatypeMisalignment();
    memmove(a1, a2, v10);
  }
  return 0LL;
}
