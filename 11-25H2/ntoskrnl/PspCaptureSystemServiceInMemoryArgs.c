/*
 * XREFs of PspCaptureSystemServiceInMemoryArgs @ 0x1407617E0
 * Callers:
 *     PspSyscallProviderServiceDispatch @ 0x1406A8440 (PspSyscallProviderServiceDispatch.c)
 *     PspSyscallProviderServiceDispatchGeneric @ 0x140761CF4 (PspSyscallProviderServiceDispatchGeneric.c)
 * Callees:
 *     memmove @ 0x1406B4940 (memmove.c)
 *     ExRaiseDatatypeMisalignment @ 0x14085AF60 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall PspCaptureSystemServiceInMemoryArgs(void *Src, void *a2, unsigned __int8 a3)
{
  size_t v3; // r8

  v3 = 8LL * a3;
  if ( v3 && ((unsigned __int8)Src & 7) != 0 )
    ExRaiseDatatypeMisalignment();
  memmove(a2, Src, v3);
  return 0LL;
}
