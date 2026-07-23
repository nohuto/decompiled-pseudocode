/*
 * XREFs of EtwpCovSampCaptureSample @ 0x140650444
 * Callers:
 *     EtwpCovSampProfileInterrupt @ 0x140650630 (EtwpCovSampProfileInterrupt.c)
 *     EtwpCoverageSamplerContextSwap @ 0x140650808 (EtwpCoverageSamplerContextSwap.c)
 *     EtwpCoverageSamplerPageFault @ 0x140650998 (EtwpCoverageSamplerPageFault.c)
 *     EtwpCoverageSamplerReadyThread @ 0x140650B74 (EtwpCoverageSamplerReadyThread.c)
 * Callees:
 *     EtwpCovSampCaptureBufferQueue @ 0x1404347FC (EtwpCovSampCaptureBufferQueue.c)
 *     EtwpCovSampCaptureBufferRelease @ 0x140434AE4 (EtwpCovSampCaptureBufferRelease.c)
 *     EtwpCovSampSafeForUserAddressCapture @ 0x14044312C (EtwpCovSampSafeForUserAddressCapture.c)
 *     EtwpCovSampCaptureBufferAddIP @ 0x140450120 (EtwpCovSampCaptureBufferAddIP.c)
 *     EtwpCovSampCaptureBufferGet @ 0x1404ECF6C (EtwpCovSampCaptureBufferGet.c)
 *     EtwpCovSampCaptureKernelStack @ 0x140650148 (EtwpCovSampCaptureKernelStack.c)
 *     EtwpCovSampCaptureQueueApc @ 0x140650210 (EtwpCovSampCaptureQueueApc.c)
 *     EtwpCovSampCaptureUserAddresses @ 0x140922CA4 (EtwpCovSampCaptureUserAddresses.c)
 */

char __fastcall EtwpCovSampCaptureSample(unsigned __int64 a1, unsigned int a2)
{
  struct _KTHREAD *CurrentThread; // rbx
  _SLIST_ENTRY *v4; // rdi
  __int64 v5; // rsi
  unsigned int v7; // eax
  unsigned int v8; // ecx
  __int64 v9; // r9
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rcx
  int v14; // [rsp+50h] [rbp+18h] BYREF
  unsigned int v15; // [rsp+58h] [rbp+20h]

  CurrentThread = KeGetCurrentThread();
  v4 = 0LL;
  v5 = qword_140EFEFA8;
  v14 = 0;
  v7 = ((unsigned int)*(_QWORD *)(qword_140EFEFA8 + 8) >> 13) & 0x3FFFF;
  _BitScanReverse(&v8, v7);
  v9 = ((unsigned int)*(_QWORD *)(qword_140EFEFA8 + 8) >> 4) & 0x1FF;
  v10 = v7 ^ (1 << v8);
  v15 = v8;
  v11 = *((_QWORD *)KeGetCurrentPrcb()->ExSaPageArray + v8 - 2);
  if ( *(_DWORD *)(((*(_QWORD *)(v11 + 8 * v10 + 8) + 8 * v9 + 15) & 0xFFFFFFFFFFFFFFF0uLL) + 0x3C) )
  {
    _InterlockedIncrement((volatile signed __int32 *)(((*(_QWORD *)(v11 + 8 * v10 + 8) + 8 * v9 + 15) & 0xFFFFFFFFFFFFFFF0uLL)
                                                    + 304));
  }
  else
  {
    LOBYTE(v11) = a1 - 1;
    if ( a1 - 1 > 0xFFFF7FFFFFFFFFFEuLL )
    {
      v11 = (__int64)EtwpCovSampCaptureBufferGet(qword_140EFEFA8);
      v4 = (_SLIST_ENTRY *)v11;
      if ( v11 )
      {
        EtwpCovSampCaptureBufferAddIP(v11, a1);
        if ( !*(_DWORD *)(v5 + 1292) )
          EtwpCovSampCaptureKernelStack(v12, a2);
        LOBYTE(v11) = EtwpCovSampCaptureBufferQueue(v5, (__int64)v4);
        v4 = 0LL;
      }
      a1 = 0LL;
    }
    if ( (CurrentThread->MiscFlags & 0x400) == 0 )
    {
      LODWORD(v11) = *((_DWORD *)&CurrentThread[1].SwapListEntry + 2);
      if ( (v11 & 1) == 0 && (CurrentThread->MiscFlags & 0x4000) != 0 )
      {
        if ( CurrentThread->Teb )
        {
          LODWORD(v11) = CurrentThread->Process->FreezeCount + ((*(_DWORD *)&CurrentThread->Process->0 >> 3) & 1);
          if ( !(_DWORD)v11 )
          {
            LOBYTE(v11) = CurrentThread->SuspendCount;
            if ( !(_BYTE)v11 )
            {
              LODWORD(v11) = EtwpCovSampSafeForUserAddressCapture(0, &v14);
              if ( (int)v11 >= 0 )
              {
                if ( !_interlockedbittestandset((volatile signed __int32 *)&CurrentThread[1].SwapListEntry + 2, 0x17u) )
                {
                  LOBYTE(v11) = EtwpCovSampCaptureUserAddresses(v5, a1);
                  _InterlockedAnd((volatile signed __int32 *)&CurrentThread[1].SwapListEntry + 2, 0xFF7FFFFF);
                }
              }
              else if ( !v14 )
              {
                LOBYTE(v11) = EtwpCovSampCaptureQueueApc(a1);
              }
            }
          }
        }
      }
    }
    if ( v4 )
      LOBYTE(v11) = EtwpCovSampCaptureBufferRelease(v5, v4);
  }
  return v11;
}
