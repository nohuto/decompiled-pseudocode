/*
 * XREFs of ?TryReleaseDeviceLockForAllDevices@ADAPTER_RENDER@@QEAAXW4DXGADAPTER_DEVICELISTTYPE@@@Z @ 0x14038C2F8
 * Callers:
 *     ?ReleaseLocksForPowerStateD3transition@DXGADAPTER@@QEAAXXZ @ 0x14038C2B8 (-ReleaseLocksForPowerStateD3transition@DXGADAPTER@@QEAAXXZ.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@ADAPTER_RENDER@@QEBAEXZ @ 0x140026F40 (-IsCoreResourceExclusiveOwner@ADAPTER_RENDER@@QEBAEXZ.c)
 *     Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline @ 0x14006681C (Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline.c)
 */

void __fastcall ADAPTER_RENDER::TryReleaseDeviceLockForAllDevices(ADAPTER_RENDER *a1, int a2)
{
  __int64 v4; // r13
  char *v5; // r13
  __int64 v6; // r12
  __int64 **v7; // r12
  __int64 v8; // rsi
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 *i; // rdi
  struct _KTHREAD *v13; // rax
  bool v14; // zf

  v4 = 48LL;
  if ( a2 != 1 )
    v4 = 24LL;
  v5 = (char *)a1 + v4;
  v6 = 160LL;
  if ( a2 != 1 )
    v6 = 144LL;
  v7 = (__int64 **)((char *)a1 + v6);
  v8 = 56LL;
  if ( (unsigned int)Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline() )
  {
    v11 = 56LL;
    if ( a2 != 1 )
      v11 = 32LL;
    if ( *(struct _KTHREAD **)((char *)a1 + v11) == KeGetCurrentThread() )
      goto LABEL_14;
LABEL_13:
    if ( !ADAPTER_RENDER::IsCoreResourceExclusiveOwner(a1) )
      return;
    goto LABEL_14;
  }
  CurrentThread = KeGetCurrentThread();
  v10 = 56LL;
  if ( a2 != 1 )
    v10 = 32LL;
  if ( *(struct _KTHREAD **)((char *)a1 + v10) != CurrentThread )
    goto LABEL_13;
LABEL_14:
  for ( i = *v7;
        i != (__int64 *)v7 && i && (*((_BYTE *)i + 72) || ExIsResourceAcquiredExclusiveLite((PERESOURCE)i[17]));
        i = (__int64 *)*i )
  {
    ExReleaseResourceLite((PERESOURCE)i[17]);
    Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
    if ( (struct _KTHREAD *)i[19] != KeGetCurrentThread() )
      break;
    Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
    i[19] = 0LL;
    ExReleasePushLockExclusiveEx(i + 18, 0LL);
  }
  if ( (unsigned int)Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( a2 != 1 )
      v8 = 32LL;
    v14 = *(_QWORD *)((char *)a1 + v8) == (_QWORD)KeGetCurrentThread();
  }
  else
  {
    v13 = KeGetCurrentThread();
    if ( a2 != 1 )
      v8 = 32LL;
    v14 = *(_QWORD *)((char *)a1 + v8) == (_QWORD)v13;
  }
  if ( v14 )
  {
    Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
    *((_QWORD *)v5 + 1) = 0LL;
    ExReleasePushLockExclusiveEx(v5, 0LL);
    KeLeaveCriticalRegion();
  }
}
