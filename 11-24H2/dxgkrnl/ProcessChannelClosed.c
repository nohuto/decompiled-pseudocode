/*
 * XREFs of ProcessChannelClosed @ 0x14020C520
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     ?NotifyChannelClosed@DXGVMBUSCHANNEL@@QEAAXXZ @ 0x14020BD0C (-NotifyChannelClosed@DXGVMBUSCHANNEL@@QEAAXXZ.c)
 */

void ProcessChannelClosed()
{
  struct _EX_RUNDOWN_REF *v0; // rax
  __int64 v1; // rdx
  __int64 v2; // r8
  __int64 v3; // r9

  v0 = (struct _EX_RUNDOWN_REF *)((__int64 (*)(void))qword_140160398)();
  if ( v0 )
    DXGVMBUSCHANNEL::NotifyChannelClosed(v0, v1, v2, v3);
}
