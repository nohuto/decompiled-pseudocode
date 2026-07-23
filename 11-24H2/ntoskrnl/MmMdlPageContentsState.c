/*
 * XREFs of MmMdlPageContentsState @ 0x140442DC0
 * Callers:
 *     SmKmIssueVolumeIo @ 0x14060BF6C (SmKmIssueVolumeIo.c)
 *     MdlInvariantPostProcessing1 @ 0x140610090 (MdlInvariantPostProcessing1.c)
 *     MdlInvariantPreProcessing1 @ 0x14061029C (MdlInvariantPreProcessing1.c)
 *     SmKmStoreFileWriteHeader @ 0x14079B6F8 (SmKmStoreFileWriteHeader.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmMdlPageContentsState(__int64 a1, unsigned int a2)
{
  __int64 result; // rax
  __int16 v4; // cx
  __int16 v5; // ax
  __int16 v6; // cx

  if ( a2 == 2 )
    return (*(unsigned __int16 *)(a1 + 10) >> 14) & 1;
  v4 = *(_WORD *)(a1 + 10);
  v5 = v4 & 0xBFFF;
  v6 = v4 | 0x4000;
  if ( a2 != 1 )
    v6 = v5;
  result = a2;
  *(_WORD *)(a1 + 10) = v6;
  return result;
}
