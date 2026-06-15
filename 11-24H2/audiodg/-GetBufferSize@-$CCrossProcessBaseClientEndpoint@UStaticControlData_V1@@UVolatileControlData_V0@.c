/*
 * XREFs of ?GetBufferSize@?$CCrossProcessBaseClientEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@UEAAJPEAI@Z @ 0x140081F20
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CSAutoLock@$00@@QEAA@XZ @ 0x14002C920 (--1-$CSAutoLock@$00@@QEAA@XZ.c)
 *     ?AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140052878 (-AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall CCrossProcessBaseClientEndpoint<StaticControlData_V1,VolatileControlData_V0,ControlData_V1>::GetBufferSize(
        __int64 a1,
        int *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  unsigned int v5; // edi
  struct _RTL_CRITICAL_SECTION *v7; // [rsp+30h] [rbp+8h] BYREF

  v2 = (struct _RTL_CRITICAL_SECTION *)(a1 - 408);
  v5 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 - 408));
  v7 = v2;
  if ( a2 )
  {
    if ( *(_DWORD *)(a1 - 368) )
    {
      *a2 = *(_DWORD *)(a1 - 256) / *(_DWORD *)(a1 - 320);
      goto LABEL_7;
    }
    v5 = -2005139437;
  }
  else
  {
    v5 = -2147467261;
  }
  AudCPTraceLoggingErrorHelper(
    "CCrossProcessBaseClientEndpoint<struct StaticControlData_V1,struct VolatileControlData_V0,struct ControlData_V1>::GetBufferSize");
LABEL_7:
  CSAutoLock<1>::~CSAutoLock<1>(&v7);
  return v5;
}
