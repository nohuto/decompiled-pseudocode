/*
 * XREFs of bi_windup @ 0x1406002C0
 * Callers:
 *     _tr_flush_block @ 0x1405FFE68 (_tr_flush_block.c)
 *     _tr_stored_block @ 0x140600130 (_tr_stored_block.c)
 * Callees:
 *     <none>
 */

char __fastcall bi_windup(__int64 a1)
{
  int v1; // eax

  v1 = *(_DWORD *)(a1 + 5984);
  if ( v1 > 8 )
  {
    *(_BYTE *)((unsigned int)(*(_DWORD *)(a1 + 40))++ + *(_QWORD *)(a1 + 16)) = *(_BYTE *)(a1 + 5980);
    LOBYTE(v1) = *(_BYTE *)(a1 + 5981);
LABEL_5:
    *(_BYTE *)((unsigned int)(*(_DWORD *)(a1 + 40))++ + *(_QWORD *)(a1 + 16)) = v1;
    goto LABEL_6;
  }
  if ( v1 > 0 )
  {
    LOBYTE(v1) = *(_BYTE *)(a1 + 5980);
    goto LABEL_5;
  }
LABEL_6:
  *(_WORD *)(a1 + 5980) = 0;
  *(_DWORD *)(a1 + 5984) = 0;
  return v1;
}
