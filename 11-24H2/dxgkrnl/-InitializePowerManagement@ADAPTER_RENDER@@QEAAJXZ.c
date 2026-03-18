/*
 * XREFs of ?InitializePowerManagement@ADAPTER_RENDER@@QEAAJXZ @ 0x14019F180
 * Callers:
 *     ?InitializePowerManagement@DXGADAPTER@@AEAAJXZ @ 0x14035B368 (-InitializePowerManagement@DXGADAPTER@@AEAAJXZ.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ?VidMmInitializeSegmentPowerManagement@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@IIIW4_DXGK_POWER_COMPONENT_TYPE@@@Z @ 0x140068218 (-VidMmInitializeSegmentPowerManagement@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@IIIW4_DXGK_POWER_COM.c)
 *     ?VidSchInitializeComponentPowerManagement@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_GLOBAL@@W4_DXGK_POWER_COMPONENT_TYPE@@IIIPEAE@Z @ 0x14006825C (-VidSchInitializeComponentPowerManagement@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_GLOBAL@@W4_DXGK_POWER_.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ADAPTER_RENDER::InitializePowerManagement(ADAPTER_RENDER *this)
{
  __int64 v1; // r14
  void (__fastcall *v3)(__int64, unsigned int); // rax
  unsigned int v4; // r15d
  __int64 v5; // rdi
  unsigned int i; // esi
  __int64 v7; // rdx
  int v8; // eax
  int v9; // eax
  const wchar_t *v10; // r9
  VIDSCH_EXPORT *v11; // rcx
  unsigned int v12; // eax
  struct _VIDSCH_GLOBAL *v13; // rdx
  int v14; // eax
  int v15; // eax
  int v16; // eax
  _QWORD v18[6]; // [rsp+58h] [rbp-19h] BYREF
  void (__fastcall *v19)(__int64, unsigned int); // [rsp+88h] [rbp+17h]
  __int64 (__fastcall *v20)(void *const, unsigned int, char); // [rsp+90h] [rbp+1Fh]
  __int64 v21; // [rsp+98h] [rbp+27h]
  int v22; // [rsp+A0h] [rbp+2Fh]
  int v23; // [rsp+A4h] [rbp+33h]
  unsigned __int8 v24; // [rsp+D8h] [rbp+67h] BYREF

  v1 = *((_QWORD *)this + 2);
  v19 = 0LL;
  v23 = 0;
  v21 = *(_QWORD *)(v1 + 216);
  v18[1] = DxgSetPowerComponentActiveNoWaitCB;
  v18[0] = &DxgSetPowerComponentActiveCBInternal;
  v18[2] = DxgSetPowerComponentIdleCBInternal;
  v18[3] = DxgSetPowerComponentActiveNoWaitForceAsyncCB;
  v18[4] = DxgSetPowerComponentIdleForceAsyncCBInternal;
  v18[5] = DxgkLatencyToleranceTimerNotification;
  v22 = *(_DWORD *)(v1 + 3656);
  v20 = DxgkNotifyMemorySegmentHasData;
  v3 = 0LL;
  if ( *(int *)(v1 + 3004) >= 1300 )
    v3 = DxgNotifyVSyncCB;
  v19 = v3;
  (*(void (__fastcall **)(_QWORD, _QWORD *))(*(_QWORD *)(*((_QWORD *)this + 92) + 8LL) + 800LL))(
    *((_QWORD *)this + 93),
    v18);
  (*(void (__fastcall **)(_QWORD, _QWORD *))(*(_QWORD *)(*((_QWORD *)this + 95) + 8LL) + 680LL))(
    *((_QWORD *)this + 96),
    v18);
  v4 = *(_DWORD *)(v1 + 3368);
  LODWORD(v5) = 0;
  for ( i = 0; i < v4; ++i )
  {
    v7 = *(_QWORD *)(v1 + 3224) + 520LL * i;
    v8 = *(_DWORD *)(v7 + 208);
    if ( v8 )
    {
      switch ( v8 )
      {
        case 2:
          v11 = (VIDSCH_EXPORT *)*((_QWORD *)this + 92);
          v12 = *(_DWORD *)(v7 + 212);
          v13 = (struct _VIDSCH_GLOBAL *)*((_QWORD *)this + 93);
          v24 = 0;
          v14 = VIDSCH_EXPORT::VidSchInitializeComponentPowerManagement(v11, v13, 2u, 0, v12, i, &v24);
          v5 = v14;
          if ( v14 < 0 )
          {
            WdLogSingleEntry1(2LL, v14);
            WdLogGlobalForLineNumber = 427;
            goto LABEL_8;
          }
          break;
        case 3:
          v15 = VIDMM_EXPORT::VidMmInitializeSegmentPowerManagement(
                  *((VIDMM_EXPORT **)this + 95),
                  *((struct VIDMM_GLOBAL **)this + 96),
                  *(unsigned __int16 *)(v7 + 6),
                  *(_DWORD *)(v7 + 212),
                  *(_DWORD *)v7,
                  DXGK_POWER_COMPONENT_MEMORY);
          v5 = v15;
          if ( v15 < 0 )
          {
            WdLogSingleEntry1(2LL, v15);
            WdLogGlobalForLineNumber = 441;
            goto LABEL_19;
          }
          break;
        case 4:
          v16 = VIDMM_EXPORT::VidMmInitializeSegmentPowerManagement(
                  *((VIDMM_EXPORT **)this + 95),
                  *((struct VIDMM_GLOBAL **)this + 96),
                  0,
                  0,
                  *(_DWORD *)v7,
                  DXGK_POWER_COMPONENT_MEMORY_REFRESH);
          v5 = v16;
          if ( v16 < 0 )
          {
            WdLogSingleEntry1(2LL, v16);
            WdLogGlobalForLineNumber = 455;
LABEL_19:
            v10 = L"VidMmInitializeSegmentPowerManagement failed with status:0x%I64x";
LABEL_20:
            DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, v10, v5, 0LL, 0LL, 0LL, 0LL);
            return (unsigned int)v5;
          }
          break;
      }
    }
    else
    {
      v9 = VIDSCH_EXPORT::VidSchInitializeComponentPowerManagement(
             *((VIDSCH_EXPORT **)this + 92),
             *((struct _VIDSCH_GLOBAL **)this + 93),
             0,
             *(unsigned __int16 *)(v7 + 6),
             *(_DWORD *)(v7 + 212),
             i,
             (unsigned __int8 *)(v7 + 358));
      v5 = v9;
      if ( v9 < 0 )
      {
        WdLogSingleEntry1(2LL, v9);
        WdLogGlobalForLineNumber = 410;
LABEL_8:
        v10 = L"VidSchInitializeComponentPowerManagement failed with status:0x%I64x";
        goto LABEL_20;
      }
    }
  }
  return (unsigned int)v5;
}
