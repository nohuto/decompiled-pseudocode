/*
 * XREFs of ??0?$vector@PEAGV?$allocator@PEAG@std@@@std@@QEAA@AEBV01@@Z @ 0x180320964
 * Callers:
 *     ?GetSelectionScore@SelectionData@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@AEAAHAEBU12345@@Z @ 0x1803214F0 (-GetSelectionScore@SelectionData@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@AEAAH.c)
 * Callees:
 *     ??$_Construct_n@AEBQEAPEAGAEBQEAPEAG@?$vector@PEAGV?$allocator@PEAG@std@@@std@@AEAAX_KAEBQEAPEAG1@Z @ 0x1803204F0 (--$_Construct_n@AEBQEAPEAGAEBQEAPEAG@-$vector@PEAGV-$allocator@PEAG@std@@@std@@AEAAX_KAEBQEAPEAG.c)
 */

_QWORD *__fastcall std::vector<unsigned short *>::vector<unsigned short *>(_QWORD *a1, __int64 a2)
{
  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  std::vector<unsigned short *>::_Construct_n<unsigned short * * const &,unsigned short * * const &>(
    a1,
    (__int64)(*(_QWORD *)(a2 + 8) - *(_QWORD *)a2) >> 3,
    (const void **)a2,
    (_QWORD *)(a2 + 8));
  return a1;
}
