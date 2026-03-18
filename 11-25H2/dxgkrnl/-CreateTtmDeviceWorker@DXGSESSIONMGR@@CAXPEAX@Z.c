/*
 * XREFs of ?CreateTtmDeviceWorker@DXGSESSIONMGR@@CAXPEAX@Z @ 0x1401F3BC0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1400196D0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14001AFC0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x140028800 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ??0DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAA@AEAVDXGPUSHLOCKFAST@@_N@Z @ 0x14004CD9C (--0DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAA@AEAVDXGPUSHLOCKFAST@@_N@Z.c)
 *     ?Detach@CPROCESSATTACHHELPER@@QEAAXXZ @ 0x14004FCB0 (-Detach@CPROCESSATTACHHELPER@@QEAAXXZ.c)
 *     ?Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z @ 0x14005008C (-Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline @ 0x14006681C (Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     ?RegisterTtmDevice@CTTMDEVICE@@QEAAJPEAVDXGSESSIONDATA@@@Z @ 0x1401F48B0 (-RegisterTtmDevice@CTTMDEVICE@@QEAAJPEAVDXGSESSIONDATA@@@Z.c)
 */

void __fastcall DXGSESSIONMGR::CreateTtmDeviceWorker(CTTMDEVICE *a1)
{
  __int64 v2; // rsi
  CTTMDEVICE **v3; // rcx
  __int64 v4; // rdx
  int v5; // eax
  __int64 v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // [rsp+20h] [rbp-98h]
  __int64 v9; // [rsp+28h] [rbp-90h]
  __int64 v10; // [rsp+30h] [rbp-88h]
  __int64 v11; // [rsp+50h] [rbp-68h] BYREF
  char v12; // [rsp+58h] [rbp-60h]
  _BYTE v13[16]; // [rsp+60h] [rbp-58h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+70h] [rbp-48h] BYREF
  char v15; // [rsp+A0h] [rbp-18h]

  v2 = *((_QWORD *)DXGGLOBAL::GetGlobal() + 118);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v13, (struct DXGFASTMUTEX *const)v2, 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v13);
  DXGAUTOPUSHLOCKFASTEXCLUSIVE::DXGAUTOPUSHLOCKFASTEXCLUSIVE(
    (DXGAUTOPUSHLOCKFASTEXCLUSIVE *)&v11,
    (struct DXGPUSHLOCKFAST *)(v2 + 336));
  if ( *((_BYTE *)a1 + 913) )
  {
    WdLogSingleEntry1(2LL, a1);
    WdLogGlobalForLineNumber = 7372;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Workitem for creating TTM device 0x%I64x is called after the destroy work item.",
      (__int64)a1,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  else
  {
    v3 = *(CTTMDEVICE ***)(v2 + 368);
    if ( *v3 != (CTTMDEVICE *)(v2 + 360) )
      __fastfail(3u);
    *(_QWORD *)a1 = v2 + 360;
    *((_QWORD *)a1 + 1) = v3;
    *v3 = a1;
    *(_QWORD *)(v2 + 368) = a1;
    v4 = *(_QWORD *)(v2 + 136);
    if ( v4 && *(_BYTE *)(v4 + 18497) )
    {
      v15 = 0;
      CPROCESSATTACHHELPER::Attach(&ApcState, *(PRKPROCESS *)(v4 + 18656));
      v5 = CTTMDEVICE::RegisterTtmDevice(a1, *(struct DXGSESSIONDATA **)(v2 + 136));
      if ( v5 < 0 )
      {
        v6 = v5;
        WdLogSingleEntry4(2LL, *((unsigned int *)a1 + 20), *((_QWORD *)a1 + 8), **(unsigned int **)(v2 + 136), v5);
        v10 = **(unsigned int **)(v2 + 136);
        v9 = *((_QWORD *)a1 + 8);
        v8 = *((unsigned int *)a1 + 20);
        WdLogGlobalForLineNumber = 7400;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          0xFFFFFFFFLL,
          L"Failed to register TTM device for target 0x%I64x on adapter 0x%I64x to current console session 0x%I64x, (Status = 0x%I64x).",
          v8,
          v9,
          v10,
          v6,
          0LL);
      }
      CPROCESSATTACHHELPER::Detach(&ApcState);
    }
  }
  if ( v12 )
  {
    Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
    v7 = v11;
    *(_QWORD *)(v11 + 8) = 0LL;
    ExReleasePushLockExclusiveEx(v7, 0LL);
    KeLeaveCriticalRegion();
  }
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v13);
}
