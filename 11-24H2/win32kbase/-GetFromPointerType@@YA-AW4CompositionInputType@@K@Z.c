/*
 * XREFs of ?GetFromPointerType@@YA?AW4CompositionInputType@@K@Z @ 0x14009771C
 * Callers:
 *     ?ResolveInputSinkToINPUTDEST@CSpatialProcessor@@KA_NPEAXKPEAUtagINPUTDEST@@@Z @ 0x14018AF58 (-ResolveInputSinkToINPUTDEST@CSpatialProcessor@@KA_NPEAXKPEAUtagINPUTDEST@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_Dd @ 0x14009782C (WPP_RECORDER_AND_TRACE_SF_Dd.c)
 */

__int64 __fastcall GetFromPointerType(int a1)
{
  unsigned int v1; // ebx
  char v2; // bp
  char v3; // di
  bool v4; // si
  __int64 UserSessionState; // rax
  int v6; // r8d
  int v7; // edx

  v1 = 0;
  v2 = a1;
  v3 = 1;
  if ( a1 != 1 )
  {
    if ( a1 != 2 )
    {
      if ( a1 == 3 )
      {
        v1 = 4;
        goto LABEL_3;
      }
      if ( a1 == 4 )
        goto LABEL_2;
      if ( a1 != 5 )
        goto LABEL_3;
    }
    v1 = 3;
    goto LABEL_3;
  }
LABEL_2:
  v1 = 1;
LABEL_3:
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
    || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
  {
    v3 = 0;
  }
  v4 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v3 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control);
    LOBYTE(v6) = v4;
    LOBYTE(v7) = v3;
    WPP_RECORDER_AND_TRACE_SF_Dd(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v7,
      v6,
      *(_QWORD *)(UserSessionState + 69400),
      4,
      2,
      24,
      (__int64)&WPP_4438f3a2f9f43d777ccb023a4199db82_Traceguids,
      v2,
      v1);
  }
  return v1;
}
