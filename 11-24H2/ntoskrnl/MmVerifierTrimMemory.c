/*
 * XREFs of MmVerifierTrimMemory @ 0x140BA47F8
 * Callers:
 *     ViKeIrqlLogAndTrimMemory @ 0x140BA7F68 (ViKeIrqlLogAndTrimMemory.c)
 * Callees:
 *     RtlpGetStackLimits @ 0x14027FEF0 (RtlpGetStackLimits.c)
 *     KiCheckForKernelApcDelivery @ 0x1402BB4D0 (KiCheckForKernelApcDelivery.c)
 *     KeQueryPerformanceCounter @ 0x14034FA10 (KeQueryPerformanceCounter.c)
 *     KiQueryUnbiasedInterruptTime @ 0x1404251D0 (KiQueryUnbiasedInterruptTime.c)
 *     MiTrimAllSystemPagableMemory @ 0x140678D48 (MiTrimAllSystemPagableMemory.c)
 *     KeGetCurrentStackPointer @ 0x1406AA390 (KeGetCurrentStackPointer.c)
 */

char MmVerifierTrimMemory()
{
  unsigned __int64 UnbiasedInterruptTime; // rcx
  unsigned __int64 v1; // r11
  __int64 v2; // rdx
  LARGE_INTEGER v3; // rax
  struct _KTHREAD *CurrentThread; // rdi
  unsigned __int64 v5; // r11
  LARGE_INTEGER v6; // rbx
  __int128 v7; // rtt
  LARGE_INTEGER v8; // rcx
  char *v11; // [rsp+20h] [rbp-10h] BYREF
  LARGE_INTEGER PerformanceFrequency; // [rsp+58h] [rbp+28h] BYREF
  LARGE_INTEGER v13; // [rsp+60h] [rbp+30h] BYREF
  char *CurrentStackPointer; // [rsp+68h] [rbp+38h] BYREF

  v11 = 0LL;
  CurrentStackPointer = 0LL;
  UnbiasedInterruptTime = KiQueryUnbiasedInterruptTime();
  v2 = UnbiasedInterruptTime / 0x989680;
  if ( UnbiasedInterruptTime / 0x989680 != qword_140E373E0
    || (LOBYTE(v3.LowPart) = qword_140E373E8, qword_140E373E8 < v1) )
  {
    LOBYTE(v3.LowPart) = dword_140E373FC;
    if ( !dword_140E373FC )
    {
      LOBYTE(v3.LowPart) = dword_140E37418;
      if ( dword_140E37418 )
      {
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->SpecialApcDisable;
        v3.LowPart = _InterlockedCompareExchange(&dword_140E373FC, 1, 0);
        if ( v3.LowPart )
        {
LABEL_22:
          if ( CurrentThread->SpecialApcDisable++ == -1 )
          {
            v3.QuadPart = (LONGLONG)&CurrentThread->152;
            if ( *(_QWORD *)v3.QuadPart != v3.QuadPart )
              LOBYTE(v3.LowPart) = KiCheckForKernelApcDelivery(UnbiasedInterruptTime, v2);
          }
          return v3.LowPart;
        }
        UnbiasedInterruptTime = KiQueryUnbiasedInterruptTime();
        LOBYTE(v3.LowPart) = qword_140E373E0;
        v2 = UnbiasedInterruptTime / 0x989680;
        if ( UnbiasedInterruptTime / 0x989680 == qword_140E373E0 )
        {
          if ( qword_140E373E8 >= v5 )
          {
LABEL_21:
            _InterlockedDecrement(&dword_140E373FC);
            goto LABEL_22;
          }
        }
        else
        {
          dword_140E373F8 = 0;
          qword_140E373E0 = UnbiasedInterruptTime / 0x989680;
          qword_140E373E8 = 0LL;
        }
        LOBYTE(v3.LowPart) = RtlpGetStackLimits(&v11, (unsigned __int64 *)&CurrentStackPointer);
        if ( LOBYTE(v3.LowPart) )
        {
          CurrentStackPointer = KeGetCurrentStackPointer();
          LOBYTE(v3.LowPart) = (_BYTE)CurrentStackPointer - (_BYTE)v11;
          if ( (unsigned __int64)(CurrentStackPointer - v11) > 0x1A30 )
          {
            ++dword_140F03EA0;
            PerformanceFrequency.QuadPart = 0LL;
            dword_140E37418 = 0;
            v6 = KeQueryPerformanceCounter(&PerformanceFrequency);
            if ( PerformanceFrequency.QuadPart != 10000000 )
              v6.QuadPart = 10000000 * v6.QuadPart / PerformanceFrequency.QuadPart;
            v3.LowPart = MiTrimAllSystemPagableMemory(0);
            if ( v3.LowPart )
            {
              v13.QuadPart = 0LL;
              v3 = KeQueryPerformanceCounter(&v13);
              if ( v13.QuadPart != 10000000 )
              {
                v7 = 10000000 * v3.QuadPart;
                v3.QuadPart = 10000000 * v3.QuadPart / v13.QuadPart;
                v2 = v7 % v13.QuadPart;
              }
              v8 = v6;
              if ( v3.QuadPart >= (unsigned __int64)v6.QuadPart )
                v8 = v3;
              ++dword_140E373F8;
              UnbiasedInterruptTime = v8.QuadPart - v6.QuadPart;
              qword_140E373E8 += UnbiasedInterruptTime;
              if ( UnbiasedInterruptTime > qword_140E373F0 )
                qword_140E373F0 = UnbiasedInterruptTime;
              ++dword_140F03EA4;
            }
          }
        }
        goto LABEL_21;
      }
    }
  }
  return v3.LowPart;
}
