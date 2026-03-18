/*
 * XREFs of VrpBecomeDiffHiveEntryTransitionOwner @ 0x14092AEF4
 * Callers:
 *     VrpLoadDifferencingHive @ 0x14092A57C (VrpLoadDifferencingHive.c)
 *     VrpUnloadDifferencingHive @ 0x14092AB4C (VrpUnloadDifferencingHive.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 */

char __fastcall VrpBecomeDiffHiveEntryTransitionOwner(__int64 a1)
{
  _QWORD *v1; // rcx
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v3; // rax

  v1 = (_QWORD *)(a1 + 40);
  if ( *v1 )
    return 0;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  *v1 = KeGetCurrentThread();
  v3 = KeAbPreAcquire((__int64)v1, 0LL);
  if ( v3 )
    *((_BYTE *)v3 + 10) = 1;
  return 1;
}
