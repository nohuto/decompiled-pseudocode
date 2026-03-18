/*
 * XREFs of DpiAcpiHandleAcpiEvent @ 0x140428EBC
 * Callers:
 *     DpiAcpiHandleAcpiEventWork @ 0x140251980 (DpiAcpiHandleAcpiEventWork.c)
 * Callees:
 *     DpiCheckForOutstandingD3Requests @ 0x14002A8E8 (DpiCheckForOutstandingD3Requests.c)
 *     ?ContextScopeConstructor@CDisplayScenarioContextScope@@QEAAXPEBU_GUID@@II@Z @ 0x14003551C (-ContextScopeConstructor@CDisplayScenarioContextScope@@QEAAXPEBU_GUID@@II@Z.c)
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x140041998 (-AcquireMiniportListMutex@@YAXXZ.c)
 *     ?ReleaseMiniportListMutex@@YAXXZ @ 0x1400419DC (-ReleaseMiniportListMutex@@YAXXZ.c)
 *     ??1CDisplayScenarioContextScope@@QEAA@XZ @ 0x1400435E4 (--1CDisplayScenarioContextScope@@QEAA@XZ.c)
 *     Feature_ForceConnectionDetectionOnDcToAc__private_IsEnabledDeviceUsageNoInline @ 0x14007C80C (Feature_ForceConnectionDetectionOnDcToAc__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     memset @ 0x1400A2000 (memset.c)
 *     DpiPollAllDisplayChildren @ 0x140237764 (DpiPollAllDisplayChildren.c)
 *     DpiAcpiProcessEventRequests @ 0x140252488 (DpiAcpiProcessEventRequests.c)
 *     DxgkReleaseAdapterCoreSync @ 0x1402C7954 (DxgkReleaseAdapterCoreSync.c)
 *     DpiEnableD3Requests @ 0x1402C7FF0 (DpiEnableD3Requests.c)
 *     DxgkAcquireAdapterCoreSync @ 0x1402CA614 (DxgkAcquireAdapterCoreSync.c)
 *     ?DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z @ 0x14031DEEC (-DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z.c)
 *     DxgkAcquireAdapterDdiSync @ 0x14031E9B8 (DxgkAcquireAdapterDdiSync.c)
 *     DxgkReleaseAdapterDdiSync @ 0x14031EAA8 (DxgkReleaseAdapterDdiSync.c)
 *     DpiDxgkDdiNotifyAcpiEvent @ 0x1403D9120 (DpiDxgkDdiNotifyAcpiEvent.c)
 */

void __fastcall DpiAcpiHandleAcpiEvent(unsigned int *P)
{
  unsigned int v1; // r9d
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v3; // r12
  int v4; // ebx
  bool v5; // zf
  __int64 v6; // rcx
  __int64 v7; // rsi
  __int64 v8; // rbx
  unsigned int v9; // eax
  __int64 v10; // r8
  int v11; // edx
  __int64 v12; // r15
  __int64 v13; // r8
  __int64 v14; // rax
  unsigned int v15; // r14d
  __int64 v16; // rax
  __int64 v17; // rdx
  int v18; // eax
  unsigned int v19; // [rsp+38h] [rbp-49h] BYREF
  __int64 v20; // [rsp+40h] [rbp-41h]
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v21[2]; // [rsp+48h] [rbp-39h] BYREF
  _OWORD v22[5]; // [rsp+58h] [rbp-29h] BYREF

  v1 = P[6];
  v19 = 0;
  LOBYTE(v21[0]) = 0;
  CDisplayScenarioContextScope::ContextScopeConstructor(v21, 0LL, 4u, v1);
  v3 = v21[1];
  AcquireMiniportListMutex();
  v4 = P[6];
  if ( v4 == 1 && (_BYTE)word_140160D1C && HIBYTE(word_140160D1C) && qword_140160D30 == *((_QWORD *)P + 2) )
  {
    P[6] = 4;
    v4 = 4;
    *((_QWORD *)P + 2) = qword_140160D28;
  }
  memset(v22, 0, 0x48uLL);
  v22[0] = 0x4000000006uLL;
  v5 = *((_QWORD *)P + 4) == 0LL;
  DWORD2(v22[3]) = P[7];
  HIDWORD(v22[3]) = !v5;
  memset(&v22[1], 0, 28);
  LODWORD(v22[3]) = 25;
  DWORD1(v22[3]) = v4;
  DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v22, 0x200000000LL);
  if ( P[6] == 2 && P[7] == 4 && *((_QWORD *)P + 4) )
    _InterlockedCompareExchange(&dword_140161398, 0, 1);
  if ( (unsigned int)Feature_ForceConnectionDetectionOnDcToAc__private_IsEnabledDeviceUsageNoInline()
    && P[7] == 1
    && *((_QWORD *)P + 4)
    && byte_140160D19 )
  {
    DpiPollAllDisplayChildren(v6, (__int64)v3);
  }
  while ( 1 )
  {
    v7 = qword_140160D48;
    if ( *(_QWORD *)v7 != v7 )
    {
      while ( 1 )
      {
        KeWaitForSingleObject((PVOID)(v7 + 72), Executive, 0, 0, 0LL);
        v8 = *(_QWORD *)(v7 + 56);
        if ( *(_QWORD *)v8 != v8 )
          break;
LABEL_54:
        KeReleaseMutex((PRKMUTEX)(v7 + 72), 0);
        v7 = *(_QWORD *)v7;
        if ( *(_QWORD *)v7 == qword_140160D48 )
          goto LABEL_55;
      }
      while ( 1 )
      {
        if ( *(_DWORD *)(v8 + 16) == 1953656900 && *(_DWORD *)(v8 + 20) == 2 )
        {
          v9 = P[6];
          if ( v9 != 1 && v9 != 4 )
            break;
          if ( *((_QWORD *)P + 2) == *(_QWORD *)(v8 + 24) )
            break;
        }
LABEL_53:
        v8 = *(_QWORD *)v8;
        if ( *(_QWORD *)v8 == *(_QWORD *)(v7 + 56) )
          goto LABEL_54;
      }
      KeEnterCriticalRegion();
      if ( *(_BYTE *)(v8 + 484) )
        DpiCheckForOutstandingD3Requests(v8);
      ExAcquireResourceSharedLite(*(PERESOURCE *)(v8 + 168), 1u);
      if ( *(_BYTE *)(v8 + 1157) != 1 || !*(_QWORD *)(v7 + 232) || *(_DWORD *)(v8 + 236) != 2 )
      {
LABEL_50:
        if ( *(_BYTE *)(v8 + 484) )
          DpiEnableD3Requests(*(_QWORD *)(v8 + 24));
        ExReleaseResourceLite(*(PERESOURCE *)(v8 + 168));
        KeLeaveCriticalRegion();
        goto LABEL_53;
      }
      v19 = 0;
      if ( *(_DWORD *)(v8 + 4120) == 1 || *(_DWORD *)(v8 + 284) != 1 )
      {
        v11 = 2;
      }
      else
      {
        DxgkAcquireAdapterCoreSync(*(_QWORD *)(v8 + 4032), 2, v10);
        v11 = 1;
      }
      DxgkAcquireAdapterDdiSync(*(_QWORD *)(v8 + 4032), v11);
      v12 = (int)DpiDxgkDdiNotifyAcpiEvent(v7, *(_QWORD *)(v8 + 48), P[6], P[7], *((_QWORD *)P + 4), &v19);
      if ( *(_DWORD *)(v8 + 4120) == 1 || *(_DWORD *)(v8 + 284) != 1 )
      {
        DxgkReleaseAdapterDdiSync(*(DXGADAPTER **)(v8 + 4032));
      }
      else
      {
        DxgkReleaseAdapterDdiSync(*(DXGADAPTER **)(v8 + 4032));
        DxgkReleaseAdapterCoreSync(*(_QWORD *)(v8 + 4032), 2u, v13);
      }
      v14 = *(_QWORD *)(v8 + 4032);
      v15 = 0;
      if ( v14 )
      {
        v20 = *(_QWORD *)(v14 + 412);
        v15 = v20;
      }
      memset(v22, 0, 0x48uLL);
      v16 = *(_QWORD *)(v8 + 2696);
      v22[0] = 0x480000001EuLL;
      memset(&v22[1], 0, 28);
      LODWORD(v22[3]) = 42;
      *(_QWORD *)((char *)&v22[3] + 4) = __PAIR64__(v19, v15);
      HIDWORD(v22[3]) = v12;
      *(_QWORD *)&v22[4] = v16;
      DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v22, 0x200000000LL);
      if ( (int)v12 >= 0 )
      {
        v17 = v19;
        if ( P[6] == 4 && ((-((v19 & 8) != 0) - 8) & v19) != 0 )
        {
          WdLogSingleEntry1(2LL, v19);
          v17 = 0LL;
          v19 = 0;
          WdLogGlobalForLineNumber = 1849;
        }
        if ( (*(_BYTE *)(v8 + 4040) & 1) != 0 || (v17 & 7) == 0 )
          goto LABEL_46;
        WdLogSingleEntry1(2LL, -1073741823LL);
        WdLogGlobalForLineNumber = 1861;
      }
      else
      {
        WdLogSingleEntry1(3LL, v12);
        WdLogGlobalForLineNumber = 1839;
      }
      v17 = 0LL;
      v19 = 0;
LABEL_46:
      WdLogSingleEntry1(4LL, v17);
      WdLogGlobalForLineNumber = 1868;
      if ( *(_DWORD *)(v8 + 4120) != 1 && *(_DWORD *)(v8 + 284) == 1 && (v19 & 7) != 0 )
        DpiAcpiProcessEventRequests(*(_QWORD *)(v8 + 24), v19, (__int64)P, v3);
      goto LABEL_50;
    }
LABEL_55:
    v18 = P[6];
    if ( v18 != 4 )
      break;
    v18 = 4;
    if ( (v19 & 8) == 0 )
      break;
    P[6] = 1;
    *((_QWORD *)P + 2) = qword_140160D30;
  }
  if ( v18 == 2 && P[7] == 4 && !*((_QWORD *)P + 4) )
    _InterlockedCompareExchange(&dword_140161398, 1, 0);
  ReleaseMiniportListMutex();
  ExFreePoolWithTag(P, 0);
  CDisplayScenarioContextScope::~CDisplayScenarioContextScope(v21);
}
