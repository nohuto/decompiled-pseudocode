/*
 * XREFs of SmmLockPages @ 0x140280574
 * Callers:
 *     SmmLockPagesForAdapter @ 0x1402806EC (SmmLockPagesForAdapter.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
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
    _InterlockedAdd64(&qword_14015E620, a2);
    *a3 = v6;
    return 0LL;
  }
  else
  {
    _InterlockedIncrement(&dword_14015E638);
    WdLogSingleEntry1(6LL, a2);
    WdLogGlobalForLineNumber = 179;
    DxgkLogInternalTriageEvent(0LL, 262145, 0xFFFFFFFFLL, L"Failed to allocate MDL of size %u", a2, 0LL, 0LL, 0LL, 0LL);
    *a3 = 0LL;
    return 3221225495LL;
  }
}
