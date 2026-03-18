/*
 * XREFs of MiStackCopyHighLevel @ 0x1406698A4
 * Callers:
 *     MiWritePteHighLevelIsr @ 0x1404B8D10 (MiWritePteHighLevelIsr.c)
 * Callees:
 *     MiClearPfnReuseFields @ 0x1402C4CC0 (MiClearPfnReuseFields.c)
 *     MiCopyKstack @ 0x1406696F8 (MiCopyKstack.c)
 *     MiSwitchKstackPages @ 0x140669B04 (MiSwitchKstackPages.c)
 */

__int64 __fastcall MiStackCopyHighLevel(_QWORD *a1)
{
  __int64 v1; // rdi
  __int64 v2; // rbx

  v1 = 48LL * a1[1] - 0x220000000000LL;
  v2 = 48LL * *a1 - 0x220000000000LL;
  MiCopyKstack(v1, v2, a1[2], 0);
  MiSwitchKstackPages(v1, v2);
  return MiClearPfnReuseFields(v2);
}
