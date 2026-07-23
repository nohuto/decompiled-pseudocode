/*
 * XREFs of TppAllocAlpcCompletion @ 0x1800B7134
 * Callers:
 *     TpAllocAlpcCompletion @ 0x1800B7080 (TpAllocAlpcCompletion.c)
 *     TpAllocAlpcCompletionEx @ 0x1800B7110 (TpAllocAlpcCompletionEx.c)
 * Callees:
 *     RtlAllocateHeap @ 0x18003DC60 (RtlAllocateHeap.c)
 *     TppCleanupGroupMemberInitialize @ 0x180047230 (TppCleanupGroupMemberInitialize.c)
 *     TppCleanupGroupAddMember @ 0x1800491C0 (TppCleanupGroupAddMember.c)
 *     TppCleanupGroupMemberDestroy @ 0x18004E380 (TppCleanupGroupMemberDestroy.c)
 *     RtlFreeHeap @ 0x1800533F0 (RtlFreeHeap.c)
 *     TppRaiseInvalidParameter @ 0x1800880D4 (TppRaiseInvalidParameter.c)
 *     TppGetCurrentThreadNumaNode @ 0x18008B710 (TppGetCurrentThreadNumaNode.c)
 *     TpAdjustBindingCount @ 0x1800B7720 (TpAdjustBindingCount.c)
 *     NtAlpcSetInformation @ 0x180161220 (NtAlpcSetInformation.c)
 */

__int64 __fastcall TppAllocAlpcCompletion(_QWORD *a1, void *a2, __int64 a3, __int64 a4, __int64 a5, char a6)
{
  int v9; // ebx
  _QWORD *Heap; // rax
  _QWORD *v11; // rdi
  _QWORD *v12; // rsi
  int v13; // ebx
  __int64 v14; // rcx
  _DWORD *v15; // rbx
  _BYTE *v16; // r15
  __int64 v17; // r15
  int v19; // [rsp+30h] [rbp-48h]
  __int128 PortInformation; // [rsp+38h] [rbp-40h] BYREF
  _UNKNOWN *retaddr; // [rsp+78h] [rbp+0h]
  _QWORD *BaseAddress; // [rsp+80h] [rbp+8h]

  if ( a5 )
    v9 = *(_DWORD *)(a5 + 56);
  else
    v9 = 0;
  if ( !a1 || !a3 || !a2 || (v9 & 0xFFFFFFFC) != 0 || NtCurrentPeb()->Ldr->ShutdownInProgress )
  {
    TppRaiseInvalidParameter();
    return 3221225485LL;
  }
  *a1 = 0LL;
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, (TppHeapTag + 0x80000) | 8, 0x128uLL);
  v11 = Heap;
  BaseAddress = Heap;
  if ( Heap )
  {
    Heap[31] = retaddr;
    v12 = Heap + 9;
    v13 = TppCleanupGroupMemberInitialize((__int64)(Heap + 9), a4, a5, v9, (__int64)TppAlpcpCleanupGroupMemberVFuncs);
    v19 = v13;
    if ( v13 >= 0 )
    {
      v11[19] = a3;
      *((_DWORD *)v11 + 72) = v11[36] & 0xFFFFFFFE | (a6 != 0);
      v11[34] = a2;
      v14 = v11[27];
      v11[7] = TppAlpcpExecuteCallback;
      v15 = v11 + 8;
      v16 = (char *)v11 + 68;
      if ( v14 )
      {
        TppGetCurrentThreadNumaNode(v14, (int *)v11 + 16, (_BYTE *)v11 + 68, 0LL);
      }
      else
      {
        *v15 = 0;
        *v16 = 0;
      }
      v11[4] = 0LL;
      v11[6] = v11 + 5;
      v11[5] = v11 + 5;
      *v11 = &TppDirectTaskVFuncs;
      *((_DWORD *)v11 + 2) = *v15;
      *((_BYTE *)v11 + 12) = *v16;
      v17 = v11[27];
      PortInformation = 0LL;
      if ( v17 )
      {
        if ( !NtCurrentPeb()->Ldr->ShutdownInProgress )
        {
          *((_QWORD *)&PortInformation + 1) = *(_QWORD *)(v17 + 64);
          v11 = BaseAddress;
          *(_QWORD *)&PortInformation = BaseAddress;
          v13 = NtAlpcSetInformation(a2, AlpcAssociateCompletionPortInformation, &PortInformation, 0x10u);
          if ( v13 >= 0 )
          {
            TpAdjustBindingCount(v17, 1LL);
            v13 = 0;
          }
          goto LABEL_16;
        }
        v11 = BaseAddress;
      }
      TppRaiseInvalidParameter();
      v13 = -1073741811;
LABEL_16:
      v19 = v13;
      if ( v13 >= 0 )
      {
        v13 = 0;
        v19 = 0;
        if ( a5 )
          v12[4] = *(_QWORD *)(a5 + 48);
        if ( v12[2] )
          TppCleanupGroupAddMember((__int64)v12);
      }
      if ( v13 < 0 )
        TppCleanupGroupMemberDestroy(v12);
    }
  }
  else
  {
    v13 = -1073741801;
    v19 = -1073741801;
  }
  if ( v13 >= 0 )
    goto LABEL_28;
  if ( v11 )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, TppHeapTag + 0x80000, BaseAddress);
    v11 = 0LL;
    v13 = v19;
  }
  if ( v13 >= 0 )
LABEL_28:
    *a1 = v11;
  return (unsigned int)v13;
}
