/*
 * XREFs of xxxUserPowerCalloutWorker @ 0x1400E96D0
 * Callers:
 *     <none>
 * Callees:
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140099660 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?UnqueuePowerRequest@@YAPEAUtagPOWERREQUEST@@XZ @ 0x1400E9AF0 (-UnqueuePowerRequest@@YAPEAUtagPOWERREQUEST@@XZ.c)
 *     ?NotifyPoRequestCompleted@@YAXPEAUtagPOWERREQUEST@@@Z @ 0x1400E9BE0 (-NotifyPoRequestCompleted@@YAXPEAUtagPOWERREQUEST@@@Z.c)
 *     EtwTraceCompletePowerRequest @ 0x1400E9C54 (EtwTraceCompletePowerRequest.c)
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1400E9C80 (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 *     IsxxxSetInformationThreadSupported @ 0x1400EA91C (IsxxxSetInformationThreadSupported.c)
 *     ?UserPopPowerStateTransitionRecord@@YAHXZ @ 0x1400EAB30 (-UserPopPowerStateTransitionRecord@@YAHXZ.c)
 *     ?UserPushPowerStateTransitionRecord@@YAHPEAX@Z @ 0x1400EAB90 (-UserPushPowerStateTransitionRecord@@YAHPEAX@Z.c)
 *     ?xxxUserPowerStateCalloutWorker@@YAJXZ @ 0x1400EAC08 (-xxxUserPowerStateCalloutWorker@@YAJXZ.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall xxxUserPowerCalloutWorker(__int64 a1)
{
  int v1; // r15d
  __int64 UserSessionState; // r14
  __int64 v3; // rsi
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx
  int (__fastcall *v7)(__int64, __int64, __int128 *, __int64); // rax
  struct tagPOWERREQUEST *v8; // rax
  __int64 v9; // rcx
  struct tagPOWERREQUEST *v10; // rbx
  int v11; // ebp
  struct tagTHREADINFO *v12; // rax
  struct _WIN32_POWEREVENT_PARAMETERS *v13; // rcx
  int v14; // eax
  __int64 v15; // rcx
  struct tagTHREADINFO *v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  void (__fastcall *v19)(__int64, __int64, __int128 *); // rax
  _QWORD v21[3]; // [rsp+30h] [rbp-48h] BYREF
  __int128 v22; // [rsp+48h] [rbp-30h] BYREF
  __int64 v23; // [rsp+58h] [rbp-20h]

  v22 = 0LL;
  v23 = 0LL;
  v1 = 0;
  UserSessionState = W32GetUserSessionState(a1);
  v3 = 1LL;
  if ( *(_QWORD *)(W32GetUserSessionState(v4) + 19200) )
  {
    if ( (int)IsxxxSetInformationThreadSupported() < 0
      || (v7 = *(int (__fastcall **)(__int64, __int64, __int128 *, __int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(
                                                                                           v6,
                                                                                           v5)
                                                                                       + 48)
                                                                           + 2448LL)) != 0LL
      && v7(-2LL, 7LL, &v22, 24LL) < 0 )
    {
      v3 = 0LL;
    }
    else
    {
      v1 = 1;
    }
  }
  *(_QWORD *)(UserSessionState + 536) = KeGetCurrentThread();
  while ( 1 )
  {
    v8 = UnqueuePowerRequest();
    v10 = v8;
    if ( !v8 )
      break;
    v11 = 0;
    if ( v3 )
    {
      if ( *((_BYTE *)v8 + 44) && !*((_QWORD *)v8 + 10) )
        v11 = UserPushPowerStateTransitionRecord((void *)*(unsigned int *)(UserSessionState + 3040));
      v12 = PtiCurrent(v9);
      v21[0] = *((_QWORD *)v12 + 48);
      *((_QWORD *)v12 + 48) = v21;
      *(_QWORD *)(UserSessionState + 488) = v10;
      v13 = (struct _WIN32_POWEREVENT_PARAMETERS *)*((_QWORD *)v10 + 10);
      v21[1] = v10;
      v21[2] = CancelPowerRequest;
      if ( v13 )
        v14 = xxxUserPowerEventCalloutWorker(v13);
      else
        v14 = xxxUserPowerStateCalloutWorker();
      *((_DWORD *)v10 + 10) = v14;
      *(_QWORD *)(UserSessionState + 488) = 0LL;
      v16 = PtiCurrent(v15);
      *((_QWORD *)v16 + 48) = v21[0];
    }
    NotifyPoRequestCompleted(v10);
    if ( *((_BYTE *)v10 + 44) )
    {
      if ( v11 )
        UserPopPowerStateTransitionRecord();
      KeSetEvent((PRKEVENT)((char *)v10 + 16), 1, 0);
    }
    else
    {
      EtwTraceCompletePowerRequest(v10, *((unsigned int *)v10 + 10));
      GreDeleteFastMutex((char *)v10);
    }
  }
  if ( v1 )
  {
    if ( (int)IsxxxSetInformationThreadSupported() >= 0 )
    {
      v19 = *(void (__fastcall **)(__int64, __int64, __int128 *))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v18, v17) + 48)
                                                                + 2448LL);
      if ( v19 )
        v19(-2LL, 9LL, &v22);
    }
  }
  return 1LL;
}
