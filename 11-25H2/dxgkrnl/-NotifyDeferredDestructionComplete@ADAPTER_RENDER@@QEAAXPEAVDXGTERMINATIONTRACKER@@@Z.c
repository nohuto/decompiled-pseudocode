/*
 * XREFs of ?NotifyDeferredDestructionComplete@ADAPTER_RENDER@@QEAAXPEAVDXGTERMINATIONTRACKER@@@Z @ 0x140381158
 * Callers:
 *     ADAPTER_RENDER_NotifyDeferredDestructionComplete @ 0x140042890 (ADAPTER_RENDER_NotifyDeferredDestructionComplete.c)
 * Callees:
 *     Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline @ 0x14006681C (Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline.c)
 */

void __fastcall ADAPTER_RENDER::NotifyDeferredDestructionComplete(
        ADAPTER_RENDER *this,
        struct DXGTERMINATIONTRACKER *a2)
{
  char *v3; // rdi
  char v5; // si

  v3 = (char *)this + 1312;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v3, 0LL);
  Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
  *((_QWORD *)v3 + 1) = KeGetCurrentThread();
  if ( *((_BYTE *)this + 1368) )
  {
    v5 = 0;
  }
  else
  {
    v5 = 1;
    if ( !ExAcquireRundownProtection((PEX_RUNDOWN_REF)this + 173) )
    {
      WdLogSingleEntry5(0LL, 275LL, 31LL, this, 0LL, 0LL);
      WdLogGlobalForLineNumber = 4831;
    }
  }
  *((_QWORD *)a2 + 7) = *((_QWORD *)this + 163);
  *((_QWORD *)this + 163) = (char *)a2 + 56;
  *((_BYTE *)this + 1368) = 1;
  Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
  *((_QWORD *)v3 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v3, 0LL);
  KeLeaveCriticalRegion();
  if ( v5 )
  {
    _InterlockedIncrement64((volatile signed __int64 *)(*((_QWORD *)this + 2) + 24LL));
    ExQueueWorkItem((PWORK_QUEUE_ITEM)((char *)this + 1336), DelayedWorkQueue);
  }
}
