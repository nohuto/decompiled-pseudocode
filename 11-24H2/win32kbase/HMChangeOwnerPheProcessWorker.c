/*
 * XREFs of HMChangeOwnerPheProcessWorker @ 0x14006233C
 * Callers:
 *     ?DestroyProcessesObjects@@YAXPEAUtagPROCESSINFO@@@Z @ 0x140061204 (-DestroyProcessesObjects@@YAXPEAUtagPROCESSINFO@@@Z.c)
 *     HMChangeOwnerProcessWorker @ 0x1400629E0 (HMChangeOwnerProcessWorker.c)
 *     HMChangeOwnerPheProcess @ 0x1401B6120 (HMChangeOwnerPheProcess.c)
 * Callees:
 *     EtwTraceUserUpdateHandleOwner @ 0x1400624B0 (EtwTraceUserUpdateHandleOwner.c)
 *     ?GetEtwUserHandleType@@YA?AW4EtwUserHandleType@@E@Z @ 0x140062510 (-GetEtwUserHandleType@@YA-AW4EtwUserHandleType@@E@Z.c)
 *     GreIncQuotaCount @ 0x140062A60 (GreIncQuotaCount.c)
 *     GreDecQuotaCount @ 0x140062B60 (GreDecQuotaCount.c)
 */

__int64 __fastcall HMChangeOwnerPheProcessWorker(__int64 a1, __int64 a2)
{
  __int64 UserSessionState; // rax
  __int64 v5; // r15
  __int64 v6; // r8
  __int64 v7; // r14
  __int64 v8; // rsi
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rbx
  HANDLE ProcessId; // rax
  __int64 v13; // rcx
  unsigned int EtwUserHandleType; // eax
  __int64 result; // rax

  UserSessionState = W32GetUserSessionState(a1);
  v5 = *(_QWORD *)(UserSessionState + 19888);
  v6 = (a1 - *(_QWORD *)(UserSessionState + 19944)) >> 5;
  v7 = 5LL * (unsigned int)v6;
  v8 = *(_QWORD *)(v5 + 40LL * (unsigned int)v6 + 8);
  v10 = W32GetUserSessionState(v9);
  v11 = *(_QWORD *)(*(_QWORD *)(v10 + 19888) + 40LL * (unsigned int)((a1 - *(_QWORD *)(v10 + 19944)) >> 5));
  --*(_DWORD *)(v8 + 68);
  if ( *(_BYTE *)(a1 + 24) == 3 && (*(_DWORD *)(v11 + 80) & 8) == 0 && v8 != *(_QWORD *)(a2 + 464) )
  {
    if ( *(_QWORD *)(v11 + 88) )
    {
      GreDecQuotaCount(v8);
      GreIncQuotaCount(*(struct _W32PROCESS **)(a2 + 464));
    }
    if ( *(_QWORD *)(v11 + 96) )
    {
      GreDecQuotaCount(v8);
      GreIncQuotaCount(*(struct _W32PROCESS **)(a2 + 464));
    }
    if ( *(_QWORD *)(v11 + 128) )
    {
      GreDecQuotaCount(v8);
      GreIncQuotaCount(*(struct _W32PROCESS **)(a2 + 464));
    }
  }
  *(_QWORD *)(v11 + 16) = 0LL;
  if ( (*((_BYTE *)&unk_1402437BC + 24 * *(unsigned __int8 *)(a1 + 24)) & 4) != 0 )
    *(_QWORD *)(v11 + 24) = *(_QWORD *)(a2 + 464);
  *(_QWORD *)(v5 + 8 * v7 + 8) = *(_QWORD *)(a2 + 464);
  ProcessId = PsGetProcessId(**(PEPROCESS **)(a2 + 464));
  LOBYTE(v13) = *(_BYTE *)(a1 + 24);
  *(_QWORD *)(a1 + 8) = ProcessId;
  EtwUserHandleType = GetEtwUserHandleType(v13);
  EtwTraceUserUpdateHandleOwner(**(_QWORD **)(v5 + 8 * v7), EtwUserHandleType);
  result = *(_QWORD *)(v5 + 8 * v7 + 8);
  ++*(_DWORD *)(result + 68);
  return result;
}
