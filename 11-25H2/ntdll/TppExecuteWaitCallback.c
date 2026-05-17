/*
 * XREFs of TppExecuteWaitCallback @ 0x180040740
 * Callers:
 *     TppWaitCompletion @ 0x180041270 (TppWaitCompletion.c)
 *     TppExecuteWaitTimerCallback @ 0x1800FCF30 (TppExecuteWaitTimerCallback.c)
 * Callees:
 *     LdrAddRefDll @ 0x18003D580 (LdrAddRefDll.c)
 *     TppCleanupGroupMemberCallbackProlog @ 0x180040C30 (TppCleanupGroupMemberCallbackProlog.c)
 *     RtlpWnfNotificationThread @ 0x180040FB0 (RtlpWnfNotificationThread.c)
 *     TppBarrierAdjust @ 0x180041550 (TppBarrierAdjust.c)
 *     RtlpTpWaitCallback @ 0x180041F40 (RtlpTpWaitCallback.c)
 *     TppWorkpFree @ 0x180042630 (TppWorkpFree.c)
 *     TppWorkCallbackPrologRelease @ 0x180043350 (TppWorkCallbackPrologRelease.c)
 *     TppCleanupGroupMemberDestroy @ 0x180043EC0 (TppCleanupGroupMemberDestroy.c)
 *     TppAlpcpFree @ 0x180044340 (TppAlpcpFree.c)
 *     EtwpNotificationThread @ 0x1800451D0 (EtwpNotificationThread.c)
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 *     NtTraceEvent @ 0x180163DD0 (NtTraceEvent.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

struct _PEB *__fastcall TppExecuteWaitCallback(__int64 a1, __int64 a2, unsigned int a3)
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
  void (__fastcall *v19)(__int64, __int64, __int64, _QWORD); // rax
  __int64 v20; // rdx
  struct _PEB *result; // rax
  _DWORD *v22; // rcx
  __int64 v23; // rcx
  _DWORD *v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 (__fastcall *v28)(); // rax
  _DWORD v29[2]; // [rsp+30h] [rbp-E8h] BYREF
  __int64 v30; // [rsp+38h] [rbp-E0h]
  __int128 v31; // [rsp+40h] [rbp-D8h]
  __int64 v32; // [rsp+50h] [rbp-C8h]
  __int64 v33; // [rsp+58h] [rbp-C0h]
  __int64 v34; // [rsp+60h] [rbp-B8h]
  __int64 v35; // [rsp+68h] [rbp-B0h]
  __int64 v36; // [rsp+70h] [rbp-A8h]
  _DWORD v37[2]; // [rsp+80h] [rbp-98h] BYREF
  __int64 v38; // [rsp+88h] [rbp-90h]
  __int128 v39; // [rsp+90h] [rbp-88h]
  __int64 v40; // [rsp+A0h] [rbp-78h]
  __int64 v41; // [rsp+A8h] [rbp-70h]
  __int64 v42; // [rsp+B0h] [rbp-68h]
  __int64 v43; // [rsp+B8h] [rbp-60h]
  __int64 v44; // [rsp+C0h] [rbp-58h]

  if ( a3 == 258 )
  {
    result = (struct _PEB *)TppWorkCallbackPrologRelease(a1, a2, 0LL);
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
      v32 = *(_QWORD *)(a2 + 144);
      v33 = a2 + 392;
      v34 = *(_QWORD *)(a2 + 80);
      v35 = *(_QWORD *)(a2 + 88);
      v36 = *(_QWORD *)(a2 + 104);
      v29[0] = 0;
      v29[1] = 471990272;
      v30 = 0LL;
      v31 = 0LL;
      v10 = NtCurrentPeb()->SharedData;
      if ( v10 && *v10 )
        v11 = (__int64)NtCurrentPeb()->SharedData + 556;
      else
        v11 = 2147353478LL;
      NtTraceEvent(*(unsigned __int8 *)v11, 1026LL, 40LL, v29);
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
    v19 = *(void (__fastcall **)(__int64, __int64, __int64, _QWORD))(a2 + 80);
    v20 = *(_QWORD *)(a2 + 88);
    if ( (char *)v19 == (char *)RtlpWnfNotificationThread )
    {
      RtlpWnfNotificationThread(a1, v20, a2, a3);
    }
    else if ( (char *)v19 == (char *)RtlpTpWaitCallback )
    {
      RtlpTpWaitCallback(a1, v20, a2, a3);
    }
    else if ( (char *)v19 == (char *)EtwpNotificationThread )
    {
      EtwpNotificationThread(a1, v20, a2, a3);
    }
    else
    {
      v19(a1, v20, a2, a3);
    }
    result = NtCurrentPeb();
    v22 = result->SharedData;
    if ( v22 && *v22 )
    {
      result = NtCurrentPeb();
      v23 = (__int64)result->SharedData + 556;
    }
    else
    {
      v23 = 2147353478LL;
    }
    if ( *(_BYTE *)v23 )
    {
      v40 = *(_QWORD *)(a2 + 144);
      v41 = a2 + 392;
      v42 = *(_QWORD *)(a2 + 80);
      v43 = *(_QWORD *)(a2 + 88);
      v44 = *(_QWORD *)(a2 + 104);
      v37[0] = 0;
      v37[1] = 472055808;
      v38 = 0LL;
      v39 = 0LL;
      v24 = NtCurrentPeb()->SharedData;
      if ( v24 && *v24 )
        v7 = (__int64)NtCurrentPeb()->SharedData + 556;
      result = (struct _PEB *)NtTraceEvent(*(unsigned __int8 *)v7, 1027LL, 40LL, v37);
    }
    if ( v18 )
    {
      v25 = v18[3];
      result = (struct _PEB *)(MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0]);
      if ( MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0] >= v25 )
      {
        result = (struct _PEB *)((char *)result - v25);
        v18[3] = result;
      }
    }
    return result;
  }
  if ( (int)LdrAddRefDll(0, *(_QWORD *)(a2 + 136)) >= 0 )
  {
    *(_DWORD *)(a1 + 144) |= 0x100u;
    *(_QWORD *)(a1 + 168) = v6;
    goto LABEL_3;
  }
  result = (struct _PEB *)TppBarrierAdjust(a2 + 56, 0xFFFFFFFFLL, 0LL);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)a2, 0xFFFFFFFF) == 1 )
  {
    v28 = **(__int64 (__fastcall ***)())(a2 + 8);
    if ( v28 == TppSimplepFree )
    {
      TppCleanupGroupMemberDestroy(a2);
      return (struct _PEB *)RtlFreeHeap(NtCurrentPeb()->ProcessHeap, (unsigned int)(TppHeapTag + 0x200000), a2);
    }
    else if ( (char *)v28 == (char *)TppAlpcpFree )
    {
      return (struct _PEB *)TppAlpcpFree(a2, v26, v27);
    }
    else if ( (char *)v28 == (char *)TppWorkpFree )
    {
      return (struct _PEB *)TppWorkpFree(a2, v26, v27);
    }
    else
    {
      return (struct _PEB *)((__int64 (__fastcall *)(__int64))v28)(a2);
    }
  }
  return result;
}
