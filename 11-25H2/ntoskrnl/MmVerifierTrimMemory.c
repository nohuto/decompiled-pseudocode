/*
 * XREFs of MmVerifierTrimMemory @ 0x140B94818
 * Callers:
 *     ViKeIrqlLogAndTrimMemory @ 0x140B97F88 (ViKeIrqlLogAndTrimMemory.c)
 * Callees:
 *     RtlpGetStackLimits @ 0x140258FB0 (RtlpGetStackLimits.c)
 *     KeQueryPerformanceCounter @ 0x14031B970 (KeQueryPerformanceCounter.c)
 *     KiCheckForKernelApcDelivery @ 0x140320950 (KiCheckForKernelApcDelivery.c)
 *     KiQueryUnbiasedInterruptTime @ 0x14042F3F0 (KiQueryUnbiasedInterruptTime.c)
 *     MiTrimAllSystemPagableMemory @ 0x14066D43C (MiTrimAllSystemPagableMemory.c)
 *     KeGetCurrentStackPointer @ 0x14069F0C0 (KeGetCurrentStackPointer.c)
 */

char MmVerifierTrimMemory()
{
  unsigned __int64 v0; // r11
  LARGE_INTEGER v1; // rax
  struct _KTHREAD *CurrentThread; // rdi
  unsigned __int64 v3; // r11
  unsigned __int64 UnbiasedInterruptTime; // kr08_8
  LARGE_INTEGER v5; // rbx
  LARGE_INTEGER v6; // rcx
  unsigned __int64 v7; // rcx
  char *v10; // [rsp+20h] [rbp-10h] BYREF
  LARGE_INTEGER PerformanceFrequency; // [rsp+58h] [rbp+28h] BYREF
  LARGE_INTEGER v12; // [rsp+60h] [rbp+30h] BYREF
  char *CurrentStackPointer; // [rsp+68h] [rbp+38h] BYREF

  v10 = 0LL;
  CurrentStackPointer = 0LL;
  if ( KiQueryUnbiasedInterruptTime() / 0x989680uLL != qword_140E371A0
    || (LOBYTE(v1.LowPart) = qword_140E371A8, qword_140E371A8 < v0) )
  {
    LOBYTE(v1.LowPart) = dword_140E371BC;
    if ( !dword_140E371BC )
    {
      LOBYTE(v1.LowPart) = dword_140E371D8;
      if ( dword_140E371D8 )
      {
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->SpecialApcDisable;
        v1.LowPart = _InterlockedCompareExchange(&dword_140E371BC, 1, 0);
        if ( v1.LowPart )
        {
LABEL_22:
          if ( CurrentThread->SpecialApcDisable++ == -1 )
          {
            v1.QuadPart = (LONGLONG)&CurrentThread->152;
            if ( *(_QWORD *)v1.QuadPart != v1.QuadPart )
              LOBYTE(v1.LowPart) = KiCheckForKernelApcDelivery();
          }
          return v1.LowPart;
        }
        UnbiasedInterruptTime = KiQueryUnbiasedInterruptTime();
        LOBYTE(v1.LowPart) = qword_140E371A0;
        if ( UnbiasedInterruptTime / 0x989680 == qword_140E371A0 )
        {
          if ( qword_140E371A8 >= v3 )
          {
LABEL_21:
            _InterlockedDecrement(&dword_140E371BC);
            goto LABEL_22;
          }
        }
        else
        {
          dword_140E371B8 = 0;
          qword_140E371A0 = UnbiasedInterruptTime / 0x989680;
          qword_140E371A8 = 0LL;
        }
        LOBYTE(v1.LowPart) = RtlpGetStackLimits(&v10, (unsigned __int64 *)&CurrentStackPointer);
        if ( LOBYTE(v1.LowPart) )
        {
          CurrentStackPointer = KeGetCurrentStackPointer();
          LOBYTE(v1.LowPart) = (_BYTE)CurrentStackPointer - (_BYTE)v10;
          if ( (unsigned __int64)(CurrentStackPointer - v10) > 0x1A30 )
          {
            ++dword_140F03AA0;
            PerformanceFrequency.QuadPart = 0LL;
            dword_140E371D8 = 0;
            v5 = KeQueryPerformanceCounter(&PerformanceFrequency);
            if ( PerformanceFrequency.QuadPart != 10000000 )
              v5.QuadPart = 10000000 * v5.QuadPart / PerformanceFrequency.QuadPart;
            v1.LowPart = MiTrimAllSystemPagableMemory(0);
            if ( v1.LowPart )
            {
              v12.QuadPart = 0LL;
              v1 = KeQueryPerformanceCounter(&v12);
              if ( v12.QuadPart != 10000000 )
                v1.QuadPart = 10000000 * v1.QuadPart / v12.QuadPart;
              v6 = v5;
              if ( v1.QuadPart >= (unsigned __int64)v5.QuadPart )
                v6 = v1;
              ++dword_140E371B8;
              v7 = v6.QuadPart - v5.QuadPart;
              qword_140E371A8 += v7;
              if ( v7 > qword_140E371B0 )
                qword_140E371B0 = v7;
              ++dword_140F03AA4;
            }
          }
        }
        goto LABEL_21;
      }
    }
  }
  return v1.LowPart;
}
