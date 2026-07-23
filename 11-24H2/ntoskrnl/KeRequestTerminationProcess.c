/*
 * XREFs of KeRequestTerminationProcess @ 0x140739A1C
 * Callers:
 *     MiCommitRequestFailed @ 0x140AA7400 (MiCommitRequestFailed.c)
 *     MiForceCrashForInvalidAccess @ 0x140AB11E8 (MiForceCrashForInvalidAccess.c)
 * Callees:
 *     KeRequestTerminationThread @ 0x1404750A8 (KeRequestTerminationThread.c)
 */

void __fastcall KeRequestTerminationProcess(__int64 a1, int a2)
{
  signed __int32 v2; // r8d
  int v3; // edx
  signed __int32 v4; // eax

  v2 = *(_DWORD *)(a1 + 120);
  v3 = a2 << 18;
  while ( (v2 & 0xC0000) == 0 )
  {
    v4 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 120), v3 | v2, v2);
    if ( v2 == v4 )
    {
      KeRequestTerminationThread(a1);
      return;
    }
    v2 = v4;
  }
}
