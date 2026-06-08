/*
 * XREFs of InitializeSingleEnumerationContext @ 0x1400089CC
 * Callers:
 *     CpcHighestNotifyWorker @ 0x1400454CC (CpcHighestNotifyWorker.c)
 *     GetPerfDomain @ 0x140045878 (GetPerfDomain.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall InitializeSingleEnumerationContext(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = 0LL;
  *(_QWORD *)(a2 + 16) = a1;
  *(_QWORD *)a2 = 0LL;
  *(_QWORD *)(a2 + 8) = 0LL;
  *(_BYTE *)(a2 + 24) = 0;
  return result;
}
