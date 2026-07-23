/*
 * XREFs of EtwpDequeueBufferPendingCompression @ 0x14064F998
 * Callers:
 *     EtwpCompressPendingBuffers @ 0x14064F724 (EtwpCompressPendingBuffers.c)
 * Callees:
 *     EtwpUnlockBufferList @ 0x1403E1688 (EtwpUnlockBufferList.c)
 *     EtwpLockBufferList @ 0x1403E1714 (EtwpLockBufferList.c)
 *     EtwpDequeueBufferPendingCompressionFromQueue @ 0x14064FA98 (EtwpDequeueBufferPendingCompressionFromQueue.c)
 *     EtwpDisableCompression @ 0x14064FB00 (EtwpDisableCompression.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

__int64 __fastcall EtwpDequeueBufferPendingCompression(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 *v4; // rdi
  __int64 v6; // rax
  __int64 *v7; // rdi
  ULONG_PTR v9; // rcx
  __int64 Pool2; // rax
  __int64 v11; // rsi
  __int64 v12; // r8
  unsigned __int8 v13; // [rsp+30h] [rbp+8h] BYREF

  v4 = *(__int64 **)(a1 + 1448);
  v13 = 0;
  if ( v4 )
  {
    v6 = *v4;
    v7 = v4 - 4;
    *(_QWORD *)(a1 + 1448) = v6;
  }
  else
  {
    v9 = 256LL;
    if ( *(_DWORD *)(a1 + 300) != 1 )
      v9 = 64LL;
    Pool2 = ExAllocatePool2(v9, 0x48uLL, 0x42777445u);
    v7 = (__int64 *)Pool2;
    if ( Pool2 )
    {
      *(_QWORD *)(Pool2 + 32) = 0LL;
      *(_DWORD *)(Pool2 + 44) = 6;
      goto LABEL_9;
    }
  }
  if ( !v7 )
  {
    EtwpDisableCompression(a1);
    return 0LL;
  }
LABEL_9:
  EtwpLockBufferList(a1, &v13, a3, a4);
  v11 = EtwpDequeueBufferPendingCompressionFromQueue(a1 + 64, a1 + 228, v7);
  if ( !v11 )
    v11 = EtwpDequeueBufferPendingCompressionFromQueue(a1 + 48, a1 + 228, v12);
  EtwpUnlockBufferList(a1, &v13);
  if ( !v11 )
  {
    v7[4] = *(_QWORD *)(a1 + 1448);
    *(_QWORD *)(a1 + 1448) = v7 + 4;
  }
  return v11;
}
