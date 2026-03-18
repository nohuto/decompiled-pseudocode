/*
 * XREFs of ?InitializeKeyboardGlobals@@YAJXZ @ 0x14023E218
 * Callers:
 *     ?InitializeInputGlobals@@YAJXZ @ 0x14023D618 (-InitializeInputGlobals@@YAJXZ.c)
 * Callees:
 *     ApiSetEditionGetExecutionEvironment @ 0x140221CC0 (ApiSetEditionGetExecutionEvironment.c)
 */

__int64 __fastcall InitializeKeyboardGlobals(__int64 a1)
{
  __int64 UserSessionState; // rax
  __int64 v2; // rbx
  int ExecutionEvironment; // eax
  __int128 v5; // [rsp+20h] [rbp-20h]

  UserSessionState = W32GetUserSessionState(a1);
  *(_QWORD *)&v5 = 0x3000C00010004LL;
  *((_QWORD *)&v5 + 1) = 104LL;
  v2 = UserSessionState + 12832;
  *(_OWORD *)(UserSessionState + 12832) = v5;
  *(_QWORD *)(UserSessionState + 12848) = 0xFA00020000LL;
  *(_DWORD *)(UserSessionState + 12856) = 65536030;
  *(_QWORD *)(UserSessionState + 13976) = &unk_140259578;
  *(_DWORD *)(UserSessionState + 14284) = -1;
  *(_DWORD *)(UserSessionState + 14288) = -1;
  *(_DWORD *)(UserSessionState + 12876) = 15;
  *(_DWORD *)(UserSessionState + 12916) = -1;
  *(_DWORD *)(UserSessionState + 13984) = 9502864;
  *(_DWORD *)(UserSessionState + 14036) = 1;
  *(_QWORD *)(UserSessionState + 14296) = -1LL;
  *(_WORD *)(UserSessionState + 14333) = 4359;
  ExecutionEvironment = ApiSetEditionGetExecutionEvironment(-1LL, 1LL);
  *(_BYTE *)(v2 + 1227) = 0;
  *(_BYTE *)(v2 + 1672) = ExecutionEvironment == 2;
  return 0LL;
}
