/*
 * XREFs of MmVerifierTrimMemory @ 0x140BA67F8
 * Callers:
 *     ViKeIrqlLogAndTrimMemory @ 0x140BA9F68 (ViKeIrqlLogAndTrimMemory.c)
 * Callees:
 *     RtlpGetStackLimits @ 0x140235480 (RtlpGetStackLimits.c)
 *     KiCheckForKernelApcDelivery @ 0x140362C10 (KiCheckForKernelApcDelivery.c)
 *     KeQueryPerformanceCounter @ 0x14036DEF0 (KeQueryPerformanceCounter.c)
 *     KiQueryUnbiasedInterruptTime @ 0x140419080 (KiQueryUnbiasedInterruptTime.c)
 *     MiTrimAllSystemPagableMemory @ 0x140679F28 (MiTrimAllSystemPagableMemory.c)
 *     KeGetCurrentStackPointer @ 0x1406AB330 (KeGetCurrentStackPointer.c)
 */

LARGE_INTEGER MmVerifierTrimMemory()
{
  unsigned __int64 v0; // r11
  LARGE_INTEGER result; // rax
  struct _KTHREAD *CurrentThread; // rdi
  unsigned __int64 v3; // r11
  unsigned __int64 UnbiasedInterruptTime; // kr08_8
  LARGE_INTEGER v5; // rbx
  LARGE_INTEGER v6; // rcx
  unsigned __int64 v7; // rcx
  __int64 v9; // [rsp+20h] [rbp-10h] BYREF
  LARGE_INTEGER PerformanceFrequency; // [rsp+58h] [rbp+28h] BYREF
  LARGE_INTEGER v11; // [rsp+60h] [rbp+30h] BYREF
  char *CurrentStackPointer; // [rsp+68h] [rbp+38h] BYREF

  v9 = 0LL;
  CurrentStackPointer = 0LL;
  if ( KiQueryUnbiasedInterruptTime() / 0x989680uLL != qword_140E37520
    || (result.QuadPart = qword_140E37528, qword_140E37528 < v0) )
  {
    result.QuadPart = (unsigned int)dword_140E3753C;
    if ( !dword_140E3753C )
    {
      result.QuadPart = (unsigned int)dword_140E37558;
      if ( dword_140E37558 )
      {
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->SpecialApcDisable;
        result.QuadPart = (unsigned int)_InterlockedCompareExchange(&dword_140E3753C, 1, 0);
        if ( result.LowPart )
          goto LABEL_22;
        UnbiasedInterruptTime = KiQueryUnbiasedInterruptTime();
        result.QuadPart = qword_140E37520;
        if ( UnbiasedInterruptTime / 0x989680 == qword_140E37520 )
        {
          if ( qword_140E37528 >= v3 )
          {
LABEL_21:
            _InterlockedDecrement(&dword_140E3753C);
LABEL_22:
            if ( CurrentThread->SpecialApcDisable++ == -1 )
            {
              result.QuadPart = (LONGLONG)&CurrentThread->152;
              if ( *(_QWORD *)result.QuadPart != result.QuadPart )
                return (LARGE_INTEGER)KiCheckForKernelApcDelivery();
            }
            return result;
          }
        }
        else
        {
          dword_140E37538 = 0;
          qword_140E37520 = UnbiasedInterruptTime / 0x989680;
          qword_140E37528 = 0LL;
        }
        result.QuadPart = RtlpGetStackLimits((__int64)&v9, (__int64)&CurrentStackPointer);
        if ( LOBYTE(result.LowPart) )
        {
          CurrentStackPointer = KeGetCurrentStackPointer();
          result.QuadPart = (LONGLONG)&CurrentStackPointer[-v9];
          if ( (unsigned __int64)&CurrentStackPointer[-v9] > 0x1A30 )
          {
            ++dword_140F04800;
            PerformanceFrequency.QuadPart = 0LL;
            dword_140E37558 = 0;
            v5 = KeQueryPerformanceCounter(&PerformanceFrequency);
            if ( PerformanceFrequency.QuadPart != 10000000 )
              v5.QuadPart = 10000000 * v5.QuadPart / PerformanceFrequency.QuadPart;
            result.QuadPart = MiTrimAllSystemPagableMemory(0);
            if ( result.LowPart )
            {
              v11.QuadPart = 0LL;
              result = KeQueryPerformanceCounter(&v11);
              if ( v11.QuadPart != 10000000 )
                result.QuadPart = 10000000 * result.QuadPart / v11.QuadPart;
              v6 = v5;
              if ( result.QuadPart >= (unsigned __int64)v5.QuadPart )
                v6 = result;
              ++dword_140E37538;
              v7 = v6.QuadPart - v5.QuadPart;
              qword_140E37528 += v7;
              if ( v7 > qword_140E37530 )
                qword_140E37530 = v7;
              ++dword_140F04804;
            }
          }
        }
        goto LABEL_21;
      }
    }
  }
  return result;
}
