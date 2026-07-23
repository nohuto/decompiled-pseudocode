/*
 * XREFs of TppAllocAlpcCompletion @ 0x18003A624
 * Callers:
 *     TpAllocAlpcCompletionEx @ 0x18003A600 (TpAllocAlpcCompletionEx.c)
 *     TpAllocAlpcCompletion @ 0x180110640 (TpAllocAlpcCompletion.c)
 * Callees:
 *     TpAdjustBindingCount @ 0x18003B580 (TpAdjustBindingCount.c)
 *     TppGetCurrentThreadNumaNode @ 0x18003D250 (TppGetCurrentThreadNumaNode.c)
 *     TppRaiseInvalidParameter @ 0x18003EEE4 (TppRaiseInvalidParameter.c)
 *     TppCleanupGroupMemberDestroy @ 0x180043EC0 (TppCleanupGroupMemberDestroy.c)
 *     TppCleanupGroupAddMember @ 0x1800469E0 (TppCleanupGroupAddMember.c)
 *     TppCleanupGroupMemberInitialize @ 0x180048150 (TppCleanupGroupMemberInitialize.c)
 *     RtlAllocateHeap @ 0x180050340 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 *     NtAlpcSetInformation @ 0x1801643F0 (NtAlpcSetInformation.c)
 */

__int64 __fastcall TppAllocAlpcCompletion(_PEB_LDR_DATA *Ldr, void *a2, __int64 a3, int a4, __int64 a5, char a6)
{
  _PEB_LDR_DATA *v8; // r13
  int v9; // ebx
  char *Heap; // rax
  char *v11; // rdi
  char *v12; // rsi
  __int64 v13; // rdx
  NTSTATUS v14; // ebx
  __int64 v15; // r8
  _PEB_LDR_DATA *v16; // rcx
  _DWORD *v17; // rbx
  char *v18; // r15
  __int64 v19; // r15
  int v21; // [rsp+30h] [rbp-48h]
  __int128 PortInformation; // [rsp+38h] [rbp-40h] BYREF
  _UNKNOWN *retaddr; // [rsp+78h] [rbp+0h]
  char *BaseAddress; // [rsp+80h] [rbp+8h]

  v8 = Ldr;
  if ( a5 )
    v9 = *(_DWORD *)(a5 + 56);
  else
    v9 = 0;
  if ( !Ldr || !a3 || !a2 || (v9 & 0xFFFFFFFC) != 0 || (Ldr = NtCurrentPeb()->Ldr, Ldr->ShutdownInProgress) )
  {
    TppRaiseInvalidParameter(Ldr, a2, a3);
    return 3221225485LL;
  }
  *(_QWORD *)&v8->Length = 0LL;
  Heap = (char *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, (TppHeapTag + 0x80000) | 8, 0x128uLL);
  v11 = Heap;
  BaseAddress = Heap;
  if ( Heap )
  {
    *((_QWORD *)Heap + 31) = retaddr;
    v12 = Heap + 72;
    v14 = TppCleanupGroupMemberInitialize((int)Heap + 72, a4, a5, v9, (__int64)TppAlpcpCleanupGroupMemberVFuncs);
    v21 = v14;
    if ( v14 >= 0 )
    {
      *((_QWORD *)v11 + 19) = a3;
      *((_DWORD *)v11 + 72) = *((_DWORD *)v11 + 72) & 0xFFFFFFFE | (a6 != 0);
      *((_QWORD *)v11 + 34) = a2;
      v16 = (_PEB_LDR_DATA *)*((_QWORD *)v11 + 27);
      *((_QWORD *)v11 + 7) = TppAlpcpExecuteCallback;
      v17 = v11 + 64;
      v18 = v11 + 68;
      if ( v16 )
      {
        TppGetCurrentThreadNumaNode(v16, v11 + 64, v11 + 68, 0LL);
      }
      else
      {
        *v17 = 0;
        *v18 = 0;
      }
      *((_QWORD *)v11 + 4) = 0LL;
      *((_QWORD *)v11 + 6) = v11 + 40;
      *((_QWORD *)v11 + 5) = v11 + 40;
      *(_QWORD *)v11 = &TppDirectTaskVFuncs;
      *((_DWORD *)v11 + 2) = *v17;
      v11[12] = *v18;
      v19 = *((_QWORD *)v11 + 27);
      PortInformation = 0LL;
      if ( v19 )
      {
        v16 = NtCurrentPeb()->Ldr;
        if ( !v16->ShutdownInProgress )
        {
          *((_QWORD *)&PortInformation + 1) = *(_QWORD *)(v19 + 64);
          v11 = BaseAddress;
          *(_QWORD *)&PortInformation = BaseAddress;
          v14 = NtAlpcSetInformation(a2, AlpcAssociateCompletionPortInformation, &PortInformation, 0x10u);
          if ( v14 >= 0 )
          {
            TpAdjustBindingCount(v19, 1LL);
            v14 = 0;
          }
          goto LABEL_16;
        }
        v11 = BaseAddress;
      }
      TppRaiseInvalidParameter(v16, v13, v15);
      v14 = -1073741811;
LABEL_16:
      v21 = v14;
      if ( v14 >= 0 )
      {
        v14 = 0;
        v21 = 0;
        if ( a5 )
          *((_QWORD *)v12 + 4) = *(_QWORD *)(a5 + 48);
        if ( *((_QWORD *)v12 + 2) )
          TppCleanupGroupAddMember(v12);
      }
      if ( v14 < 0 )
        TppCleanupGroupMemberDestroy(v12);
    }
  }
  else
  {
    v14 = -1073741801;
    v21 = -1073741801;
  }
  if ( v14 >= 0 )
    goto LABEL_28;
  if ( v11 )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, TppHeapTag + 0x80000, BaseAddress);
    v11 = 0LL;
    v14 = v21;
  }
  if ( v14 >= 0 )
LABEL_28:
    *(_QWORD *)&v8->Length = v11;
  return (unsigned int)v14;
}
