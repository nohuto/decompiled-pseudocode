/*
 * XREFs of ?FlushPagingQueues@DXGDEVICE@@QEAAXXZ @ 0x1403D2690
 * Callers:
 *     ?Stop@DXGDEVICE@@QEAAXE@Z @ 0x1401BBA38 (-Stop@DXGDEVICE@@QEAAXE@Z.c)
 *     ?SuspendResumeEscapeAllDevices@DXGPROCESS@@QEAAXPEBVDXGADAPTER@@_N1@Z @ 0x1401EE050 (-SuspendResumeEscapeAllDevices@DXGPROCESS@@QEAAXPEBVDXGADAPTER@@_N1@Z.c)
 *     ?NotifyProcessFreeze@DXGDEVICE@@QEAAXXZ @ 0x1403BAAD8 (-NotifyProcessFreeze@DXGDEVICE@@QEAAXXZ.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 */

void __fastcall DXGDEVICE::FlushPagingQueues(DXGDEVICE *this)
{
  DXGDEVICE *v2; // rbp
  char *v3; // rsi
  char *i; // rbx

  if ( !*((_BYTE *)this + 72)
    && !ExIsResourceAcquiredExclusiveLite(*((PERESOURCE *)this + 17))
    && *(struct _KTHREAD **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 144LL) != KeGetCurrentThread() )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 8493;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"IsDeviceLockExclusiveOwner() || GetRenderAdapter()->IsStopResetLockExclusiveOwner()",
      8493LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v2 = this;
  if ( (*((_BYTE *)this + 1917) & 1) == 0 )
  {
    v3 = (char *)this + 528;
    for ( i = (char *)*((_QWORD *)this + 66); i != v3 && i; i = *(char **)i )
      (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v2 + 2) + 760LL) + 8LL) + 856LL))(
        *(_QWORD *)(*((_QWORD *)v2 + 2) + 768LL),
        *((_QWORD *)i + 4));
  }
}
