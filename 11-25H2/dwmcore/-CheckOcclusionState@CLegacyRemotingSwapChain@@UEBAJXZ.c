/*
 * XREFs of ?CheckOcclusionState@CLegacyRemotingSwapChain@@UEBAJXZ @ 0x1802D4E30
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CLegacyRemotingSwapChain::CheckOcclusionState(CLegacyRemotingSwapChain *this)
{
  unsigned int v1; // ebx

  if ( *(_DWORD *)(*((_QWORD *)this + 7) + 1112LL) )
  {
    v1 = -2003304307;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003304307, 0xCDu, 0LL);
  }
  else
  {
    return (unsigned int)DwmGetRemoteSessionOcclusionState() != 0 ? 0x87A0001 : 0;
  }
  return v1;
}
