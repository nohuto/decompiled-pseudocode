/*
 * XREFs of SmmLockPages @ 0x140287A14
 * Callers:
 *     SmmLockPagesForAdapter @ 0x140287B8C (SmmLockPagesForAdapter.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 */

__int64 __fastcall SmmLockPages(void *a1, unsigned __int64 a2, struct _MDL **a3)
{
  struct _MDL *Mdl; // rax
  struct _MDL *v6; // rdi

  Mdl = IoAllocateMdl(a1, a2, 0, 0, 0LL);
  v6 = Mdl;
  if ( Mdl )
  {
    MmProbeAndLockPages(Mdl, 0, IoModifyAccess);
    _InterlockedAdd64(&qword_140161630, a2);
    *a3 = v6;
    return 0LL;
  }
  else
  {
    _InterlockedIncrement(&dword_140161648);
    WdLogSingleEntry1(6LL, a2);
    WdLogGlobalForLineNumber = 179;
    DxgkLogInternalTriageEvent(
      0LL,
      262145LL,
      0xFFFFFFFFLL,
      L"Failed to allocate MDL of size %u",
      a2,
      0LL,
      0LL,
      0LL,
      0LL);
    *a3 = 0LL;
    return 3221225495LL;
  }
}
