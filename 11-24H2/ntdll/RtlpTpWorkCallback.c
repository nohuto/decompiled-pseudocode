/*
 * XREFs of RtlpTpWorkCallback @ 0x18006F790
 * Callers:
 *     <none>
 * Callees:
 *     RtlDeactivateActivationContextUnsafeFast @ 0x18000F570 (RtlDeactivateActivationContextUnsafeFast.c)
 *     RtlAcquireSRWLockShared @ 0x180010220 (RtlAcquireSRWLockShared.c)
 *     LdrUnloadDll @ 0x18001B6B0 (LdrUnloadDll.c)
 *     TppCompleteThreadData @ 0x18001F420 (TppCompleteThreadData.c)
 *     TpCallbackMayRunLong @ 0x180022040 (TpCallbackMayRunLong.c)
 *     RtlSetThreadSubProcessTag @ 0x180022160 (RtlSetThreadSubProcessTag.c)
 *     RtlGetCurrentServiceSessionId @ 0x180055A20 (RtlGetCurrentServiceSessionId.c)
 *     RtlAcquireSRWLockExclusive @ 0x180055AE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseActivationContext @ 0x18005E4D0 (RtlReleaseActivationContext.c)
 *     RtlpTpImpersonate @ 0x18006F310 (RtlpTpImpersonate.c)
 *     RtlpTpETWCallbackStop @ 0x18006F39C (RtlpTpETWCallbackStop.c)
 *     RtlpTpETWCallbackStart @ 0x18006F464 (RtlpTpETWCallbackStart.c)
 *     RtlTpETWCallbackDequeue @ 0x18006F52C (RtlTpETWCallbackDequeue.c)
 *     TpDereferenceGlobalPool @ 0x18006F5F8 (TpDereferenceGlobalPool.c)
 *     RtlpTpWorkUnposted @ 0x18006F660 (RtlpTpWorkUnposted.c)
 *     RtlActivateActivationContextUnsafeFast @ 0x1800703A0 (RtlActivateActivationContextUnsafeFast.c)
 *     TpPoolReferenceExistingGlobalPool @ 0x1800EE0C8 (TpPoolReferenceExistingGlobalPool.c)
 *     NtSetInformationThread @ 0x180161E30 (NtSetInformationThread.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180172020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall RtlpTpWorkCallback(__int64 a1, unsigned __int64 a2)
{
  __int64 v4; // r15
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // r13
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rcx
  void (__fastcall *v12)(volatile signed __int32 *); // r12
  volatile signed __int32 *v13; // rdi
  unsigned __int64 v14; // r14
  void *v15; // rsi
  unsigned __int64 v16; // r8
  __int64 v17; // rcx
  volatile signed __int32 **SubProcessTag; // rdx
  _QWORD *ThreadPoolData; // rcx
  __int64 v20; // rax
  __int64 v21; // r8
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  _QWORD v25[4]; // [rsp+30h] [rbp-A8h] BYREF
  _QWORD v26[2]; // [rsp+50h] [rbp-88h] BYREF
  __int128 v27; // [rsp+60h] [rbp-78h]
  __int128 v28; // [rsp+70h] [rbp-68h]
  __int128 v29; // [rsp+80h] [rbp-58h]
  __int64 v30; // [rsp+90h] [rbp-48h]
  volatile signed __int32 *v31; // [rsp+E8h] [rbp+10h]
  void (__fastcall **v32)(volatile signed __int32 *); // [rsp+F0h] [rbp+18h]

  v26[0] = 72LL;
  v26[1] = 1LL;
  v27 = 0LL;
  v28 = 0LL;
  v29 = 0LL;
  v30 = 0LL;
  v4 = 0LL;
  v8 = 2147353478LL;
  if ( (unsigned int)RtlGetCurrentServiceSessionId() )
    v9 = (__int64)NtCurrentPeb()->SharedData + 556;
  else
    v9 = 2147353478LL;
  if ( *(_BYTE *)v9 )
    RtlTpETWCallbackDequeue(v9, a2, *(_QWORD *)(a2 + 56), *(_QWORD *)(a2 + 64), *(_QWORD *)(a2 + 96));
  if ( (*(_DWORD *)(a2 + 48) & 0xD0) == 0x10 )
  {
    v10 = *(_QWORD *)(a2 + 32);
    if ( !v10 )
    {
      v10 = TpPoolReferenceExistingGlobalPool();
      v4 = v10;
    }
    *(_QWORD *)(a1 + 128) = v10;
    TpCallbackMayRunLong(a1);
  }
  v11 = *(_QWORD *)(a2 + 40);
  if ( v11 )
    RtlpTpImpersonate(v11);
  v12 = *(void (__fastcall **)(volatile signed __int32 *))(a2 + 56);
  v31 = *(volatile signed __int32 **)(a2 + 64);
  v13 = *(volatile signed __int32 **)(a2 + 72);
  v25[1] = v13;
  v14 = *(_QWORD *)(a2 + 80);
  v25[2] = v14;
  v15 = *(void **)(a2 + 96);
  v25[3] = v15;
  if ( v15 )
    RtlSetThreadSubProcessTag(v15, v5, v6, v7);
  NtCurrentTeb()->ActivityId = *(_GUID *)(a2 + 104);
  if ( v13 != (volatile signed __int32 *)-1LL )
    *(_QWORD *)(a2 + 72) = -1LL;
  if ( v14 )
    *(_QWORD *)(a2 + 80) = 0LL;
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a2 + 88), 0xFFFFFFFF) == 1 )
    RtlpTpWorkUnposted(a2, *(_QWORD *)(a2 + 32));
  if ( v13 != (volatile signed __int32 *)-1LL )
    RtlActivateActivationContextUnsafeFast(v26, v13);
  if ( (unsigned int)RtlGetCurrentServiceSessionId() )
    v17 = (__int64)NtCurrentPeb()->SharedData + 556;
  else
    v17 = 2147353478LL;
  if ( *(_BYTE *)v17 )
    RtlpTpETWCallbackStart(0LL, a2, (__int64)v12, (__int64)v31, (__int64)v15);
  SubProcessTag = (volatile signed __int32 **)NtCurrentTeb()->SubProcessTag;
  ThreadPoolData = NtCurrentTeb()->ThreadPoolData;
  if ( ThreadPoolData )
  {
    ++ThreadPoolData[2];
    v20 = ((unsigned __int8)*((_DWORD *)ThreadPoolData + 3) - 1) & 1;
    *((_DWORD *)ThreadPoolData + 3) = v20;
    v21 = (unsigned int)v20;
    v20 *= 32LL;
    v32 = (void (__fastcall **)(volatile signed __int32 *))((char *)ThreadPoolData + v20 + 32);
    *v32 = v12;
    *(_QWORD *)((char *)ThreadPoolData + v20 + 40) = v31;
    *(_QWORD *)((char *)ThreadPoolData + v20 + 48) = SubProcessTag;
    SubProcessTag = (volatile signed __int32 **)(MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0]);
    v16 = 4 * v21;
    ThreadPoolData[v16 + 7] = MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0];
  }
  else
  {
    v32 = 0LL;
  }
  if ( (char *)v12 == (char *)RtlAcquireSRWLockExclusive )
  {
    RtlAcquireSRWLockExclusive(v31, SubProcessTag, v16 * 8);
  }
  else if ( (char *)v12 == (char *)RtlAcquireSRWLockShared )
  {
    RtlAcquireSRWLockShared((volatile signed __int64 *)v31);
  }
  else
  {
    v12(v31);
  }
  if ( v13 != (volatile signed __int32 *)-1LL )
  {
    RtlDeactivateActivationContextUnsafeFast((__int64)v26);
    RtlReleaseActivationContext(v13);
  }
  if ( v14 )
    LdrUnloadDll(v14);
  if ( NtCurrentTeb()->IsImpersonating )
  {
    v25[0] = 0LL;
    NtSetInformationThread(-2LL, 5LL, v25);
  }
  if ( v4 )
    TpDereferenceGlobalPool(v4);
  if ( v15 )
    RtlSetThreadSubProcessTag(0LL, v22, v23, v24);
  if ( (unsigned int)RtlGetCurrentServiceSessionId() )
    v8 = (__int64)NtCurrentPeb()->SharedData + 556;
  if ( *(_BYTE *)v8 )
    RtlpTpETWCallbackStop(0LL, a2, (__int64)v12, (__int64)v31, (__int64)v15);
  TppCompleteThreadData((__int64)v32);
}
