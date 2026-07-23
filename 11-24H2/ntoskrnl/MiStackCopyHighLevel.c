/*
 * XREFs of MiStackCopyHighLevel @ 0x1406764D4
 * Callers:
 *     MiWritePteHighLevelIsr @ 0x1404B2C80 (MiWritePteHighLevelIsr.c)
 * Callees:
 *     MiClearPfnReuseFields @ 0x140218960 (MiClearPfnReuseFields.c)
 *     MiCopyKstack @ 0x140676328 (MiCopyKstack.c)
 *     MiSwitchKstackPages @ 0x140676734 (MiSwitchKstackPages.c)
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
