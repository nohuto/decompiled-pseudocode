/*
 * XREFs of ProcessChannelPostStarted @ 0x140205E80
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     ?NotifyChannelPostStarted@DXGVMBUSCHANNEL@@QEAAXXZ @ 0x1402056F8 (-NotifyChannelPostStarted@DXGVMBUSCHANNEL@@QEAAXXZ.c)
 */

void ProcessChannelPostStarted()
{
  DXGVMBUSCHANNEL *v0; // rax
  __int64 v1; // rdx
  __int64 v2; // r8
  __int64 v3; // r9

  v0 = (DXGVMBUSCHANNEL *)((__int64 (*)(void))qword_14015D378)();
  if ( v0 )
    DXGVMBUSCHANNEL::NotifyChannelPostStarted(v0, v1, v2, v3);
}
