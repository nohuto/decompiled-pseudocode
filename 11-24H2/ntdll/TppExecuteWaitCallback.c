/*
 * XREFs of TppExecuteWaitCallback @ 0x18001F480
 * Callers:
 *     TppWaitCompletion @ 0x18001FE00 (TppWaitCompletion.c)
 *     TppExecuteWaitTimerCallback @ 0x1800FADC0 (TppExecuteWaitTimerCallback.c)
 * Callees:
 *     TppBarrierAdjust @ 0x180011D50 (TppBarrierAdjust.c)
 *     EtwpNotificationThread @ 0x18001DFF0 (EtwpNotificationThread.c)
 *     TppCleanupGroupMemberCallbackProlog @ 0x18001F970 (TppCleanupGroupMemberCallbackProlog.c)
 *     RtlpWnfNotificationThread @ 0x18001FCF0 (RtlpWnfNotificationThread.c)
 *     RtlpTpWaitCallback @ 0x180020530 (RtlpTpWaitCallback.c)
 *     TppWorkpFree @ 0x180020C20 (TppWorkpFree.c)
 *     TppCleanupGroupMemberDestroy @ 0x180021980 (TppCleanupGroupMemberDestroy.c)
 *     TppWorkCallbackPrologRelease @ 0x1800222C0 (TppWorkCallbackPrologRelease.c)
 *     RtlFreeHeap @ 0x1800269F0 (RtlFreeHeap.c)
 *     TppAlpcpFree @ 0x18006C970 (TppAlpcpFree.c)
 *     LdrAddRefDll @ 0x18006F1D0 (LdrAddRefDll.c)
 *     NtTraceEvent @ 0x180162840 (NtTraceEvent.c)
 *     __security_check_cookie @ 0x1801659C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180172020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

struct _TEB *__fastcall TppExecuteWaitCallback(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v6; // rdi
  __int64 v7; // rdi
  _DWORD *SharedData; // rcx
  __int64 v9; // rcx
  _DWORD *v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // r10
  _QWORD *ThreadPoolData; // rcx
  __int64 v16; // rax
  __int64 v17; // rdx
  _QWORD *v18; // rsi
  _BYTE *(__fastcall *v19)(__int64, __int64, __int64); // rax
  __int64 v20; // rdx
  struct _TEB *result; // rax
  _DWORD *v22; // rcx
  __int64 v23; // rcx
  _DWORD *v24; // rcx
  __int64 v25; // rcx
  __int64 (__fastcall *v26)(); // rax
  _DWORD v27[2]; // [rsp+30h] [rbp-E8h] BYREF
  __int64 v28; // [rsp+38h] [rbp-E0h]
  __int128 v29; // [rsp+40h] [rbp-D8h]
  __int64 v30; // [rsp+50h] [rbp-C8h]
  __int64 v31; // [rsp+58h] [rbp-C0h]
  __int64 v32; // [rsp+60h] [rbp-B8h]
  __int64 v33; // [rsp+68h] [rbp-B0h]
  __int64 v34; // [rsp+70h] [rbp-A8h]
  _DWORD v35[2]; // [rsp+80h] [rbp-98h] BYREF
  __int64 v36; // [rsp+88h] [rbp-90h]
  __int128 v37; // [rsp+90h] [rbp-88h]
  __int64 v38; // [rsp+A0h] [rbp-78h]
  __int64 v39; // [rsp+A8h] [rbp-70h]
  __int64 v40; // [rsp+B0h] [rbp-68h]
  __int64 v41; // [rsp+B8h] [rbp-60h]
  __int64 v42; // [rsp+C0h] [rbp-58h]

  if ( a3 == 258 )
  {
    result = (struct _TEB *)TppWorkCallbackPrologRelease(a1, a2, 0LL);
    if ( !(_DWORD)result )
      return result;
    goto LABEL_4;
  }
  v6 = *(_QWORD *)(a2 + 136);
  if ( !v6 )
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
      v30 = *(_QWORD *)(a2 + 144);
      v31 = a2 + 392;
      v32 = *(_QWORD *)(a2 + 80);
      v33 = *(_QWORD *)(a2 + 88);
      v34 = *(_QWORD *)(a2 + 104);
      v27[0] = 0;
      v27[1] = 471990272;
      v28 = 0LL;
      v29 = 0LL;
      v10 = NtCurrentPeb()->SharedData;
      if ( v10 && *v10 )
        v11 = (__int64)NtCurrentPeb()->SharedData + 556;
      else
        v11 = 2147353478LL;
      NtTraceEvent(*(unsigned __int8 *)v11, 1026LL, 40LL, v27);
    }
    v12 = *(_QWORD *)(a2 + 104);
    v13 = *(_QWORD *)(a2 + 88);
    v14 = *(_QWORD *)(a2 + 80);
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
    *(_QWORD *)(a1 + 88) = *(_QWORD *)(a2 + 80);
    *(_QWORD *)(a1 + 96) = *(_QWORD *)(a2 + 88);
    v19 = *(_BYTE *(__fastcall **)(__int64, __int64, __int64))(a2 + 80);
    v20 = *(_QWORD *)(a2 + 88);
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
      ((void (__fastcall *)(__int64, __int64, __int64, _QWORD))v19)(a1, v20, a2, a3);
    }
    result = (struct _TEB *)NtCurrentPeb();
    v22 = *(_DWORD **)&result->User32Reserved[4];
    if ( v22 && *v22 )
    {
      result = (struct _TEB *)NtCurrentPeb();
      v23 = *(_QWORD *)&result->User32Reserved[4] + 556LL;
    }
    else
    {
      v23 = 2147353478LL;
    }
    if ( *(_BYTE *)v23 )
    {
      v38 = *(_QWORD *)(a2 + 144);
      v39 = a2 + 392;
      v40 = *(_QWORD *)(a2 + 80);
      v41 = *(_QWORD *)(a2 + 88);
      v42 = *(_QWORD *)(a2 + 104);
      v35[0] = 0;
      v35[1] = 472055808;
      v36 = 0LL;
      v37 = 0LL;
      v24 = NtCurrentPeb()->SharedData;
      if ( v24 && *v24 )
        v7 = (__int64)NtCurrentPeb()->SharedData + 556;
      result = (struct _TEB *)NtTraceEvent(*(unsigned __int8 *)v7, 1027LL, 40LL, v35);
    }
    if ( v18 )
    {
      v25 = v18[3];
      result = (struct _TEB *)(MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0]);
      if ( MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0] >= v25 )
      {
        result = (struct _TEB *)((char *)result - v25);
        v18[3] = result;
      }
    }
    return result;
  }
  if ( (int)LdrAddRefDll(0LL, *(_QWORD *)(a2 + 136)) >= 0 )
  {
    *(_DWORD *)(a1 + 144) |= 0x100u;
    *(_QWORD *)(a1 + 168) = v6;
    goto LABEL_3;
  }
  result = TppBarrierAdjust((volatile signed __int64 *)(a2 + 56), -1, 0);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)a2, 0xFFFFFFFF) == 1 )
  {
    v26 = **(__int64 (__fastcall ***)())(a2 + 8);
    if ( v26 == TppSimplepFree )
    {
      TppCleanupGroupMemberDestroy(a2);
      return (struct _TEB *)RtlFreeHeap(NtCurrentPeb()->ProcessHeap, (unsigned int)(TppHeapTag + 0x200000), a2);
    }
    else if ( (char *)v26 == (char *)TppAlpcpFree )
    {
      return (struct _TEB *)TppAlpcpFree(a2);
    }
    else if ( (char *)v26 == (char *)TppWorkpFree )
    {
      return (struct _TEB *)TppWorkpFree(a2);
    }
    else
    {
      return (struct _TEB *)((__int64 (__fastcall *)(__int64))v26)(a2);
    }
  }
  return result;
}
