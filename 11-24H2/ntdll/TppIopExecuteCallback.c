/*
 * XREFs of TppIopExecuteCallback @ 0x18001EF70
 * Callers:
 *     TppWorkerThread @ 0x1800238D0 (TppWorkerThread.c)
 *     TppDirectExecuteCallback @ 0x18006D650 (TppDirectExecuteCallback.c)
 * Callees:
 *     LdrUnlockLoaderLock @ 0x180003D60 (LdrUnlockLoaderLock.c)
 *     TppCompleteThreadData @ 0x18001F420 (TppCompleteThreadData.c)
 *     TppCleanupGroupMemberCallbackProlog @ 0x18001F970 (TppCleanupGroupMemberCallbackProlog.c)
 *     TppWorkpFree @ 0x180020C20 (TppWorkpFree.c)
 *     TppCleanupGroupMemberDestroy @ 0x180021980 (TppCleanupGroupMemberDestroy.c)
 *     RtlFreeHeap @ 0x1800269F0 (RtlFreeHeap.c)
 *     RtlGetCurrentServiceSessionId @ 0x180055A20 (RtlGetCurrentServiceSessionId.c)
 *     TppAlpcpFree @ 0x18006C970 (TppAlpcpFree.c)
 *     LdrAddRefDll @ 0x18006F1D0 (LdrAddRefDll.c)
 *     TpPostWork @ 0x1800D6E00 (TpPostWork.c)
 *     TpStartAsyncIoOperation @ 0x1800E67A0 (TpStartAsyncIoOperation.c)
 *     LdrLockLoaderLock @ 0x1800F3720 (LdrLockLoaderLock.c)
 *     NtTraceEvent @ 0x180162840 (NtTraceEvent.c)
 *     __security_check_cookie @ 0x1801659C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180172020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall TppIopExecuteCallback(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v7; // rbx
  __int64 v8; // r12
  int v9; // r14d
  int v10; // edi
  signed __int32 v11; // ecx
  bool v12; // zf
  signed __int32 v13; // eax
  __int64 v14; // r9
  _DWORD *SharedData; // rcx
  __int64 v16; // rdi
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // r10
  _QWORD *ThreadPoolData; // rcx
  __int64 v27; // rax
  __int64 v28; // rdx
  _QWORD *v29; // r14
  __int64 v30; // rdx
  void (__fastcall *v31)(__int64, __int64, __int64, __int64, __int64); // rax
  __int64 v32; // r9
  _DWORD *v33; // rcx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // rax
  __int64 result; // rax
  __int64 (__fastcall *v40)(); // rax
  unsigned __int64 v42; // [rsp+40h] [rbp-F8h] BYREF
  int v43; // [rsp+48h] [rbp-F0h]
  _DWORD v44[2]; // [rsp+50h] [rbp-E8h] BYREF
  __int64 v45; // [rsp+58h] [rbp-E0h]
  __int128 v46; // [rsp+60h] [rbp-D8h]
  __int64 v47; // [rsp+70h] [rbp-C8h]
  __int64 v48; // [rsp+78h] [rbp-C0h]
  __int64 v49; // [rsp+80h] [rbp-B8h]
  __int64 v50; // [rsp+88h] [rbp-B0h]
  __int64 v51; // [rsp+90h] [rbp-A8h]
  _DWORD v52[2]; // [rsp+A0h] [rbp-98h] BYREF
  __int64 v53; // [rsp+A8h] [rbp-90h]
  __int128 v54; // [rsp+B0h] [rbp-88h]
  __int64 v55; // [rsp+C0h] [rbp-78h]
  __int64 v56; // [rsp+C8h] [rbp-70h]
  __int64 v57; // [rsp+D0h] [rbp-68h]
  __int64 v58; // [rsp+D8h] [rbp-60h]
  __int64 v59; // [rsp+E0h] [rbp-58h]

  v42 = 0LL;
  v7 = a2 - 200;
  v8 = *(_QWORD *)(a2 - 200 + 136);
  v9 = 1;
  if ( v8 )
  {
    v10 = 1;
    LdrLockLoaderLock(0LL, 0LL, &v42);
  }
  else
  {
    v10 = 0;
  }
  _m_prefetchw((const void *)(v7 + 280));
  v11 = *(_DWORD *)(v7 + 280);
  while ( v11 > 0 )
  {
    v13 = _InterlockedCompareExchange((volatile signed __int32 *)(v7 + 280), v11 - 1, v11);
    v12 = v11 == v13;
    v11 = v13;
    if ( v12 )
      goto LABEL_6;
  }
  v9 = 0;
LABEL_6:
  if ( v10 && v9 )
  {
    v43 = LdrAddRefDll(0LL, v8);
    if ( v43 >= 0 )
    {
      *(_QWORD *)(a1 + 168) = v8;
      *(_DWORD *)(a1 + 144) |= 0x100u;
    }
    else
    {
      v9 = 0;
    }
  }
  if ( v10 )
    LdrUnlockLoaderLock(0, v42);
  if ( v9 )
  {
    TppCleanupGroupMemberCallbackProlog(a1, v7);
    SharedData = NtCurrentPeb()->SharedData;
    if ( SharedData && *SharedData )
    {
      v17 = (__int64)NtCurrentPeb()->SharedData + 556;
      v16 = 2147353478LL;
    }
    else
    {
      v16 = 2147353478LL;
      v17 = 2147353478LL;
    }
    if ( *(_BYTE *)v17 )
    {
      v18 = *(_QWORD *)(v7 + 104);
      v19 = *(_QWORD *)(v7 + 88);
      v20 = *(_QWORD *)(v7 + 80);
      v21 = *(_QWORD *)(v7 + 144);
      v44[0] = 0;
      v44[1] = 471990272;
      v45 = 0LL;
      v46 = 0LL;
      v47 = v21;
      v48 = a2;
      v49 = v20;
      v50 = v19;
      v51 = v18;
      if ( (unsigned int)RtlGetCurrentServiceSessionId(v20, v19, v18, v14) )
        v22 = (__int64)NtCurrentPeb()->SharedData + 556;
      else
        v22 = 2147353478LL;
      NtTraceEvent(*(unsigned __int8 *)v22, 1026LL, 40LL, v44);
    }
    v23 = *(_QWORD *)(v7 + 104);
    v24 = *(_QWORD *)(v7 + 88);
    v25 = *(_QWORD *)(v7 + 80);
    ThreadPoolData = NtCurrentTeb()->ThreadPoolData;
    if ( ThreadPoolData )
    {
      ++ThreadPoolData[2];
      v27 = ((unsigned __int8)*((_DWORD *)ThreadPoolData + 3) - 1) & 1;
      *((_DWORD *)ThreadPoolData + 3) = v27;
      v28 = (unsigned int)v27;
      v27 *= 32LL;
      v29 = (_QWORD *)((char *)ThreadPoolData + v27 + 32);
      *v29 = v25;
      *(_QWORD *)((char *)ThreadPoolData + v27 + 40) = v24;
      *(_QWORD *)((char *)ThreadPoolData + v27 + 48) = v23;
      ThreadPoolData[4 * v28 + 7] = MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0];
    }
    else
    {
      v29 = 0LL;
    }
    *(_QWORD *)(a1 + 88) = *(_QWORD *)(v7 + 80);
    *(_QWORD *)(a1 + 96) = *(_QWORD *)(v7 + 88);
    v30 = *(_QWORD *)(v7 + 88);
    v31 = *(void (__fastcall **)(__int64, __int64, __int64, __int64, __int64))(v7 + 80);
    if ( (char *)v31 == (char *)TpPostWork )
    {
      TpPostWork(a1, v30, a3, a4, v7);
    }
    else if ( (char *)v31 == (char *)TpStartAsyncIoOperation )
    {
      TpStartAsyncIoOperation(a1, v30, a3, a4, v7);
    }
    else
    {
      v31(a1, v30, a3, a4, v7);
    }
    v33 = NtCurrentPeb()->SharedData;
    if ( v33 && *v33 )
      v34 = (__int64)NtCurrentPeb()->SharedData + 556;
    else
      v34 = 2147353478LL;
    if ( *(_BYTE *)v34 )
    {
      v35 = *(_QWORD *)(v7 + 104);
      v36 = *(_QWORD *)(v7 + 88);
      v37 = *(_QWORD *)(v7 + 80);
      v38 = *(_QWORD *)(v7 + 144);
      v52[0] = 0;
      v52[1] = 472055808;
      v53 = 0LL;
      v54 = 0LL;
      v55 = v38;
      v56 = a2;
      v57 = v37;
      v58 = v36;
      v59 = v35;
      if ( (unsigned int)RtlGetCurrentServiceSessionId(v37, v36, v35, v32) )
        v16 = (__int64)NtCurrentPeb()->SharedData + 556;
      NtTraceEvent(*(unsigned __int8 *)v16, 1027LL, 40LL, v52);
    }
    return TppCompleteThreadData(v29);
  }
  else
  {
    result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)v7, 0xFFFFFFFF);
    if ( (_DWORD)result == 1 )
    {
      v40 = **(__int64 (__fastcall ***)())(v7 + 8);
      if ( v40 == TppSimplepFree )
      {
        TppCleanupGroupMemberDestroy(v7);
        return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, (unsigned int)(TppHeapTag + 0x200000), v7);
      }
      else if ( (char *)v40 == (char *)TppAlpcpFree )
      {
        return TppAlpcpFree(v7);
      }
      else if ( (char *)v40 == (char *)TppWorkpFree )
      {
        return TppWorkpFree(v7);
      }
      else
      {
        return ((__int64 (__fastcall *)(__int64))v40)(v7);
      }
    }
  }
  return result;
}
