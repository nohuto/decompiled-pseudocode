/*
 * XREFs of KeGetProcessorNode @ 0x1405B7F5C
 * Callers:
 *     KiInitializeTopologyStructures @ 0x140B5B318 (KiInitializeTopologyStructures.c)
 *     KiSetCacheInformationAmd @ 0x140B5B8F4 (KiSetCacheInformationAmd.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeGetProcessorNode(__int64 a1)
{
  return KeNodeBlock[*(unsigned __int16 *)(*(_QWORD *)(a1 + 192) + 138LL)];
}
