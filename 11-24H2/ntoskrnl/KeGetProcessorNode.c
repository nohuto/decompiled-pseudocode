/*
 * XREFs of KeGetProcessorNode @ 0x1405BA92C
 * Callers:
 *     KiInitializeTopologyStructures @ 0x140B59298 (KiInitializeTopologyStructures.c)
 *     KiSetCacheInformationAmd @ 0x140B59874 (KiSetCacheInformationAmd.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeGetProcessorNode(__int64 a1)
{
  return KeNodeBlock[*(unsigned __int16 *)(*(_QWORD *)(a1 + 192) + 138LL)];
}
