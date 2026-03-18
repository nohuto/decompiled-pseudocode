/*
 * XREFs of MiStackCopyHighLevel @ 0x140675304
 * Callers:
 *     MiWritePteHighLevelIsr @ 0x1404B8330 (MiWritePteHighLevelIsr.c)
 * Callees:
 *     MiClearPfnReuseFields @ 0x1403A1D30 (MiClearPfnReuseFields.c)
 *     MiCopyKstack @ 0x140675158 (MiCopyKstack.c)
 *     MiSwitchKstackPages @ 0x140675564 (MiSwitchKstackPages.c)
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
