/*
 * XREFs of ?SetSharedPowerComponentState@DXGGLOBAL@@QEAAJQEAX0KE@Z @ 0x1401D6A18
 * Callers:
 *     DxgSetSharedPowerComponentStateCB @ 0x1401B8F80 (DxgSetSharedPowerComponentStateCB.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ?SetPowerComponentIdleCB@DXGADAPTER@@QEAAXI@Z @ 0x140010918 (-SetPowerComponentIdleCB@DXGADAPTER@@QEAAXI@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x140012300 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?SetPowerComponentActiveCB@DXGADAPTER@@QEAAXI@Z @ 0x1400258A4 (-SetPowerComponentActiveCB@DXGADAPTER@@QEAAXI@Z.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002D590 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??_GDXGSHAREDPOWERREGISTRATIONOBJECT@@IEAAPEAXI@Z @ 0x140073238 (--_GDXGSHAREDPOWERREGISTRATIONOBJECT@@IEAAPEAXI@Z.c)
 *     ?AcquireShared@DXGADAPTERLISTLOCK@@QEAAXXZ @ 0x1400732C0 (-AcquireShared@DXGADAPTERLISTLOCK@@QEAAXXZ.c)
 *     ?ReleaseShared@DXGADAPTERLISTLOCK@@QEAAXXZ @ 0x140073934 (-ReleaseShared@DXGADAPTERLISTLOCK@@QEAAXXZ.c)
 *     ?ValidateAdapterValidAndInRunningState@DXGGLOBAL@@QEAAEPEAVDXGADAPTER@@@Z @ 0x1401D7000 (-ValidateAdapterValidAndInRunningState@DXGGLOBAL@@QEAAEPEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall DXGGLOBAL::SetSharedPowerComponentState(
        DXGGLOBAL *this,
        DXGADAPTER *a2,
        void *const a3,
        unsigned int a4,
        unsigned __int8 a5)
{
  DXGADAPTERLISTLOCK *v5; // r12
  unsigned int v10; // ebx
  __int64 *v11; // rdi
  __int64 *v12; // r9
  unsigned int v13; // ecx
  __int64 *v14; // rdx
  char v15; // al
  __int64 *i; // rcx
  __int64 v17; // rax
  __int64 *v18; // rcx
  __int64 v19; // rdx
  __int64 *v20; // rdx
  __int64 **v21; // rax
  unsigned __int16 v23; // [rsp+9Ah] [rbp+22h]

  v23 = HIWORD(a4);
  v5 = (DXGGLOBAL *)((char *)this + 672);
  v10 = 0;
  DXGADAPTERLISTLOCK::AcquireShared((DXGGLOBAL *)((char *)this + 672));
  DXGPUSHLOCK::AcquireShared((DXGGLOBAL *)((char *)this + 1760));
  v11 = (__int64 *)*((_QWORD *)this + 224);
  if ( DXGGLOBAL::ValidateAdapterValidAndInRunningState(this, a2) )
  {
    v13 = (unsigned __int16)a4 + *((unsigned __int16 *)a2 + v23 + 1620);
    if ( v13 >= *((_DWORD *)a2 + 842) || *(_DWORD *)(520LL * v13 + *((_QWORD *)a2 + 403) + 208) != 7 )
    {
LABEL_28:
      v10 = -1073741811;
      goto LABEL_29;
    }
    while ( 1 )
    {
      if ( v11 == v12 || !v11 )
        goto LABEL_28;
      if ( (DXGADAPTER *)v11[4] == a2 && (void *const)v11[3] == a3 )
        break;
      v11 = (__int64 *)*v11;
    }
    v14 = (__int64 *)v11[8];
    v15 = 0;
    for ( i = (__int64 *)*v14; i != v14; i = (__int64 *)*i )
    {
      if ( !i )
        goto LABEL_17;
      if ( *((_DWORD *)i + 6) == a4 )
      {
        v15 = 1;
        goto LABEL_17;
      }
    }
    i = 0LL;
LABEL_17:
    if ( a5 )
    {
      if ( v15 )
        goto LABEL_29;
      v17 = operator new(0x20uLL, 0x4B677844u, 256LL);
      if ( !v17 )
      {
        WdLogSingleEntry0(6LL);
        WdLogGlobalForLineNumber = 6904;
        DxgkLogInternalTriageEvent(
          0LL,
          262145LL,
          0xFFFFFFFFLL,
          L"Out of memory allocating pNewListObj of type DXGSHAREDPOWERINUSELISTOBJECT",
          6904LL,
          0LL,
          0LL,
          0LL,
          0LL);
        v10 = -1073741801;
        goto LABEL_29;
      }
      *(_QWORD *)(v17 + 16) = this;
      *(_OWORD *)v17 = 0LL;
      *(_DWORD *)(v17 + 24) = a4;
      v18 = (__int64 *)v11[8];
      v19 = *v18;
      if ( *(__int64 **)(*v18 + 8) == v18 )
      {
        *(_QWORD *)v17 = v19;
        *(_QWORD *)(v17 + 8) = v18;
        *(_QWORD *)(v19 + 8) = v17;
        *v18 = v17;
        DXGADAPTER::SetPowerComponentActiveCB(a2, a4);
        goto LABEL_29;
      }
    }
    else
    {
      if ( !v15 )
        goto LABEL_29;
      v20 = (__int64 *)*i;
      if ( *(__int64 **)(*i + 8) == i )
      {
        v21 = (__int64 **)i[1];
        if ( *v21 == i )
        {
          *v21 = v20;
          v20[1] = (__int64)v21;
          DXGSHAREDPOWERREGISTRATIONOBJECT::`scalar deleting destructor'((DXGSHAREDPOWERREGISTRATIONOBJECT *)i);
          DXGADAPTER::SetPowerComponentIdleCB(a2, a4);
          goto LABEL_29;
        }
      }
    }
    __fastfail(3u);
  }
  v10 = -1073741130;
LABEL_29:
  _InterlockedDecrement((volatile signed __int32 *)this + 444);
  ExReleasePushLockSharedEx((char *)this + 1760, 0LL);
  KeLeaveCriticalRegion();
  DXGADAPTERLISTLOCK::ReleaseShared(v5);
  return v10;
}
