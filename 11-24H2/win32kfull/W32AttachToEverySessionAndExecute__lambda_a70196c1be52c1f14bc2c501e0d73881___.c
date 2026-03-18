/*
 * XREFs of W32AttachToEverySessionAndExecute__lambda_a70196c1be52c1f14bc2c501e0d73881___ @ 0x14028B120
 * Callers:
 *     ?InputCoreProviderCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x140227810 (-InputCoreProviderCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z.c)
 * Callees:
 *     W32GetCurrentWin32kSessionId @ 0x1400A428C (W32GetCurrentWin32kSessionId.c)
 *     _lambda_18de47f5008d7628aefe0bcb3f8d210a_::operator() @ 0x14028B288 (_lambda_18de47f5008d7628aefe0bcb3f8d210a_--operator().c)
 */

__int64 W32AttachToEverySessionAndExecute__lambda_a70196c1be52c1f14bc2c501e0d73881_()
{
  __int64 CurrentWin32kSessionId; // rsi
  __int64 v1; // rcx
  unsigned int v2; // edi
  unsigned int v3; // ebx
  __int64 v4; // rcx
  unsigned int MaxSessionCount; // ebp

  CurrentWin32kSessionId = (unsigned int)W32GetCurrentWin32kSessionId();
  v2 = lambda_18de47f5008d7628aefe0bcb3f8d210a_::operator()(v1, 0LL, CurrentWin32kSessionId);
  v3 = 1;
  MaxSessionCount = W32GetMaxSessionCount();
  if ( MaxSessionCount > 1 )
  {
    do
      lambda_18de47f5008d7628aefe0bcb3f8d210a_::operator()(v4, v3++, (unsigned int)CurrentWin32kSessionId);
    while ( v3 < MaxSessionCount );
  }
  return v2;
}
