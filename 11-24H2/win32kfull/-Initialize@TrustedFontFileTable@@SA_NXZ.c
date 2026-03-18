/*
 * XREFs of ?Initialize@TrustedFontFileTable@@SA_NXZ @ 0x14030EDC4
 * Callers:
 *     InitializeGdiSiloGlobals @ 0x140221BC0 (InitializeGdiSiloGlobals.c)
 * Callees:
 *     <none>
 */

char __fastcall TrustedFontFileTable::Initialize(__int64 a1, __int64 a2)
{
  __int64 SiloGlobals; // rbx
  __int64 Semaphore; // rax
  struct _RTL_AVL_TABLE *v5; // rax

  SiloGlobals = UserGetSiloGlobals(a1, a2);
  Semaphore = GreCreateSemaphore();
  *(_QWORD *)(SiloGlobals + 16) = Semaphore;
  if ( !Semaphore )
    return 0;
  v5 = (struct _RTL_AVL_TABLE *)Win32AllocPoolNonPaged(104LL, 1717990471LL);
  *(_QWORD *)(SiloGlobals + 24) = v5;
  if ( !v5 )
  {
    *(_QWORD *)(SiloGlobals + 16) = 0LL;
    return 0;
  }
  RtlInitializeGenericTableAvl(
    v5,
    (PRTL_AVL_COMPARE_ROUTINE)GDITrustedFontFileCompare,
    (PRTL_AVL_ALLOCATE_ROUTINE)GDITrustedFontFileAlloc,
    (PRTL_AVL_FREE_ROUTINE)GDITrustedFontFileFree,
    0LL);
  return 1;
}
