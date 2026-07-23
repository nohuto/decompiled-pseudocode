/*
 * XREFs of EtwpCopyJobIdSafe @ 0x140A60158
 * Callers:
 *     EtwTraceJobServerSiloMonitorCallback @ 0x14064C040 (EtwTraceJobServerSiloMonitorCallback.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EtwpCopyJobIdSafe(_DWORD *a1, __int64 a2)
{
  __int64 result; // rax

  result = 0LL;
  if ( a2 )
    result = *(unsigned int *)(a2 + 1468);
  *a1 = result;
  return result;
}
