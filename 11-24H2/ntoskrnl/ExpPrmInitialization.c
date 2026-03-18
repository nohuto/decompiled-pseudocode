/*
 * XREFs of ExpPrmInitialization @ 0x140C40D54
 * Callers:
 *     ExpInitSystemPhase1 @ 0x140C40A64 (ExpInitSystemPhase1.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14025A450 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x140341E80 (ExAcquireResourceSharedLite.c)
 *     RtlEqualUnicodeString @ 0x140927050 (RtlEqualUnicodeString.c)
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
