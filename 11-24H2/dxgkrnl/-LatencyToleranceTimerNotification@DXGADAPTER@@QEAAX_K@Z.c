/*
 * XREFs of ?LatencyToleranceTimerNotification@DXGADAPTER@@QEAAX_K@Z @ 0x14005D4A8
 * Callers:
 *     ?DxgkLatencyToleranceTimerNotification@@YAXQEAX_K@Z @ 0x1403A24E0 (-DxgkLatencyToleranceTimerNotification@@YAXQEAX_K@Z.c)
 * Callees:
 *     McTemplateK0_EtwWriteTransfer @ 0x1400105C8 (McTemplateK0_EtwWriteTransfer.c)
 *     ??1DXGAUTOSPINLOCK@@QEAA@XZ @ 0x1400354BC (--1DXGAUTOSPINLOCK@@QEAA@XZ.c)
 *     ??0DXGAUTOSPINLOCK@@QEAA@QEAVDXGSPINLOCK@@E@Z @ 0x140035C20 (--0DXGAUTOSPINLOCK@@QEAA@QEAVDXGSPINLOCK@@E@Z.c)
 *     ?VidMmFreeFenceStorageSlot@VIDMM_EXPORT@@QEAAXPEAUVIDMM_MONITORED_FENCE_STORAGE@@_N@Z @ 0x14003E560 (-VidMmFreeFenceStorageSlot@VIDMM_EXPORT@@QEAAXPEAUVIDMM_MONITORED_FENCE_STORAGE@@_N@Z.c)
 *     ?SetPowerComponentLatencyCB@DXGADAPTER@@QEAAXI_K@Z @ 0x140042A84 (-SetPowerComponentLatencyCB@DXGADAPTER@@QEAAXI_K@Z.c)
 *     ?UpdateLatencyTolerances@DXGADAPTER@@QEAAXXZ @ 0x14004A484 (-UpdateLatencyTolerances@DXGADAPTER@@QEAAXXZ.c)
 *     Feature_Servicing_GraphicsKernel_FixD3ComponentLatencyListAllAdapters__private_IsEnabledDeviceUsageNoInline @ 0x1400663DC (Feature_Servicing_GraphicsKernel_FixD3ComponentLatencyListAllAdapters__private_IsEnabledDeviceUs.c)
 *     Feature_Servicing_GraphicsKernel_FixD3ComponentLatencyList__private_IsEnabledDeviceUsageNoInline @ 0x140066430 (Feature_Servicing_GraphicsKernel_FixD3ComponentLatencyList__private_IsEnabledDeviceUsageNoInline.c)
 */

void __fastcall DXGADAPTER::LatencyToleranceTimerNotification(DXGADAPTER *this, __int64 a2, __int64 a3)
{
  _QWORD *v5; // r15
  _QWORD *v6; // r12
  _QWORD *v7; // rbp
  _QWORD *v8; // r14
  bool v9; // bl
  int v10; // eax
  __int64 v11; // rax
  __int64 v12; // rbx
  int v13; // edi
  __int64 v14; // rcx
  _QWORD *v15; // rax
  int v16; // eax
  __int64 v17; // rcx
  __int64 v18; // rcx
  _QWORD *v19; // rax
  __int64 v20; // rcx
  __int64 v21; // r8
  _BYTE v22[48]; // [rsp+20h] [rbp-58h] BYREF

  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x20000) != 0 )
    McTemplateK0_EtwWriteTransfer((__int64)this, (__int64)&Dxgk_LatencyToleranceTimer, a3);
  DXGAUTOSPINLOCK::DXGAUTOSPINLOCK((DXGAUTOSPINLOCK *)v22, (KSPIN_LOCK *)this + 461, 1);
  v5 = (_QWORD *)((char *)this + 3672);
  v6 = (_QWORD *)*((_QWORD *)this + 459);
  while ( v6 != v5 )
  {
    v7 = v6;
    v8 = v6;
    v6 = (_QWORD *)*v6;
    v9 = *((_DWORD *)v7 - 14) == *((_DWORD *)v7 - 98) - 1;
    if ( (unsigned int)Feature_Servicing_GraphicsKernel_FixD3ComponentLatencyList__private_IsEnabledDeviceUsageNoInline()
      && ((unsigned int)Feature_Servicing_GraphicsKernel_FixD3ComponentLatencyListAllAdapters__private_IsEnabledDeviceUsageNoInline()
       || *((_DWORD *)this + 105) == 32902 && *((_DWORD *)this + 106) == 45118) )
    {
      v9 = 0;
    }
    if ( *((_BYTE *)v7 - 44) || v9 )
    {
      v14 = *v8;
      if ( *(_QWORD **)(*v8 + 8LL) != v8 || (v15 = (_QWORD *)v8[1], (_QWORD *)*v15 != v8) )
LABEL_31:
        __fastfail(3u);
LABEL_17:
      *v15 = v14;
      *(_QWORD *)(v14 + 8) = v15;
      *v8 = 0LL;
    }
    else if ( *(v7 - 1) <= a2 )
    {
      v10 = *((_DWORD *)v7 - 48);
      if ( v10 )
      {
        if ( v10 == 6 )
        {
          v16 = *((_DWORD *)this + 917);
          switch ( v16 )
          {
            case 0:
              *((_DWORD *)this + 917) = 1;
              v17 = *((_QWORD *)this + 443);
LABEL_23:
              *(v7 - 1) = a2 + v17;
              goto LABEL_24;
            case 1:
              *((_DWORD *)this + 917) = 2;
              v17 = *((_QWORD *)this + 445);
              goto LABEL_23;
            case 2:
              *((_DWORD *)this + 917) = 3;
              v18 = *v8;
              if ( *(_QWORD **)(*v8 + 8LL) != v8 )
                goto LABEL_31;
              v19 = (_QWORD *)v8[1];
              if ( (_QWORD *)*v19 != v8 )
                goto LABEL_31;
              *v19 = v18;
              *(_QWORD *)(v18 + 8) = v19;
              *v8 = 0LL;
LABEL_24:
              DXGADAPTER::UpdateLatencyTolerances(this);
              break;
          }
        }
      }
      else
      {
        v11 = *((int *)v7 - 4);
        v12 = 2 * (v11 + 1);
        v13 = v11 + 1;
        DXGADAPTER::SetPowerComponentLatencyCB(
          this,
          *((_DWORD *)v7 - 99),
          *(_QWORD *)(*((_QWORD *)this + 439) + 16 * (v11 + 1)));
        *((_DWORD *)v7 - 4) = v13;
        *(v7 - 1) = a2 + *(_QWORD *)(*((_QWORD *)this + 439) + 8 * v12 + 8);
        if ( v13 == *((_DWORD *)v7 - 3) )
        {
          v14 = *v8;
          if ( *(_QWORD **)(*v8 + 8LL) != v8 )
            goto LABEL_31;
          v15 = (_QWORD *)v8[1];
          if ( (_QWORD *)*v15 != v8 )
            goto LABEL_31;
          goto LABEL_17;
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
      McTemplateK0_EtwWriteTransfer(v20, (__int64)&Dxgk_LatencyToleranceTimerEnd, v21);
  }
}
