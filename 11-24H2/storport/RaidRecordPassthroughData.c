/*
 * XREFs of RaidRecordPassthroughData @ 0x140036D58
 * Callers:
 *     RaidAdapterPassThrough @ 0x1401B53BC (RaidAdapterPassThrough.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RaidRecordPassthroughData(unsigned __int8 a1)
{
  __int64 result; // rax

  result = (unsigned int)(1 << (a1 & 0x1F));
  g_RaidPassthroughCdbs[(unsigned __int64)a1 >> 5] |= result;
  return result;
}
