/*
 * XREFs of HamConnectForServicing @ 0x180004240
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

__int64 __fastcall HamConnectForServicing(_QWORD *a1)
{
  _BYTE *Heap; // rax
  unsigned int v3; // edi
  _BYTE *v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  int State; // esi

  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0xA0uLL);
  v3 = 0;
  v4 = Heap;
  if ( Heap )
  {
    memset_0(Heap, 0, 0xA0uLL);
    CempLockInitialize(v4 + 120);
    if ( &unk_18001E840 == &unk_18001EC50 )
    {
      v4[156] = 0;
      HamIpcChannelInitialize(v6, v5, v7, v4 + 24);
    }
    else
    {
      v4[156] = 4;
    }
    State = HampConnectionAllocateState(v4, &unk_18001E840, 0LL, 0LL);
    if ( State < 0 || (State = HampConnectionStart(v4), State < 0) )
    {
      HampConnectionDestroy(v4);
      return (unsigned int)State;
    }
    else
    {
      *a1 = v4;
    }
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v3;
}
