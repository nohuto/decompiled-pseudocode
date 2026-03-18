/*
 * XREFs of ?ToggleTopologyTransition@DXGGLOBAL@@QEAAEE@Z @ 0x1400594A0
 * Callers:
 *     DxgkCompleteTopologyTransition @ 0x140378060 (DxgkCompleteTopologyTransition.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 */

bool __fastcall DXGGLOBAL::ToggleTopologyTransition(DXGGLOBAL *this, char a2)
{
  int v2; // ebx

  if ( a2 )
  {
    v2 = _InterlockedIncrement((volatile signed __int32 *)this + 218);
  }
  else
  {
    v2 = _InterlockedDecrement((volatile signed __int32 *)this + 218);
    if ( v2 < 0 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 1599;
      DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"Result >= 0", 1599LL, 0LL, 0LL, 0LL, 0LL);
    }
  }
  return v2 != 0;
}
