/*
 * XREFs of ExpPrmInitialization @ 0x140C2FA44
 * Callers:
 *     ExpInitSystemPhase1 @ 0x140C2F788 (ExpInitSystemPhase1.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     ExAcquireResourceSharedLite @ 0x140295130 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x140296E10 (ExReleaseResourceLite.c)
 *     RtlEqualUnicodeString @ 0x1409329B0 (RtlEqualUnicodeString.c)
 */

void __fastcall ExpPrmInitialization(_QWORD *a1)
{
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *i; // rbx
  __int64 v4; // rbp
  PVOID *j; // rdi

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(&PsLoadedModuleResource, 1u);
  for ( i = (_QWORD *)*a1; i != a1; i = (_QWORD *)*i )
  {
    v4 = i[6];
    for ( j = (PVOID *)PsLoadedModuleList; j != &PsLoadedModuleList; j = (PVOID *)*j )
    {
      if ( RtlEqualUnicodeString((PCUNICODE_STRING)(v4 + 72), (PCUNICODE_STRING)(j + 9), 1u) )
      {
        i[6] = j;
        break;
      }
    }
  }
  ExReleaseResourceLite(&PsLoadedModuleResource);
  KeLeaveCriticalRegion();
}
