/*
 * XREFs of NVMeControllerGetFeaturesSupportedCacheCapabilities @ 0x140006E40
 * Callers:
 *     NVMeControllerInitPart2 @ 0x140007440 (NVMeControllerInitPart2.c)
 * Callees:
 *     WaitForCommandComplete @ 0x140008190 (WaitForCommandComplete.c)
 *     ProcessCommand @ 0x140009500 (ProcessCommand.c)
 *     LocalCommandReuse @ 0x140009790 (LocalCommandReuse.c)
 */

__int64 __fastcall NVMeControllerGetFeaturesSupportedCacheCapabilities(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  int v4; // eax
  __int64 v5; // r8
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 1560);
  if ( (*(_BYTE *)(v2 + 525) & 1) != 0
    && (*(_WORD *)(a1 + 186) > 1u || *(_BYTE *)(a1 + 185))
    && (*(_BYTE *)(v2 + 520) & 0x10) != 0 )
  {
    LocalCommandReuse(a1, a1 + 1008);
    *(_BYTE *)(*(_QWORD *)(a1 + 1104) + 4225LL) |= 1u;
    *(_BYTE *)(*(_QWORD *)(a1 + 1104) + 4225LL) &= ~2u;
    *(_BYTE *)(*(_QWORD *)(a1 + 1104) + 4225LL) &= ~4u;
    *(_WORD *)(*(_QWORD *)(a1 + 1104) + 4212LL) = 0;
    v3 = *(_QWORD *)(a1 + 1104);
    *(_BYTE *)(v3 + 4136) = 6;
    v4 = *(_DWORD *)(v3 + 4136);
    *(_BYTE *)(v3 + 4096) = 10;
    *(_DWORD *)(v3 + 4136) = v4 & 0xFFFFF8FF | 0x300;
    *(_QWORD *)(*(_QWORD *)(a1 + 1104) + 4192LL) = NVMeGetFeaturesSupportedCacheCapabilitiesCompletion;
    ProcessCommand(a1, a1 + 1016);
    LOBYTE(v5) = 1;
    result = WaitForCommandComplete(a1, a1 + 1016, v5);
    if ( *(_BYTE *)(a1 + 1019) != 1 )
      *(_BYTE *)(a1 + 3964) &= ~4u;
  }
  return result;
}
