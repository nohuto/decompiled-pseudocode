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

__int64 __fastcall TpAllocJobNotification(_QWORD *a1, void *a2, __int64 a3, __int64 a4, __int64 a5)
{
  int v5; // ebp
  _QWORD *Heap; // rax
  _QWORD *v11; // rbx
  int v12; // ebp
  __int64 v13; // rcx
  _DWORD *v14; // r15
  _BYTE *v15; // rbp
  __int64 v16; // r15
  _QWORD JobObjectInformation[2]; // [rsp+30h] [rbp-38h] BYREF
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
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, TppHeapTag + 3407872, 0x128uLL);
  v11 = Heap;
  if ( !Heap )
    return 3221225495LL;
  memset_thunk_772440563353939046(Heap, 0, 0x128uLL);
  v11[31] = retaddr;
  v12 = TppCleanupGroupMemberInitialize((__int64)(v11 + 9), a4, a5, v5, (__int64)TppJobpCleanupGroupMemberVFuncs);
  if ( v12 < 0 )
  {
LABEL_18:
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, TppHeapTag + 3407872, v11);
    return (unsigned int)v12;
  }
  v13 = v11[27];
  v11[19] = a3;
  v14 = v11 + 8;
  v11[34] = a2;
  v15 = (char *)v11 + 68;
  v11[7] = TppJobpExecuteCallback;
  if ( v13 )
  {
    TppGetCurrentThreadNumaNode(v13, (int *)v11 + 16, (_BYTE *)v11 + 68, 0LL);
  }
  else
  {
    *v14 = 0;
    *v15 = 0;
  }
  v11[4] = 0LL;
  v11[6] = v11 + 5;
  v11[5] = v11 + 5;
  JobObjectInformation[0] = v11;
  *v11 = &TppDirectTaskVFuncs;
  *((_DWORD *)v11 + 2) = *v14;
  *((_BYTE *)v11 + 12) = *v15;
  v16 = v11[27];
  JobObjectInformation[1] = *(_QWORD *)(v16 + 64);
  v12 = ZwSetInformationJobObject(a2, JobObjectAssociateCompletionPortInformation, JobObjectInformation, 0x10u);
  if ( v12 < 0 )
  {
    TppCleanupGroupMemberDestroy(v11 + 9);
    goto LABEL_18;
  }
  TpAdjustBindingCount(v16, 1u);
  _InterlockedIncrement((volatile signed __int32 *)v11 + 18);
  v11[36] = 0LL;
  if ( a5 )
    v11[13] = *(_QWORD *)(a5 + 48);
  if ( v11[11] )
    TppCleanupGroupAddMember((__int64)(v11 + 9));
  *a1 = v11;
  return 0LL;
}
