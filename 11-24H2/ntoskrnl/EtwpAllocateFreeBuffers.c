/*
 * XREFs of EtwpAllocateFreeBuffers @ 0x14027C8CC
 * Callers:
 *     EtwpSwitchBuffer @ 0x14027D3B0 (EtwpSwitchBuffer.c)
 *     EtwpAllocateTraceBufferPool @ 0x1409CF86C (EtwpAllocateTraceBufferPool.c)
 *     EtwpFlushActiveBuffers @ 0x1409D1730 (EtwpFlushActiveBuffers.c)
 *     EtwpAdjustFreeBuffers @ 0x1409D39FC (EtwpAdjustFreeBuffers.c)
 * Callees:
 *     EtwpEnqueueAvailableBuffer @ 0x14027D7F0 (EtwpEnqueueAvailableBuffer.c)
 *     EtwpUnlockBufferList @ 0x1403E1688 (EtwpUnlockBufferList.c)
 *     EtwpLockBufferList @ 0x1403E1714 (EtwpLockBufferList.c)
 *     EtwpInitializeBufferHeader @ 0x14047540C (EtwpInitializeBufferHeader.c)
 *     EtwpAllocateTraceBuffer @ 0x14047CE80 (EtwpAllocateTraceBuffer.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwpAllocateFreeBuffers(ULONG_PTR BugCheckParameter2, unsigned int a2)
{
  unsigned int v2; // ebp
  unsigned __int32 v5; // edi
  void *TraceBuffer; // r14
  _QWORD *Pool2; // r15
  unsigned __int32 v8; // eax
  _QWORD *v9; // rcx
  char v11; // [rsp+58h] [rbp+10h] BYREF

  v2 = 0;
  v11 = 0;
  if ( a2 )
  {
    while ( 1 )
    {
      v5 = _InterlockedIncrement((volatile signed __int32 *)(BugCheckParameter2 + 232));
      if ( v5 > *(_DWORD *)(BugCheckParameter2 + 236) )
        break;
      TraceBuffer = (void *)EtwpAllocateTraceBuffer(BugCheckParameter2);
      if ( !TraceBuffer )
        goto LABEL_6;
      Pool2 = (_QWORD *)ExAllocatePool2(0x40uLL, 0x18uLL, 0x6E777445u);
      if ( !Pool2 )
      {
        ExFreePoolWithTag(TraceBuffer, 0);
LABEL_6:
        _InterlockedDecrement((volatile signed __int32 *)(BugCheckParameter2 + 232));
        return v2;
      }
      while ( 1 )
      {
        v8 = *(_DWORD *)(BugCheckParameter2 + 244);
        if ( v8 >= v5 )
          break;
        _InterlockedCompareExchange((volatile signed __int32 *)(BugCheckParameter2 + 244), v5, v8);
      }
      EtwpInitializeBufferHeader(BugCheckParameter2, TraceBuffer);
      Pool2[2] = TraceBuffer;
      EtwpLockBufferList(BugCheckParameter2, &v11);
      v9 = *(_QWORD **)(BugCheckParameter2 + 88);
      if ( *v9 != BugCheckParameter2 + 80 )
        __fastfail(3u);
      Pool2[1] = v9;
      *Pool2 = BugCheckParameter2 + 80;
      *v9 = Pool2;
      *(_QWORD *)(BugCheckParameter2 + 88) = Pool2;
      EtwpUnlockBufferList(BugCheckParameter2, &v11);
      EtwpEnqueueAvailableBuffer(BugCheckParameter2, TraceBuffer, 0LL);
      if ( ++v2 >= a2 )
        goto LABEL_14;
    }
    _InterlockedDecrement((volatile signed __int32 *)(BugCheckParameter2 + 232));
  }
LABEL_14:
  _InterlockedAdd(
    (volatile signed __int32 *)(*(_QWORD *)(BugCheckParameter2 + 1360)
                              + 4LL * (*(_DWORD *)(BugCheckParameter2 + 300) & 1)
                              + 4396),
    *(_DWORD *)(BugCheckParameter2 + 4) * v2);
  return v2;
}
