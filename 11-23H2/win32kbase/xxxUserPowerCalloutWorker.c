/*
 * XREFs of xxxUserPowerCalloutWorker @ 0x1C009E490
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C008C460 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ?UnqueuePowerRequest@@YAPEAUtagPOWERREQUEST@@XZ @ 0x1C009E720 (-UnqueuePowerRequest@@YAPEAUtagPOWERREQUEST@@XZ.c)
 *     IsxxxSetInformationThreadSupported @ 0x1C009E7CC (IsxxxSetInformationThreadSupported.c)
 *     ?xxxUserPowerStateCalloutWorker@@YAJXZ @ 0x1C009E7F8 (-xxxUserPowerStateCalloutWorker@@YAJXZ.c)
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1C009F448 (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 *     EtwTraceCompletePowerRequest @ 0x1C009FFE0 (EtwTraceCompletePowerRequest.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall xxxUserPowerCalloutWorker(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // esi
  __int64 v5; // rdi
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx
  struct tagPOWERREQUEST *v9; // rbx
  __int64 v10; // r8
  __int64 v11; // r9
  int v12; // r14d
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  struct _WIN32_POWEREVENT_PARAMETERS *v17; // rcx
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  _DWORD InputBuffer[4]; // [rsp+38h] [rbp-39h] BYREF
  __int64 CurrentProcess; // [rsp+48h] [rbp-29h]
  struct _KTHREAD *v26; // [rsp+50h] [rbp-21h]
  __int64 v27; // [rsp+58h] [rbp-19h]
  __int128 v28; // [rsp+60h] [rbp-11h] BYREF
  __int64 v29; // [rsp+70h] [rbp-1h]
  __int128 v30; // [rsp+78h] [rbp+7h] BYREF
  __int64 v31; // [rsp+88h] [rbp+17h]
  _OWORD v32[2]; // [rsp+90h] [rbp+1Fh] BYREF
  __int64 v33; // [rsp+B0h] [rbp+3Fh]

  v4 = 0;
  v30 = 0LL;
  v31 = 0LL;
  v5 = 1LL;
  if ( grpdeskRitInput )
  {
    if ( (int)IsxxxSetInformationThreadSupported() < 0
      || qword_1C0295A18 && (int)qword_1C0295A18(-2LL, 7LL, &v30, 24LL) < 0 )
    {
      v5 = 0LL;
    }
    else
    {
      v4 = 1;
    }
  }
  CurrentThread = KeGetCurrentThread();
  *(_QWORD *)(SGDGetUserSessionState(a1, a2, a3, a4) + 720) = CurrentThread;
  while ( 1 )
  {
    v9 = UnqueuePowerRequest();
    if ( !v9 )
      break;
    v12 = 0;
    if ( v5 )
    {
      v28 = 0LL;
      v29 = 0LL;
      if ( *((_BYTE *)v9 + 44) && !*((_QWORD *)v9 + 8) )
      {
        v13 = SGDGetUserSessionState(v8, v7, v10, v11);
        InputBuffer[1] = 0;
        InputBuffer[3] = 0;
        InputBuffer[2] = 0;
        v27 = *(unsigned int *)(v13 + 3224);
        InputBuffer[0] = 88;
        v26 = KeGetCurrentThread();
        CurrentProcess = PsGetCurrentProcess(v15, v14, v16);
        LOBYTE(v12) = ZwPowerInformation(SystemPowerStateLogging|0x40, InputBuffer, 0x28u, 0LL, 0) >= 0;
      }
      if ( qword_1C0295450 )
        qword_1C0295450(v9, &v28, CancelPowerRequest);
      *(_QWORD *)(SGDGetUserSessionState(v8, v7, v10, v11) + 672) = v9;
      v17 = (struct _WIN32_POWEREVENT_PARAMETERS *)*((_QWORD *)v9 + 8);
      if ( v17 )
        v18 = xxxUserPowerEventCalloutWorker(v17);
      else
        v18 = xxxUserPowerStateCalloutWorker();
      *((_DWORD *)v9 + 10) = v18;
      *(_QWORD *)(SGDGetUserSessionState(v20, v19, v21, v22) + 672) = 0LL;
      if ( qword_1C0295460 )
        qword_1C0295460(&v28);
    }
    if ( *((_BYTE *)v9 + 44) )
    {
      if ( v12 )
      {
        memset(v32, 0, sizeof(v32));
        v33 = 0LL;
        DWORD2(v32[0]) = 1;
        LODWORD(v32[0]) = 88;
        ZwPowerInformation(SystemPowerStateLogging|0x40, v32, 0x28u, 0LL, 0);
      }
      KeSetEvent((PRKEVENT)((char *)v9 + 16), 1, 0);
    }
    else
    {
      EtwTraceCompletePowerRequest(v9, *((unsigned int *)v9 + 10));
      NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (char *)v9);
    }
  }
  if ( v4 && (int)IsxxxSetInformationThreadSupported() >= 0 && qword_1C0295A18 )
    qword_1C0295A18(-2LL, 9LL, &v30, 24LL);
  return 1LL;
}
