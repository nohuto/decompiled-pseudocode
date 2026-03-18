/*
 * XREFs of MiCheckWriteInProgressFault @ 0x140481D54
 * Callers:
 *     MiStandbyPageContentsIntact @ 0x140225484 (MiStandbyPageContentsIntact.c)
 *     MiResolveTransitionFault @ 0x140233060 (MiResolveTransitionFault.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiCheckWriteInProgressFault(__int64 a1)
{
  if ( (MiFlags & 0x20000) != 0 )
    return ((*(_DWORD *)(a1 + 16) >> 5) & 2) != 0 && ((*(_DWORD *)(a1 + 16) >> 5) & 0x1F) == 0 ? 0xC0000017 : 0;
  else
    return 0LL;
}
