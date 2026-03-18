/*
 * XREFs of ?SetAggregator@?$AggregatedBy@VVIDPN_MGR@@@@QEAAXPEAVVIDPN_MGR@@@Z @ 0x14004C6A0
 * Callers:
 *     ??0DMMVIDEOPRESENTSOURCESET@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x14008DF00 (--0DMMVIDEOPRESENTSOURCESET@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ??0DMMVIDEOPRESENTTARGETSET@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x14008DFC8 (--0DMMVIDEOPRESENTTARGETSET@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ??0DMMVIDPN@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x140377B54 (--0DMMVIDPN@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AggregatedBy<VIDPN_MGR>::SetAggregator(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  if ( a2 && *(_QWORD *)(a1 + 8) )
  {
    result = WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 140;
  }
  *(_QWORD *)(a1 + 8) = a2;
  return result;
}
