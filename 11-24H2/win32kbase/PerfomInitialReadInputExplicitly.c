/*
 * XREFs of PerfomInitialReadInputExplicitly @ 0x14019DF5C
 * Callers:
 *     UserKSTInitialize @ 0x140215930 (UserKSTInitialize.c)
 * Callees:
 *     ?Read@CBaseInput@@QEAAJXZ @ 0x140145BE0 (-Read@CBaseInput@@QEAAJXZ.c)
 */

__int64 __fastcall PerfomInitialReadInputExplicitly(__int64 a1)
{
  __int64 v1; // rbx
  __int64 UserSessionState; // rax

  v1 = (int)a1;
  UserSessionState = W32GetUserSessionState(a1);
  return CBaseInput::Read(*(CBaseInput **)(UserSessionState + 48 * v1 + 3144));
}
