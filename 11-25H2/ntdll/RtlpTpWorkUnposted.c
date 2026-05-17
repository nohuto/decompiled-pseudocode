/*
 * XREFs of RtlpTpWorkUnposted @ 0x18003DA30
 * Callers:
 *     RtlQueueWorkItem @ 0x18003BEE0 (RtlQueueWorkItem.c)
 *     RtlpTpWorkCallback @ 0x18003D6C0 (RtlpTpWorkCallback.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180011660 (RtlGetCurrentServiceSessionId.c)
 *     RtlReleaseActivationContext @ 0x18001A130 (RtlReleaseActivationContext.c)
 *     RtlTpETWCallbackDequeue @ 0x18003DBB4 (RtlTpETWCallbackDequeue.c)
 *     RtlpTpDeleteData @ 0x18003DF64 (RtlpTpDeleteData.c)
 *     TppPoolpDereferenceGlobalPool @ 0x18003DF80 (TppPoolpDereferenceGlobalPool.c)
 *     LdrUnloadDll @ 0x1800475F0 (LdrUnloadDll.c)
 *     TppPoolpFree @ 0x1800A09A4 (TppPoolpFree.c)
 */

__int64 __fastcall RtlpTpWorkUnposted(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  int v5; // eax
  volatile signed __int32 *v6; // rcx
  __int64 v7; // rdx
  void *v8; // rdx
  __int64 *v9; // rcx
  volatile signed __int32 *v10; // rcx
  __int64 v11; // rcx

  if ( (unsigned int)RtlGetCurrentServiceSessionId() )
    v4 = (__int64)NtCurrentPeb()->SharedData + 556;
  else
    v4 = 2147353478LL;
  if ( *(_BYTE *)v4 )
    RtlTpETWCallbackDequeue(v4, a1, *(_QWORD *)(a1 + 56), *(_QWORD *)(a1 + 64), *(_QWORD *)(a1 + 96));
  v5 = 0;
  if ( !a2 && (*(_BYTE *)(a1 + 48) & 0xC0) != 0 )
    v5 = 2;
  v6 = *(volatile signed __int32 **)(a1 + 32);
  v7 = TppPoolpSerializedPool;
  if ( !v6 )
  {
    v6 = (volatile signed __int32 *)TppPoolpGlobalPool;
    if ( v5 )
      v6 = (volatile signed __int32 *)TppPoolpSerializedPool;
  }
  if ( v6 == (volatile signed __int32 *)TppPoolpGlobalPool )
  {
    v8 = &TppPoolpGlobalPoolLock;
    v9 = &TppPoolpGlobalPool;
LABEL_16:
    TppPoolpDereferenceGlobalPool(v9, v8);
    goto LABEL_17;
  }
  if ( v6 == (volatile signed __int32 *)TppPoolpSerializedPool )
  {
    v8 = &TppPoolpSerializedPoolLock;
    v9 = &TppPoolpSerializedPool;
    goto LABEL_16;
  }
  if ( _InterlockedExchangeAdd(v6, 0xFFFFFFFF) == 1 )
    TppPoolpFree(v6, v7);
LABEL_17:
  RtlpTpDeleteData(a1 + 40);
  v10 = *(volatile signed __int32 **)(a1 + 72);
  if ( v10 != (volatile signed __int32 *)-1LL )
    RtlReleaseActivationContext(v10);
  v11 = *(_QWORD *)(a1 + 80);
  if ( v11 )
    LdrUnloadDll(v11);
  return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, a1);
}
