/*
 * XREFs of EditionKeyboardInputDelegationChanged @ 0x140277950
 * Callers:
 *     <none>
 * Callees:
 *     ?xxxApplyGlobalInputSettings@@YAXH@Z @ 0x140238488 (-xxxApplyGlobalInputSettings@@YAXH@Z.c)
 *     zzzInputFocusReceivedWindowEvent @ 0x14023D6F8 (zzzInputFocusReceivedWindowEvent.c)
 *     zzzDelegateInputFocusLostWindowEvent @ 0x1402879CC (zzzDelegateInputFocusLostWindowEvent.c)
 *     zzzDelegateInputFocusReceivedWindowEvent @ 0x140287A08 (zzzDelegateInputFocusReceivedWindowEvent.c)
 */

__int64 __fastcall EditionKeyboardInputDelegationChanged(__int64 a1, int a2)
{
  __int64 KeyboardDelegationTargetQ; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  char DelegationFlags; // al
  __int64 result; // rax
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rdx

  if ( a2 )
  {
    KeyboardDelegationTargetQ = GetKeyboardDelegationTargetQ();
    if ( KeyboardDelegationTargetQ
      && *(_QWORD *)(KeyboardDelegationTargetQ + 120)
      && (*(_DWORD *)(W32GetUserSessionState(v4, v3) + 67064) & 0x80u) == 0 )
    {
      xxxApplyGlobalInputSettings();
    }
    DelegationFlags = GetDelegationFlags();
    return zzzDelegateInputFocusReceivedWindowEvent((DelegationFlags & 4 | 0x30u) >> 2);
  }
  else
  {
    v7 = PtiFromThreadId(a1);
    if ( v7 )
    {
      v10 = *(_QWORD *)(v7 + 472);
      if ( v10 )
      {
        v9 = *(_QWORD *)(v10 + 120);
        if ( v9 )
          zzzDelegateInputFocusLostWindowEvent(v9, 14LL);
      }
    }
    result = W32GetUserSessionState(v9, v8);
    if ( *(_QWORD *)(result + 18944) )
    {
      result = W32GetUserSessionState(v12, v11);
      v14 = *(_QWORD *)(result + 18944);
      if ( *(_QWORD *)(v14 + 120) )
      {
        v15 = *(unsigned int *)(W32GetUserSessionState(v13, v14) + 67064);
        if ( (v15 & 0x80u) == 0LL )
          xxxApplyGlobalInputSettings();
        return zzzInputFocusReceivedWindowEvent(14LL, v15);
      }
    }
  }
  return result;
}
