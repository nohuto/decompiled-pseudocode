/*
 * XREFs of SmHwAcceleratorCleanup @ 0x14078C82C
 * Callers:
 *     SmHwAcceleratorMgrHotRemoveAccelerator @ 0x14060362C (SmHwAcceleratorMgrHotRemoveAccelerator.c)
 *     SmHwAcceleratorMgrReleaseAccelerators @ 0x14078D448 (SmHwAcceleratorMgrReleaseAccelerators.c)
 * Callees:
 *     ExWaitForRundownProtectionRelease @ 0x14036DCA0 (ExWaitForRundownProtectionRelease.c)
 */

void __fastcall SmHwAcceleratorCleanup(struct _EX_RUNDOWN_REF *a1)
{
  struct _EX_RUNDOWN_REF *v2; // rbx
  __int64 v3; // rdi

  ExWaitForRundownProtectionRelease(a1 + 4);
  v2 = a1 + 2;
  v3 = 2LL;
  do
  {
    if ( v2->Count )
      AccelCloseResource(v2->Count);
    ++v2;
    --v3;
  }
  while ( v3 );
}
