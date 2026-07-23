/*
 * XREFs of PoTraceSystemTimerResolution @ 0x1409A8F80
 * Callers:
 *     ExTraceTimerResolution @ 0x1404A3CD8 (ExTraceTimerResolution.c)
 *     NtSetTimerResolution @ 0x1409A8C70 (NtSetTimerResolution.c)
 * Callees:
 *     EtwEventEnabled @ 0x1402D1300 (EtwEventEnabled.c)
 *     EtwWrite @ 0x14040FFB0 (EtwWrite.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

char __fastcall PoTraceSystemTimerResolution(char a1, __int64 a2)
{
  int v4; // eax
  unsigned __int16 *v5; // rdx
  struct _KTHREAD *CurrentThread; // rcx
  _DWORD *Teb; // r8
  _KPROCESS *Process; // rcx
  int v9; // eax
  __int16 v10; // ax
  int v11; // ecx
  const EVENT_DESCRIPTOR *v12; // rdx
  int *v13; // rdx
  __int16 v15; // [rsp+30h] [rbp-98h] BYREF
  int v16; // [rsp+34h] [rbp-94h] BYREF
  int v17; // [rsp+38h] [rbp-90h] BYREF
  int v18; // [rsp+3Ch] [rbp-8Ch] BYREF
  int v19; // [rsp+40h] [rbp-88h] BYREF
  int v20; // [rsp+44h] [rbp-84h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-78h] BYREF
  int *v22; // [rsp+60h] [rbp-68h]
  __int64 v23; // [rsp+68h] [rbp-60h]
  __int16 *v24; // [rsp+70h] [rbp-58h]
  __int64 v25; // [rsp+78h] [rbp-50h]
  __int64 v26; // [rsp+80h] [rbp-48h]
  int v27; // [rsp+88h] [rbp-40h]
  int v28; // [rsp+8Ch] [rbp-3Ch]
  int *v29; // [rsp+90h] [rbp-38h]
  __int64 v30; // [rsp+98h] [rbp-30h]
  int *v31; // [rsp+A0h] [rbp-28h]
  __int64 v32; // [rsp+A8h] [rbp-20h]

  if ( a1 )
  {
    if ( EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_TIME_RESOLUTION_REQUEST_RUNDOWN)
      || (LOBYTE(v4) = EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_TIME_RESOLUTION_STACK_RUNDOWN), (_BYTE)v4) )
    {
      LOBYTE(v4) = 1;
    }
  }
  else
  {
    LOBYTE(v4) = EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_STRS);
  }
  if ( PopDiagHandleRegistered && (_BYTE)v4 )
  {
    v5 = *(unsigned __int16 **)(a2 + 848);
    v15 = *v5 >> 1;
    v18 = *(_DWORD *)(a2 + 1464);
    v16 = 0;
    if ( !a1 )
    {
      CurrentThread = KeGetCurrentThread();
      if ( (CurrentThread->MiscFlags & 0x400) == 0 && CurrentThread->ApcStateIndex != 1 )
      {
        Teb = CurrentThread->Teb;
        if ( Teb )
        {
          if ( KeGetCurrentThread()->ApcState.Process[1].ReadyTime
            && (Process = KeGetCurrentThread()->ApcState.Process, Process[1].ReadyTime)
            && ((v10 = WORD2(Process[3].PerProcessorCycleTimes), v10 == 332) || v10 == 452) )
          {
            v9 = Teb[3032];
          }
          else
          {
            v9 = Teb[1480];
          }
          v16 = v9;
        }
      }
    }
    v19 = *(_DWORD *)(a2 + 464);
    UserData.Ptr = (ULONGLONG)&v18;
    *(_QWORD *)&UserData.Size = 4LL;
    v22 = &v19;
    v23 = 4LL;
    v24 = &v15;
    v25 = 2LL;
    v11 = *v5;
    v26 = *((_QWORD *)v5 + 1);
    v27 = v11;
    v28 = 0;
    v4 = (*(_DWORD *)(a2 + 1532) >> 26) & 1;
    v17 = v4;
    if ( !a1 )
    {
      v29 = &v16;
      v31 = &v17;
      v32 = 4LL;
      v12 = &POP_ETW_EVENT_STRS;
LABEL_19:
      v30 = 4LL;
      LOBYTE(v4) = EtwWrite(PopDiagHandle, v12, 0LL, 6u, &UserData);
      return v4;
    }
    if ( (*(_DWORD *)(a2 + 500) & 0x1000) != 0 )
    {
      v29 = &v17;
      v30 = 4LL;
      LOBYTE(v4) = EtwWrite(PopDiagHandle, &POP_ETW_EVENT_TIME_RESOLUTION_REQUEST_RUNDOWN, 0LL, 5u, &UserData);
    }
    v13 = *(int **)(a2 + 1456);
    if ( v13 && *v13 )
    {
      v18 = *(_DWORD *)(a2 + 1468);
      v20 = *v13;
      v29 = &v20;
      v31 = v13 + 2;
      v32 = (unsigned int)(8 * v20);
      v12 = &POP_ETW_EVENT_TIME_RESOLUTION_STACK_RUNDOWN;
      goto LABEL_19;
    }
  }
  return v4;
}
