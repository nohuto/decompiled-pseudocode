/*
 * XREFs of AlpcpAllocateCompletionPacketLookaside @ 0x140A06FB0
 * Callers:
 *     AlpcpAssociateIoCompletionPort @ 0x140A06D40 (AlpcpAssociateIoCompletionPort.c)
 *     AlpcpInitializeCompletionList @ 0x140A07184 (AlpcpInitializeCompletionList.c)
 * Callees:
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     IopFreeMiniCompletionPacket @ 0x140990680 (IopFreeMiniCompletionPacket.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 *     ExAllocatePool3 @ 0x140B76270 (ExAllocatePool3.c)
 */

_DWORD *__fastcall AlpcpAllocateCompletionPacketLookaside(unsigned int a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbp
  _DWORD *Pool2; // rax
  _DWORD *v7; // rbx
  __int64 v8; // rdi
  _QWORD *v9; // rsi
  __int64 Pool3; // rax
  ULONG_PTR *v12; // rsi
  ULONG_PTR v13; // rcx

  v3 = a1;
  Pool2 = (_DWORD *)ExAllocatePool2(0x40uLL, 24LL * a1 + 56, 0x6E496C41u);
  v7 = Pool2;
  if ( Pool2 )
  {
    memset_0(Pool2, 0, 24 * v3 + 56);
    *(_QWORD *)v7 = 0LL;
    v8 = 0LL;
    v7[2] = v3;
    *((_QWORD *)v7 + 5) = a2;
    *((_QWORD *)v7 + 6) = a3;
    while ( 1 )
    {
      if ( (unsigned int)v8 >= (unsigned int)v3 )
        return v7;
      v9 = &v7[6 * v8 + 14];
      v9[2] = v7;
      Pool3 = ExAllocatePool3(0x40uLL, 1);
      if ( Pool3 )
      {
        *(_BYTE *)(Pool3 + 16) = 4;
        *(_QWORD *)(Pool3 + 56) = AlpcpLookasidePacketCallbackRoutine;
        *(_QWORD *)(Pool3 + 64) = v9;
        *(_BYTE *)(Pool3 + 72) = 1;
      }
      v9[1] = Pool3;
      if ( !Pool3 )
        break;
      v8 = (unsigned int)(v8 + 1);
      *v9 = *((_QWORD *)v7 + 4);
      *((_QWORD *)v7 + 4) = v9;
    }
    if ( (_DWORD)v8 )
    {
      v12 = (ULONG_PTR *)&v7[6 * v8 + 16];
      do
      {
        v12 -= 3;
        v13 = *v12;
        *(_QWORD *)(v13 + 56) = 0LL;
        IopFreeMiniCompletionPacket(v13);
        LODWORD(v8) = v8 - 1;
      }
      while ( (_DWORD)v8 );
    }
    ExFreePoolWithTag(v7, 0);
  }
  return 0LL;
}
