/*
 * XREFs of SmmLockPagesForAdapter @ 0x140287B8C
 * Callers:
 *     ?SmmLockPagedObject@@YAJPEAUSYSMM_PHYSICAL_OBJECT@@PEAUSYSMM_ADAPTER_OBJECT@@@Z @ 0x1402877FC (-SmmLockPagedObject@@YAJPEAUSYSMM_PHYSICAL_OBJECT@@PEAUSYSMM_ADAPTER_OBJECT@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     SmmLockPages @ 0x140287A14 (SmmLockPages.c)
 *     SmmUnlockPages @ 0x140287DE0 (SmmUnlockPages.c)
 */

__int64 __fastcall SmmLockPagesForAdapter(__int64 a1, void *a2, unsigned __int64 a3, PMDL *a4)
{
  unsigned int v4; // ebp
  int v7; // eax
  struct _MDL *v8; // rbx
  PMDL i; // rcx
  PMDL Mdl; // [rsp+50h] [rbp-18h] BYREF

  Mdl = 0LL;
  v4 = a3;
  v7 = SmmLockPages(a2, a3, &Mdl);
  v8 = Mdl;
  if ( v7 >= 0 && (*(_DWORD *)(a1 + 92) & 1) == 0 )
  {
    for ( i = Mdl + 1; i != (struct _MDL *)((char *)&Mdl[1] + 8 * ((unsigned __int64)v4 >> 12)); i = (PMDL)((char *)i + 8) )
    {
      if ( i->Next > (struct _MDL *)(*(_QWORD *)(a1 + 8) >> 12) )
      {
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 315;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000LL,
          0xFFFFFFFFLL,
          L"MmProbeAndLockPages returned an MDL with a PFN that the adapter cannot access.",
          315LL,
          0LL,
          0LL,
          0LL,
          0LL);
        if ( v8 )
          SmmUnlockPages(v8);
        return 3223191809LL;
      }
    }
  }
  *a4 = Mdl;
  return 0LL;
}
