/*
 * XREFs of DpiAcpiHandleAcpiEvent @ 0x1404291B4
 * Callers:
 *     DpiAcpiHandleAcpiEventWork @ 0x14024AB50 (DpiAcpiHandleAcpiEventWork.c)
 * Callees:
 *     DpiCheckForOutstandingD3Requests @ 0x14002A148 (DpiCheckForOutstandingD3Requests.c)
 *     ?ContextScopeConstructor@CDisplayScenarioContextScope@@QEAAXPEBU_GUID@@II@Z @ 0x1400354D0 (-ContextScopeConstructor@CDisplayScenarioContextScope@@QEAAXPEBU_GUID@@II@Z.c)
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x140042008 (-AcquireMiniportListMutex@@YAXXZ.c)
 *     ?ReleaseMiniportListMutex@@YAXXZ @ 0x14004204C (-ReleaseMiniportListMutex@@YAXXZ.c)
 *     ??1CDisplayScenarioContextScope@@QEAA@XZ @ 0x140043904 (--1CDisplayScenarioContextScope@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     memset @ 0x14009FCC0 (memset.c)
 *     DpiAcpiProcessEventRequests @ 0x14024B658 (DpiAcpiProcessEventRequests.c)
 *     DxgkReleaseAdapterCoreSync @ 0x1402BA104 (DxgkReleaseAdapterCoreSync.c)
 *     DpiEnableD3Requests @ 0x1402BA7B0 (DpiEnableD3Requests.c)
 *     DxgkAcquireAdapterCoreSync @ 0x1402BD2E0 (DxgkAcquireAdapterCoreSync.c)
 *     ?DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z @ 0x14037580C (-DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z.c)
 *     DxgkAcquireAdapterDdiSync @ 0x1403762D8 (DxgkAcquireAdapterDdiSync.c)
 *     DxgkReleaseAdapterDdiSync @ 0x1403763C8 (DxgkReleaseAdapterDdiSync.c)
 *     DpiDxgkDdiNotifyAcpiEvent @ 0x1403E1590 (DpiDxgkDdiNotifyAcpiEvent.c)
 */

void __fastcall DpiAcpiHandleAcpiEvent(unsigned int *P)
{
  unsigned int v1; // r9d
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v3; // r12
  int v4; // ebx
  bool v5; // zf
  __int64 v6; // rsi
  __int64 v7; // rbx
  unsigned int v8; // eax
  __int64 v9; // r8
  int v10; // edx
  __int64 v11; // r15
  __int64 v12; // r8
  __int64 v13; // rax
  unsigned int v14; // r14d
  __int64 v15; // rax
  __int64 v16; // rdx
  int v17; // eax
  unsigned int v18; // [rsp+38h] [rbp-49h] BYREF
  __int64 v19; // [rsp+40h] [rbp-41h]
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v20[2]; // [rsp+48h] [rbp-39h] BYREF
  _OWORD v21[5]; // [rsp+58h] [rbp-29h] BYREF

  v1 = P[6];
  v18 = 0;
  LOBYTE(v20[0]) = 0;
  CDisplayScenarioContextScope::ContextScopeConstructor(v20, 0LL, 4u, v1);
  v3 = v20[1];
  AcquireMiniportListMutex();
  v4 = P[6];
  if ( v4 == 1 && (_BYTE)word_14015DD5C && HIBYTE(word_14015DD5C) && qword_14015DD70 == *((_QWORD *)P + 2) )
  {
    P[6] = 4;
    v4 = 4;
    *((_QWORD *)P + 2) = qword_14015DD68;
  }
  memset(v21, 0, 0x48uLL);
  v21[0] = 0x4000000006uLL;
  v5 = *((_QWORD *)P + 4) == 0LL;
  DWORD2(v21[3]) = P[7];
  HIDWORD(v21[3]) = !v5;
  memset(&v21[1], 0, 28);
  LODWORD(v21[3]) = 25;
  DWORD1(v21[3]) = v4;
  DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v21, 0x200000000LL);
  if ( P[6] == 2 && P[7] == 4 && *((_QWORD *)P + 4) )
    _InterlockedCompareExchange(&dword_14015E3D8, 0, 1);
  while ( 1 )
  {
    v6 = qword_14015DD88;
    if ( *(_QWORD *)v6 != v6 )
    {
      while ( 1 )
      {
        KeWaitForSingleObject((PVOID)(v6 + 72), Executive, 0, 0, 0LL);
        v7 = *(_QWORD *)(v6 + 56);
        if ( *(_QWORD *)v7 != v7 )
          break;
LABEL_49:
        KeReleaseMutex((PRKMUTEX)(v6 + 72), 0);
        v6 = *(_QWORD *)v6;
        if ( *(_QWORD *)v6 == qword_14015DD88 )
          goto LABEL_50;
      }
      while ( 1 )
      {
        if ( *(_DWORD *)(v7 + 16) == 1953656900 && *(_DWORD *)(v7 + 20) == 2 )
        {
          v8 = P[6];
          if ( v8 != 1 && v8 != 4 )
            break;
          if ( *((_QWORD *)P + 2) == *(_QWORD *)(v7 + 24) )
            break;
        }
LABEL_48:
        v7 = *(_QWORD *)v7;
        if ( *(_QWORD *)v7 == *(_QWORD *)(v6 + 56) )
          goto LABEL_49;
      }
      KeEnterCriticalRegion();
      if ( *(_BYTE *)(v7 + 484) )
        DpiCheckForOutstandingD3Requests(v7);
      ExAcquireResourceSharedLite(*(PERESOURCE *)(v7 + 168), 1u);
      if ( *(_BYTE *)(v7 + 1157) != 1 || !*(_QWORD *)(v6 + 232) || *(_DWORD *)(v7 + 236) != 2 )
      {
LABEL_45:
        if ( *(_BYTE *)(v7 + 484) )
          DpiEnableD3Requests(*(_QWORD *)(v7 + 24));
        ExReleaseResourceLite(*(PERESOURCE *)(v7 + 168));
        KeLeaveCriticalRegion();
        goto LABEL_48;
      }
      v18 = 0;
      if ( *(_DWORD *)(v7 + 4120) == 1 || *(_DWORD *)(v7 + 284) != 1 )
      {
        v10 = 2;
      }
      else
      {
        DxgkAcquireAdapterCoreSync(*(_QWORD *)(v7 + 4032), 2, v9);
        v10 = 1;
      }
      DxgkAcquireAdapterDdiSync(*(_QWORD *)(v7 + 4032), v10);
      v11 = (int)DpiDxgkDdiNotifyAcpiEvent(v6, *(_QWORD *)(v7 + 48), P[6], P[7], *((_QWORD *)P + 4), &v18);
      if ( *(_DWORD *)(v7 + 4120) == 1 || *(_DWORD *)(v7 + 284) != 1 )
      {
        DxgkReleaseAdapterDdiSync(*(DXGADAPTER **)(v7 + 4032));
      }
      else
      {
        DxgkReleaseAdapterDdiSync(*(DXGADAPTER **)(v7 + 4032));
        DxgkReleaseAdapterCoreSync(*(_QWORD *)(v7 + 4032), 2u, v12);
      }
      v13 = *(_QWORD *)(v7 + 4032);
      v14 = 0;
      if ( v13 )
      {
        v19 = *(_QWORD *)(v13 + 412);
        v14 = v19;
      }
      memset(v21, 0, 0x48uLL);
      v15 = *(_QWORD *)(v7 + 2696);
      v21[0] = 0x480000001EuLL;
      memset(&v21[1], 0, 28);
      LODWORD(v21[3]) = 42;
      *(_QWORD *)((char *)&v21[3] + 4) = __PAIR64__(v18, v14);
      HIDWORD(v21[3]) = v11;
      *(_QWORD *)&v21[4] = v15;
      DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v21, 0x200000000LL);
      if ( (int)v11 >= 0 )
      {
        v16 = v18;
        if ( P[6] == 4 && ((-((v18 & 8) != 0) - 8) & v18) != 0 )
        {
          WdLogSingleEntry1(2LL, v18);
          v16 = 0LL;
          v18 = 0;
          WdLogGlobalForLineNumber = 1835;
        }
        if ( (*(_BYTE *)(v7 + 4040) & 1) != 0 || (v16 & 7) == 0 )
          goto LABEL_41;
        WdLogSingleEntry1(2LL, -1073741823LL);
        WdLogGlobalForLineNumber = 1847;
      }
      else
      {
        WdLogSingleEntry1(3LL, v11);
        WdLogGlobalForLineNumber = 1825;
      }
      v16 = 0LL;
      v18 = 0;
LABEL_41:
      WdLogSingleEntry1(4LL, v16);
      WdLogGlobalForLineNumber = 1854;
      if ( *(_DWORD *)(v7 + 4120) != 1 && *(_DWORD *)(v7 + 284) == 1 && (v18 & 7) != 0 )
        DpiAcpiProcessEventRequests(*(_QWORD *)(v7 + 24), v18, (__int64)P, v3);
      goto LABEL_45;
    }
LABEL_50:
    v17 = P[6];
    if ( v17 != 4 )
      break;
    v17 = 4;
    if ( (v18 & 8) == 0 )
      break;
    P[6] = 1;
    *((_QWORD *)P + 2) = qword_14015DD70;
  }
  if ( v17 == 2 && P[7] == 4 && !*((_QWORD *)P + 4) )
    _InterlockedCompareExchange(&dword_14015E3D8, 1, 0);
  ReleaseMiniportListMutex();
  ExFreePoolWithTag(P, 0);
  CDisplayScenarioContextScope::~CDisplayScenarioContextScope(v20);
}
