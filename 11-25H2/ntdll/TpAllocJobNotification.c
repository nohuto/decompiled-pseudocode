/*
 * XREFs of TpAllocJobNotification @ 0x1800FCCC0
 * Callers:
 *     <none>
 * Callees:
 *     TpAdjustBindingCount @ 0x18003B580 (TpAdjustBindingCount.c)
 *     TppGetCurrentThreadNumaNode @ 0x18003D250 (TppGetCurrentThreadNumaNode.c)
 *     TppRaiseInvalidParameter @ 0x18003EEE4 (TppRaiseInvalidParameter.c)
 *     TppCleanupGroupMemberDestroy @ 0x180043EC0 (TppCleanupGroupMemberDestroy.c)
 *     TppCleanupGroupAddMember @ 0x1800469E0 (TppCleanupGroupAddMember.c)
 *     TppCleanupGroupMemberInitialize @ 0x180048150 (TppCleanupGroupMemberInitialize.c)
 *     RtlAllocateHeap @ 0x180050340 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 *     ZwSetInformationJobObject @ 0x180166730 (ZwSetInformationJobObject.c)
 *     memset$thunk$772440563353939046 @ 0x180174030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall TpAllocJobNotification(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  int v5; // ebp
  void *Heap; // rax
  __int64 v11; // rbx
  int v12; // ebp
  __int64 v13; // r9
  __int64 v14; // rcx
  _DWORD *v15; // r15
  _BYTE *v16; // rbp
  __int64 v17; // r15
  _QWORD v19[2]; // [rsp+30h] [rbp-38h] BYREF
  _UNKNOWN *retaddr; // [rsp+68h] [rbp+0h]

  v5 = 0;
  if ( a5 )
    v5 = *(_DWORD *)(a5 + 56);
  if ( !a1 || !a3 || !a2 || (v5 & 0xFFFFFFFC) != 0 || NtCurrentPeb()->Ldr->ShutdownInProgress )
  {
    TppRaiseInvalidParameter();
    return 3221225485LL;
  }
  *a1 = 0LL;
  Heap = (void *)RtlAllocateHeap((char *)NtCurrentPeb()->ProcessHeap, TppHeapTag + 3407872, 0x128uLL);
  v11 = (__int64)Heap;
  if ( !Heap )
    return 3221225495LL;
  memset_thunk_772440563353939046(Heap, 0, 0x128uLL);
  *(_QWORD *)(v11 + 248) = retaddr;
  v12 = TppCleanupGroupMemberInitialize(v11 + 72, a4, a5, v5, (__int64)TppJobpCleanupGroupMemberVFuncs);
  if ( v12 < 0 )
  {
LABEL_18:
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, TppHeapTag + 3407872, v11, v13);
    return (unsigned int)v12;
  }
  v14 = *(_QWORD *)(v11 + 216);
  *(_QWORD *)(v11 + 152) = a3;
  v15 = (_DWORD *)(v11 + 64);
  *(_QWORD *)(v11 + 272) = a2;
  v16 = (_BYTE *)(v11 + 68);
  *(_QWORD *)(v11 + 56) = TppJobpExecuteCallback;
  if ( v14 )
  {
    TppGetCurrentThreadNumaNode(v14, (int *)(v11 + 64), (_BYTE *)(v11 + 68), 0LL);
  }
  else
  {
    *v15 = 0;
    *v16 = 0;
  }
  *(_QWORD *)(v11 + 32) = 0LL;
  *(_QWORD *)(v11 + 48) = v11 + 40;
  *(_QWORD *)(v11 + 40) = v11 + 40;
  v19[0] = v11;
  *(_QWORD *)v11 = TppDirectTaskVFuncs;
  *(_DWORD *)(v11 + 8) = *v15;
  *(_BYTE *)(v11 + 12) = *v16;
  v17 = *(_QWORD *)(v11 + 216);
  v19[1] = *(_QWORD *)(v17 + 64);
  v12 = ZwSetInformationJobObject(a2, 7LL, v19);
  if ( v12 < 0 )
  {
    TppCleanupGroupMemberDestroy((_QWORD *)(v11 + 72));
    goto LABEL_18;
  }
  TpAdjustBindingCount(v17, 1u);
  _InterlockedIncrement((volatile signed __int32 *)(v11 + 72));
  *(_QWORD *)(v11 + 288) = 0LL;
  if ( a5 )
    *(_QWORD *)(v11 + 104) = *(_QWORD *)(a5 + 48);
  if ( *(_QWORD *)(v11 + 88) )
    TppCleanupGroupAddMember(v11 + 72);
  *a1 = v11;
  return 0LL;
}
