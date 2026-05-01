/*
 * XREFs of RmpWnfAllocateAndInitializePendingCallbackList @ 0x180066250
 * Callers:
 *     ?HampClientStart@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAT_RM_SID@@PEAXKKPEAU_HAM_CLIENT_CONNECTION_PARAMETERS@@@Z @ 0x18003D168 (-HampClientStart@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAT_RM_SID@@PEAXKKPEAU_HAM_CLIENT_CONNECTION_PARA.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RmpWnfAllocateAndInitializePendingCallbackList(_QWORD *a1)
{
  _QWORD *Heap; // rax
  _QWORD *v3; // rbx
  int v4; // edi
  __int64 v5; // rcx
  __int64 v7; // [rsp+38h] [rbp+10h] BYREF

  v7 = 0LL;
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x28uLL);
  v3 = Heap;
  if ( !Heap )
  {
    v4 = -1073741801;
    goto LABEL_4;
  }
  v4 = TpAllocWork(&v7, RmpWnfPublishMessageToClientStateNameWorker, Heap, 0LL);
  if ( v4 < 0 )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v3);
LABEL_4:
    v5 = v7;
    goto LABEL_5;
  }
  v3[2] = 0LL;
  v3[3] = 0LL;
  v3[4] = 0LL;
  v3[1] = v3;
  *v3 = v3;
  RtlInitializeSRWLock(v3 + 3);
  v3[2] = v7;
  v5 = 0LL;
  v7 = 0LL;
  *a1 = v3;
LABEL_5:
  if ( v5 )
    TpReleaseWork();
  return (unsigned int)v4;
}
