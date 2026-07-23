/*
 * XREFs of EtwpAddProviderTrackingInfo @ 0x18001F3FC
 * Callers:
 *     EtwpFinalizeLogFileHeader @ 0x18001EFE0 (EtwpFinalizeLogFileHeader.c)
 * Callees:
 *     EtwpAddDebugInfoEvents @ 0x18008145C (EtwpAddDebugInfoEvents.c)
 *     EtwpAddBinaryInfoEvents @ 0x1800815B0 (EtwpAddBinaryInfoEvents.c)
 */

_QWORD *__fastcall EtwpAddProviderTrackingInfo(__int64 a1, __int64 a2, unsigned int a3)
{
  _QWORD *v3; // rdi
  _QWORD *result; // rax

  v3 = (_QWORD *)(a1 + 464);
  result = (_QWORD *)(a1 + 448);
  if ( ((_QWORD *)*v3 != v3 || (_QWORD *)*result != result)
    && *(_DWORD *)(a2 + 48) < a3
    && *(_DWORD *)(a2 + 48) >= 0x180u )
  {
    if ( (_QWORD *)*result != result )
      result = (_QWORD *)EtwpAddDebugInfoEvents();
    if ( (_QWORD *)*v3 != v3 )
      return (_QWORD *)EtwpAddBinaryInfoEvents(a1, a2, a3);
  }
  return result;
}
