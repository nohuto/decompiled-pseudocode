/*
 * XREFs of ?PowerRuntimeComponentActiveCallback@DXGADAPTER@@QEAAXKE@Z @ 0x140013DA0
 * Callers:
 *     ?DxgkPowerRuntimeComponentIdleCallback@@YAXPEAXK@Z @ 0x140013CD0 (-DxgkPowerRuntimeComponentIdleCallback@@YAXPEAXK@Z.c)
 *     ?DxgkPowerRuntimeComponentActiveCallback@@YAXPEAXK@Z @ 0x140013D40 (-DxgkPowerRuntimeComponentActiveCallback@@YAXPEAXK@Z.c)
 *     ?SetPowerComponentIdleCBWorker@DXGADAPTER@@QEAAXIK@Z @ 0x140014E70 (-SetPowerComponentIdleCBWorker@DXGADAPTER@@QEAAXIK@Z.c)
 *     ?SetPowerComponentActiveCBWorker@DXGADAPTER@@QEAAXIEK@Z @ 0x140025440 (-SetPowerComponentActiveCBWorker@DXGADAPTER@@QEAAXIEK@Z.c)
 * Callees:
 *     ?UpdateLatencyTolerances@DXGADAPTER@@QEAAXXZ @ 0x1400310E0 (-UpdateLatencyTolerances@DXGADAPTER@@QEAAXXZ.c)
 *     ?SetPowerComponentLatencyCB@DXGADAPTER@@QEAAXI_K@Z @ 0x14003130C (-SetPowerComponentLatencyCB@DXGADAPTER@@QEAAXI_K@Z.c)
 *     ?ScheduleAdapterActivityCheck@DXGADAPTER@@QEAAXXZ @ 0x14003E1D0 (-ScheduleAdapterActivityCheck@DXGADAPTER@@QEAAXXZ.c)
 *     Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline @ 0x14006681C (Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 */

void __fastcall DXGADAPTER::PowerRuntimeComponentActiveCallback(DXGADAPTER *this, unsigned int a2, unsigned __int8 a3)
{
  unsigned int *v5; // rsi
  unsigned int v6; // eax
  _QWORD *v7; // rax
  __int64 v8; // rcx
  _QWORD *v9; // rdx
  unsigned int v10; // eax
  unsigned int v11; // edx
  unsigned int v12; // edx
  __int64 v13; // rdx
  _QWORD *v14; // rax
  _QWORD *v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rdx
  void (__fastcall *v19)(_QWORD, __int64); // rax
  _DWORD *v20; // rbx
  int v21; // eax
  __int64 *v22; // rax
  __int64 *v23; // rcx
  __int64 **v24; // rdx
  int v25; // eax
  char *v26; // rbx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-58h] BYREF
  char v28; // [rsp+58h] [rbp-40h]
  char *v29; // [rsp+68h] [rbp-30h]
  struct _KLOCK_QUEUE_HANDLE v30; // [rsp+70h] [rbp-28h] BYREF
  char v31; // [rsp+88h] [rbp-10h]

  v5 = (unsigned int *)(*((_QWORD *)this + 403) + 520LL * a2);
  *((_BYTE *)v5 + 356) = a3;
  if ( *((_DWORD *)this + 50) != 1 )
    return;
  v6 = v5[52];
  if ( v6 )
  {
    if ( v6 == 3 )
      (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, unsigned __int8))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 391) + 760LL)
                                                                                          + 8LL)
                                                                              + 696LL))(
        *(_QWORD *)(*((_QWORD *)this + 391) + 768LL),
        *((unsigned __int16 *)v5 + 3),
        v5[53],
        *v5,
        a3);
  }
  else
  {
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 391) + 736LL)
                                                                       + 8LL)
                                                           + 816LL))(
      *(_QWORD *)(*((_QWORD *)this + 391) + 744LL),
      *((unsigned __int16 *)v5 + 3),
      v5[53],
      a3);
  }
  if ( !*((_BYTE *)v5 + 357) || (int)v5[97] <= 0 )
    goto LABEL_25;
  v28 = 0;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)this + 461, &LockHandle);
  Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
  *((_QWORD *)this + 462) = KeGetCurrentThread();
  v28 = 1;
  if ( !a3 )
  {
    v10 = v5[96];
    if ( v5[104] )
    {
      if ( v10 )
      {
        v12 = v5[1];
        v5[96] = 0;
        DXGADAPTER::SetPowerComponentLatencyCB(this, v12, **((_QWORD **)this + 439));
      }
      v13 = MEMORY[0xFFFFF78000000320];
      *((_QWORD *)v5 + 49) = MEMORY[0xFFFFF78000000320];
      *((_QWORD *)v5 + 49) = v13 + *(_QWORD *)(*((_QWORD *)this + 439) + 8LL);
      v14 = v5 + 100;
      if ( !*((_QWORD *)v5 + 50) )
      {
        v15 = (_QWORD *)((char *)this + 3672);
        v16 = *((_QWORD *)this + 459);
        if ( *(DXGADAPTER **)(v16 + 8) != (DXGADAPTER *)((char *)this + 3672) )
          goto LABEL_36;
        *v14 = v16;
        *((_QWORD *)v5 + 51) = v15;
        *(_QWORD *)(v16 + 8) = v14;
        *v15 = v14;
      }
      if ( !*((_BYTE *)this + 3660) )
      {
        v17 = *((_QWORD *)this + 391);
        *((_BYTE *)this + 3660) = 1;
        v18 = *(_QWORD *)(*(_QWORD *)(v17 + 736) + 8LL);
        v19 = *(void (__fastcall **)(_QWORD, __int64))(v18 + 872);
        LOBYTE(v18) = 1;
        v19(*(_QWORD *)(v17 + 744), v18);
      }
      goto LABEL_23;
    }
    if ( v10 != 2 )
    {
      v11 = v5[1];
      v5[96] = 2;
      DXGADAPTER::SetPowerComponentLatencyCB(this, v11, *(_QWORD *)(*((_QWORD *)this + 439) + 32LL));
      goto LABEL_23;
    }
LABEL_24:
    v28 = 0;
    Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
    *((_QWORD *)this + 462) = 0LL;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    goto LABEL_25;
  }
  v7 = v5 + 100;
  v8 = *((_QWORD *)v5 + 50);
  if ( !v8 )
    goto LABEL_24;
  if ( *(_QWORD **)(v8 + 8) != v7 )
    goto LABEL_36;
  v9 = (_QWORD *)*((_QWORD *)v5 + 51);
  if ( (_QWORD *)*v9 != v7 )
    goto LABEL_36;
  *v9 = v8;
  *(_QWORD *)(v8 + 8) = v9;
  *v7 = 0LL;
LABEL_23:
  if ( v28 )
    goto LABEL_24;
LABEL_25:
  if ( !v5[52] && *((_QWORD *)this + 448) )
  {
    v31 = 0;
    v29 = (char *)this + 3688;
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)this + 461, &v30);
    Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
    *((_QWORD *)this + 462) = KeGetCurrentThread();
    v20 = (_DWORD *)((char *)this + 3384);
    v21 = *((_DWORD *)this + 846);
    v31 = 1;
    if ( !a3 )
    {
      v25 = v21 - 1;
      *v20 = v25;
      if ( v25 )
      {
LABEL_40:
        v26 = v29;
        v31 = 0;
        Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
        *((_QWORD *)v26 + 1) = 0LL;
        KeReleaseInStackQueuedSpinLock(&v30);
        return;
      }
      DXGADAPTER::ScheduleAdapterActivityCheck(this);
LABEL_39:
      if ( !v31 )
        return;
      goto LABEL_40;
    }
    if ( v21 )
    {
LABEL_35:
      ++*v20;
      goto LABEL_39;
    }
    v22 = (__int64 *)(*((_QWORD *)this + 448) + 400LL);
    v23 = (__int64 *)*v22;
    if ( !*v22 )
    {
LABEL_33:
      if ( *((_DWORD *)this + 917) )
      {
        *((_DWORD *)this + 917) = 0;
        DXGADAPTER::UpdateLatencyTolerances(this);
      }
      goto LABEL_35;
    }
    if ( (__int64 *)v23[1] == v22 )
    {
      v24 = *(__int64 ***)(*((_QWORD *)this + 448) + 408LL);
      if ( *v24 == v22 )
      {
        *v24 = v23;
        v20 = (_DWORD *)((char *)this + 3384);
        v23[1] = (__int64)v24;
        *(_QWORD *)(*((_QWORD *)this + 448) + 400LL) = 0LL;
        goto LABEL_33;
      }
    }
LABEL_36:
    __fastfail(3u);
  }
}
