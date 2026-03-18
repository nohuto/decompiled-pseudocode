/*
 * XREFs of ?AcquireLocks@?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGSYNCOBJECT@@$1?AcquireSyncObjectMutex@@YAXPEAV1@@Z$1?ReleaseSyncObjectMutex@@YAX0@Z$01@@QEAAXXZ @ 0x1400235C0
 * Callers:
 *     ?WaitForSynchronizationObjectFromCpu@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU@@PEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAX@Z @ 0x1402A6DD0 (-WaitForSynchronizationObjectFromCpu@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU@@PEAVDX.c)
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x140015644 (McTemplateK0q_EtwWriteTransfer.c)
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x140019D30 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 */

_UNKNOWN **__fastcall DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>::AcquireLocks(
        __int64 a1)
{
  _UNKNOWN **result; // rax
  unsigned __int64 v2; // rdi
  __int64 v4; // rsi
  __int64 v5; // rcx
  __int64 v6; // r8
  int v7; // r9d
  int v8; // edx
  int v9; // ecx
  __int64 v10; // r8
  int v11; // edx
  int v12; // ecx
  __int64 v13; // r8
  int v14; // edx
  int v15; // ecx
  __int64 v16; // r8
  _UNKNOWN *retaddr; // [rsp+78h] [rbp+0h] BYREF

  result = &retaddr;
  v2 = 0LL;
  if ( *(_DWORD *)(a1 + 24) )
  {
    do
    {
      v4 = *(_QWORD *)(*(_QWORD *)a1 + 8 * v2);
      KeEnterCriticalRegion();
      if ( *(struct _KTHREAD **)(v4 + 56) == KeGetCurrentThread() )
      {
        if ( *(int *)(v4 + 64) <= 0 )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 521;
          if ( bTracingEnabled )
          {
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200000000LL) != 0 )
              McTemplateK0zqqzxxxxx_EtwWriteTransfer(
                v15,
                v14,
                v16,
                0LL,
                2,
                -1,
                L"m_OwnerAcquireCount > 0",
                521LL,
                0LL,
                0LL,
                0LL,
                0LL);
          }
        }
        ++*(_DWORD *)(v4 + 64);
      }
      else
      {
        if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v4 + 40, 0LL) )
        {
          if ( bTracingEnabled )
          {
            v7 = *(_DWORD *)(v4 + 68);
            if ( v7 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
              McTemplateK0q_EtwWriteTransfer(v5, (__int64)&EventBlockThread, v6, v7);
          }
          _InterlockedIncrement64((volatile signed __int64 *)(v4 + 48));
          ExAcquirePushLockExclusiveEx(v4 + 40, 0LL);
        }
        if ( *(_QWORD *)(v4 + 56) )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 547;
          if ( bTracingEnabled )
          {
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200000000LL) != 0 )
              McTemplateK0zqqzxxxxx_EtwWriteTransfer(
                v12,
                v11,
                v13,
                0LL,
                2,
                -1,
                L"NULL == m_OwningThread",
                547LL,
                0LL,
                0LL,
                0LL,
                0LL);
          }
        }
        if ( *(_DWORD *)(v4 + 64) )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 548;
          if ( bTracingEnabled )
          {
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200000000LL) != 0 )
              McTemplateK0zqqzxxxxx_EtwWriteTransfer(
                v9,
                v8,
                v10,
                0LL,
                2,
                -1,
                L"0 == m_OwnerAcquireCount",
                548LL,
                0LL,
                0LL,
                0LL,
                0LL);
          }
        }
        *(_QWORD *)(v4 + 56) = KeGetCurrentThread();
        *(_DWORD *)(v4 + 64) = 1;
      }
      result = (_UNKNOWN **)*(unsigned int *)(a1 + 24);
      ++v2;
    }
    while ( v2 < (unsigned __int64)result );
    *(_BYTE *)(a1 + 33) = 1;
  }
  else
  {
    *(_BYTE *)(a1 + 33) = 1;
  }
  return result;
}
