/*
 * XREFs of VidSchiSwitchFromSuspendedDevices @ 0x14003D090
 * Callers:
 *     <none>
 * Callees:
 *     VidSchiCompletePreemption @ 0x14003D2FC (VidSchiCompletePreemption.c)
 *     VidSchiSubmitPreemptionCommand @ 0x1400ADF8C (VidSchiSubmitPreemptionCommand.c)
 *     VidSchiSwitchNodeFromContext @ 0x1400AFC90 (VidSchiSwitchNodeFromContext.c)
 *     VidSchiWaitForEmptyHwQueue @ 0x140112850 (VidSchiWaitForEmptyHwQueue.c)
 */

void __fastcall VidSchiSwitchFromSuspendedDevices(__int64 a1)
{
  __int64 v2; // r14
  unsigned int v3; // esi
  __int64 *v4; // rdi
  __int64 v5; // rdi
  char v6; // r15
  unsigned int i; // ebp
  unsigned int v8; // eax
  unsigned int v9; // edi
  _QWORD *v10; // rcx
  __int64 v11; // rbp
  __int64 v12; // rsi
  __int64 v13; // r8
  __int64 v14; // rcx
  __int64 v15; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-48h] BYREF

  if ( !*(_DWORD *)(a1 + 3244) )
  {
    if ( (*(_DWORD *)(a1 + 2792) & 1) != 0 )
    {
      v2 = 0LL;
      v3 = 0;
      if ( *(_DWORD *)(a1 + 80) )
      {
        do
        {
          v4 = *(__int64 **)(a1 + 688);
          if ( v3 < *(_DWORD *)(a1 + 760) )
            v4 += v3;
          v5 = *v4;
          v6 = 0;
          memset(&LockHandle, 0, sizeof(LockHandle));
          KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 1984), &LockHandle);
          for ( i = *(_DWORD *)(v5 + 1576); i != *(_DWORD *)(v5 + 1568); i = ((_BYTE)i + 1) & 0xF )
          {
            v13 = *(_QWORD *)(v5 + 8LL * i + 1584);
            if ( v13 )
            {
              if ( (*(_DWORD *)(v13 + 184) & 0x200) != 0
                || (v15 = *(_QWORD *)(v13 + 104), *(_BYTE *)(v15 + 204))
                || _InterlockedCompareExchange((volatile signed __int32 *)(v15 + 200), 0, 0) )
              {
                v6 = 1;
                WdLogSingleEntry2(4LL, v5, v13);
                WdLogGlobalForLineNumber = 28071;
              }
            }
          }
          KeReleaseInStackQueuedSpinLock(&LockHandle);
          if ( v6 )
          {
            _InterlockedIncrement((volatile signed __int32 *)(a1 + 788));
            if ( _InterlockedIncrement((volatile signed __int32 *)(v5 + 3024)) == 1 )
            {
              *(_QWORD *)(v5 + 232) = 0LL;
              VidSchiSubmitPreemptionCommand(v5);
              _bittestandset64(&v2, v3);
            }
            else
            {
              _InterlockedDecrement((volatile signed __int32 *)(v5 + 3024));
              _bittestandset64(&v2, v3);
              _InterlockedDecrement((volatile signed __int32 *)(a1 + 788));
            }
          }
          v8 = *(_DWORD *)(a1 + 80);
          ++v3;
        }
        while ( v3 < v8 );
        v9 = 0;
        if ( v8 )
        {
          do
          {
            v10 = *(_QWORD **)(a1 + 688);
            if ( v9 < *(_DWORD *)(a1 + 760) )
              v10 += v9;
            v11 = *v10;
            if ( _bittest64(&v2, v9) )
            {
              VidSchiCompletePreemption(*v10);
              if ( *(_DWORD *)(a1 + 3244) )
                break;
            }
            if ( *(_BYTE *)(a1 + 52) )
            {
              v12 = *(_QWORD *)(v11 + 224);
              if ( v12 )
              {
                if ( (*(_DWORD *)(v12 + 184) & 0x100) != 0
                  || (v14 = *(_QWORD *)(v12 + 104), *(_BYTE *)(v14 + 204))
                  || _InterlockedCompareExchange((volatile signed __int32 *)(v14 + 200), 0, 0) )
                {
                  WdLogSingleEntry2(4LL, v11, v12);
                  WdLogGlobalForLineNumber = 28127;
                  VidSchiSwitchNodeFromContext(v12);
                  if ( *(_DWORD *)(a1 + 3244) )
                    break;
                }
              }
            }
            ++v9;
          }
          while ( v9 < *(_DWORD *)(a1 + 80) );
        }
      }
    }
    else
    {
      VidSchiWaitForEmptyHwQueue();
    }
  }
}
