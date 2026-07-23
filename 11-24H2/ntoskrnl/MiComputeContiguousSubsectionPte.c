/*
 * XREFs of MiComputeContiguousSubsectionPte @ 0x140435270
 * Callers:
 *     MiAdvanceVadView @ 0x1403C8DEC (MiAdvanceVadView.c)
 *     MiMapViewOfDataSection @ 0x1409173D0 (MiMapViewOfDataSection.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiComputeContiguousSubsectionPte(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rax

  v2 = *(_DWORD *)(a1 + 44) - (*(_DWORD *)(a1 + 52) & 0x3FFFFFFFu);
  if ( a2 >= v2 )
    a2 = (unsigned int)(v2 - 1);
  return *(_QWORD *)(a1 + 8) + 8 * a2;
}
