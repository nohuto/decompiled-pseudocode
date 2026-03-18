/*
 * XREFs of ?UnqueuePowerRequest@@YAPEAUtagPOWERREQUEST@@XZ @ 0x1400E9AF0
 * Callers:
 *     xxxUserPowerCalloutWorker @ 0x1400E96D0 (xxxUserPowerCalloutWorker.c)
 *     CleanupPowerRequestList @ 0x140151360 (CleanupPowerRequestList.c)
 * Callees:
 *     McTemplateK0pq_EtwWriteTransfer @ 0x1400E0654 (McTemplateK0pq_EtwWriteTransfer.c)
 *     EnterPowerCrit @ 0x1400E9B80 (EnterPowerCrit.c)
 *     LeavePowerCrit @ 0x1400E9BB0 (LeavePowerCrit.c)
 */

struct tagPOWERREQUEST *UnqueuePowerRequest(void)
{
  _QWORD *v0; // rbx
  __int64 v1; // rcx
  __int64 UserSessionState; // rax
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v5; // r8
  __int64 v6; // rcx
  __int64 *v7; // rax
  int v9; // [rsp+20h] [rbp-18h]

  v0 = 0LL;
  EnterPowerCrit();
  UserSessionState = W32GetUserSessionState(v1);
  if ( *(_QWORD *)(UserSessionState + 496) != UserSessionState + 496 )
  {
    v4 = W32GetUserSessionState(v3);
    v6 = v4 + 496;
    v0 = *(_QWORD **)(v4 + 504);
    if ( *v0 != v4 + 496 || (v7 = (__int64 *)v0[1], (_QWORD *)*v7 != v0) )
      __fastfail(3u);
    *(_QWORD *)(v6 + 8) = v7;
    *v7 = v6;
    if ( (Microsoft_Windows_Win32kEnableBits & 8) != 0 )
    {
      v9 = -1;
      McTemplateK0pq_EtwWriteTransfer(v6, &RemovePowerRequestFromQueue, v5, v0, v9);
    }
  }
  LeavePowerCrit();
  return (struct tagPOWERREQUEST *)v0;
}
