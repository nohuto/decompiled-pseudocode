/*
 * XREFs of TppIopExecuteCallback @ 0x180040230
 * Callers:
 *     TppDirectExecuteCallback @ 0x18003BD60 (TppDirectExecuteCallback.c)
 *     TppWorkerThread @ 0x18007DCB0 (TppWorkerThread.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180011660 (RtlGetCurrentServiceSessionId.c)
 *     LdrAddRefDll @ 0x18003D580 (LdrAddRefDll.c)
 *     TpPostWork @ 0x18003EF70 (TpPostWork.c)
 *     LdrUnlockLoaderLock @ 0x18003F1D0 (LdrUnlockLoaderLock.c)
 *     TppCompleteThreadData @ 0x1800406E0 (TppCompleteThreadData.c)
 *     TppCleanupGroupMemberCallbackProlog @ 0x180040C30 (TppCleanupGroupMemberCallbackProlog.c)
 *     TpStartAsyncIoOperation @ 0x1800410C0 (TpStartAsyncIoOperation.c)
 *     TppWorkpFree @ 0x180042630 (TppWorkpFree.c)
 *     TppCleanupGroupMemberDestroy @ 0x180043EC0 (TppCleanupGroupMemberDestroy.c)
 *     TppAlpcpFree @ 0x180044340 (TppAlpcpFree.c)
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 *     LdrLockLoaderLock @ 0x1800F5290 (LdrLockLoaderLock.c)
 *     NtTraceEvent @ 0x180163DD0 (NtTraceEvent.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

LOGICAL __fastcall TppIopExecuteCallback(_TP_WORK *Io, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v7; // rbx
  void *v8; // r12
  int v9; // r14d
  int v10; // edi
  signed __int32 v11; // ecx
  bool v12; // zf
  signed __int32 v13; // eax
  _DWORD *SharedData; // rcx
  __int64 v15; // rdi
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // r10
  _QWORD *ThreadPoolData; // rcx
  __int64 v26; // rax
  __int64 v27; // rdx
  _QWORD *v28; // r14
  void (__fastcall *v29)(_TP_WORK *, _QWORD, __int64, __int64, __int64); // rax
  _DWORD *v30; // rcx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rax
  LOGICAL result; // eax
  __int64 (__fastcall *v37)(); // rax
  PVOID Cookie; // [rsp+40h] [rbp-F8h] BYREF
  NTSTATUS v40; // [rsp+48h] [rbp-F0h]
  _DWORD Fields[2]; // [rsp+50h] [rbp-E8h] BYREF
  __int64 v42; // [rsp+58h] [rbp-E0h]
  __int128 v43; // [rsp+60h] [rbp-D8h]
  __int64 v44; // [rsp+70h] [rbp-C8h]
  __int64 v45; // [rsp+78h] [rbp-C0h]
  __int64 v46; // [rsp+80h] [rbp-B8h]
  __int64 v47; // [rsp+88h] [rbp-B0h]
  __int64 v48; // [rsp+90h] [rbp-A8h]
  _DWORD v49[2]; // [rsp+A0h] [rbp-98h] BYREF
  __int64 v50; // [rsp+A8h] [rbp-90h]
  __int128 v51; // [rsp+B0h] [rbp-88h]
  __int64 v52; // [rsp+C0h] [rbp-78h]
  __int64 v53; // [rsp+C8h] [rbp-70h]
  __int64 v54; // [rsp+D0h] [rbp-68h]
  __int64 v55; // [rsp+D8h] [rbp-60h]
  __int64 v56; // [rsp+E0h] [rbp-58h]

  Cookie = 0LL;
  v7 = a2 - 200;
  v8 = *(void **)(a2 - 200 + 136);
  v9 = 1;
  if ( v8 )
  {
    v10 = 1;
    LdrLockLoaderLock(0, 0LL, &Cookie);
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
    v40 = LdrAddRefDll(0, v8);
    if ( v40 >= 0 )
    {
      *(_QWORD *)&Io->CleanupGroupMember.Flags = v8;
      LODWORD(Io->CleanupGroupMember.Pool) |= 0x100u;
    }
    else
    {
      v9 = 0;
    }
  }
  if ( v10 )
    LdrUnlockLoaderLock(0, Cookie);
  if ( v9 )
  {
    TppCleanupGroupMemberCallbackProlog(Io, v7);
    SharedData = NtCurrentPeb()->SharedData;
    if ( SharedData && *SharedData )
    {
      v16 = (__int64)NtCurrentPeb()->SharedData + 556;
      v15 = 2147353478LL;
    }
    else
    {
      v15 = 2147353478LL;
      v16 = 2147353478LL;
    }
    if ( *(_BYTE *)v16 )
    {
      v17 = *(_QWORD *)(v7 + 104);
      v18 = *(_QWORD *)(v7 + 88);
      v19 = *(_QWORD *)(v7 + 80);
      v20 = *(_QWORD *)(v7 + 144);
      Fields[0] = 0;
      Fields[1] = 471990272;
      v42 = 0LL;
      v43 = 0LL;
      v44 = v20;
      v45 = a2;
      v46 = v19;
      v47 = v18;
      v48 = v17;
      if ( RtlGetCurrentServiceSessionId() )
        v21 = (__int64)NtCurrentPeb()->SharedData + 556;
      else
        v21 = 2147353478LL;
      NtTraceEvent((HANDLE)*(unsigned __int8 *)v21, 0x402u, 0x28u, Fields);
    }
    v22 = *(_QWORD *)(v7 + 104);
    v23 = *(_QWORD *)(v7 + 88);
    v24 = *(_QWORD *)(v7 + 80);
    ThreadPoolData = NtCurrentTeb()->ThreadPoolData;
    if ( ThreadPoolData )
    {
      ++ThreadPoolData[2];
      v26 = ((unsigned __int8)*((_DWORD *)ThreadPoolData + 3) - 1) & 1;
      *((_DWORD *)ThreadPoolData + 3) = v26;
      v27 = (unsigned int)v26;
      v26 *= 32LL;
      v28 = (_QWORD *)((char *)ThreadPoolData + v26 + 32);
      *v28 = v24;
      *(_QWORD *)((char *)ThreadPoolData + v26 + 40) = v23;
      *(_QWORD *)((char *)ThreadPoolData + v26 + 48) = v22;
      ThreadPoolData[4 * v27 + 7] = MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0];
    }
    else
    {
      v28 = 0LL;
    }
    Io->CleanupGroupMember.Context = *(void **)(v7 + 80);
    Io->CleanupGroupMember.ActivationContext = *(struct _ACTIVATION_CONTEXT **)(v7 + 88);
    v29 = *(void (__fastcall **)(_TP_WORK *, _QWORD, __int64, __int64, __int64))(v7 + 80);
    if ( (char *)v29 == (char *)TpPostWork )
    {
      TpPostWork(Io);
    }
    else if ( (char *)v29 == (char *)TpStartAsyncIoOperation )
    {
      TpStartAsyncIoOperation((PTP_IO)Io);
    }
    else
    {
      v29(Io, *(_QWORD *)(v7 + 88), a3, a4, v7);
    }
    v30 = NtCurrentPeb()->SharedData;
    if ( v30 && *v30 )
      v31 = (__int64)NtCurrentPeb()->SharedData + 556;
    else
      v31 = 2147353478LL;
    if ( *(_BYTE *)v31 )
    {
      v32 = *(_QWORD *)(v7 + 104);
      v33 = *(_QWORD *)(v7 + 88);
      v34 = *(_QWORD *)(v7 + 80);
      v35 = *(_QWORD *)(v7 + 144);
      v49[0] = 0;
      v49[1] = 472055808;
      v50 = 0LL;
      v51 = 0LL;
      v52 = v35;
      v53 = a2;
      v54 = v34;
      v55 = v33;
      v56 = v32;
      if ( RtlGetCurrentServiceSessionId() )
        v15 = (__int64)NtCurrentPeb()->SharedData + 556;
      NtTraceEvent((HANDLE)*(unsigned __int8 *)v15, 0x403u, 0x28u, v49);
    }
    return TppCompleteThreadData(v28);
  }
  else
  {
    result = _InterlockedExchangeAdd((volatile signed __int32 *)v7, 0xFFFFFFFF);
    if ( result == 1 )
    {
      v37 = **(__int64 (__fastcall ***)())(v7 + 8);
      if ( v37 == TppSimplepFree )
      {
        TppCleanupGroupMemberDestroy(v7);
        return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, TppHeapTag + 0x200000, (PVOID)v7);
      }
      else if ( (char *)v37 == (char *)TppAlpcpFree )
      {
        return TppAlpcpFree(v7);
      }
      else if ( (char *)v37 == (char *)TppWorkpFree )
      {
        return TppWorkpFree(v7);
      }
      else
      {
        return ((__int64 (__fastcall *)(__int64))v37)(v7);
      }
    }
  }
  return result;
}
