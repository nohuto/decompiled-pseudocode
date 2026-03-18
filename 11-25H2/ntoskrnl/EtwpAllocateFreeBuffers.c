/*
 * XREFs of EtwpAllocateFreeBuffers @ 0x1403E4BD0
 * Callers:
 *     EtwpSwitchBuffer @ 0x1403E45C0 (EtwpSwitchBuffer.c)
 *     EtwpFlushActiveBuffers @ 0x14098F3D0 (EtwpFlushActiveBuffers.c)
 *     EtwpAdjustFreeBuffers @ 0x140990048 (EtwpAdjustFreeBuffers.c)
 *     EtwpAllocateTraceBufferPool @ 0x140A38EF0 (EtwpAllocateTraceBufferPool.c)
 * Callees:
 *     EtwpEnqueueAvailableBuffer @ 0x1403E49BC (EtwpEnqueueAvailableBuffer.c)
 *     EtwpUnlockBufferList @ 0x1403E4F1C (EtwpUnlockBufferList.c)
 *     EtwpLockBufferList @ 0x1403E4FA8 (EtwpLockBufferList.c)
 *     EtwpInitializeBufferHeader @ 0x140478F80 (EtwpInitializeBufferHeader.c)
 *     EtwpAllocateTraceBuffer @ 0x140480E94 (EtwpAllocateTraceBuffer.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwpAllocateFreeBuffers(ULONG_PTR BugCheckParameter2, unsigned int a2)
{
  unsigned int v2; // ebp
  unsigned __int32 v5; // edi
  void *TraceBuffer; // r14
  _QWORD *Pool2; // r15
  unsigned __int32 v8; // eax
  __int64 v9; // r8
  __int64 v10; // r9
  _QWORD *v11; // rcx
  char v13; // [rsp+58h] [rbp+10h] BYREF

  v2 = 0;
  v13 = 0;
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
      Pool2 = (_QWORD *)ExAllocatePool2(0x40uLL);
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
      EtwpLockBufferList(BugCheckParameter2, &v13, v9, v10);
      v11 = *(_QWORD **)(BugCheckParameter2 + 88);
      if ( *v11 != BugCheckParameter2 + 80 )
        __fastfail(3u);
      Pool2[1] = v11;
      *Pool2 = BugCheckParameter2 + 80;
      *v11 = Pool2;
      *(_QWORD *)(BugCheckParameter2 + 88) = Pool2;
      EtwpUnlockBufferList(BugCheckParameter2, &v13);
      EtwpEnqueueAvailableBuffer(BugCheckParameter2, (unsigned int *)TraceBuffer, 0);
      if ( ++v2 >= a2 )
        goto LABEL_14;
    }
    _InterlockedDecrement((volatile signed __int32 *)(BugCheckParameter2 + 232));
  }
LABEL_14:
  _InterlockedAdd(
    (volatile signed __int32 *)(*(_QWORD *)(BugCheckParameter2 + 1360)
                              + 4LL * (*(_DWORD *)(BugCheckParameter2 + 300) & 1)
                              + 4124),
    *(_DWORD *)(BugCheckParameter2 + 4) * v2);
  return v2;
}
