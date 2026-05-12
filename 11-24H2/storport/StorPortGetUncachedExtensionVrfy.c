/*
 * XREFs of StorPortGetUncachedExtensionVrfy @ 0x1401C13A0
 * Callers:
 *     <none>
 * Callees:
 *     RaMiniportGetRaidAdapter @ 0x140036868 (RaMiniportGetRaidAdapter.c)
 *     StorPortGetUncachedExtension @ 0x140073D40 (StorPortGetUncachedExtension.c)
 */

__int64 __fastcall StorPortGetUncachedExtensionVrfy(__int64 a1, __int64 a2)
{
  _BYTE *v2; // rcx
  __int64 v3; // rdx
  _DWORD *RaidAdapter; // r8
  __int64 v5; // r9
  int v6; // r10d
  __int64 v7; // rax

  v2 = *(_BYTE **)(a1 - 16);
  if ( (v2[248] & 2) == 0 || !*(_BYTE *)(a2 + 82) )
    goto LABEL_7;
  RaidAdapter = (_DWORD *)RaMiniportGetRaidAdapter(v2);
  v7 = 79LL;
  if ( *RaidAdapter != 1314275652 )
    v7 = 131LL;
  if ( ((RaidAdapter[v7] + 7) & 0xFFFFFFF8) == 0 )
LABEL_7:
    KeBugCheckEx(0xF1u, 0x2002uLL, 0LL, 0LL, 0LL);
  return StorPortGetUncachedExtension(v5, v3, v6);
}
