/*
 * XREFs of ?UpdateLatencyTolerances@DXGADAPTER@@QEAAXXZ @ 0x14004A484
 * Callers:
 *     ?PowerRuntimeComponentActiveCallback@DXGADAPTER@@QEAAXKE@Z @ 0x140010BB0 (-PowerRuntimeComponentActiveCallback@DXGADAPTER@@QEAAXKE@Z.c)
 *     ?NotifyPrimaryMonitorPowerChange@DXGADAPTER@@QEAAXE@Z @ 0x140053964 (-NotifyPrimaryMonitorPowerChange@DXGADAPTER@@QEAAXE@Z.c)
 *     ?LatencyToleranceTimerNotification@DXGADAPTER@@QEAAX_K@Z @ 0x14005D4A8 (-LatencyToleranceTimerNotification@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?NotifyContextCreation@DXGADAPTER@@QEAAXPEAVDXGCONTEXT@@EI@Z @ 0x14005D708 (-NotifyContextCreation@DXGADAPTER@@QEAAXPEAVDXGCONTEXT@@EI@Z.c)
 *     ?ReleaseCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z @ 0x1402C7A94 (-ReleaseCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z.c)
 *     ?InitializePowerManagement@DXGADAPTER@@AEAAJXZ @ 0x14035B368 (-InitializePowerManagement@DXGADAPTER@@AEAAJXZ.c)
 *     ?NotifyProcessThaw@DXGPROCESS@@QEAAXXZ @ 0x140396428 (-NotifyProcessThaw@DXGPROCESS@@QEAAXXZ.c)
 *     ?NotifyProcessFreeze@DXGPROCESS@@QEAAXXZ @ 0x1403999CC (-NotifyProcessFreeze@DXGPROCESS@@QEAAXXZ.c)
 * Callees:
 *     ?Acquire@DXGAUTOSPINLOCK@@QEAAXXZ @ 0x140033AB4 (-Acquire@DXGAUTOSPINLOCK@@QEAAXXZ.c)
 *     ??1DXGAUTOSPINLOCK@@QEAA@XZ @ 0x1400354BC (--1DXGAUTOSPINLOCK@@QEAA@XZ.c)
 *     ?ComputeLatencyToleranceForMemoryComponents@DXGADAPTER@@QEAAXXZ @ 0x140042998 (-ComputeLatencyToleranceForMemoryComponents@DXGADAPTER@@QEAAXXZ.c)
 *     ?SetPowerComponentLatencyCB@DXGADAPTER@@QEAAXI_K@Z @ 0x140042A84 (-SetPowerComponentLatencyCB@DXGADAPTER@@QEAAXI_K@Z.c)
 */

void __fastcall DXGADAPTER::UpdateLatencyTolerances(DXGADAPTER *this)
{
  struct _KTHREAD *v1; // rdx
  int v3; // eax
  int v4; // eax
  __int64 v5; // r8
  __int64 v6; // rdi
  int v7; // ecx
  unsigned int v8; // edx
  _BYTE v9[8]; // [rsp+20h] [rbp-38h] BYREF
  char *v10; // [rsp+28h] [rbp-30h]
  char v11; // [rsp+48h] [rbp-10h]

  v1 = (struct _KTHREAD *)*((_QWORD *)this + 462);
  v10 = (char *)this + 3688;
  v11 = 0;
  if ( v1 != KeGetCurrentThread() )
    DXGAUTOSPINLOCK::Acquire((DXGAUTOSPINLOCK *)v9);
  if ( *((_QWORD *)this + 448) && *((_DWORD *)this + 40) != 1 )
  {
    v3 = *((_DWORD *)this + 845);
    if ( *((_BYTE *)this + 3666) )
    {
      if ( !v3 )
      {
        v5 = *((_QWORD *)this + 449);
        v6 = *((_QWORD *)this + 455);
LABEL_21:
        if ( *((_BYTE *)this + 3664) )
          DXGADAPTER::SetPowerComponentLatencyCB(this, *((_DWORD *)this + 843), v5);
        v8 = *((_DWORD *)this + 844);
        if ( v8 != -1 )
          DXGADAPTER::SetPowerComponentLatencyCB(this, v8, v6);
        goto LABEL_25;
      }
      v4 = *((_DWORD *)this + 917);
      if ( v4 )
      {
        if ( v4 != 2 )
        {
          v6 = *((_QWORD *)this + 454);
          if ( v4 == 3 )
            v5 = *((_QWORD *)this + 446);
          else
            v5 = *((_QWORD *)this + 442);
          goto LABEL_21;
        }
        v5 = *((_QWORD *)this + 444);
        goto LABEL_19;
      }
    }
    else
    {
      if ( !v3 || (v7 = *((_DWORD *)this + 917), (unsigned int)(v7 - 2) <= 1) )
      {
        v5 = *((_QWORD *)this + 450);
        v6 = *((_QWORD *)this + 456);
        goto LABEL_21;
      }
      if ( v7 )
      {
        v5 = *((_QWORD *)this + 442);
LABEL_19:
        v6 = *((_QWORD *)this + 454);
        goto LABEL_21;
      }
    }
    v5 = *((_QWORD *)this + 440);
    v6 = *((_QWORD *)this + 453);
    goto LABEL_21;
  }
LABEL_25:
  DXGADAPTER::ComputeLatencyToleranceForMemoryComponents(this);
  DXGAUTOSPINLOCK::~DXGAUTOSPINLOCK((DXGAUTOSPINLOCK *)v9);
}
