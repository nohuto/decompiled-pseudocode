/*
 * XREFs of ?xxxPlaySoundAsynchronous@CUserPlaySound@@SAJK@Z @ 0x1400A4F9C
 * Callers:
 *     xxxPlayEventSound @ 0x1400A4F40 (xxxPlayEventSound.c)
 * Callees:
 *     ??1LeaveEnterCrit@@QEAA@XZ @ 0x140065000 (--1LeaveEnterCrit@@QEAA@XZ.c)
 *     ?PlaySync@CUserPlaySound@@AEAAJK@Z @ 0x1400A38B4 (-PlaySync@CUserPlaySound@@AEAAJK@Z.c)
 *     ??0LeaveEnterCrit@@QEAA@_N@Z @ 0x14026E498 (--0LeaveEnterCrit@@QEAA@_N@Z.c)
 */

__int64 __fastcall CUserPlaySound::xxxPlaySoundAsynchronous(__int64 a1, __int64 a2)
{
  RPC_BINDING_HANDLE *v2; // rbx
  char v4; // [rsp+38h] [rbp+10h] BYREF

  v2 = *(RPC_BINDING_HANDLE **)(W32GetUserSessionState(a1, a2) + 70800);
  LeaveEnterCrit::LeaveEnterCrit((LeaveEnterCrit *)&v4, 1);
  LODWORD(v2) = CUserPlaySound::PlaySync(v2);
  LeaveEnterCrit::~LeaveEnterCrit((LeaveEnterCrit *)&v4);
  return (unsigned int)v2;
}
