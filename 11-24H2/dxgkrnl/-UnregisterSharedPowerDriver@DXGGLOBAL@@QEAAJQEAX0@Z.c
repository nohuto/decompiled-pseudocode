/*
 * XREFs of ?UnregisterSharedPowerDriver@DXGGLOBAL@@QEAAJQEAX0@Z @ 0x1401D6EA0
 * Callers:
 *     DxgUnregisterSharedPowerDriverCB @ 0x1401B8FE0 (DxgUnregisterSharedPowerDriverCB.c)
 * Callees:
 *     ?SetPowerComponentIdleCB@DXGADAPTER@@QEAAXI@Z @ 0x140010918 (-SetPowerComponentIdleCB@DXGADAPTER@@QEAAXI@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x140022B90 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??_G?$DXGNODELIST@VDXGGLOBAL@@VDXGSHAREDPOWERINUSELISTOBJECT@@@@AEAAPEAXI@Z @ 0x140073180 (--_G-$DXGNODELIST@VDXGGLOBAL@@VDXGSHAREDPOWERINUSELISTOBJECT@@@@AEAAPEAXI@Z.c)
 *     ??_GDXGSHAREDPOWERREGISTRATIONOBJECT@@IEAAPEAXI@Z @ 0x140073238 (--_GDXGSHAREDPOWERREGISTRATIONOBJECT@@IEAAPEAXI@Z.c)
 *     ?AcquireShared@DXGADAPTERLISTLOCK@@QEAAXXZ @ 0x1400732C0 (-AcquireShared@DXGADAPTERLISTLOCK@@QEAAXXZ.c)
 *     ?ReleaseShared@DXGADAPTERLISTLOCK@@QEAAXXZ @ 0x140073934 (-ReleaseShared@DXGADAPTERLISTLOCK@@QEAAXXZ.c)
 *     ?RemoveThreadToDxgThreadList@DXGGLOBAL@@QEAAXPEAUDXGTHREADPROCESS@@@Z @ 0x140073980 (-RemoveThreadToDxgThreadList@DXGGLOBAL@@QEAAXPEAUDXGTHREADPROCESS@@@Z.c)
 *     ?ValidateAdapterValidAndInRunningState@DXGGLOBAL@@QEAAEPEAVDXGADAPTER@@@Z @ 0x1401D7000 (-ValidateAdapterValidAndInRunningState@DXGGLOBAL@@QEAAEPEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall DXGGLOBAL::UnregisterSharedPowerDriver(DXGGLOBAL *this, DXGADAPTER *a2, struct DXGTHREADPROCESS *a3)
{
  DXGADAPTERLISTLOCK *v3; // r12
  unsigned int v7; // esi
  struct DXGTHREADPROCESS **v8; // rbx
  struct DXGTHREADPROCESS **v9; // r9
  struct DXGTHREADPROCESS *v10; // r14
  unsigned int *v11; // rdi
  DXGSHAREDPOWERREGISTRATIONOBJECT *v12; // rax
  __int64 v13; // rcx
  unsigned int v14; // r12d
  DXGSHAREDPOWERREGISTRATIONOBJECT **v15; // rdx
  struct DXGTHREADPROCESS *v16; // rcx
  DXGADAPTERLISTLOCK *v18; // [rsp+50h] [rbp+8h]

  v3 = (DXGGLOBAL *)((char *)this + 672);
  v18 = (DXGGLOBAL *)((char *)this + 672);
  v7 = 0;
  DXGADAPTERLISTLOCK::AcquireShared((DXGGLOBAL *)((char *)this + 672));
  DXGPUSHLOCK::AcquireExclusive((DXGGLOBAL *)((char *)this + 1760));
  v8 = (struct DXGTHREADPROCESS **)*((_QWORD *)this + 224);
  if ( DXGGLOBAL::ValidateAdapterValidAndInRunningState(this, a2) )
  {
    while ( 1 )
    {
      if ( v8 == v9 || !v8 )
      {
        v7 = -1073741811;
        goto LABEL_19;
      }
      if ( v8[4] == a2 && v8[3] == a3 )
        break;
      v8 = (struct DXGTHREADPROCESS **)*v8;
    }
    v10 = v8[8];
    v11 = *(unsigned int **)v10;
    while ( v11 != (unsigned int *)v10 )
    {
      v12 = (DXGSHAREDPOWERREGISTRATIONOBJECT *)v11;
      if ( !v11 )
        break;
      v13 = *(_QWORD *)v11;
      v14 = v11[6];
      v11 = (unsigned int *)v13;
      v15 = (DXGSHAREDPOWERREGISTRATIONOBJECT **)*((_QWORD *)v12 + 1);
      if ( *(DXGSHAREDPOWERREGISTRATIONOBJECT **)(v13 + 8) != v12 || *v15 != v12 )
        __fastfail(3u);
      *v15 = (DXGSHAREDPOWERREGISTRATIONOBJECT *)v13;
      *(_QWORD *)(v13 + 8) = v15;
      DXGSHAREDPOWERREGISTRATIONOBJECT::`scalar deleting destructor'(v12);
      DXGADAPTER::SetPowerComponentIdleCB(a2, v14);
    }
    DXGGLOBAL::RemoveThreadToDxgThreadList((KSPIN_LOCK *)this, (struct DXGTHREADPROCESS ***)v8);
    v16 = v8[8];
    if ( v16 )
      DXGNODELIST<DXGGLOBAL,DXGSHAREDPOWERINUSELISTOBJECT>::`scalar deleting destructor'(v16);
    DXGSHAREDPOWERREGISTRATIONOBJECT::`scalar deleting destructor'((DXGSHAREDPOWERREGISTRATIONOBJECT *)v8);
    v3 = v18;
  }
  else
  {
    v7 = -1073741130;
  }
LABEL_19:
  *((_QWORD *)this + 221) = 0LL;
  ExReleasePushLockExclusiveEx((char *)this + 1760, 0LL);
  KeLeaveCriticalRegion();
  DXGADAPTERLISTLOCK::ReleaseShared(v3);
  return v7;
}
