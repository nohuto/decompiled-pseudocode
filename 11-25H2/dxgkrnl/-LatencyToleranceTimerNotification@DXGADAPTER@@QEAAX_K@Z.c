/*
 * XREFs of ?LatencyToleranceTimerNotification@DXGADAPTER@@QEAAX_K@Z @ 0x14003926C
 * Callers:
 *     ?DxgkLatencyToleranceTimerNotification@@YAXQEAX_K@Z @ 0x1403B1950 (-DxgkLatencyToleranceTimerNotification@@YAXQEAX_K@Z.c)
 * Callees:
 *     ??1DXGAUTOSPINLOCK@@QEAA@XZ @ 0x140031094 (--1DXGAUTOSPINLOCK@@QEAA@XZ.c)
 *     ?UpdateLatencyTolerances@DXGADAPTER@@QEAAXXZ @ 0x1400310E0 (-UpdateLatencyTolerances@DXGADAPTER@@QEAAXXZ.c)
 *     ?SetPowerComponentLatencyCB@DXGADAPTER@@QEAAXI_K@Z @ 0x14003130C (-SetPowerComponentLatencyCB@DXGADAPTER@@QEAAXI_K@Z.c)
 *     McTemplateK0_EtwWriteTransfer @ 0x140036F68 (McTemplateK0_EtwWriteTransfer.c)
 *     ?VidMmFreeFenceStorageSlot@VIDMM_EXPORT@@QEAAXPEAUVIDMM_MONITORED_FENCE_STORAGE@@_N@Z @ 0x14003EB70 (-VidMmFreeFenceStorageSlot@VIDMM_EXPORT@@QEAAXPEAUVIDMM_MONITORED_FENCE_STORAGE@@_N@Z.c)
 *     Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline @ 0x14006681C (Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline.c)
 */

void __fastcall DXGADAPTER::LatencyToleranceTimerNotification(DXGADAPTER *this, __int64 a2, __int64 a3)
{
  _QWORD *v5; // r12
  _QWORD *v6; // r15
  _QWORD *v7; // rbp
  _QWORD *v8; // r14
  int v9; // eax
  __int64 v10; // rax
  __int64 v11; // rbx
  int v12; // edi
  __int64 v13; // rcx
  _QWORD *v14; // rax
  int v15; // eax
  __int64 v16; // rcx
  __int64 v17; // rcx
  _QWORD *v18; // rax
  _QWORD *v19; // rax
  __int64 v20; // rcx
  __int64 v21; // r8
  _BYTE v22[8]; // [rsp+20h] [rbp-58h] BYREF
  char *v23; // [rsp+28h] [rbp-50h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-48h] BYREF
  char v25; // [rsp+48h] [rbp-30h]

  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x20000) != 0 )
    McTemplateK0_EtwWriteTransfer((__int64)this, &Dxgk_LatencyToleranceTimer, a3);
  v25 = 0;
  v23 = (char *)this + 3688;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)this + 461, &LockHandle);
  Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
  v5 = (_QWORD *)((char *)this + 3672);
  *((_QWORD *)this + 462) = KeGetCurrentThread();
  v6 = (_QWORD *)*((_QWORD *)this + 459);
  v25 = 1;
  while ( v6 != v5 )
  {
    v7 = v6;
    v8 = v6;
    v6 = (_QWORD *)*v6;
    if ( *((_BYTE *)v7 - 44) || *((_DWORD *)v7 - 14) == *((_DWORD *)v7 - 98) - 1 )
    {
      if ( (_QWORD *)v6[1] != v8 || (v19 = (_QWORD *)v8[1], (_QWORD *)*v19 != v8) )
LABEL_35:
        __fastfail(3u);
      *v19 = v6;
      v6[1] = v19;
LABEL_13:
      *v8 = 0LL;
    }
    else if ( *(v7 - 1) <= a2 )
    {
      v9 = *((_DWORD *)v7 - 48);
      if ( v9 )
      {
        if ( v9 == 6 )
        {
          v15 = *((_DWORD *)this + 917);
          switch ( v15 )
          {
            case 0:
              *((_DWORD *)this + 917) = 1;
              v16 = *((_QWORD *)this + 443);
LABEL_19:
              *(v7 - 1) = a2 + v16;
              goto LABEL_20;
            case 1:
              *((_DWORD *)this + 917) = 2;
              v16 = *((_QWORD *)this + 445);
              goto LABEL_19;
            case 2:
              *((_DWORD *)this + 917) = 3;
              v17 = *v8;
              if ( *(_QWORD **)(*v8 + 8LL) != v8 )
                goto LABEL_35;
              v18 = (_QWORD *)v8[1];
              if ( (_QWORD *)*v18 != v8 )
                goto LABEL_35;
              *v18 = v17;
              *(_QWORD *)(v17 + 8) = v18;
              *v8 = 0LL;
LABEL_20:
              DXGADAPTER::UpdateLatencyTolerances(this);
              break;
          }
        }
      }
      else
      {
        v10 = *((int *)v7 - 4);
        v11 = 2 * (v10 + 1);
        v12 = v10 + 1;
        DXGADAPTER::SetPowerComponentLatencyCB(
          this,
          *((_DWORD *)v7 - 99),
          *(_QWORD *)(*((_QWORD *)this + 439) + 16 * (v10 + 1)));
        *((_DWORD *)v7 - 4) = v12;
        *(v7 - 1) = a2 + *(_QWORD *)(*((_QWORD *)this + 439) + 8 * v11 + 8);
        if ( v12 == *((_DWORD *)v7 - 3) )
        {
          v13 = *v7;
          if ( *(_QWORD **)(*v7 + 8LL) != v7 )
            goto LABEL_35;
          v14 = (_QWORD *)v7[1];
          if ( (_QWORD *)*v14 != v7 )
            goto LABEL_35;
          *v14 = v13;
          *(_QWORD *)(v13 + 8) = v14;
          goto LABEL_13;
        }
      }
    }
  }
  if ( (_QWORD *)*v5 == v5 )
    *((_BYTE *)this + 3660) = 0;
  VIDMM_EXPORT::VidMmFreeFenceStorageSlot(
    *(VIDMM_EXPORT **)(*((_QWORD *)this + 391) + 736LL),
    *(struct VIDMM_MONITORED_FENCE_STORAGE **)(*((_QWORD *)this + 391) + 744LL),
    *((_BYTE *)this + 3660));
  DXGAUTOSPINLOCK::~DXGAUTOSPINLOCK((DXGAUTOSPINLOCK *)v22);
  if ( bTracingEnabled )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x20000) != 0 )
      McTemplateK0_EtwWriteTransfer(v20, &Dxgk_LatencyToleranceTimerEnd, v21);
  }
}
