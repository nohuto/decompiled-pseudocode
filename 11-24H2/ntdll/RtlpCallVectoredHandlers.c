/*
 * XREFs of RtlpCallVectoredHandlers @ 0x180019DC0
 * Callers:
 *     RtlDispatchException @ 0x180019060 (RtlDispatchException.c)
 * Callees:
 *     LdrProtectMrdata @ 0x180007080 (LdrProtectMrdata.c)
 *     LdrControlFlowGuardEnforced @ 0x180009CF0 (LdrControlFlowGuardEnforced.c)
 *     RtlDecodePointer @ 0x18001A440 (RtlDecodePointer.c)
 *     RtlFreeHeap @ 0x1800269F0 (RtlFreeHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x180055AE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800567B0 (RtlReleaseSRWLockExclusive.c)
 *     RtlProtectHeap @ 0x18009C280 (RtlProtectHeap.c)
 *     RtlpLogExceptionHandler @ 0x1800F0924 (RtlpLogExceptionHandler.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180172020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall RtlpCallVectoredHandlers(__int64 a1, __int64 a2, unsigned int a3)
{
  struct _PEB *v3; // rsi
  unsigned int v4; // ebp
  unsigned __int8 v5; // bl
  _QWORD *v8; // rdi
  unsigned int CrossProcessFlags; // eax
  __int64 **v10; // r14
  __int64 v11; // rcx
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
  __int64 v25; // rdx
  int v26; // ecx
  _QWORD *v27; // rsi
  void *ProcessHeap; // rcx
  int v29; // edx
  bool v30; // zf
  __int64 v31; // rdx
  _QWORD *v32; // [rsp+20h] [rbp-68h]
  _QWORD *v33; // [rsp+28h] [rbp-60h]
  __int64 v34; // [rsp+30h] [rbp-58h]
  volatile signed __int64 **v35; // [rsp+38h] [rbp-50h]
  _QWORD v36[9]; // [rsp+40h] [rbp-48h] BYREF
  __int64 (__fastcall *v37)(_QWORD *); // [rsp+A8h] [rbp+20h]
  int v38; // [rsp+A8h] [rbp+20h]

  v3 = NtCurrentPeb();
  v4 = a3 + 2;
  v5 = 0;
  v8 = &LdrpVectorHandlerList + 3 * a3;
  CrossProcessFlags = v3->CrossProcessFlags;
  v10 = (__int64 **)(v8 + 1);
  if ( _bittest((const int *)&CrossProcessFlags, a3 + 2) )
  {
    v36[0] = a1;
    v11 = *v8;
    v36[1] = a2;
    v33 = 0LL;
    RtlAcquireSRWLockExclusive(v11);
    v12 = *v10;
    while ( v12 != (__int64 *)v10 )
    {
      v32 = v12;
      v35 = (volatile signed __int64 **)(v12 + 2);
      if ( _InterlockedIncrement64((volatile signed __int64 *)v12[2]) <= 1 )
        __fastfail(0xEu);
      RtlReleaseSRWLockExclusive(*v8);
      v13 = (__int64 (__fastcall *)(_QWORD *))RtlDecodePointer(v12[4]);
      v37 = v13;
      v34 = 0LL;
      if ( (v3->NtGlobalFlag & 0x800000) != 0 )
      {
        v34 = RtlpLogExceptionHandler(a1, a2, 0LL, v13);
        v14 = v37(v36);
      }
      else
      {
        v14 = v13(v36);
      }
      v38 = v14;
      if ( v34 )
        *(_DWORD *)(v34 + 1396) = v14 != -1;
      RtlAcquireSRWLockExclusive(*v8);
      v12 = (__int64 *)*v12;
      v15 = _InterlockedExchangeAdd64(*v35, 0xFFFFFFFFFFFFFFFFuLL);
      v16 = v15 <= 1;
      v17 = v15 - 1;
      if ( v16 )
      {
        if ( v17 )
          __fastfail(0xEu);
        if ( !*((_DWORD *)v32 + 6) )
          __fastfail(0x3Cu);
        if ( LdrControlFlowGuardEnforced() )
        {
          RtlAcquireSRWLockExclusive(&LdrpMrdataLock);
          v21 = *(_DWORD *)LdrpMrdataHeapUnprotected;
          if ( *(_DWORD *)LdrpMrdataHeapUnprotected )
          {
            if ( v21 == -1 )
              goto LABEL_27;
          }
          else
          {
            RtlProtectHeap(LdrpMrdataHeap, 0LL);
            v21 = 0;
          }
          *(_DWORD *)LdrpMrdataHeapUnprotected = v21 + 1;
          RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
        }
        LdrProtectMrdata(0);
        v22 = (_QWORD *)*v32;
        if ( *(_QWORD **)(*v32 + 8LL) != v32 || (v23 = (_QWORD *)v32[1], (_QWORD *)*v23 != v32) )
          __fastfail(3u);
        *v23 = v22;
        v22[1] = v23;
        if ( v23 == v22 )
          _interlockedbittestandreset((volatile signed __int32 *)&v3->80, v4);
        LdrProtectMrdata(1);
        v24 = v33;
        v33 = v32;
        *v32 = v24;
        if ( LdrControlFlowGuardEnforced() )
        {
          RtlAcquireSRWLockExclusive(&LdrpMrdataLock);
          v26 = *(_DWORD *)LdrpMrdataHeapUnprotected;
          if ( !*(_DWORD *)LdrpMrdataHeapUnprotected )
            goto LABEL_27;
          *(_DWORD *)LdrpMrdataHeapUnprotected = v26 - 1;
          if ( v26 == 1 )
          {
            LOBYTE(v25) = 1;
            RtlProtectHeap(LdrpMrdataHeap, v25);
          }
          RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
        }
      }
      if ( v38 == -1 )
      {
        v5 = 1;
        break;
      }
    }
    RtlReleaseSRWLockExclusive(*v8);
    v18 = v33;
    if ( v33 )
    {
      if ( LdrControlFlowGuardEnforced() )
      {
        RtlAcquireSRWLockExclusive(&LdrpMrdataLock);
        v20 = *(_DWORD *)LdrpMrdataHeapUnprotected;
        if ( *(_DWORD *)LdrpMrdataHeapUnprotected )
        {
          if ( v20 == -1 )
            goto LABEL_27;
        }
        else
        {
          RtlProtectHeap(LdrpMrdataHeap, 0LL);
        }
        *(_DWORD *)LdrpMrdataHeapUnprotected = v20 + 1;
        RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
      }
      do
      {
        v27 = v18;
        v18 = (_QWORD *)*v18;
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, v27[2]);
        if ( LdrControlFlowGuardEnforced() )
          ProcessHeap = (void *)LdrpMrdataHeap;
        else
          ProcessHeap = NtCurrentPeb()->ProcessHeap;
        RtlFreeHeap(ProcessHeap, 0LL, v27);
      }
      while ( v18 );
      if ( !LdrControlFlowGuardEnforced() )
        return v5;
      RtlAcquireSRWLockExclusive(&LdrpMrdataLock);
      v29 = *(_DWORD *)LdrpMrdataHeapUnprotected;
      if ( *(_DWORD *)LdrpMrdataHeapUnprotected )
      {
        v30 = v29 == 1;
        v31 = (unsigned int)(v29 - 1);
        *(_DWORD *)LdrpMrdataHeapUnprotected = v31;
        if ( v30 )
        {
          LOBYTE(v31) = 1;
          RtlProtectHeap(LdrpMrdataHeap, v31);
        }
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
