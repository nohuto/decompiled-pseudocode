/*
 * XREFs of ImpWorkerRoutine @ 0x140011DF0
 * Callers:
 *     <none>
 * Callees:
 *     ImpAcquireLock @ 0x140012564 (ImpAcquireLock.c)
 *     ImpReleaseLock @ 0x1400125B8 (ImpReleaseLock.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x140012644 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     ImpProcessSequence @ 0x140012674 (ImpProcessSequence.c)
 *     _tlgKeywordOn @ 0x140096080 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1400B0708 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ImpRpcQueryEnabledStateAsync @ 0x140147804 (ImpRpcQueryEnabledStateAsync.c)
 *     ImpSetActualBasePriority @ 0x140157C14 (ImpSetActualBasePriority.c)
 *     ImpRpcAsyncResponseHandler @ 0x14023D4A0 (ImpRpcAsyncResponseHandler.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 */

void __fastcall ImpWorkerRoutine(PVOID StartContext)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 InputMonitorSessionState; // r14
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  NTSTATUS v12; // ebx
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // r8
  __int16 v16; // si
  unsigned __int16 i; // di
  unsigned __int16 *v18; // rbx
  __int16 v19; // r12
  __int64 v20; // rax
  PVOID *v21; // rcx
  __int64 v22; // rdx
  __int16 v23; // r15
  NTSTATUS v24; // r8d
  NTSTATUS v25; // r8d
  int v26; // esi
  __int64 v27; // rdx
  __int64 v28; // r8
  __int16 v29; // [rsp+48h] [rbp-C0h]
  NTSTATUS v30; // [rsp+4Ch] [rbp-BCh] BYREF
  __int64 v31; // [rsp+50h] [rbp-B8h]
  __int64 v32; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v33; // [rsp+60h] [rbp-A8h] BYREF
  PVOID *P; // [rsp+68h] [rbp-A0h]
  PVOID P_8[2]; // [rsp+70h] [rbp-98h] BYREF
  __int64 v36; // [rsp+80h] [rbp-88h]
  __int64 v37; // [rsp+88h] [rbp-80h]
  PVOID Object[2]; // [rsp+90h] [rbp-78h] BYREF
  __int64 ThreadInformation; // [rsp+A0h] [rbp-68h] BYREF
  int v40; // [rsp+A8h] [rbp-60h]
  __int128 v41; // [rsp+B0h] [rbp-58h] BYREF
  _BYTE v42[32]; // [rsp+C8h] [rbp-40h] BYREF
  NTSTATUS *v43; // [rsp+E8h] [rbp-20h]
  __int64 v44; // [rsp+F0h] [rbp-18h]
  __int64 *v45; // [rsp+F8h] [rbp-10h]
  __int64 v46; // [rsp+100h] [rbp-8h]

  v37 = 0LL;
  P = 0LL;
  v29 = 0;
  LODWORD(v31) = 0;
  v36 = 0LL;
  *(_OWORD *)P_8 = 0LL;
  v33 = 0LL;
  *(_OWORD *)Object = 0LL;
  ThreadInformation = 0LL;
  v41 = 0LL;
  v40 = 0;
  KeWaitForSingleObject(StartContext, Executive, 0, 0, 0LL);
  ExFreePoolWithTag(StartContext, 0);
  InputMonitorSessionState = W32GetInputMonitorSessionState();
  if ( !InputMonitorSessionState )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v3, v2, v4);
  ImpAcquireLock(InputMonitorSessionState + 72);
  if ( *(_BYTE *)(InputMonitorSessionState + 48) )
  {
    ImpReleaseLock(InputMonitorSessionState + 72);
    Object[0] = *(PVOID *)(InputMonitorSessionState + 24);
    Object[1] = *(PVOID *)(InputMonitorSessionState + 520);
    if ( (int)ImpSetActualBasePriority(KeGetCurrentThread()) < 0
      && (unsigned int)dword_14029B1B0 > 2
      && (unsigned __int8)tlgKeywordOn(&dword_14029B1B0, 0x400000000000LL) )
    {
      v30 = v24;
      v43 = &v30;
      v44 = 4LL;
      v45 = &v32;
      v32 = 0x1000000LL;
      v46 = 8LL;
      tlgWriteTransfer_EtwWriteTransfer(&dword_14029B1B0, &unk_14028150A, 0LL, 0LL, 4, v42);
    }
    ThreadInformation = 0x100000001LL;
    v40 = 1;
    if ( ZwSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadHideFromDebugger|0x20, &ThreadInformation, 0xCu) < 0
      && (unsigned int)dword_14029B1B0 > 2
      && (unsigned __int8)tlgKeywordOn(&dword_14029B1B0, 0x400000000000LL) )
    {
      v30 = v25;
      v43 = &v30;
      v44 = 4LL;
      v45 = &v32;
      v32 = 0x1000000LL;
      v46 = 8LL;
      tlgWriteTransfer_EtwWriteTransfer(&dword_14029B1B0, &unk_14028160C, 0LL, 0LL, 4, v42);
    }
    if ( ZwQueryInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadAmILastThread|0x20, &v41, 0x10u, 0LL) >= 0 )
      v33 = v41;
    else
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v7, v6, v8);
    if ( (int)ImpRpcQueryEnabledStateAsync() < 0 )
LABEL_9:
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v10, v9, v11);
LABEL_12:
    while ( 2 )
    {
      v12 = KeWaitForMultipleObjects(2u, Object, WaitAny, Executive, 0, 0, 0LL, 0LL);
      if ( v12 < 0
        && (unsigned int)dword_14029B1B0 > 2
        && (unsigned __int8)tlgKeywordOn(&dword_14029B1B0, 0x400000000000LL) )
      {
        v30 = v12;
        v43 = &v30;
        v44 = 4LL;
        v45 = &v32;
        v32 = 0x1000000LL;
        v46 = 8LL;
        tlgWriteTransfer_EtwWriteTransfer(&dword_14029B1B0, &unk_1402815D0, 0LL, 0LL, 4, v42);
      }
      ImpAcquireLock(InputMonitorSessionState + 72);
      if ( *(_BYTE *)(InputMonitorSessionState + 48) )
      {
        if ( v12 )
        {
          ImpReleaseLock(InputMonitorSessionState + 72);
          if ( v12 != 1 || (int)ImpRpcAsyncResponseHandler() >= 0 )
            continue;
          goto LABEL_9;
        }
        v13 = InputMonitorSessionState + 56;
        if ( *(_QWORD *)(InputMonitorSessionState + 56) == InputMonitorSessionState + 56 )
        {
          P_8[1] = P_8;
          P_8[0] = P_8;
        }
        else
        {
          *(_OWORD *)P_8 = *(_OWORD *)(InputMonitorSessionState + 56);
          *(_QWORD *)(*(_QWORD *)v13 + 8LL) = P_8;
          **(_QWORD **)(InputMonitorSessionState + 64) = P_8;
          *(_QWORD *)(InputMonitorSessionState + 64) = InputMonitorSessionState + 56;
          *(_QWORD *)v13 = v13;
        }
        ImpReleaseLock(InputMonitorSessionState + 72);
        v16 = 0;
        for ( i = 0; ; i += v23 )
        {
          v18 = (unsigned __int16 *)P_8[0];
          v19 = v16;
          if ( P_8[0] == P_8 )
          {
            if ( i )
              ImpProcessSequence(v37, (_DWORD)P, InputMonitorSessionState + 88, i, v29, v31, v36, (__int64)&v33);
            goto LABEL_12;
          }
          if ( *((PVOID **)P_8[0] + 1) != P_8
            || (v20 = *(_QWORD *)P_8[0], *(PVOID *)(*(_QWORD *)P_8[0] + 8LL) != P_8[0]) )
          {
            __fastfail(3u);
          }
          P_8[0] = *(PVOID *)P_8[0];
          v21 = P_8;
          *(_QWORD *)(v20 + 8) = P_8;
          if ( !i )
            goto LABEL_22;
          if ( !v16 )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(P_8, v14, v15);
          v26 = v37;
          if ( v37 != *((_QWORD *)v18 + 2) || (v21 = P, P != *((PVOID **)v18 + 4)) )
          {
            if ( i >= 0xBFu )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v21, v14, v15);
            ImpProcessSequence(v26, (_DWORD)P, InputMonitorSessionState + 88, i, v29, v31, v36, (__int64)&v33);
            v16 = 0;
            i = 0;
            goto LABEL_22;
          }
          v27 = (unsigned int)v31;
          if ( (_DWORD)v31 != *((_DWORD *)v18 + 11) )
          {
            MicrosoftTelemetryAssertTriggeredNoArgsKM(P, (unsigned int)v31, v15);
            v21 = P;
            v27 = (unsigned int)v31;
          }
          v28 = 2LL;
          if ( (v18[20] & 2) != 0 )
            break;
          v16 = v19;
          if ( v19 == 96 )
          {
            if ( (unsigned int)dword_14029B1B0 > 2 && (unsigned __int8)tlgKeywordOn(&dword_14029B1B0, 0x400000000000LL) )
            {
              v30 = *(_DWORD *)InputMonitorSessionState;
              v44 = 4LL;
              v43 = &v30;
              v32 = 0x1000000LL;
              v45 = &v32;
              v46 = 8LL;
              tlgWriteTransfer_EtwWriteTransfer(&dword_14029B1B0, &unk_140281642, 0LL, 0LL, 4, v42);
            }
            if ( i != 191 )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v21, v27, v28);
            ImpProcessSequence(v37, (_DWORD)P, InputMonitorSessionState + 88, i, v29, v31, v36, (__int64)&v33);
            v16 = 0;
            i = 0;
            goto LABEL_22;
          }
LABEL_23:
          v22 = v18[12];
          if ( (unsigned __int16)(v22 + 10240) > 0x3FFu )
          {
            if ( v18[13] )
LABEL_63:
              MicrosoftTelemetryAssertTriggeredNoArgsKM(1023LL, v22, 2LL);
            *(_WORD *)(InputMonitorSessionState + 2LL * i + 88) = v18[12];
            v23 = 1;
            goto LABEL_26;
          }
          if ( (unsigned __int16)(v18[13] + 9216) > 0x3FFu )
            goto LABEL_63;
          v23 = 2;
          *(_WORD *)(InputMonitorSessionState + 2LL * i + 88) = v22;
          *(_WORD *)(InputMonitorSessionState + 2LL * i + 90) = v18[13];
LABEL_26:
          ++v16;
          ExFreePoolWithTag(v18, 0);
        }
        ImpProcessSequence(v26, (_DWORD)v21, InputMonitorSessionState + 88, i, v29, v27, v36, (__int64)&v33);
        v16 = 0;
        i = 0;
LABEL_22:
        v37 = *((_QWORD *)v18 + 2);
        P = (PVOID *)*((_QWORD *)v18 + 4);
        v29 = v18[20];
        LODWORD(v31) = *((_DWORD *)v18 + 11);
        v36 = *((_QWORD *)v18 + 6);
        goto LABEL_23;
      }
      break;
    }
  }
  ImpReleaseLock(InputMonitorSessionState + 72);
}
