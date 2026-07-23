/*
 * XREFs of EtwpAddProviderTrackingInfo @ 0x180092B6C
 * Callers:
 *     EtwpFinalizeLogFileHeader @ 0x180092750 (EtwpFinalizeLogFileHeader.c)
 * Callees:
 *     EtwpAddDebugInfoEvents @ 0x18008330C (EtwpAddDebugInfoEvents.c)
 *     EtwpAddBinaryInfoEvents @ 0x180083460 (EtwpAddBinaryInfoEvents.c)
 */

int __fastcall EtwpAddProviderTrackingInfo(__int64 a1, __int64 a2, unsigned int a3)
{
  _QWORD *v3; // rdi
  _QWORD *v5; // rax

  v3 = (_QWORD *)(a1 + 464);
  v5 = (_QWORD *)(a1 + 448);
  if ( ((_QWORD *)*v3 != v3 || (_QWORD *)*v5 != v5) && *(_DWORD *)(a2 + 48) < a3 && *(_DWORD *)(a2 + 48) >= 0x180u )
  {
    if ( (_QWORD *)*v5 != v5 )
      LODWORD(v5) = EtwpAddDebugInfoEvents(a1, a2, a3);
    if ( (_QWORD *)*v3 != v3 )
      LODWORD(v5) = EtwpAddBinaryInfoEvents(a1, a2, a3);
  }
  return (int)v5;
}
