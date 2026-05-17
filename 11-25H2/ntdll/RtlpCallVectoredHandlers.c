/*
 * XREFs of RtlpCallVectoredHandlers @ 0x180075B30
 * Callers:
 *     RtlDispatchException @ 0x180075F60 (RtlDispatchException.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180011720 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800123F0 (RtlReleaseSRWLockExclusive.c)
 *     LdrProtectMrdata @ 0x180020A50 (LdrProtectMrdata.c)
 *     LdrControlFlowGuardEnforced @ 0x180023510 (LdrControlFlowGuardEnforced.c)
 *     RtlProtectHeap @ 0x180024F60 (RtlProtectHeap.c)
 *     RtlDecodePointer @ 0x180075450 (RtlDecodePointer.c)
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 *     RtlpLogExceptionHandler @ 0x1800F2494 (RtlpLogExceptionHandler.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall RtlpCallVectoredHandlers(__int64 a1, __int64 a2, unsigned int a3)
{
  struct _PEB *v3; // rsi
  unsigned int v4; // ebp
  unsigned __int8 v5; // bl
  volatile signed __int64 **v8; // rdi
  unsigned int CrossProcessFlags; // eax
  __int64 **v10; // r14
  volatile signed __int64 *v11; // rcx
  __int64 *v12; // r15
  __int64 (__fastcall *v13)(_QWORD *); // rax
  int v14; // eax
  signed __int64 v15; // rcx
  bool v16; // cc
  signed __int64 v17; // rcx
  _QWORD *v18; // rdi
  int v20; // esi
  int v21; // ecx
  _QWORD *v22; // rcx
  _QWORD *v23; // rax
  _QWORD *v24; // rax
  int v25; // ecx
  _QWORD *v26; // rsi
  void *ProcessHeap; // rcx
  int v28; // edx
  _QWORD *v29; // [rsp+20h] [rbp-68h]
  _QWORD *v30; // [rsp+28h] [rbp-60h]
  __int64 v31; // [rsp+30h] [rbp-58h]
  volatile signed __int64 **v32; // [rsp+38h] [rbp-50h]
  _QWORD v33[9]; // [rsp+40h] [rbp-48h] BYREF
  __int64 (__fastcall *v34)(_QWORD *); // [rsp+A8h] [rbp+20h]
  int v35; // [rsp+A8h] [rbp+20h]

  v3 = NtCurrentPeb();
  v4 = a3 + 2;
  v5 = 0;
  v8 = (volatile signed __int64 **)(&LdrpVectorHandlerList + 3 * a3);
  CrossProcessFlags = v3->CrossProcessFlags;
  v10 = (__int64 **)(v8 + 1);
  if ( _bittest((const int *)&CrossProcessFlags, a3 + 2) )
  {
    v33[0] = a1;
    v11 = *v8;
    v33[1] = a2;
    v30 = 0LL;
    RtlAcquireSRWLockExclusive((volatile signed __int32 *)v11);
    v12 = *v10;
    while ( v12 != (__int64 *)v10 )
    {
      v29 = v12;
      v32 = (volatile signed __int64 **)(v12 + 2);
      if ( _InterlockedIncrement64((volatile signed __int64 *)v12[2]) <= 1 )
        __fastfail(0xEu);
      RtlReleaseSRWLockExclusive(*v8);
      v13 = (__int64 (__fastcall *)(_QWORD *))RtlDecodePointer(v12[4]);
      v34 = v13;
      v31 = 0LL;
      if ( (v3->NtGlobalFlag & 0x800000) != 0 )
      {
        v31 = RtlpLogExceptionHandler(a1, a2, 0LL, v13);
        v14 = v34(v33);
      }
      else
      {
        v14 = v13(v33);
      }
      v35 = v14;
      if ( v31 )
        *(_DWORD *)(v31 + 1396) = v14 != -1;
      RtlAcquireSRWLockExclusive((volatile signed __int32 *)*v8);
      v12 = (__int64 *)*v12;
      v15 = _InterlockedExchangeAdd64(*v32, 0xFFFFFFFFFFFFFFFFuLL);
      v16 = v15 <= 1;
      v17 = v15 - 1;
      if ( v16 )
      {
        if ( v17 )
          __fastfail(0xEu);
        if ( !*((_DWORD *)v29 + 6) )
          __fastfail(0x3Cu);
        if ( LdrControlFlowGuardEnforced() )
        {
          RtlAcquireSRWLockExclusive((volatile signed __int32 *)&LdrpMrdataLock);
          v21 = *(_DWORD *)LdrpMrdataHeapUnprotected;
          if ( *(_DWORD *)LdrpMrdataHeapUnprotected )
          {
            if ( v21 == -1 )
              goto LABEL_27;
          }
          else
          {
            RtlProtectHeap((_DWORD *)LdrpMrdataHeap, 0);
            v21 = 0;
          }
          *(_DWORD *)LdrpMrdataHeapUnprotected = v21 + 1;
          RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
        }
        LdrProtectMrdata(0);
        v22 = (_QWORD *)*v29;
        if ( *(_QWORD **)(*v29 + 8LL) != v29 || (v23 = (_QWORD *)v29[1], (_QWORD *)*v23 != v29) )
          __fastfail(3u);
        *v23 = v22;
        v22[1] = v23;
        if ( v23 == v22 )
          _interlockedbittestandreset((volatile signed __int32 *)&v3->80, v4);
        LdrProtectMrdata(1);
        v24 = v30;
        v30 = v29;
        *v29 = v24;
        if ( LdrControlFlowGuardEnforced() )
        {
          RtlAcquireSRWLockExclusive((volatile signed __int32 *)&LdrpMrdataLock);
          v25 = *(_DWORD *)LdrpMrdataHeapUnprotected;
          if ( !*(_DWORD *)LdrpMrdataHeapUnprotected )
            goto LABEL_27;
          *(_DWORD *)LdrpMrdataHeapUnprotected = v25 - 1;
          if ( v25 == 1 )
            RtlProtectHeap((_DWORD *)LdrpMrdataHeap, 1);
          RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
        }
      }
      if ( v35 == -1 )
      {
        v5 = 1;
        break;
      }
    }
    RtlReleaseSRWLockExclusive(*v8);
    v18 = v30;
    if ( v30 )
    {
      if ( LdrControlFlowGuardEnforced() )
      {
        RtlAcquireSRWLockExclusive((volatile signed __int32 *)&LdrpMrdataLock);
        v20 = *(_DWORD *)LdrpMrdataHeapUnprotected;
        if ( *(_DWORD *)LdrpMrdataHeapUnprotected )
        {
          if ( v20 == -1 )
            goto LABEL_27;
        }
        else
        {
          RtlProtectHeap((_DWORD *)LdrpMrdataHeap, 0);
        }
        *(_DWORD *)LdrpMrdataHeapUnprotected = v20 + 1;
        RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
      }
      do
      {
        v26 = v18;
        v18 = (_QWORD *)*v18;
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, v26[2]);
        if ( LdrControlFlowGuardEnforced() )
          ProcessHeap = (void *)LdrpMrdataHeap;
        else
          ProcessHeap = NtCurrentPeb()->ProcessHeap;
        RtlFreeHeap(ProcessHeap, 0LL, v26);
      }
      while ( v18 );
      if ( !LdrControlFlowGuardEnforced() )
        return v5;
      RtlAcquireSRWLockExclusive((volatile signed __int32 *)&LdrpMrdataLock);
      v28 = *(_DWORD *)LdrpMrdataHeapUnprotected;
      if ( *(_DWORD *)LdrpMrdataHeapUnprotected )
      {
        *(_DWORD *)LdrpMrdataHeapUnprotected = v28 - 1;
        if ( v28 == 1 )
          RtlProtectHeap((_DWORD *)LdrpMrdataHeap, 1);
        RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
        return v5;
      }
LABEL_27:
      RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
      __fastfail(0xEu);
    }
  }
  return v5;
}
