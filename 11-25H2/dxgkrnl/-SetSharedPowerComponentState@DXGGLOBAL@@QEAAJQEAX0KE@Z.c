/*
 * XREFs of ?SetSharedPowerComponentState@DXGGLOBAL@@QEAAJQEAX0KE@Z @ 0x1401D16E8
 * Callers:
 *     DxgSetSharedPowerComponentStateCB @ 0x1401B69D0 (DxgSetSharedPowerComponentStateCB.c)
 * Callees:
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x140015500 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?SetPowerComponentIdleCB@DXGADAPTER@@QEAAXI@Z @ 0x140016DB8 (-SetPowerComponentIdleCB@DXGADAPTER@@QEAAXI@Z.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x140019B00 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x140023EE0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?SetPowerComponentActiveCB@DXGADAPTER@@QEAAXI@Z @ 0x1400250F4 (-SetPowerComponentActiveCB@DXGADAPTER@@QEAAXI@Z.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002CD80 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??_GDXGSHAREDPOWERREGISTRATIONOBJECT@@IEAAPEAXI@Z @ 0x1400728A8 (--_GDXGSHAREDPOWERREGISTRATIONOBJECT@@IEAAPEAXI@Z.c)
 *     ?ValidateAdapterValidAndInRunningState@DXGGLOBAL@@QEAAEPEAVDXGADAPTER@@@Z @ 0x1401D1CD0 (-ValidateAdapterValidAndInRunningState@DXGGLOBAL@@QEAAEPEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall DXGGLOBAL::SetSharedPowerComponentState(
        DXGGLOBAL *this,
        DXGADAPTER *a2,
        __int64 *a3,
        unsigned int a4,
        unsigned __int8 a5)
{
  unsigned int v9; // ebx
  __int64 **v10; // rdi
  __int64 v11; // r9
  unsigned int v12; // ecx
  __int64 *v13; // rdx
  char v14; // al
  __int64 *i; // rcx
  __int64 v16; // rax
  __int64 *v17; // rcx
  __int64 v18; // rdx
  __int64 *v19; // rdx
  __int64 **v20; // rax
  struct _KTHREAD **v22; // [rsp+90h] [rbp+8h]
  unsigned __int16 v23; // [rsp+AAh] [rbp+22h]

  v23 = HIWORD(a4);
  v22 = (struct _KTHREAD **)((char *)this + 672);
  v9 = 0;
  DXGFASTMUTEX::Acquire((DXGGLOBAL *)((char *)this + 672));
  DXGPUSHLOCK::AcquireShared((DXGGLOBAL *)((char *)this + 1728));
  v10 = (__int64 **)*((_QWORD *)this + 220);
  if ( DXGGLOBAL::ValidateAdapterValidAndInRunningState(this, a2) )
  {
    v12 = (unsigned __int16)a4 + *((unsigned __int16 *)a2 + v23 + 1620);
    if ( v12 >= *((_DWORD *)a2 + 842) || *(_DWORD *)(520LL * v12 + *((_QWORD *)a2 + 403) + 208) != 7 )
    {
LABEL_28:
      v9 = -1073741811;
      goto LABEL_29;
    }
    while ( 1 )
    {
      if ( v10 == (__int64 **)((char *)this + 1760) || !v10 )
        goto LABEL_28;
      if ( v10[4] == (__int64 *)a2 && v10[3] == a3 )
        break;
      v10 = (__int64 **)*v10;
    }
    v13 = v10[8];
    v14 = 0;
    for ( i = (__int64 *)*v13; i != v13; i = (__int64 *)*i )
    {
      if ( !i )
        goto LABEL_17;
      if ( *((_DWORD *)i + 6) == a4 )
      {
        v14 = 1;
        goto LABEL_17;
      }
    }
    i = 0LL;
LABEL_17:
    if ( a5 )
    {
      if ( v14 )
        goto LABEL_29;
      v16 = operator new(0x20uLL, 0x4B677844u, 256LL, v11);
      if ( !v16 )
      {
        WdLogSingleEntry0(6LL);
        WdLogGlobalForLineNumber = 6901;
        DxgkLogInternalTriageEvent(
          0LL,
          262145,
          0xFFFFFFFFLL,
          L"Out of memory allocating pNewListObj of type DXGSHAREDPOWERINUSELISTOBJECT",
          6901LL,
          0LL,
          0LL,
          0LL,
          0LL);
        v9 = -1073741801;
        goto LABEL_29;
      }
      *(_QWORD *)(v16 + 16) = this;
      *(_OWORD *)v16 = 0LL;
      *(_DWORD *)(v16 + 24) = a4;
      v17 = v10[8];
      v18 = *v17;
      if ( *(__int64 **)(*v17 + 8) == v17 )
      {
        *(_QWORD *)v16 = v18;
        *(_QWORD *)(v16 + 8) = v17;
        *(_QWORD *)(v18 + 8) = v16;
        *v17 = v16;
        DXGADAPTER::SetPowerComponentActiveCB(a2, a4);
        goto LABEL_29;
      }
    }
    else
    {
      if ( !v14 )
        goto LABEL_29;
      v19 = (__int64 *)*i;
      if ( *(__int64 **)(*i + 8) == i )
      {
        v20 = (__int64 **)i[1];
        if ( *v20 == i )
        {
          *v20 = v19;
          v19[1] = (__int64)v20;
          DXGSHAREDPOWERREGISTRATIONOBJECT::`scalar deleting destructor'((DXGSHAREDPOWERREGISTRATIONOBJECT *)i);
          DXGADAPTER::SetPowerComponentIdleCB(a2, a4);
          goto LABEL_29;
        }
      }
    }
    __fastfail(3u);
  }
  v9 = -1073741130;
LABEL_29:
  _InterlockedDecrement((volatile signed __int32 *)this + 436);
  ExReleasePushLockSharedEx((char *)this + 1728, 0LL);
  KeLeaveCriticalRegion();
  DXGFASTMUTEX::Release(v22);
  return v9;
}
