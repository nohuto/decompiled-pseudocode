/*
 * XREFs of ?RegisterSharedPowerComponent@DXGGLOBAL@@QEAAJPEAXQEAXP6AX0W4_DEVICE_POWER_STATE@@E0@ZP6AX00@ZP6AX0KIE0@ZP6AX00KEIU_GUID@@I@Z@Z @ 0x140072AB0
 * Callers:
 *     DpiSharedPowerRegister @ 0x140242310 (DpiSharedPowerRegister.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x140013A20 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x140019B00 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x140023EE0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002CD80 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline @ 0x14006681C (Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline.c)
 *     ??_G?$DXGNODELIST@VDXGGLOBAL@@VDXGSHAREDPOWERINUSELISTOBJECT@@@@AEAAPEAXI@Z @ 0x1400727EC (--_G-$DXGNODELIST@VDXGGLOBAL@@VDXGSHAREDPOWERINUSELISTOBJECT@@@@AEAAPEAXI@Z.c)
 *     ??_GDXGSHAREDPOWERREGISTRATIONOBJECT@@IEAAPEAXI@Z @ 0x1400728A8 (--_GDXGSHAREDPOWERREGISTRATIONOBJECT@@IEAAPEAXI@Z.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     ??0DXGSHAREDPOWERREGISTRATIONOBJECT@@IEAA@PEAVDXGGLOBAL@@QEAX1P6AXPEAXW4_DEVICE_POWER_STATE@@E2@ZP6AX22@ZP6AX2KIE2@ZPEAV?$DXGNODELIST@VDXGGLOBAL@@VDXGSHAREDPOWERINUSELISTOBJECT@@@@@Z @ 0x1401CD614 (--0DXGSHAREDPOWERREGISTRATIONOBJECT@@IEAA@PEAVDXGGLOBAL@@QEAX1P6AXPEAXW4_DEVICE_POWER_STATE@@E2@.c)
 *     ?ValidateAdapterValidAndInRunningState@DXGGLOBAL@@QEAAEPEAVDXGADAPTER@@@Z @ 0x1401D1CD0 (-ValidateAdapterValidAndInRunningState@DXGGLOBAL@@QEAAEPEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall DXGGLOBAL::RegisterSharedPowerComponent(
        DXGGLOBAL *this,
        struct DXGADAPTER *a2,
        void *const a3,
        void (*a4)(void *, enum _DEVICE_POWER_STATE, unsigned __int8, void *),
        void (*a5)(void *, void *),
        void (*a6)(void *, unsigned int, unsigned int, unsigned __int8, void *),
        void (*a7)(void *, void *, unsigned int, unsigned __int8, unsigned int, struct _GUID *__struct_ptr, unsigned int))
{
  int v8; // r14d
  char *v11; // r15
  char *v12; // rbx
  _QWORD *v13; // rbp
  DXGSHAREDPOWERREGISTRATIONOBJECT *v14; // rsi
  __int64 v15; // r9
  _QWORD *v16; // rax
  __int64 v17; // r9
  __int64 v18; // rbx
  __int64 v19; // rax
  DXGSHAREDPOWERREGISTRATIONOBJECT *v20; // rdi
  __int64 v21; // rax
  unsigned int v22; // r15d
  __int64 v23; // rbx
  KIRQL CurrentIrql; // al
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rdi
  KIRQL v28; // al
  int v30; // [rsp+20h] [rbp-B8h]
  int v31; // [rsp+30h] [rbp-A8h]
  struct _KTHREAD **v32; // [rsp+50h] [rbp-88h]
  __int128 v33; // [rsp+60h] [rbp-78h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+70h] [rbp-68h] BYREF

  v8 = 0;
  v32 = (struct _KTHREAD **)((char *)this + 672);
  DXGFASTMUTEX::Acquire((DXGGLOBAL *)((char *)this + 672));
  DXGPUSHLOCK::AcquireExclusive((DXGGLOBAL *)((char *)this + 1728));
  v11 = (char *)this + 1760;
  v12 = (char *)*((_QWORD *)this + 220);
  v13 = 0LL;
  v14 = 0LL;
  if ( !DXGGLOBAL::ValidateAdapterValidAndInRunningState(this, a2) )
  {
    v8 = -1073741130;
    goto LABEL_25;
  }
  while ( v12 != v11 && v12 )
  {
    if ( *((void *const *)v12 + 3) == a3 && *((struct DXGADAPTER **)v12 + 4) == a2 )
    {
      v8 = -1073740008;
      WdLogSingleEntry1(3LL, -1073740008LL);
      WdLogGlobalForLineNumber = 6754;
      goto LABEL_25;
    }
    v12 = *(char **)v12;
  }
  v16 = (_QWORD *)operator new(0x10uLL, 0x4B677844u, 256LL, v15);
  v18 = (__int64)v16;
  if ( !v16 )
  {
    WdLogSingleEntry0(6LL);
    WdLogGlobalForLineNumber = 6765;
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      0xFFFFFFFFLL,
      L"Out of memory allocating pInUseList of type SHAREDPOWERCOMPONENTINUSELIST",
      6765LL,
      0LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_24;
  }
  v16[1] = v16;
  *v16 = v16;
  v19 = operator new(0x48uLL, 0x4B677844u, 64LL, v17);
  if ( !v19
    || (v20 = (DXGSHAREDPOWERREGISTRATIONOBJECT *)DXGSHAREDPOWERREGISTRATIONOBJECT::DXGSHAREDPOWERREGISTRATIONOBJECT(
                                                    v19,
                                                    (_DWORD)this,
                                                    (_DWORD)a3,
                                                    (_DWORD)a2,
                                                    (__int64)a4,
                                                    (__int64)a5,
                                                    (__int64)a6,
                                                    v18),
        (v14 = v20) == 0LL) )
  {
    WdLogSingleEntry0(6LL);
    WdLogGlobalForLineNumber = 6774;
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      0xFFFFFFFFLL,
      L"Out of memory allocating pNewSharedPowerObj of type DXGSHAREDPOWERREGISTRATIONOBJECT",
      6774LL,
      0LL,
      0LL,
      0LL,
      0LL);
    v13 = (_QWORD *)v18;
LABEL_24:
    v8 = -1073741801;
    goto LABEL_25;
  }
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)this + 215, &LockHandle);
  v21 = *(_QWORD *)v11;
  if ( *(char **)(*(_QWORD *)v11 + 8LL) != v11 )
    __fastfail(3u);
  v13 = (_QWORD *)v18;
  *(_QWORD *)v20 = v21;
  *((_QWORD *)v20 + 1) = v11;
  *(_QWORD *)(v21 + 8) = v20;
  *(_QWORD *)v11 = v20;
  if ( a7 )
  {
    v22 = 0;
    if ( *((_DWORD *)a2 + 842) )
    {
      do
      {
        v23 = *((_QWORD *)a2 + 403) + 520LL * v22;
        if ( *(_DWORD *)(v23 + 208) == 7 )
        {
          CurrentIrql = KeGetCurrentIrql();
          v25 = *(unsigned int *)(v23 + 4);
          v31 = *(_DWORD *)(v23 + 212);
          LOBYTE(v26) = *(_BYTE *)(v23 + 360) == 0;
          v27 = CurrentIrql;
          v30 = *(_DWORD *)(v23 + 344);
          v33 = *(_OWORD *)(v23 + 220);
          ((void (__fastcall *)(struct DXGADAPTER *, void *const, __int64, __int64, int, __int128 *, int))a7)(
            a2,
            a3,
            v25,
            v26,
            v30,
            &v33,
            v31);
          if ( (_BYTE)v27 != KeGetCurrentIrql() )
          {
            v28 = KeGetCurrentIrql();
            WdLogSingleEntry5(0LL, 275LL, 16LL, this, v27, v28);
            WdLogGlobalForLineNumber = 6805;
          }
        }
        ++v22;
      }
      while ( v22 < *((_DWORD *)a2 + 842) );
      v8 = 0;
    }
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
LABEL_25:
  Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
  *((_QWORD *)this + 217) = 0LL;
  ExReleasePushLockExclusiveEx((char *)this + 1728, 0LL);
  KeLeaveCriticalRegion();
  DXGFASTMUTEX::Release(v32);
  if ( v8 < 0 )
  {
    if ( v13 )
      DXGNODELIST<DXGGLOBAL,DXGSHAREDPOWERINUSELISTOBJECT>::`scalar deleting destructor'(v13);
    if ( v14 )
      DXGSHAREDPOWERREGISTRATIONOBJECT::`scalar deleting destructor'(v14);
  }
  return (unsigned int)v8;
}
