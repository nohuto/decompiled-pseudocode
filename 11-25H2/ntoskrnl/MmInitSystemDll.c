/*
 * XREFs of MmInitSystemDll @ 0x140BCD990
 * Callers:
 *     Phase1InitializationIoReady @ 0x140C4E7F4 (Phase1InitializationIoReady.c)
 * Callees:
 *     ObFastDereferenceObject @ 0x1402930B0 (ObFastDereferenceObject.c)
 *     PsQuerySystemDllInfo @ 0x1409075D8 (PsQuerySystemDllInfo.c)
 *     PspReferenceSystemDll @ 0x14090BA68 (PspReferenceSystemDll.c)
 */

__int64 MmInitSystemDll()
{
  __int64 result; // rax
  __int64 v1; // rbx

  result = PsQuerySystemDllInfo(0);
  v1 = result;
  if ( result )
  {
    result = PspReferenceSystemDll(*(signed __int64 **)(result - 8));
    qword_140E2D800 = *(_QWORD *)(v1 + 24);
    if ( result )
      return ObFastDereferenceObject(*(__int64 **)(v1 - 8), result, 1683190608LL);
  }
  return result;
}
