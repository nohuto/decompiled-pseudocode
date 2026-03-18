/*
 * XREFs of ?UpdateLatencyTolerances@DXGADAPTER@@QEAAXXZ @ 0x1400310E0
 * Callers:
 *     ?PowerRuntimeComponentActiveCallback@DXGADAPTER@@QEAAXKE@Z @ 0x140013DA0 (-PowerRuntimeComponentActiveCallback@DXGADAPTER@@QEAAXKE@Z.c)
 *     ?NotifyPrimaryMonitorPowerChange@DXGADAPTER@@QEAAXE@Z @ 0x140030FDC (-NotifyPrimaryMonitorPowerChange@DXGADAPTER@@QEAAXE@Z.c)
 *     ?LatencyToleranceTimerNotification@DXGADAPTER@@QEAAX_K@Z @ 0x14003926C (-LatencyToleranceTimerNotification@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?NotifyContextCreation@DXGADAPTER@@QEAAXPEAVDXGCONTEXT@@EI@Z @ 0x1400419DC (-NotifyContextCreation@DXGADAPTER@@QEAAXPEAVDXGCONTEXT@@EI@Z.c)
 *     ?ReleaseCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z @ 0x1402BA244 (-ReleaseCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z.c)
 *     ?InitializePowerManagement@DXGADAPTER@@AEAAJXZ @ 0x14036DEB0 (-InitializePowerManagement@DXGADAPTER@@AEAAJXZ.c)
 *     ?NotifyProcessThaw@DXGPROCESS@@QEAAXXZ @ 0x14039FDC8 (-NotifyProcessThaw@DXGPROCESS@@QEAAXXZ.c)
 *     ?NotifyProcessFreeze@DXGPROCESS@@QEAAXXZ @ 0x1403A2B1C (-NotifyProcessFreeze@DXGPROCESS@@QEAAXXZ.c)
 * Callees:
 *     ?ComputeLatencyToleranceForMemoryComponents@DXGADAPTER@@QEAAXXZ @ 0x140030C94 (-ComputeLatencyToleranceForMemoryComponents@DXGADAPTER@@QEAAXXZ.c)
 *     ??1DXGAUTOSPINLOCK@@QEAA@XZ @ 0x140031094 (--1DXGAUTOSPINLOCK@@QEAA@XZ.c)
 *     ?Acquire@DXGAUTOSPINLOCK@@QEAAXXZ @ 0x14003124C (-Acquire@DXGAUTOSPINLOCK@@QEAAXXZ.c)
 *     ?SetPowerComponentLatencyCB@DXGADAPTER@@QEAAXI_K@Z @ 0x14003130C (-SetPowerComponentLatencyCB@DXGADAPTER@@QEAAXI_K@Z.c)
 *     Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline @ 0x14006681C (Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline.c)
 */

void __fastcall DXGADAPTER::UpdateLatencyTolerances(DXGADAPTER *this)
{
  int v2; // eax
  int v3; // eax
  unsigned __int64 v4; // r8
  unsigned __int64 v5; // rdi
  int v6; // ecx
  unsigned int v7; // edx
  _BYTE v8[8]; // [rsp+20h] [rbp-38h] BYREF
  char *v9; // [rsp+28h] [rbp-30h]
  char v10; // [rsp+48h] [rbp-10h]

  v10 = 0;
  v9 = (char *)this + 3688;
  if ( !(unsigned int)Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( *((struct _KTHREAD **)this + 462) == KeGetCurrentThread() )
      goto LABEL_6;
    goto LABEL_5;
  }
  if ( *((struct _KTHREAD **)this + 462) != KeGetCurrentThread() )
LABEL_5:
    DXGAUTOSPINLOCK::Acquire((DXGAUTOSPINLOCK *)v8);
LABEL_6:
  if ( !*((_QWORD *)this + 448) || *((_DWORD *)this + 40) == 1 )
    goto LABEL_28;
  v2 = *((_DWORD *)this + 845);
  if ( !*((_BYTE *)this + 3666) )
  {
    if ( !v2 || (v6 = *((_DWORD *)this + 917), (unsigned int)(v6 - 2) <= 1) )
    {
      v4 = *((_QWORD *)this + 450);
      v5 = *((_QWORD *)this + 456);
      goto LABEL_24;
    }
    if ( v6 )
    {
      v4 = *((_QWORD *)this + 442);
LABEL_22:
      v5 = *((_QWORD *)this + 454);
      goto LABEL_24;
    }
    goto LABEL_20;
  }
  if ( v2 )
  {
    v3 = *((_DWORD *)this + 917);
    if ( v3 )
    {
      if ( v3 != 2 )
      {
        v5 = *((_QWORD *)this + 454);
        if ( v3 == 3 )
          v4 = *((_QWORD *)this + 446);
        else
          v4 = *((_QWORD *)this + 442);
        goto LABEL_24;
      }
      v4 = *((_QWORD *)this + 444);
      goto LABEL_22;
    }
LABEL_20:
    v4 = *((_QWORD *)this + 440);
    v5 = *((_QWORD *)this + 453);
    goto LABEL_24;
  }
  v4 = *((_QWORD *)this + 449);
  v5 = *((_QWORD *)this + 455);
LABEL_24:
  if ( *((_BYTE *)this + 3664) )
    DXGADAPTER::SetPowerComponentLatencyCB(this, *((_DWORD *)this + 843), v4);
  v7 = *((_DWORD *)this + 844);
  if ( v7 != -1 )
    DXGADAPTER::SetPowerComponentLatencyCB(this, v7, v5);
LABEL_28:
  DXGADAPTER::ComputeLatencyToleranceForMemoryComponents(this);
  DXGAUTOSPINLOCK::~DXGAUTOSPINLOCK((DXGAUTOSPINLOCK *)v8);
}
