/*
 * XREFs of ?UnregisterSharedPowerDriver@DXGGLOBAL@@QEAAJQEAX0@Z @ 0x1401D1B70
 * Callers:
 *     DxgUnregisterSharedPowerDriverCB @ 0x1401B6A30 (DxgUnregisterSharedPowerDriverCB.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x140013A20 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?SetPowerComponentIdleCB@DXGADAPTER@@QEAAXI@Z @ 0x140016DB8 (-SetPowerComponentIdleCB@DXGADAPTER@@QEAAXI@Z.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x140019B00 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x140023EE0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline @ 0x14006681C (Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline.c)
 *     ??_G?$DXGNODELIST@VDXGGLOBAL@@VDXGSHAREDPOWERINUSELISTOBJECT@@@@AEAAPEAXI@Z @ 0x1400727EC (--_G-$DXGNODELIST@VDXGGLOBAL@@VDXGSHAREDPOWERINUSELISTOBJECT@@@@AEAAPEAXI@Z.c)
 *     ??_GDXGSHAREDPOWERREGISTRATIONOBJECT@@IEAAPEAXI@Z @ 0x1400728A8 (--_GDXGSHAREDPOWERREGISTRATIONOBJECT@@IEAAPEAXI@Z.c)
 *     ?RemoveThreadToDxgThreadList@DXGGLOBAL@@QEAAXPEAUDXGTHREADPROCESS@@@Z @ 0x140072E8C (-RemoveThreadToDxgThreadList@DXGGLOBAL@@QEAAXPEAUDXGTHREADPROCESS@@@Z.c)
 *     ?ValidateAdapterValidAndInRunningState@DXGGLOBAL@@QEAAEPEAVDXGADAPTER@@@Z @ 0x1401D1CD0 (-ValidateAdapterValidAndInRunningState@DXGGLOBAL@@QEAAEPEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall DXGGLOBAL::UnregisterSharedPowerDriver(
        DXGGLOBAL *this,
        DXGADAPTER *a2,
        struct DXGTHREADPROCESS **a3)
{
  unsigned int v6; // esi
  struct DXGTHREADPROCESS ***v7; // rbx
  unsigned int **v8; // r14
  unsigned int *v9; // rdi
  DXGSHAREDPOWERREGISTRATIONOBJECT *v10; // rax
  __int64 v11; // rcx
  unsigned int v12; // ebp
  DXGSHAREDPOWERREGISTRATIONOBJECT **v13; // rdx
  struct DXGTHREADPROCESS **v14; // rcx
  struct _KTHREAD **v16; // [rsp+50h] [rbp+8h]

  v16 = (struct _KTHREAD **)((char *)this + 672);
  v6 = 0;
  DXGFASTMUTEX::Acquire((DXGGLOBAL *)((char *)this + 672));
  DXGPUSHLOCK::AcquireExclusive((DXGGLOBAL *)((char *)this + 1728));
  v7 = (struct DXGTHREADPROCESS ***)*((_QWORD *)this + 220);
  if ( DXGGLOBAL::ValidateAdapterValidAndInRunningState(this, a2) )
  {
    while ( 1 )
    {
      if ( v7 == (struct DXGTHREADPROCESS ***)((char *)this + 1760) || !v7 )
      {
        v6 = -1073741811;
        goto LABEL_19;
      }
      if ( v7[4] == (struct DXGTHREADPROCESS **)a2 && v7[3] == a3 )
        break;
      v7 = (struct DXGTHREADPROCESS ***)*v7;
    }
    v8 = (unsigned int **)v7[8];
    v9 = *v8;
    while ( v9 != (unsigned int *)v8 )
    {
      v10 = (DXGSHAREDPOWERREGISTRATIONOBJECT *)v9;
      if ( !v9 )
        break;
      v11 = *(_QWORD *)v9;
      v12 = v9[6];
      v9 = (unsigned int *)v11;
      v13 = (DXGSHAREDPOWERREGISTRATIONOBJECT **)*((_QWORD *)v10 + 1);
      if ( *(DXGSHAREDPOWERREGISTRATIONOBJECT **)(v11 + 8) != v10 || *v13 != v10 )
        __fastfail(3u);
      *v13 = (DXGSHAREDPOWERREGISTRATIONOBJECT *)v11;
      *(_QWORD *)(v11 + 8) = v13;
      DXGSHAREDPOWERREGISTRATIONOBJECT::`scalar deleting destructor'(v10);
      DXGADAPTER::SetPowerComponentIdleCB(a2, v12);
    }
    DXGGLOBAL::RemoveThreadToDxgThreadList((KSPIN_LOCK *)this, v7);
    v14 = v7[8];
    if ( v14 )
      DXGNODELIST<DXGGLOBAL,DXGSHAREDPOWERINUSELISTOBJECT>::`scalar deleting destructor'(v14);
    DXGSHAREDPOWERREGISTRATIONOBJECT::`scalar deleting destructor'((DXGSHAREDPOWERREGISTRATIONOBJECT *)v7);
  }
  else
  {
    v6 = -1073741130;
  }
LABEL_19:
  Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
  *((_QWORD *)this + 217) = 0LL;
  ExReleasePushLockExclusiveEx((char *)this + 1728, 0LL);
  KeLeaveCriticalRegion();
  DXGFASTMUTEX::Release(v16);
  return v6;
}
