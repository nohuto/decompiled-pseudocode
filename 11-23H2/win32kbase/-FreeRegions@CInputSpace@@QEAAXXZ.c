/*
 * XREFs of ?FreeRegions@CInputSpace@@QEAAXXZ @ 0x1C00B756C
 * Callers:
 *     ?_CreateLegacyInputSpace@CInputConfig@@AEAAJXZ @ 0x1C001917C (-_CreateLegacyInputSpace@CInputConfig@@AEAAJXZ.c)
 *     ?_FreeInputSpace@CInputConfig@@AEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C00B74E0 (-_FreeInputSpace@CInputConfig@@AEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     NtConfigureInputSpace @ 0x1C0140840 (NtConfigureInputSpace.c)
 * Callees:
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C008C460 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 */

void __fastcall CInputSpace::FreeRegions(CInputSpace *this)
{
  char **v2; // rdi
  char *v3; // rdx
  __int64 v4; // rcx
  char **v5; // rax

  v2 = (char **)((char *)this + 1456);
  while ( 1 )
  {
    v3 = *v2;
    if ( *v2 == (char *)v2 )
      break;
    v4 = *(_QWORD *)v3;
    v5 = (char **)*((_QWORD *)v3 + 1);
    if ( *(char **)(*(_QWORD *)v3 + 8LL) != v3 || *v5 != v3 )
      __fastfail(3u);
    *v5 = (char *)v4;
    *(_QWORD *)(v4 + 8) = v5;
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v3);
  }
  *((_DWORD *)this + 363) = 0;
}
