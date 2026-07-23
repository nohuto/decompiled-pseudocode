/*
 * XREFs of sub_14091DB84 @ 0x14091DB84
 * Callers:
 *     sub_14091BDAC @ 0x14091BDAC (sub_14091BDAC.c)
 *     sub_14091E6EC @ 0x14091E6EC (sub_14091E6EC.c)
 *     sub_14091F638 @ 0x14091F638 (sub_14091F638.c)
 *     sub_14091F8F8 @ 0x14091F8F8 (sub_14091F8F8.c)
 *     WbCreateHeapExecutedBlock @ 0x1409203B8 (WbCreateHeapExecutedBlock.c)
 *     WbHeapExecutionUnloadModule @ 0x140A480AC (WbHeapExecutionUnloadModule.c)
 * Callees:
 *     SddlpFree @ 0x140867F20 (SddlpFree.c)
 *     sub_14091DBE4 @ 0x14091DBE4 (sub_14091DBE4.c)
 */

signed __int64 __fastcall sub_14091DB84(__int64 a1, __int64 a2)
{
  signed __int64 v2; // rdi

  v2 = 0LL;
  if ( a2 )
  {
    v2 = _InterlockedDecrement64((volatile signed __int64 *)(a2 + 80));
    if ( !v2 )
    {
      if ( *(_QWORD *)(a2 + 40) )
      {
        sub_14091DBE4(a1);
        *(_QWORD *)(a2 + 40) = 0LL;
        *(_QWORD *)(a2 + 24) = 0LL;
        *(_QWORD *)(a2 + 32) = 0LL;
        *(_DWORD *)(a2 + 72) = 0;
      }
      SddlpFree((void *)a2);
    }
  }
  return v2;
}
