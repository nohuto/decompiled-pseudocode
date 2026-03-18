/*
 * XREFs of ?CheckOcclusionState@CDummyRemotingSwapChain@@UEBAJXZ @ 0x1802CFA70
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CDummyRemotingSwapChain::CheckOcclusionState(CDummyRemotingSwapChain *this)
{
  unsigned int v1; // ebx

  if ( *(_DWORD *)(*((_QWORD *)this + 6) + 1112LL) )
  {
    v1 = -2003304307;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003304307, 0xC0u, 0LL);
  }
  else
  {
    return (unsigned int)DwmGetRemoteSessionOcclusionState() != 0 ? 0x87A0001 : 0;
  }
  return v1;
}
