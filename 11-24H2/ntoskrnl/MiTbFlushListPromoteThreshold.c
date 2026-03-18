/*
 * XREFs of MiTbFlushListPromoteThreshold @ 0x140424950
 * Callers:
 *     MiReleasePteMappings @ 0x140241200 (MiReleasePteMappings.c)
 *     MiConsumeSystemCacheTbFlushNeededView @ 0x140424738 (MiConsumeSystemCacheTbFlushNeededView.c)
 *     MiFlushTbNowToAvoidOverflow @ 0x140424914 (MiFlushTbNowToAvoidOverflow.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiTbFlushListPromoteThreshold(__int64 a1)
{
  _KPROCESS *Process; // rax

  if ( *(_BYTE *)(a1 + 24) )
    return -1LL;
  if ( *(_DWORD *)(a1 + 8) == 1
    && ((Process = KeGetCurrentThread()->ApcState.Process, Process[3].ProcessListEntry.Blink)
     || Process->SecureState.SecureHandle) )
  {
    return -1LL;
  }
  else
  {
    return qword_140E2DBD0;
  }
}
