/*
 * XREFs of RtlpTpWorkCallback @ 0x18003D6C0
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180011660 (RtlGetCurrentServiceSessionId.c)
 *     RtlAcquireSRWLockExclusive @ 0x180011720 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseActivationContext @ 0x18001A130 (RtlReleaseActivationContext.c)
 *     RtlpTpWorkUnposted @ 0x18003DA30 (RtlpTpWorkUnposted.c)
 *     TpDereferenceGlobalPool @ 0x18003DB58 (TpDereferenceGlobalPool.c)
 *     RtlTpETWCallbackDequeue @ 0x18003DBB4 (RtlTpETWCallbackDequeue.c)
 *     RtlpTpETWCallbackStart @ 0x18003DC80 (RtlpTpETWCallbackStart.c)
 *     RtlpTpETWCallbackStop @ 0x18003DD48 (RtlpTpETWCallbackStop.c)
 *     RtlpTpImpersonate @ 0x18003DE10 (RtlpTpImpersonate.c)
 *     TpPoolReferenceExistingGlobalPool @ 0x18003E034 (TpPoolReferenceExistingGlobalPool.c)
 *     TppCompleteThreadData @ 0x1800406E0 (TppCompleteThreadData.c)
 *     RtlSetThreadSubProcessTag @ 0x180043C00 (RtlSetThreadSubProcessTag.c)
 *     TpCallbackMayRunLong @ 0x180043D00 (TpCallbackMayRunLong.c)
 *     LdrUnloadDll @ 0x1800475F0 (LdrUnloadDll.c)
 *     RtlDeactivateActivationContextUnsafeFast @ 0x18004E410 (RtlDeactivateActivationContextUnsafeFast.c)
 *     RtlAcquireSRWLockShared @ 0x18004F0C0 (RtlAcquireSRWLockShared.c)
 *     RtlActivateActivationContextUnsafeFast @ 0x180074EB0 (RtlActivateActivationContextUnsafeFast.c)
 *     NtSetInformationThread @ 0x1801633C0 (NtSetInformationThread.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall RtlpTpWorkCallback(__int64 a1, __int64 a2)
{
  __int64 v4; // r15
  __int64 v5; // r13
  __int64 v6; // rcx
  __int64 v7; // rax
  struct _TEB *(__fastcall *v8)(volatile signed __int32 *); // r12
  volatile signed __int32 *v9; // rdi
  __int64 v10; // r14
  __int64 v11; // rsi
  __int64 v12; // rcx
  void *SubProcessTag; // rdx
  _QWORD *ThreadPoolData; // rcx
  __int64 v15; // rax
  __int64 v16; // r8
  _QWORD v18[4]; // [rsp+30h] [rbp-A8h] BYREF
  _QWORD v19[2]; // [rsp+50h] [rbp-88h] BYREF
  __int128 v20; // [rsp+60h] [rbp-78h]
  __int128 v21; // [rsp+70h] [rbp-68h]
  __int128 v22; // [rsp+80h] [rbp-58h]
  __int64 v23; // [rsp+90h] [rbp-48h]
  volatile signed __int32 *v24; // [rsp+E8h] [rbp+10h]
  struct _TEB *(__fastcall **v25)(volatile signed __int32 *); // [rsp+F0h] [rbp+18h]

  v19[0] = 72LL;
  v19[1] = 1LL;
  v20 = 0LL;
  v21 = 0LL;
  v22 = 0LL;
  v23 = 0LL;
  v4 = 0LL;
  v5 = 2147353478LL;
  if ( (unsigned int)RtlGetCurrentServiceSessionId() )
    v6 = (__int64)NtCurrentPeb()->SharedData + 556;
  else
    v6 = 2147353478LL;
  if ( *(_BYTE *)v6 )
    RtlTpETWCallbackDequeue(v6, a2, *(_QWORD *)(a2 + 56), *(_QWORD *)(a2 + 64), *(_QWORD *)(a2 + 96));
  if ( (*(_DWORD *)(a2 + 48) & 0xD0) == 0x10 )
  {
    v7 = *(_QWORD *)(a2 + 32);
    if ( !v7 )
    {
      v7 = TpPoolReferenceExistingGlobalPool();
      v4 = v7;
    }
    *(_QWORD *)(a1 + 128) = v7;
    TpCallbackMayRunLong(a1);
  }
  if ( *(_QWORD *)(a2 + 40) )
    RtlpTpImpersonate();
  v8 = *(struct _TEB *(__fastcall **)(volatile signed __int32 *))(a2 + 56);
  v24 = *(volatile signed __int32 **)(a2 + 64);
  v9 = *(volatile signed __int32 **)(a2 + 72);
  v18[1] = v9;
  v10 = *(_QWORD *)(a2 + 80);
  v18[2] = v10;
  v11 = *(_QWORD *)(a2 + 96);
  v18[3] = v11;
  if ( v11 )
    RtlSetThreadSubProcessTag(v11);
  NtCurrentTeb()->ActivityId = *(_GUID *)(a2 + 104);
  if ( v9 != (volatile signed __int32 *)-1LL )
    *(_QWORD *)(a2 + 72) = -1LL;
  if ( v10 )
    *(_QWORD *)(a2 + 80) = 0LL;
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a2 + 88), 0xFFFFFFFF) == 1 )
    RtlpTpWorkUnposted(a2, *(_QWORD *)(a2 + 32));
  if ( v9 != (volatile signed __int32 *)-1LL )
    RtlActivateActivationContextUnsafeFast(v19, v9);
  if ( (unsigned int)RtlGetCurrentServiceSessionId() )
    v12 = (__int64)NtCurrentPeb()->SharedData + 556;
  else
    v12 = 2147353478LL;
  if ( *(_BYTE *)v12 )
    RtlpTpETWCallbackStart(0, a2, (_DWORD)v8, (_DWORD)v24, v11);
  SubProcessTag = NtCurrentTeb()->SubProcessTag;
  ThreadPoolData = NtCurrentTeb()->ThreadPoolData;
  if ( ThreadPoolData )
  {
    ++ThreadPoolData[2];
    v15 = ((unsigned __int8)*((_DWORD *)ThreadPoolData + 3) - 1) & 1;
    *((_DWORD *)ThreadPoolData + 3) = v15;
    v16 = (unsigned int)v15;
    v15 *= 32LL;
    v25 = (struct _TEB *(__fastcall **)(volatile signed __int32 *))((char *)ThreadPoolData + v15 + 32);
    *v25 = v8;
    *(_QWORD *)((char *)ThreadPoolData + v15 + 40) = v24;
    *(_QWORD *)((char *)ThreadPoolData + v15 + 48) = SubProcessTag;
    ThreadPoolData[4 * v16 + 7] = MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0];
  }
  else
  {
    v25 = 0LL;
  }
  if ( v8 == RtlAcquireSRWLockExclusive )
  {
    RtlAcquireSRWLockExclusive(v24);
  }
  else if ( (char *)v8 == (char *)RtlAcquireSRWLockShared )
  {
    RtlAcquireSRWLockShared(v24);
  }
  else
  {
    v8(v24);
  }
  if ( v9 != (volatile signed __int32 *)-1LL )
  {
    RtlDeactivateActivationContextUnsafeFast(v19);
    RtlReleaseActivationContext(v9);
  }
  if ( v10 )
    LdrUnloadDll(v10);
  if ( NtCurrentTeb()->IsImpersonating )
  {
    v18[0] = 0LL;
    NtSetInformationThread(-2LL, 5LL, v18);
  }
  if ( v4 )
    TpDereferenceGlobalPool(v4);
  if ( v11 )
    RtlSetThreadSubProcessTag(0LL);
  if ( (unsigned int)RtlGetCurrentServiceSessionId() )
    v5 = (__int64)NtCurrentPeb()->SharedData + 556;
  if ( *(_BYTE *)v5 )
    RtlpTpETWCallbackStop(0, a2, (_DWORD)v8, (_DWORD)v24, v11);
  return TppCompleteThreadData(v25);
}
