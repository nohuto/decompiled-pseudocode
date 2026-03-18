/*
 * XREFs of ?FlushDeferredDestructions@ADAPTER_RENDER@@AEAAXXZ @ 0x14019B278
 * Callers:
 *     ?Reset@DXGADAPTER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1401930D4 (-Reset@DXGADAPTER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 *     ?Stop@ADAPTER_RENDER@@QEAAXEE@Z @ 0x14019D7E8 (-Stop@ADAPTER_RENDER@@QEAAXEE@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceExclusiveOwner@ADAPTER_RENDER@@QEBAEXZ @ 0x140026F40 (-IsCoreResourceExclusiveOwner@ADAPTER_RENDER@@QEBAEXZ.c)
 *     Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline @ 0x14006681C (Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     ?FlushDeferredDestruction@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@EE@Z @ 0x1403BE5B8 (-FlushDeferredDestruction@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@EE@Z.c)
 */

void __fastcall ADAPTER_RENDER::FlushDeferredDestructions(DXGDEVICE **this)
{
  DXGDEVICE *v2; // rbx
  DXGDEVICE *i; // rbx
  __int64 v4; // rcx
  DXGDEVICE **v5; // rdi
  DXGDEVICE *j; // rbx
  __int64 v7; // rcx
  struct _KAPC_STATE ApcState; // [rsp+50h] [rbp-48h] BYREF

  if ( !ADAPTER_RENDER::IsCoreResourceExclusiveOwner((ADAPTER_RENDER *)this) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2318;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"IsCoreResourceExclusiveOwner()", 2318LL, 0LL, 0LL, 0LL, 0LL);
  }
  v2 = this[2];
  if ( (unsigned int)Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( *((struct _KTHREAD **)v2 + 18) == KeGetCurrentThread() )
      goto LABEL_9;
  }
  else if ( *((struct _KTHREAD **)v2 + 18) == KeGetCurrentThread() )
  {
    goto LABEL_9;
  }
  if ( !*((_BYTE *)this[2] + 3053) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2323;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"GetAdapter()->IsStopResetLockExclusiveOwner() || GetAdapter()->IsTdrPending()",
      2323LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
LABEL_9:
  for ( i = this[18]; i != (DXGDEVICE *)(this + 18) && i; i = *(DXGDEVICE **)i )
  {
    v4 = *((_QWORD *)i + 5);
    memset(&ApcState, 0, sizeof(ApcState));
    KeStackAttachProcess(*(PRKPROCESS *)(v4 + 56), &ApcState);
    DXGDEVICE::FlushDeferredDestruction(i, 0LL, 0, 0);
    KeUnstackDetachProcess(&ApcState);
  }
  v5 = this + 20;
  for ( j = *v5; j != (DXGDEVICE *)v5 && j; j = *(DXGDEVICE **)j )
  {
    v7 = *((_QWORD *)j + 5);
    memset(&ApcState, 0, sizeof(ApcState));
    KeStackAttachProcess(*(PRKPROCESS *)(v7 + 56), &ApcState);
    DXGDEVICE::FlushDeferredDestruction(j, 0LL, 0, 0);
    KeUnstackDetachProcess(&ApcState);
  }
}
