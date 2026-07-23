/*
 * XREFs of MiSelectCfgBitMap @ 0x1409E4CC8
 * Callers:
 *     MiProcessPatchImageCfg @ 0x1407F63AC (MiProcessPatchImageCfg.c)
 *     MiCfgMarkValidEntries @ 0x1409E4A6C (MiCfgMarkValidEntries.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiSelectCfgBitMap(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  __int16 v4; // ax

  if ( *(_QWORD *)(a1 + 784)
    && ((v4 = *(_WORD *)(a1 + 1772), v4 == 332) || v4 == 452)
    && a2 < 0x100000000LL
    && (!a3 || _bittest16((const signed __int16 *)(*(_QWORD *)a3 + 12LL), 0xFu)) )
  {
    return *(_QWORD *)(a1 + 1040) + 1216LL;
  }
  else
  {
    return *(_QWORD *)(a1 + 1040) + 1184LL;
  }
}
