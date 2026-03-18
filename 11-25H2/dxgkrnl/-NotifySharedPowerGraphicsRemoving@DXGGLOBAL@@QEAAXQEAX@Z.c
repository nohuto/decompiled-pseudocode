/*
 * XREFs of ?NotifySharedPowerGraphicsRemoving@DXGGLOBAL@@QEAAXQEAX@Z @ 0x1401D0BF4
 * Callers:
 *     ?Stop@DXGADAPTER@@QEAAXEE@Z @ 0x140193B2C (-Stop@DXGADAPTER@@QEAAXEE@Z.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x140013A20 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline @ 0x14006681C (Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline.c)
 *     ??_G?$DXGNODELIST@VDXGGLOBAL@@VDXGSHAREDPOWERINUSELISTOBJECT@@@@AEAAPEAXI@Z @ 0x1400727EC (--_G-$DXGNODELIST@VDXGGLOBAL@@VDXGSHAREDPOWERINUSELISTOBJECT@@@@AEAAPEAXI@Z.c)
 *     ??_GDXGSHAREDPOWERREGISTRATIONOBJECT@@IEAAPEAXI@Z @ 0x1400728A8 (--_GDXGSHAREDPOWERREGISTRATIONOBJECT@@IEAAPEAXI@Z.c)
 *     ?RemoveThreadToDxgThreadList@DXGGLOBAL@@QEAAXPEAUDXGTHREADPROCESS@@@Z @ 0x140072E8C (-RemoveThreadToDxgThreadList@DXGGLOBAL@@QEAAXPEAUDXGTHREADPROCESS@@@Z.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 */

void __fastcall DXGGLOBAL::NotifySharedPowerGraphicsRemoving(DXGGLOBAL *this, void *const a2)
{
  char *v2; // rbp
  DXGGLOBAL *v5; // rdi
  DXGGLOBAL *v6; // rbx
  __int64 CurrentIrql; // rsi
  KIRQL v8; // al
  DXGSHAREDPOWERREGISTRATIONOBJECT **v9; // r15
  DXGSHAREDPOWERREGISTRATIONOBJECT *v10; // rsi
  DXGSHAREDPOWERREGISTRATIONOBJECT *v11; // rax
  DXGSHAREDPOWERREGISTRATIONOBJECT **v12; // rdx
  DXGSHAREDPOWERREGISTRATIONOBJECT **v13; // rcx
  _QWORD *v14; // rcx

  v2 = (char *)this + 1728;
  DXGPUSHLOCK::AcquireExclusive((DXGGLOBAL *)((char *)this + 1728));
  v5 = (DXGGLOBAL *)*((_QWORD *)this + 220);
  while ( 1 )
  {
    v6 = 0LL;
    if ( v5 != (DXGGLOBAL *)((char *)this + 1760) )
      v6 = v5;
    if ( !v6 )
      break;
    if ( *((void *const *)v6 + 4) == a2 )
    {
      CurrentIrql = KeGetCurrentIrql();
      (*((void (__fastcall **)(void *const, _QWORD))v6 + 6))(a2, *((_QWORD *)v6 + 3));
      if ( (_BYTE)CurrentIrql != KeGetCurrentIrql() )
      {
        v8 = KeGetCurrentIrql();
        WdLogSingleEntry5(0LL, 275LL, 16LL, this, CurrentIrql, v8);
        WdLogGlobalForLineNumber = 7026;
      }
      v9 = (DXGSHAREDPOWERREGISTRATIONOBJECT **)*((_QWORD *)v6 + 8);
      v10 = *v9;
      while ( v10 != (DXGSHAREDPOWERREGISTRATIONOBJECT *)v9 )
      {
        v11 = v10;
        if ( !v10 )
          break;
        v12 = *(DXGSHAREDPOWERREGISTRATIONOBJECT ***)v10;
        v13 = (DXGSHAREDPOWERREGISTRATIONOBJECT **)*((_QWORD *)v10 + 1);
        v10 = (DXGSHAREDPOWERREGISTRATIONOBJECT *)v12;
        if ( v12[1] != v11 || *v13 != v11 )
          __fastfail(3u);
        *v13 = (DXGSHAREDPOWERREGISTRATIONOBJECT *)v12;
        v12[1] = (DXGSHAREDPOWERREGISTRATIONOBJECT *)v13;
        DXGSHAREDPOWERREGISTRATIONOBJECT::`scalar deleting destructor'(v11);
      }
      v5 = *(DXGGLOBAL **)v5;
      DXGGLOBAL::RemoveThreadToDxgThreadList((KSPIN_LOCK *)this, (struct DXGTHREADPROCESS ***)v6);
      v14 = (_QWORD *)*((_QWORD *)v6 + 8);
      if ( v14 )
        DXGNODELIST<DXGGLOBAL,DXGSHAREDPOWERINUSELISTOBJECT>::`scalar deleting destructor'(v14);
      DXGSHAREDPOWERREGISTRATIONOBJECT::`scalar deleting destructor'(v6);
    }
    else
    {
      v5 = *(DXGGLOBAL **)v5;
    }
  }
  Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
  *((_QWORD *)v2 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v2, 0LL);
  KeLeaveCriticalRegion();
}
