/*
 * XREFs of HamConnectForExtendedExecution @ 0x180004330
 * Callers:
 *     <none>
 * Callees:
 *     CempLockInitialize @ 0x180004440 (CempLockInitialize.c)
 *     HampConnectionAllocateState @ 0x180004640 (HampConnectionAllocateState.c)
 *     HampConnectionStart @ 0x180004BF0 (HampConnectionStart.c)
 *     HamIpcChannelInitialize @ 0x180004D08 (HamIpcChannelInitialize.c)
 *     HampConnectionDestroy @ 0x180004D70 (HampConnectionDestroy.c)
 *     memset_0 @ 0x18001C1CE (memset_0.c)
 */

__int64 __fastcall HamConnectForExtendedExecution(unsigned __int64 a1, _QWORD *a2)
{
  unsigned int v2; // ebx
  char *Heap; // rax
  char *v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  int State; // esi
  __int128 v11; // [rsp+20h] [rbp-18h]

  v2 = 0;
  if ( a1 )
  {
    v11 = a1;
    Heap = (char *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0xA0uLL);
    v5 = Heap;
    if ( Heap )
    {
      memset_0(Heap, 0, 0xA0uLL);
      CempLockInitialize(v5 + 120);
      *(_OWORD *)(v5 + 104) = v11;
      if ( &unk_18001E7E0 == &unk_18001EC50 )
        v5[156] = 0;
      else
        v5[156] = 2;
      HamIpcChannelInitialize(v7, v6, v8, v5 + 24);
      State = HampConnectionAllocateState(v5, &unk_18001E7E0, 0LL, 0LL);
      if ( State < 0 || (State = HampConnectionStart(v5), State < 0) )
      {
        HampConnectionDestroy(v5);
        return (unsigned int)State;
      }
      else
      {
        *a2 = v5;
      }
    }
    else
    {
      return (unsigned int)-1073741801;
    }
  }
  else
  {
    return (unsigned int)-1073741585;
  }
  return v2;
}
