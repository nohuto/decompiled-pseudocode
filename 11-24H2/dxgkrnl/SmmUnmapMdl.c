/*
 * XREFs of SmmUnmapMdl @ 0x14001EED8
 * Callers:
 *     ?SysMmUnmapPhysicalObject@@YAXPEAUSYSMM_PHYSICAL_OBJECT@@PEAX_K@Z @ 0x14001F350 (-SysMmUnmapPhysicalObject@@YAXPEAUSYSMM_PHYSICAL_OBJECT@@PEAX_K@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 */

void __fastcall SmmUnmapMdl(__int64 a1, struct _MDL *a2, void *a3)
{
  void *v3; // rdi

  v3 = 0LL;
  if ( a3 <= MmHighestUserAddress )
  {
    v3 = a3;
  }
  else
  {
    ExAcquirePushLockExclusiveEx(a1 + 32, 0LL);
    if ( (*(_DWORD *)(a1 + 48))-- == 1 )
    {
      v3 = a3;
    }
    else if ( a3 != a2->MappedSystemVa )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 420;
      DxgkLogInternalTriageEvent(
        0LL,
        262146LL,
        0xFFFFFFFFLL,
        L"pMappedAddress == pMdl->MappedSystemVa",
        420LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    ExReleasePushLockExclusiveEx(a1 + 32, 0LL);
  }
  if ( v3 )
    MmUnmapLockedPages(a3, a2);
}
