/*
 * XREFs of WaitForRitToCompleteLastCommand @ 0x1401E1228
 * Callers:
 *     WaitForRitDisEngagement @ 0x1401E0FC0 (WaitForRitDisEngagement.c)
 *     EditionDeactivateMitInput @ 0x14023FCE0 (EditionDeactivateMitInput.c)
 * Callees:
 *     ??1LeaveEnterCrit@@QEAA@XZ @ 0x140065000 (--1LeaveEnterCrit@@QEAA@XZ.c)
 *     ??0LeaveEnterCrit@@QEAA@_N@Z @ 0x14026E498 (--0LeaveEnterCrit@@QEAA@_N@Z.c)
 */

void WaitForRitToCompleteLastCommand()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 UserSessionState; // rax
  char v3; // [rsp+40h] [rbp+8h] BYREF

  LeaveEnterCrit::LeaveEnterCrit((LeaveEnterCrit *)&v3, 1);
  do
    UserSessionState = W32GetUserSessionState(v1, v0);
  while ( (unsigned int)ObWaitForSingleObject(*(_QWORD *)(UserSessionState + 18752), 0LL, 0LL, 0LL, 0LL) == 257
       && !PsIsThreadTerminating(KeGetCurrentThread()) );
  LeaveEnterCrit::~LeaveEnterCrit((LeaveEnterCrit *)&v3);
}
