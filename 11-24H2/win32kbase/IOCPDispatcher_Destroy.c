/*
 * XREFs of IOCPDispatcher_Destroy @ 0x14020DAF0
 * Callers:
 *     UserActivateMITInputProcessing @ 0x14018A3B0 (UserActivateMITInputProcessing.c)
 *     UninitializeInputSensorsOnSharedThread @ 0x1402136DC (UninitializeInputSensorsOnSharedThread.c)
 * Callees:
 *     ??_GIOCPDispatcher@@QEAAPEAXI@Z @ 0x14020BAE8 (--_GIOCPDispatcher@@QEAAPEAXI@Z.c)
 */

__int64 __fastcall IOCPDispatcher_Destroy(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rcx
  HANDLE *v3; // rcx

  result = W32GetUserSessionState(a1);
  if ( *(_QWORD *)(result + 19272) )
  {
    v3 = *(HANDLE **)(W32GetUserSessionState(v2) + 19272);
    if ( v3 )
      IOCPDispatcher::`scalar deleting destructor'(v3);
    result = W32GetUserSessionState(v3);
    *(_QWORD *)(result + 19272) = 0LL;
  }
  return result;
}
