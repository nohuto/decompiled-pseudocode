/*
 * XREFs of DpiFdoInvalidateChildRelations @ 0x14031DC40
 * Callers:
 *     DpiAcpiProcessEventRequests @ 0x140252488 (DpiAcpiProcessEventRequests.c)
 *     DpiFdoInvalidateChildWorkItem @ 0x14031D9B0 (DpiFdoInvalidateChildWorkItem.c)
 *     DpiFdoHandleSystemPower @ 0x1403B9E38 (DpiFdoHandleSystemPower.c)
 *     DpiPollDisplayChildren @ 0x1403BE03C (DpiPollDisplayChildren.c)
 *     DpiFdoHandleQueryDeviceRelations @ 0x1403DB600 (DpiFdoHandleQueryDeviceRelations.c)
 *     DpiFdoCreateRelatedObjects @ 0x140404094 (DpiFdoCreateRelatedObjects.c)
 *     DxgkPowerOnOffMonitor @ 0x1404279D4 (DxgkPowerOnOffMonitor.c)
 * Callees:
 *     DxgkDiagCalcDuration1us @ 0x14004CE4C (DxgkDiagCalcDuration1us.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     ?DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z @ 0x14031DEEC (-DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z.c)
 *     DpiDxgkDdiDisplayDetectControl @ 0x14031E19C (DpiDxgkDdiDisplayDetectControl.c)
 */

__int64 __fastcall DpiFdoInvalidateChildRelations(__int64 a1, unsigned int a2, __int128 *a3)
{
  __int64 v3; // r15
  int v5; // r14d
  __int64 v6; // rdi
  __int64 v7; // rbx
  __int64 v8; // rbx
  int v9; // r13d
  int v10; // ecx
  unsigned int v11; // esi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  _QWORD *v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rbx
  int v19; // eax
  __int64 v21; // r8
  __int64 v22; // rdx
  __int128 v23; // xmm0
  int v24; // eax
  __int64 v25; // [rsp+20h] [rbp-59h] BYREF
  _BYTE v26[20]; // [rsp+28h] [rbp-51h] BYREF
  bool v27; // [rsp+3Ch] [rbp-3Dh]
  bool v28; // [rsp+3Dh] [rbp-3Ch]
  char v29; // [rsp+3Eh] [rbp-3Bh]
  bool v30; // [rsp+3Fh] [rbp-3Ah]
  _DWORD v31[2]; // [rsp+40h] [rbp-39h] BYREF
  __int64 v32; // [rsp+48h] [rbp-31h]
  __int128 v33; // [rsp+50h] [rbp-29h]
  __int64 v34; // [rsp+60h] [rbp-19h]
  int v35; // [rsp+68h] [rbp-11h]
  int v36; // [rsp+6Ch] [rbp-Dh]
  int v37; // [rsp+70h] [rbp-9h]
  int v38; // [rsp+74h] [rbp-5h]
  int v39; // [rsp+78h] [rbp-1h]
  unsigned int v40; // [rsp+7Ch] [rbp+3h]
  __int64 v41; // [rsp+80h] [rbp+7h]

  v3 = a2;
  v5 = a1;
  v6 = *(_QWORD *)(a1 + 64);
  v25 = MEMORY[0xFFFFF78000000320];
  KeEnterCriticalRegion();
  ExAcquireResourceExclusiveLite((PERESOURCE)(v6 + 3440), 1u);
  v7 = MEMORY[0xFFFFF78000000320];
  v8 = KeQueryTimeIncrement() * v7;
  v9 = v3 & 1;
  v10 = (v3 & 0xFFFFFFFE) - 1;
  if ( (v3 & 1) == 0 )
    v10 = v3 & 0xFFFFFFFE;
  if ( *(_DWORD *)(v6 + 3688) < v10 || v8 - *(_QWORD *)(v6 + 3696) >= 10000000 || (v3 & 8) != 0 )
  {
    v21 = *(_QWORD *)(v6 + 48);
    v22 = *(_QWORD *)(v6 + 40);
    *(_DWORD *)(v6 + 3688) = v10;
    *(_DWORD *)v26 = (v9 << 28) | 0x2000000;
    *(_QWORD *)(v6 + 3696) = v8;
    v23 = *a3;
    v29 = 1;
    v27 = (v3 & 4) != 0;
    v28 = (v3 & 2) != 0;
    *(_OWORD *)&v26[4] = v23;
    v30 = (v3 & 8) != 0;
    v24 = DpiDxgkDdiDisplayDetectControl(v6, v22, v21, v26, v25, *(_QWORD *)v26);
    v11 = v24;
    if ( v24 < 0 )
    {
      WdLogSingleEntry2(2LL, *(_QWORD *)(*(_QWORD *)(v6 + 40) + 1128LL), v24);
      WdLogGlobalForLineNumber = 11401;
    }
    ExReleaseResourceLite((PERESOURCE)(v6 + 3440));
    KeLeaveCriticalRegion();
    *(_BYTE *)(v6 + 3649) = 0;
  }
  else
  {
    ExReleaseResourceLite((PERESOURCE)(v6 + 3440));
    KeLeaveCriticalRegion();
    v11 = 1075708985;
    v16 = (_QWORD *)WdLogNewEntry5_WdTrace(v13, v12, v14, v15);
    v16[3] = DpiFdoInvalidateChildRelations;
    v17 = *(int *)(v6 + 3688);
    v16[6] = v3;
    v16[4] = v17;
    v16[5] = v8;
    v16[7] = 1075708985LL;
    WdLogGlobalForLineNumber = 11367;
  }
  v32 = 0LL;
  v33 = 0LL;
  v36 = 0;
  v18 = *(_QWORD *)(v6 + 2696);
  v19 = DxgkDiagCalcDuration1us(&v25);
  v31[0] = 30;
  v32 = 0LL;
  v31[1] = 72;
  v38 = v9 | v5 & 0xFFFF00;
  v35 = 0;
  v34 = 0LL;
  v33 = 0LL;
  v37 = 37;
  v39 = v19;
  v40 = v11;
  v41 = v18;
  DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v31, *(_QWORD *)(v6 + 5888));
  return v11;
}
