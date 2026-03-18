/*
 * XREFs of ?RegisterSharedPowerComponent@DXGGLOBAL@@QEAAJPEAXQEAXP6AX0W4_DEVICE_POWER_STATE@@E0@ZP6AX00@ZP6AX0KIE0@ZP6AX00KEIU_GUID@@I@Z@Z @ 0x1400734D0
 * Callers:
 *     DpiSharedPowerRegister @ 0x140249110 (DpiSharedPowerRegister.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x140022B90 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002D590 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??_G?$DXGNODELIST@VDXGGLOBAL@@VDXGSHAREDPOWERINUSELISTOBJECT@@@@AEAAPEAXI@Z @ 0x140073180 (--_G-$DXGNODELIST@VDXGGLOBAL@@VDXGSHAREDPOWERINUSELISTOBJECT@@@@AEAAPEAXI@Z.c)
 *     ??_GDXGSHAREDPOWERREGISTRATIONOBJECT@@IEAAPEAXI@Z @ 0x140073238 (--_GDXGSHAREDPOWERREGISTRATIONOBJECT@@IEAAPEAXI@Z.c)
 *     ?AcquireShared@DXGADAPTERLISTLOCK@@QEAAXXZ @ 0x1400732C0 (-AcquireShared@DXGADAPTERLISTLOCK@@QEAAXXZ.c)
 *     ?ReleaseShared@DXGADAPTERLISTLOCK@@QEAAXXZ @ 0x140073934 (-ReleaseShared@DXGADAPTERLISTLOCK@@QEAAXXZ.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     ??0DXGSHAREDPOWERREGISTRATIONOBJECT@@IEAA@PEAVDXGGLOBAL@@QEAX1P6AXPEAXW4_DEVICE_POWER_STATE@@E2@ZP6AX22@ZP6AX2KIE2@ZPEAV?$DXGNODELIST@VDXGGLOBAL@@VDXGSHAREDPOWERINUSELISTOBJECT@@@@@Z @ 0x1401D2954 (--0DXGSHAREDPOWERREGISTRATIONOBJECT@@IEAA@PEAVDXGGLOBAL@@QEAX1P6AXPEAXW4_DEVICE_POWER_STATE@@E2@.c)
 *     ?ValidateAdapterValidAndInRunningState@DXGGLOBAL@@QEAAEPEAVDXGADAPTER@@@Z @ 0x1401D7000 (-ValidateAdapterValidAndInRunningState@DXGGLOBAL@@QEAAEPEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall DXGGLOBAL::RegisterSharedPowerComponent(
        KSPIN_LOCK *this,
        struct DXGADAPTER *a2,
        void *const a3,
        void (*a4)(void *, enum _DEVICE_POWER_STATE, unsigned __int8, void *),
        void (*a5)(void *, void *),
        void (*a6)(void *, unsigned int, unsigned int, unsigned __int8, void *),
        void (*a7)(void *, void *, unsigned int, unsigned __int8, unsigned int, struct _GUID *__struct_ptr, unsigned int))
{
  int v8; // r14d
  char *v11; // r15
  _QWORD *v12; // rbp
  DXGSHAREDPOWERREGISTRATIONOBJECT *v13; // rsi
  char *v14; // r8
  _QWORD *v15; // rax
  __int64 v16; // rbx
  __int64 v17; // rax
  DXGSHAREDPOWERREGISTRATIONOBJECT *v18; // rdi
  __int64 v19; // rax
  unsigned int v20; // r15d
  __int64 v21; // rbx
  KIRQL CurrentIrql; // al
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rdi
  KIRQL v26; // al
  int v28; // [rsp+20h] [rbp-B8h]
  int v29; // [rsp+30h] [rbp-A8h]
  DXGADAPTERLISTLOCK *v30; // [rsp+50h] [rbp-88h]
  __int128 v31; // [rsp+60h] [rbp-78h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+70h] [rbp-68h] BYREF

  v8 = 0;
  v30 = (DXGADAPTERLISTLOCK *)(this + 84);
  DXGADAPTERLISTLOCK::AcquireShared((DXGADAPTERLISTLOCK *)(this + 84));
  DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(this + 220));
  v11 = (char *)(this + 224);
  v12 = 0LL;
  v13 = 0LL;
  if ( !DXGGLOBAL::ValidateAdapterValidAndInRunningState((DXGGLOBAL *)this, a2) )
  {
    v8 = -1073741130;
    goto LABEL_25;
  }
  while ( v14 != v11 && v14 )
  {
    if ( *((void *const *)v14 + 3) == a3 && *((struct DXGADAPTER **)v14 + 4) == a2 )
    {
      v8 = -1073740008;
      WdLogSingleEntry1(3LL, -1073740008LL);
      WdLogGlobalForLineNumber = 6757;
      goto LABEL_25;
    }
    v14 = *(char **)v14;
  }
  v15 = (_QWORD *)operator new(0x10uLL, 0x4B677844u, 256LL);
  v16 = (__int64)v15;
  if ( !v15 )
  {
    WdLogSingleEntry0(6LL);
    WdLogGlobalForLineNumber = 6768;
    DxgkLogInternalTriageEvent(
      0LL,
      262145LL,
      0xFFFFFFFFLL,
      L"Out of memory allocating pInUseList of type SHAREDPOWERCOMPONENTINUSELIST",
      6768LL,
      0LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_24;
  }
  v15[1] = v15;
  *v15 = v15;
  v17 = operator new(0x48uLL, 0x4B677844u, 64LL);
  if ( !v17
    || (v18 = (DXGSHAREDPOWERREGISTRATIONOBJECT *)DXGSHAREDPOWERREGISTRATIONOBJECT::DXGSHAREDPOWERREGISTRATIONOBJECT(
                                                    v17,
                                                    (_DWORD)this,
                                                    (_DWORD)a3,
                                                    (_DWORD)a2,
                                                    (__int64)a4,
                                                    (__int64)a5,
                                                    (__int64)a6,
                                                    v16),
        (v13 = v18) == 0LL) )
  {
    WdLogSingleEntry0(6LL);
    WdLogGlobalForLineNumber = 6777;
    DxgkLogInternalTriageEvent(
      0LL,
      262145LL,
      0xFFFFFFFFLL,
      L"Out of memory allocating pNewSharedPowerObj of type DXGSHAREDPOWERREGISTRATIONOBJECT",
      6777LL,
      0LL,
      0LL,
      0LL,
      0LL);
    v12 = (_QWORD *)v16;
LABEL_24:
    v8 = -1073741801;
    goto LABEL_25;
  }
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock(this + 219, &LockHandle);
  v19 = *(_QWORD *)v11;
  if ( *(char **)(*(_QWORD *)v11 + 8LL) != v11 )
    __fastfail(3u);
  v12 = (_QWORD *)v16;
  *(_QWORD *)v18 = v19;
  *((_QWORD *)v18 + 1) = v11;
  *(_QWORD *)(v19 + 8) = v18;
  *(_QWORD *)v11 = v18;
  if ( a7 )
  {
    v20 = 0;
    if ( *((_DWORD *)a2 + 842) )
    {
      do
      {
        v21 = *((_QWORD *)a2 + 403) + 520LL * v20;
        if ( *(_DWORD *)(v21 + 208) == 7 )
        {
          CurrentIrql = KeGetCurrentIrql();
          v23 = *(unsigned int *)(v21 + 4);
          v29 = *(_DWORD *)(v21 + 212);
          LOBYTE(v24) = *(_BYTE *)(v21 + 360) == 0;
          v25 = CurrentIrql;
          v28 = *(_DWORD *)(v21 + 344);
          v31 = *(_OWORD *)(v21 + 220);
          ((void (__fastcall *)(struct DXGADAPTER *, void *const, __int64, __int64, int, __int128 *, int))a7)(
            a2,
            a3,
            v23,
            v24,
            v28,
            &v31,
            v29);
          if ( (_BYTE)v25 != KeGetCurrentIrql() )
          {
            v26 = KeGetCurrentIrql();
            WdLogSingleEntry5(0LL, 275LL, 16LL, this, v25, v26);
            WdLogGlobalForLineNumber = 6808;
          }
        }
        ++v20;
      }
      while ( v20 < *((_DWORD *)a2 + 842) );
      v8 = 0;
    }
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
LABEL_25:
  this[221] = 0LL;
  ExReleasePushLockExclusiveEx(this + 220, 0LL);
  KeLeaveCriticalRegion();
  DXGADAPTERLISTLOCK::ReleaseShared(v30);
  if ( v8 < 0 )
  {
    if ( v12 )
      DXGNODELIST<DXGGLOBAL,DXGSHAREDPOWERINUSELISTOBJECT>::`scalar deleting destructor'(v12);
    if ( v13 )
      DXGSHAREDPOWERREGISTRATIONOBJECT::`scalar deleting destructor'(v13);
  }
  return (unsigned int)v8;
}
