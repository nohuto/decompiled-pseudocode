/*
 * XREFs of AcpiPccInitCommonFields @ 0x14009FE80
 * Callers:
 *     AcpiPccInitType0Subspace @ 0x1400A0370 (AcpiPccInitType0Subspace.c)
 *     AcpiPccInitType1Subspace @ 0x1400A04A0 (AcpiPccInitType1Subspace.c)
 *     AcpiPccInitType2Subspace @ 0x1400A05E0 (AcpiPccInitType2Subspace.c)
 *     AcpiPccInitType34Subspace @ 0x1400A0780 (AcpiPccInitType34Subspace.c)
 * Callees:
 *     AcpiGetDriverProxyEndpoint @ 0x1400441B8 (AcpiGetDriverProxyEndpoint.c)
 */

unsigned int *__fastcall AcpiPccInitCommonFields(
        unsigned int *DeferredContext,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4)
{
  int v4; // esi
  int v6; // ecx
  unsigned __int64 v7; // rdx
  unsigned int *result; // rax
  PKDEFERRED_ROUTINE DeferredRoutine; // [rsp+20h] [rbp-28h] BYREF
  _QWORD v10[4]; // [rsp+28h] [rbp-20h] BYREF
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+50h] [rbp+8h] BYREF

  if ( DeferredContext )
  {
    v4 = 0;
    DeferredContext[5] = a2;
    DeferredRoutine = 0LL;
    v6 = 500;
    v10[0] = 0LL;
    PerformanceFrequency.QuadPart = 0LL;
    if ( a2 >= 0x1F4 )
      v6 = a2;
    DeferredContext[6] = v6;
    if ( (DeferredContext[2] & 1) != 0 && DeferredContext[3] == 1 )
      DeferredContext[6] = v6 + 500;
    DeferredContext[8] = a4;
    DeferredContext[7] = a3 / 0x3C;
    KeQueryPerformanceCounter(&PerformanceFrequency);
    if ( is_mul_ok(DeferredContext[8], PerformanceFrequency.QuadPart) )
      v7 = (unsigned __int64)DeferredContext[8] * PerformanceFrequency.QuadPart / 0xF4240;
    else
      v7 = DeferredContext[8] * (PerformanceFrequency.QuadPart / 1000000);
    *((_QWORD *)DeferredContext + 53) = v7;
    AcpiGetDriverProxyEndpoint(&DeferredRoutine, (__int64)AcpiPccCallbackDpc);
    KeInitializeDpc((PRKDPC)(DeferredContext + 178), DeferredRoutine, DeferredContext);
    KeSetImportanceDpc((PRKDPC)(DeferredContext + 178), MediumHighImportance);
    if ( ((DeferredContext[2] & 1) == 0 || DeferredContext[3] != 1) && *(_BYTE *)DeferredContext != 0xFF )
      v4 = 4;
    DeferredContext[176] = v4;
    AcpiGetDriverProxyEndpoint(v10, (__int64)AcpiPccWatchdog);
    KeInitializeTimer2(DeferredContext + 142, v10[0], DeferredContext, DeferredContext[176]);
    KeInitializeTimer((PKTIMER)(DeferredContext + 108));
    KeInitializeSpinLock((PKSPIN_LOCK)DeferredContext + 100);
    result = DeferredContext + 90;
    *((_QWORD *)DeferredContext + 46) = DeferredContext + 90;
    *((_QWORD *)DeferredContext + 45) = DeferredContext + 90;
  }
  return result;
}
