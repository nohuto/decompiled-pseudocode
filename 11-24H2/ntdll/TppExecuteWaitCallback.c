/*
 * XREFs of TppExecuteWaitCallback @ 0x18004BE80
 * Callers:
 *     TppWaitCompletion @ 0x18004C800 (TppWaitCompletion.c)
 *     TppExecuteWaitTimerCallback @ 0x1800F5B20 (TppExecuteWaitTimerCallback.c)
 * Callees:
 *     TppBarrierAdjust @ 0x18003E750 (TppBarrierAdjust.c)
 *     EtwpNotificationThread @ 0x18004A9F0 (EtwpNotificationThread.c)
 *     TppCleanupGroupMemberCallbackProlog @ 0x18004C370 (TppCleanupGroupMemberCallbackProlog.c)
 *     RtlpWnfNotificationThread @ 0x18004C6F0 (RtlpWnfNotificationThread.c)
 *     RtlpTpWaitCallback @ 0x18004CF30 (RtlpTpWaitCallback.c)
 *     TppWorkpFree @ 0x18004D620 (TppWorkpFree.c)
 *     TppCleanupGroupMemberDestroy @ 0x18004E380 (TppCleanupGroupMemberDestroy.c)
 *     TppWorkCallbackPrologRelease @ 0x18004ECC0 (TppWorkCallbackPrologRelease.c)
 *     RtlFreeHeap @ 0x1800533F0 (RtlFreeHeap.c)
 *     TppAlpcpFree @ 0x180089250 (TppAlpcpFree.c)
 *     LdrAddRefDll @ 0x18008BAB0 (LdrAddRefDll.c)
 *     NtTraceEvent @ 0x180160C00 (NtTraceEvent.c)
 *     __security_check_cookie @ 0x180163D80 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180171020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

int __fastcall TppExecuteWaitCallback(PTP_CALLBACK_INSTANCE a1, PTP_WAIT a2, TP_WAIT_RESULT a3)
{
  void *RaceDll; // rdi
  __int64 v7; // rdi
  _DWORD *SharedData; // rcx
  __int64 v9; // rcx
  _DWORD *v10; // rcx
  __int64 v11; // rcx
  void *v12; // r8
  void *v13; // r9
  void *v14; // r10
  _QWORD *ThreadPoolData; // rcx
  __int64 v16; // rax
  __int64 v17; // rdx
  _QWORD *v18; // rsi
  void (__fastcall *v19)(PTP_CALLBACK_INSTANCE, PVOID, PTP_WAIT); // rax
  void *v20; // rdx
  struct _PEB *v21; // rax
  _DWORD *v22; // rcx
  __int64 v23; // rcx
  _DWORD *v24; // rcx
  __int64 v25; // rcx
  void (__fastcall *Free)(_TPP_CLEANUP_GROUP_MEMBER *); // rax
  _DWORD Fields[2]; // [rsp+30h] [rbp-E8h] BYREF
  __int64 v29; // [rsp+38h] [rbp-E0h]
  __int128 v30; // [rsp+40h] [rbp-D8h]
  _TP_POOL *Pool; // [rsp+50h] [rbp-C8h]
  _TP_DIRECT *p_Direct; // [rsp+58h] [rbp-C0h]
  void *Callback; // [rsp+60h] [rbp-B8h]
  void *Context; // [rsp+68h] [rbp-B0h]
  void *SubProcessTag; // [rsp+70h] [rbp-A8h]
  _DWORD v36[2]; // [rsp+80h] [rbp-98h] BYREF
  __int64 v37; // [rsp+88h] [rbp-90h]
  __int128 v38; // [rsp+90h] [rbp-88h]
  _TP_POOL *v39; // [rsp+A0h] [rbp-78h]
  _TP_DIRECT *v40; // [rsp+A8h] [rbp-70h]
  void *v41; // [rsp+B0h] [rbp-68h]
  void *v42; // [rsp+B8h] [rbp-60h]
  void *v43; // [rsp+C0h] [rbp-58h]

  if ( a3 == 258 )
  {
    LODWORD(v21) = TppWorkCallbackPrologRelease(a1, a2);
    if ( !(_DWORD)v21 )
      return (int)v21;
    goto LABEL_4;
  }
  RaceDll = a2->Timer.Work.CleanupGroupMember.RaceDll;
  if ( !RaceDll )
  {
LABEL_3:
    TppCleanupGroupMemberCallbackProlog(a1, a2);
LABEL_4:
    v7 = 2147353478LL;
    SharedData = NtCurrentPeb()->SharedData;
    if ( SharedData && *SharedData )
      v9 = (__int64)NtCurrentPeb()->SharedData + 556;
    else
      v9 = 2147353478LL;
    if ( *(_BYTE *)v9 )
    {
      Pool = a2->Timer.Work.CleanupGroupMember.Pool;
      p_Direct = &a2->Direct;
      Callback = a2->Timer.Work.CleanupGroupMember.Callback;
      Context = a2->Timer.Work.CleanupGroupMember.Context;
      SubProcessTag = a2->Timer.Work.CleanupGroupMember.SubProcessTag;
      Fields[0] = 0;
      Fields[1] = 471990272;
      v29 = 0LL;
      v30 = 0LL;
      v10 = NtCurrentPeb()->SharedData;
      if ( v10 && *v10 )
        v11 = (__int64)NtCurrentPeb()->SharedData + 556;
      else
        v11 = 2147353478LL;
      NtTraceEvent((HANDLE)*(unsigned __int8 *)v11, 0x402u, 0x28u, Fields);
    }
    v12 = a2->Timer.Work.CleanupGroupMember.SubProcessTag;
    v13 = a2->Timer.Work.CleanupGroupMember.Context;
    v14 = a2->Timer.Work.CleanupGroupMember.Callback;
    ThreadPoolData = NtCurrentTeb()->ThreadPoolData;
    if ( ThreadPoolData )
    {
      ++ThreadPoolData[2];
      v16 = ((unsigned __int8)*((_DWORD *)ThreadPoolData + 3) - 1) & 1;
      *((_DWORD *)ThreadPoolData + 3) = v16;
      v17 = (unsigned int)v16;
      v16 *= 32LL;
      v18 = (_QWORD *)((char *)ThreadPoolData + v16 + 32);
      *(_QWORD *)((char *)ThreadPoolData + v16 + 40) = v13;
      *v18 = v14;
      *(_QWORD *)((char *)ThreadPoolData + v16 + 48) = v12;
      ThreadPoolData[4 * v17 + 7] = MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0];
    }
    else
    {
      v18 = 0LL;
    }
    a1->Callback = a2->Timer.Work.CleanupGroupMember.Callback;
    a1->Context = a2->Timer.Work.CleanupGroupMember.Context;
    v19 = (void (__fastcall *)(PTP_CALLBACK_INSTANCE, PVOID, PTP_WAIT))a2->Timer.Work.CleanupGroupMember.Callback;
    v20 = a2->Timer.Work.CleanupGroupMember.Context;
    if ( (char *)v19 == (char *)RtlpWnfNotificationThread )
    {
      RtlpWnfNotificationThread(a1, v20, a2, a3);
    }
    else if ( (char *)v19 == (char *)RtlpTpWaitCallback )
    {
      RtlpTpWaitCallback(a1, v20, a2, a3);
    }
    else if ( v19 == EtwpNotificationThread )
    {
      EtwpNotificationThread(a1, v20, a2);
    }
    else
    {
      ((void (__fastcall *)(PTP_CALLBACK_INSTANCE, void *, PTP_WAIT, _QWORD))v19)(a1, v20, a2, a3);
    }
    v21 = NtCurrentPeb();
    v22 = v21->SharedData;
    if ( v22 && *v22 )
    {
      v21 = NtCurrentPeb();
      v23 = (__int64)v21->SharedData + 556;
    }
    else
    {
      v23 = 2147353478LL;
    }
    if ( *(_BYTE *)v23 )
    {
      v39 = a2->Timer.Work.CleanupGroupMember.Pool;
      v40 = &a2->Direct;
      v41 = a2->Timer.Work.CleanupGroupMember.Callback;
      v42 = a2->Timer.Work.CleanupGroupMember.Context;
      v43 = a2->Timer.Work.CleanupGroupMember.SubProcessTag;
      v36[0] = 0;
      v36[1] = 472055808;
      v37 = 0LL;
      v38 = 0LL;
      v24 = NtCurrentPeb()->SharedData;
      if ( v24 && *v24 )
        v7 = (__int64)NtCurrentPeb()->SharedData + 556;
      LODWORD(v21) = NtTraceEvent((HANDLE)*(unsigned __int8 *)v7, 0x403u, 0x28u, v36);
    }
    if ( v18 )
    {
      v25 = v18[3];
      v21 = (struct _PEB *)(MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0]);
      if ( MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0] >= v25 )
      {
        v21 = (struct _PEB *)((char *)v21 - v25);
        v18[3] = v21;
      }
    }
    return (int)v21;
  }
  if ( LdrAddRefDll(0, a2->Timer.Work.CleanupGroupMember.RaceDll) >= 0 )
  {
    a1->CallbackEpilogFlags |= 0x100u;
    a1->RaceDll = RaceDll;
    goto LABEL_3;
  }
  LODWORD(v21) = TppBarrierAdjust((_RTL_SRWLOCK *)&a2->Timer.Work.CleanupGroupMember.CallbackBarrier, -1, 0);
  if ( _InterlockedExchangeAdd(&a2->Timer.Work.CleanupGroupMember.Refcount.Refcount, 0xFFFFFFFF) == 1 )
  {
    Free = a2->Timer.Work.CleanupGroupMember.VFuncs->Free;
    if ( (char *)Free == (char *)TppSimplepFree )
    {
      TppCleanupGroupMemberDestroy(a2);
      LODWORD(v21) = RtlFreeHeap(NtCurrentPeb()->ProcessHeap, TppHeapTag + 0x200000, a2);
    }
    else if ( (char *)Free == (char *)TppAlpcpFree )
    {
      LODWORD(v21) = TppAlpcpFree(a2);
    }
    else if ( (char *)Free == (char *)TppWorkpFree )
    {
      LODWORD(v21) = TppWorkpFree(a2);
    }
    else
    {
      LODWORD(v21) = ((__int64 (__fastcall *)(PTP_WAIT))Free)(a2);
    }
  }
  return (int)v21;
}
