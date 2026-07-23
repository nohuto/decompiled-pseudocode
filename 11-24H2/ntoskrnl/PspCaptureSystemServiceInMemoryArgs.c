/*
 * XREFs of PspCaptureSystemServiceInMemoryArgs @ 0x1407713C0
 * Callers:
 *     PspSyscallProviderServiceDispatch @ 0x1406B46B0 (PspSyscallProviderServiceDispatch.c)
 *     PspSyscallProviderServiceDispatchGeneric @ 0x1407718D4 (PspSyscallProviderServiceDispatchGeneric.c)
 * Callees:
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408A3890 (ExRaiseDatatypeMisalignment.c)
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
