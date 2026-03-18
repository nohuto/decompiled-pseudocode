/*
 * XREFs of EtwTraceAcquireExclusiveUserCrit @ 0x1400339B0
 * Callers:
 *     _lambda_5b4fd5b3c990349c66a8ee94c55a5de4_::_lambda_invoker_cdecl_ @ 0x1401A8F20 (_lambda_5b4fd5b3c990349c66a8ee94c55a5de4_--_lambda_invoker_cdecl_.c)
 *     ?_lambda_invoker_cdecl_@_lambda_63b61c2369133a205197eda5bd671ee7_@@CAXPEAU_FAST_ERESOURCE@@PEAU_W32THREADNONPAGED@@@Z @ 0x1401A8F70 (-_lambda_invoker_cdecl_@_lambda_63b61c2369133a205197eda5bd671ee7_@@CAXPEAU_FAST_ERESOURCE@@PEAU_.c)
 * Callees:
 *     ?getInstance@UserCritTelemetry@@SAPEAV1@XZ @ 0x140034540 (-getInstance@UserCritTelemetry@@SAPEAV1@XZ.c)
 *     W32GetCurrentThreadNonPaged @ 0x1401A2438 (W32GetCurrentThreadNonPaged.c)
 */

void EtwTraceAcquireExclusiveUserCrit()
{
  __int64 v0; // rcx
  LARGE_INTEGER *CurrentThreadNonPaged; // rbx

  if ( dword_14029AF48
    && (qword_14029AF58 & 0x400000000000LL) != 0
    && (qword_14029AF60 & 0x400000000000LL) == qword_14029AF60
    || ((unsigned __int64)*(&WPP_MAIN_CB.Reserved + 1) & 0x8000002010000000uLL) != 0
    && (unsigned __int8)(byte_14029ADC8 - 1) > 2u
    && (qword_14029ADB0 & 0x8000002010000000uLL) != 0
    && (qword_14029ADB8 & 0x8000002010000000uLL) == qword_14029ADB8
    || ((__int64)*(&WPP_MAIN_CB.Reserved + 1) & 0x200000010000000LL) != 0
    && (unsigned __int8)(byte_14029ADC8 - 1) > 2u
    && (qword_14029ADB0 & 0x200000010000000LL) != 0
    && (qword_14029ADB8 & 0x200000010000000LL) == qword_14029ADB8 )
  {
    if ( UserCritTelemetry::getInstance() )
    {
      CurrentThreadNonPaged = (LARGE_INTEGER *)W32GetCurrentThreadNonPaged(v0);
      if ( CurrentThreadNonPaged )
        CurrentThreadNonPaged[1] = KeQueryPerformanceCounter(0LL);
    }
  }
}
