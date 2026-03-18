/*
 * XREFs of ProcessChannelClosed @ 0x140205E50
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     ?NotifyChannelClosed@DXGVMBUSCHANNEL@@QEAAXXZ @ 0x140205640 (-NotifyChannelClosed@DXGVMBUSCHANNEL@@QEAAXXZ.c)
 */

void ProcessChannelClosed()
{
  struct _EX_RUNDOWN_REF *v0; // rax
  __int64 v1; // rdx
  __int64 v2; // r8
  __int64 v3; // r9

  v0 = (struct _EX_RUNDOWN_REF *)((__int64 (*)(void))qword_14015D378)();
  if ( v0 )
    DXGVMBUSCHANNEL::NotifyChannelClosed(v0, v1, v2, v3);
}
