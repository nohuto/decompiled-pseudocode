/*
 * XREFs of HandleInputThreadActivated @ 0x14015A2D4
 * Callers:
 *     UserActivateMITInputProcessing @ 0x14018A3B0 (UserActivateMITInputProcessing.c)
 * Callees:
 *     ?HandleInputThreadStateChange@CBaseInput@@QEAAXW4InputThreadState@@@Z @ 0x14020C73C (-HandleInputThreadStateChange@CBaseInput@@QEAAXW4InputThreadState@@@Z.c)
 */

__int64 __fastcall HandleInputThreadActivated(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rbx
  __int64 v3; // rdi

  result = W32GetUserSessionState(a1);
  v2 = result + 3120;
  v3 = result + 3264;
  while ( v2 != v3 )
  {
    result = CBaseInput::HandleInputThreadStateChange(*(_QWORD *)(v2 + 24), 0LL);
    v2 += 48LL;
  }
  return result;
}
