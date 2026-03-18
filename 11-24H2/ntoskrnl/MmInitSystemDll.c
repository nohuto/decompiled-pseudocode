/*
 * XREFs of MmInitSystemDll @ 0x140BDE990
 * Callers:
 *     Phase1InitializationIoReady @ 0x140C5FB78 (Phase1InitializationIoReady.c)
 * Callees:
 *     ObFastDereferenceObject @ 0x140356880 (ObFastDereferenceObject.c)
 *     PsQuerySystemDllInfo @ 0x1408FB0A8 (PsQuerySystemDllInfo.c)
 *     PspReferenceSystemDll @ 0x1408FF9C8 (PspReferenceSystemDll.c)
 */

char MmInitSystemDll()
{
  ULONG_PTR SystemDllInfo; // rax
  ULONG_PTR v1; // rbx

  SystemDllInfo = PsQuerySystemDllInfo(0);
  v1 = SystemDllInfo;
  if ( SystemDllInfo )
  {
    SystemDllInfo = PspReferenceSystemDll(*(signed __int64 **)(SystemDllInfo - 8));
    qword_140E2DA40 = *(_QWORD *)(v1 + 24);
    if ( SystemDllInfo )
      LOBYTE(SystemDllInfo) = ObFastDereferenceObject(*(__int64 **)(v1 - 8), SystemDllInfo, 0x64537350u);
  }
  return SystemDllInfo;
}
