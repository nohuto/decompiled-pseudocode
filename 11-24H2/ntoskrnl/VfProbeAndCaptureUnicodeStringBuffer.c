/*
 * XREFs of VfProbeAndCaptureUnicodeStringBuffer @ 0x140B85008
 * Callers:
 *     NtSetSystemInformation @ 0x140AE2BE0 (NtSetSystemInformation.c)
 *     VfProbeAndCaptureUnicodeString @ 0x140B84FCC (VfProbeAndCaptureUnicodeString.c)
 * Callees:
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall VfProbeAndCaptureUnicodeStringBuffer(unsigned __int16 *a1, int a2)
{
  ULONG_PTR v5; // rdx
  ULONG_PTR v6; // rcx
  void *Pool2; // rax
  void *v8; // rdi

  if ( (*a1 & 1) != 0 )
    return 3221225485LL;
  if ( *a1 )
  {
    v5 = *a1;
    v6 = 256LL;
    if ( a2 != 1 )
      v6 = 64LL;
    Pool2 = (void *)ExAllocatePool2(v6, v5, 0x43536656uLL);
    v8 = Pool2;
    if ( !Pool2 )
      return 3221225495LL;
    memmove(Pool2, *((const void **)a1 + 1), *a1);
    *((_QWORD *)a1 + 1) = v8;
  }
  else
  {
    *((_QWORD *)a1 + 1) = MmBadPointer;
  }
  a1[1] = *a1;
  return 0LL;
}
