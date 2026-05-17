/*
 * XREFs of TpAllocJobNotification @ 0x1800BF070
 * Callers:
 *     <none>
 * Callees:
 *     RtlAllocateHeap @ 0x180011260 (RtlAllocateHeap.c)
 *     TppCleanupGroupMemberInitialize @ 0x18001A830 (TppCleanupGroupMemberInitialize.c)
 *     TppCleanupGroupAddMember @ 0x18001C7C0 (TppCleanupGroupAddMember.c)
 *     TppCleanupGroupMemberDestroy @ 0x180021980 (TppCleanupGroupMemberDestroy.c)
 *     RtlFreeHeap @ 0x1800269F0 (RtlFreeHeap.c)
 *     TppRaiseInvalidParameter @ 0x18006B7F4 (TppRaiseInvalidParameter.c)
 *     TppGetCurrentThreadNumaNode @ 0x18006EE30 (TppGetCurrentThreadNumaNode.c)
 *     TpAdjustBindingCount @ 0x1800BF960 (TpAdjustBindingCount.c)
 *     ZwSetInformationJobObject @ 0x1801651A0 (ZwSetInformationJobObject.c)
 *     memset$thunk$772440563353939046 @ 0x180172030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall TpAllocJobNotification(unsigned __int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  int v5; // ebp
  void *Heap; // rax
  unsigned __int64 v11; // rbx
  int v12; // ebp
  __int64 v13; // rcx
  _DWORD *v14; // r15
  _BYTE *v15; // rbp
  __int64 v16; // r15
  _QWORD v18[2]; // [rsp+30h] [rbp-38h] BYREF
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
  Heap = (void *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, TppHeapTag + 3407872, 0x128uLL);
  v11 = (unsigned __int64)Heap;
  if ( !Heap )
    return 3221225495LL;
  memset_thunk_772440563353939046(Heap, 0, 0x128uLL);
  *(_QWORD *)(v11 + 248) = retaddr;
  v12 = TppCleanupGroupMemberInitialize(v11 + 72, a4, a5, v5, (__int64)TppJobpCleanupGroupMemberVFuncs);
  if ( v12 < 0 )
  {
LABEL_18:
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, TppHeapTag + 3407872, v11);
    return (unsigned int)v12;
  }
  v13 = *(_QWORD *)(v11 + 216);
  *(_QWORD *)(v11 + 152) = a3;
  v14 = (_DWORD *)(v11 + 64);
  *(_QWORD *)(v11 + 272) = a2;
  v15 = (_BYTE *)(v11 + 68);
  *(_QWORD *)(v11 + 56) = TppJobpExecuteCallback;
  if ( v13 )
  {
    TppGetCurrentThreadNumaNode(v13, (volatile signed __int32 **)(v11 + 64), (_BYTE *)(v11 + 68), 0LL);
  }
  else
  {
    *v14 = 0;
    *v15 = 0;
  }
  *(_QWORD *)(v11 + 32) = 0LL;
  *(_QWORD *)(v11 + 48) = v11 + 40;
  *(_QWORD *)(v11 + 40) = v11 + 40;
  v18[0] = v11;
  *(_QWORD *)v11 = TppDirectTaskVFuncs;
  *(_DWORD *)(v11 + 8) = *v14;
  *(_BYTE *)(v11 + 12) = *v15;
  v16 = *(_QWORD *)(v11 + 216);
  v18[1] = *(_QWORD *)(v16 + 64);
  v12 = ZwSetInformationJobObject(a2, 7LL, v18);
  if ( v12 < 0 )
  {
    TppCleanupGroupMemberDestroy((_QWORD *)(v11 + 72));
    goto LABEL_18;
  }
  TpAdjustBindingCount(v16, 1LL);
  _InterlockedIncrement((volatile signed __int32 *)(v11 + 72));
  *(_QWORD *)(v11 + 288) = 0LL;
  if ( a5 )
    *(_QWORD *)(v11 + 104) = *(_QWORD *)(a5 + 48);
  if ( *(_QWORD *)(v11 + 88) )
    TppCleanupGroupAddMember(v11 + 72);
  *a1 = v11;
  return 0LL;
}
