/*
 * XREFs of KSTIOCPDispatcher_Destroy @ 0x14020DB50
 * Callers:
 *     DeactivateKSTInputProcessingHelper @ 0x140215790 (DeactivateKSTInputProcessingHelper.c)
 *     UserKSTInitialize @ 0x140215930 (UserKSTInitialize.c)
 * Callees:
 *     ??_GIOCPDispatcher@@QEAAPEAXI@Z @ 0x14020BAE8 (--_GIOCPDispatcher@@QEAAPEAXI@Z.c)
 */

__int64 __fastcall KSTIOCPDispatcher_Destroy(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rcx
  HANDLE *v3; // rcx

  result = W32GetUserSessionState(a1);
  if ( *(_QWORD *)(result + 19280) )
  {
    v3 = *(HANDLE **)(W32GetUserSessionState(v2) + 19280);
    if ( v3 )
      IOCPDispatcher::`scalar deleting destructor'(v3);
    result = W32GetUserSessionState(v3);
    *(_QWORD *)(result + 19280) = 0LL;
  }
  return result;
}
