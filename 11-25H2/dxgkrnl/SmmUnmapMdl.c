/*
 * XREFs of SmmUnmapMdl @ 0x14000FA48
 * Callers:
 *     ?SysMmUnmapPhysicalObject@@YAXPEAUSYSMM_PHYSICAL_OBJECT@@PEAX_K@Z @ 0x14000FEC0 (-SysMmUnmapPhysicalObject@@YAXPEAUSYSMM_PHYSICAL_OBJECT@@PEAX_K@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
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
        0,
        262146,
        -1,
        (unsigned int)L"pMappedAddress == pMdl->MappedSystemVa",
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
