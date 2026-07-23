/*
 * XREFs of MmInitSystemDll @ 0x140BE0990
 * Callers:
 *     Phase1InitializationIoReady @ 0x140C61CC8 (Phase1InitializationIoReady.c)
 * Callees:
 *     ObFastDereferenceObject @ 0x140324D60 (ObFastDereferenceObject.c)
 *     PsQuerySystemDllInfo @ 0x14091D988 (PsQuerySystemDllInfo.c)
 *     PspReferenceSystemDll @ 0x1409222A8 (PspReferenceSystemDll.c)
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
    qword_140E2DB80 = *(_QWORD *)(v1 + 24);
    if ( SystemDllInfo )
      LOBYTE(SystemDllInfo) = ObFastDereferenceObject(*(__int64 **)(v1 - 8), SystemDllInfo, 0x64537350u);
  }
  return SystemDllInfo;
}
