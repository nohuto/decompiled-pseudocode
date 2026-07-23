/*
 * XREFs of PopRecordFirmwareResetReason @ 0x140C2FF5C
 * Callers:
 *     PoInitSystem @ 0x140C63AE4 (PoInitSystem.c)
 * Callees:
 *     <none>
 */

char __fastcall PopRecordFirmwareResetReason(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // rax

  v1 = *(_QWORD *)(a1 + 240);
  LOBYTE(v2) = *(_BYTE *)(v1 + 3440);
  LOBYTE(PopFirmwareResetReason) = v2;
  if ( *(_BYTE *)(v1 + 3440) )
  {
    v2 = *(_QWORD *)(v1 + 3448);
    *((_QWORD *)&PopFirmwareResetReason + 1) = v2;
    xmmword_140E67438 = *(_OWORD *)(v1 + 3456);
    xmmword_140E67448 = *(_OWORD *)(v1 + 3472);
  }
  return v2;
}
