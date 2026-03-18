/*
 * XREFs of ?ToggleTopologyTransition@DXGGLOBAL@@QEAAEE@Z @ 0x140058F60
 * Callers:
 *     DxgkCompleteTopologyTransition @ 0x14038E140 (DxgkCompleteTopologyTransition.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 */

bool __fastcall DXGGLOBAL::ToggleTopologyTransition(DXGGLOBAL *this, char a2)
{
  int v2; // ebx

  if ( a2 )
  {
    v2 = _InterlockedIncrement((volatile signed __int32 *)this + 226);
  }
  else
  {
    v2 = _InterlockedDecrement((volatile signed __int32 *)this + 226);
    if ( v2 < 0 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 1789;
      DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"Result >= 0", 1789LL, 0LL, 0LL, 0LL, 0LL);
    }
  }
  return v2 != 0;
}
