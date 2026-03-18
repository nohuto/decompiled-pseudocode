/*
 * XREFs of ?FlushPagingQueues@DXGDEVICE@@QEAAXXZ @ 0x1403D95D4
 * Callers:
 *     ?Stop@DXGDEVICE@@QEAAXE@Z @ 0x1401B927C (-Stop@DXGDEVICE@@QEAAXE@Z.c)
 *     ?SuspendResumeEscapeAllDevices@DXGPROCESS@@QEAAXPEBVDXGADAPTER@@_N1@Z @ 0x1401E8678 (-SuspendResumeEscapeAllDevices@DXGPROCESS@@QEAAXPEBVDXGADAPTER@@_N1@Z.c)
 *     ?NotifyProcessFreeze@DXGDEVICE@@QEAAXXZ @ 0x1403C6678 (-NotifyProcessFreeze@DXGDEVICE@@QEAAXXZ.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline @ 0x14006681C (Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 */

void __fastcall DXGDEVICE::FlushPagingQueues(DXGDEVICE *this)
{
  __int64 v2; // rdi
  DXGDEVICE *v3; // rsi
  char *v4; // r14
  char *i; // rbx

  if ( !*((_BYTE *)this + 72) && !ExIsResourceAcquiredExclusiveLite(*((PERESOURCE *)this + 17)) )
  {
    v2 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
    if ( (unsigned int)Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline() )
    {
      if ( *(struct _KTHREAD **)(v2 + 144) == KeGetCurrentThread() )
        goto LABEL_8;
    }
    else if ( *(struct _KTHREAD **)(v2 + 144) == KeGetCurrentThread() )
    {
      goto LABEL_8;
    }
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 8254;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"IsDeviceLockExclusiveOwner() || GetRenderAdapter()->IsStopResetLockExclusiveOwner()",
      8254LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
LABEL_8:
  v3 = this;
  if ( (*((_BYTE *)this + 1901) & 1) == 0 )
  {
    v4 = (char *)this + 528;
    for ( i = (char *)*((_QWORD *)this + 66); i != v4 && i; i = *(char **)i )
      (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v3 + 2) + 760LL) + 8LL) + 856LL))(
        *(_QWORD *)(*((_QWORD *)v3 + 2) + 768LL),
        *((_QWORD *)i + 4));
  }
}
