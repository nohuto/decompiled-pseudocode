/*
 * XREFs of NtMITSetKeyboardOverriderState @ 0x1401B8C00
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x140042EA4 (UserSetLastError.c)
 *     IsInputThread @ 0x1400BB380 (IsInputThread.c)
 *     _anonymous_namespace_::GetKeyboardProcessor @ 0x140108298 (_anonymous_namespace_--GetKeyboardProcessor.c)
 */

__int64 __fastcall NtMITSetKeyboardOverriderState(__int64 a1)
{
  int v1; // edi
  __int64 v2; // rcx
  __int64 v3; // rbx
  __int64 KeyboardProcessor; // rax

  v1 = a1;
  v3 = 0LL;
  if ( IsInputThread(a1) )
  {
    KeyboardProcessor = anonymous_namespace_::GetKeyboardProcessor(v2);
    if ( KeyboardProcessor )
    {
      LOBYTE(v3) = v1 != 0;
      _InterlockedExchange((volatile __int32 *)(KeyboardProcessor + 24), v3);
    }
    return 1LL;
  }
  else
  {
    UserSetLastError(5);
  }
  return v3;
}
