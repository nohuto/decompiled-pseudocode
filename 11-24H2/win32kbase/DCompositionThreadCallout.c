/*
 * XREFs of DCompositionThreadCallout @ 0x140106B80
 * Callers:
 *     <none>
 * Callees:
 *     ?OnDwmRenderThreadExit@CConnection@DirectComposition@@SAXXZ @ 0x14019F908 (-OnDwmRenderThreadExit@CConnection@DirectComposition@@SAXXZ.c)
 */

__int64 __fastcall DCompositionThreadCallout(__int64 a1, int a2)
{
  if ( a2 == 1 && a1 == *(_QWORD *)(W32GetDCompSessionState() + 8) )
    DirectComposition::CConnection::OnDwmRenderThreadExit();
  return 0LL;
}
