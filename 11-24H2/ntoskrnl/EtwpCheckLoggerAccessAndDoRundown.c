/*
 * XREFs of EtwpCheckLoggerAccessAndDoRundown @ 0x140A15CC0
 * Callers:
 *     EtwpEnableDisableSpecialGuids @ 0x140A1584C (EtwpEnableDisableSpecialGuids.c)
 *     EtwpCheckGuidAccessAndDoRundown @ 0x140A15BDC (EtwpCheckGuidAccessAndDoRundown.c)
 * Callees:
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x140259600 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     EtwpStackRundown @ 0x14032ACF8 (EtwpStackRundown.c)
 *     KeReleaseMutex @ 0x1403379B0 (KeReleaseMutex.c)
 *     EtwpCheckLoggerControlAccess @ 0x140836724 (EtwpCheckLoggerControlAccess.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x140926F50 (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpLogKernelTraceRundown @ 0x140A15DD0 (EtwpLogKernelTraceRundown.c)
 *     EtwpLogPmcCounterRundown @ 0x140A7EF6C (EtwpLogPmcCounterRundown.c)
 */

__int64 __fastcall EtwpCheckLoggerAccessAndDoRundown(__int64 a1, unsigned int a2, unsigned int a3, char a4)
{
  __int64 v7; // rax
  unsigned int *v8; // rbx
  int v9; // edi
  int v10; // r9d

  v7 = EtwpAcquireLoggerContextByLoggerId(a1, a2, 1u);
  v8 = (unsigned int *)v7;
  if ( v7 )
  {
    v9 = EtwpCheckLoggerControlAccess(0x80u, v7);
    if ( v9 >= 0 )
    {
      if ( (v8[3] & 0x2000000) != 0 )
      {
        LOBYTE(v10) = a4;
        EtwpLogKernelTraceRundown(a1, a3, a1 + 32 * *((unsigned __int8 *)v8 + 818) + 4556, v10, 0LL, 0);
      }
      if ( (v8[204] & 0x800) != 0 )
        EtwpLogPmcCounterRundown(v8, a3);
      if ( (v8[204] & 0x1000000) != 0 )
        EtwpStackRundown(*((_QWORD *)v8 + 132), a1, a3);
    }
    KeReleaseMutex((PRKMUTEX)(v8 + 158), 0);
    ExReleaseRundownProtectionCacheAwareEx(
      *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(*((_QWORD *)v8 + 170) + 704LL) + 8LL * *v8),
      1u);
  }
  else
  {
    return (unsigned int)-1073741162;
  }
  return (unsigned int)v9;
}
