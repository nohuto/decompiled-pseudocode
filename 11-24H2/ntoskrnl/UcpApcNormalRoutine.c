/*
 * XREFs of UcpApcNormalRoutine @ 0x140800F80
 * Callers:
 *     <none>
 * Callees:
 *     UcpLogEventGenerateDump @ 0x140695B7C (UcpLogEventGenerateDump.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall UcpApcNormalRoutine(_QWORD *P)
{
  __int64 v2; // rdx
  _DWORD v3[6]; // [rsp+20h] [rbp-18h] BYREF

  v2 = P[13];
  v3[0] = *((_DWORD *)P + 22);
  v3[1] = *((_DWORD *)P + 23);
  v3[2] = *((_DWORD *)P + 24);
  UcpLogEventGenerateDump(v3, v2);
  ExFreePoolWithTag(P, 0);
}
