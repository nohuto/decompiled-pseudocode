/*
 * XREFs of AlpcpAllocateCompletionPacketLookaside @ 0x140A0AA80
 * Callers:
 *     AlpcpAssociateIoCompletionPort @ 0x140A0A810 (AlpcpAssociateIoCompletionPort.c)
 *     AlpcpInitializeCompletionList @ 0x140A0AC54 (AlpcpInitializeCompletionList.c)
 * Callees:
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     IopFreeMiniCompletionPacket @ 0x1409A71B0 (IopFreeMiniCompletionPacket.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 *     ExAllocatePool3 @ 0x140B746D0 (ExAllocatePool3.c)
 */

_DWORD *__fastcall AlpcpAllocateCompletionPacketLookaside(unsigned int a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbp
  _DWORD *Pool2; // rax
  _DWORD *v7; // rbx
  __int64 v8; // rdi
  _QWORD *v9; // rsi
  __int64 Pool3; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  ULONG_PTR *v15; // rsi
  ULONG_PTR v16; // rcx

  v3 = a1;
  Pool2 = (_DWORD *)ExAllocatePool2(0x40uLL);
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
      v15 = (ULONG_PTR *)&v7[6 * v8 + 16];
      do
      {
        v15 -= 3;
        v16 = *v15;
        *(_QWORD *)(v16 + 56) = 0LL;
        IopFreeMiniCompletionPacket(v16, v11, v12, v13);
        LODWORD(v8) = v8 - 1;
      }
      while ( (_DWORD)v8 );
    }
    ExFreePoolWithTag(v7, 0);
  }
  return 0LL;
}
