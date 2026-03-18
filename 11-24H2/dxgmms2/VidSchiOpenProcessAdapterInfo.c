/*
 * XREFs of VidSchiOpenProcessAdapterInfo @ 0x1400D42D8
 * Callers:
 *     VidSchiCreateDeviceInternal @ 0x1400D3D40 (VidSchiCreateDeviceInternal.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     ??3@YAXPEAX@Z @ 0x14001D2D0 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140036BA0 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     RtlStringCbPrintfW @ 0x14003DF74 (RtlStringCbPrintfW.c)
 *     ?VidSchiSetupKnownProcessBoost@@YAJPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PROCESS@@PEAUVIDSCH_PROCESS_ADAPTER_INFO@@@Z @ 0x14003FEC8 (-VidSchiSetupKnownProcessBoost@@YAJPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PROCESS@@PEAUVIDSCH_PROCESS_A.c)
 *     ??_GVIDSCH_PROCESS_ADAPTER_INFO@@QEAAPEAXI@Z @ 0x140041428 (--_GVIDSCH_PROCESS_ADAPTER_INFO@@QEAAPEAXI@Z.c)
 *     ?AllocateElements@?$NonPagedPoolZeroedArray@PEAU_VIDSCH_NODE_STATISTICS@@$07$0DCGBGJFG@@@QEAAPEAPEAU_VIDSCH_NODE_STATISTICS@@I@Z @ 0x140041600 (-AllocateElements@-$NonPagedPoolZeroedArray@PEAU_VIDSCH_NODE_STATISTICS@@$07$0DCGBGJFG@@@QEAAPEA.c)
 *     ??0VIDSCH_PROCESS_ADAPTER_INFO@@QEAA@XZ @ 0x14004175C (--0VIDSCH_PROCESS_ADAPTER_INFO@@QEAA@XZ.c)
 */

__int64 __fastcall VidSchiOpenProcessAdapterInfo(struct _VIDSCH_PROCESS *a1, struct _VIDSCH_GLOBAL *a2)
{
  __int64 v2; // rbx
  char *v3; // r13
  _DWORD *v6; // rcx
  VIDSCH_PROCESS_ADAPTER_INFO *Pool2; // rax
  _QWORD *v9; // rcx
  NTSTATUS v10; // r15d
  unsigned int i; // esi
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 *v14; // rcx
  __int64 v15; // r12
  __int64 v16; // rcx
  _QWORD *v17; // rax
  __int64 v18; // r9
  unsigned int v19; // r11d
  __int64 v20; // rax
  __int64 v21; // r8
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rcx
  wchar_t *v25; // r10
  __int64 v26; // rax
  __int64 v27; // rcx
  unsigned int v28; // r8d
  const void **v29; // rcx
  const void **v30; // rdx
  const void *v31; // rdx
  __int64 v32; // rcx
  int v33; // eax
  unsigned int j; // esi
  unsigned int k; // esi
  VIDSCH_PROCESS_ADAPTER_INFO *v36; // rcx
  __int64 v37; // rcx
  void *v38; // rcx
  unsigned int m; // esi
  __int64 v40; // rcx
  unsigned int v41; // edx
  PVOID *v42; // rcx
  PVOID *v43; // rax
  __int64 v44; // rax
  _QWORD *v45; // rcx
  PPCW_DATA Data; // [rsp+20h] [rbp-88h]
  __int64 v47; // [rsp+28h] [rbp-80h]
  __int64 v48; // [rsp+30h] [rbp-78h]
  __int64 v49; // [rsp+38h] [rbp-70h]
  struct _PCW_DATA v50; // [rsp+50h] [rbp-58h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+60h] [rbp-48h] BYREF
  wchar_t *pszDest; // [rsp+B0h] [rbp+8h]
  __int64 v53; // [rsp+B8h] [rbp+10h]

  v2 = *((unsigned int *)a2 + 1);
  v3 = (char *)a1 + 2664;
  ExAcquirePushLockExclusiveEx((char *)a1 + 2664, 0LL);
  v6 = *(_DWORD **)(*((_QWORD *)a1 + 4) + 8 * v2);
  if ( v6 )
  {
    ++*v6;
LABEL_3:
    ExReleasePushLockExclusiveEx(v3, 0LL);
    return 0LL;
  }
  Pool2 = (VIDSCH_PROCESS_ADAPTER_INFO *)ExAllocatePool2(64LL, 232LL, 845244758LL);
  if ( !Pool2 )
  {
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 29059;
    ExReleasePushLockExclusiveEx(v3, 0LL);
    return 3221225495LL;
  }
  *(_QWORD *)(*((_QWORD *)a1 + 4) + 8 * v2) = VIDSCH_PROCESS_ADAPTER_INFO::VIDSCH_PROCESS_ADAPTER_INFO(Pool2);
  **(_DWORD **)(*((_QWORD *)a1 + 4) + 8 * v2) = 1;
  v9 = (_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 4) + 8 * v2) + 216LL);
  v9[1] = v9;
  *v9 = v9;
  v10 = VidSchiSetupKnownProcessBoost(a2, a1, *(struct VIDSCH_PROCESS_ADAPTER_INFO **)(*((_QWORD *)a1 + 4) + 8 * v2));
  if ( v10 >= 0 )
  {
    if ( NonPagedPoolZeroedArray<_VIDSCH_NODE_STATISTICS *,8,845244758>::AllocateElements(
           (__int64 *)(*(_QWORD *)(*((_QWORD *)a1 + 4) + 8 * v2) + 8LL),
           *((_DWORD *)a2 + 21)) )
    {
      pszDest = (wchar_t *)operator new[](520LL, 0x4B677844u, 256LL);
      if ( pszDest )
      {
        for ( i = 0; ; ++i )
        {
          if ( i >= *((_DWORD *)a2 + 20) )
            goto LABEL_33;
          v12 = ExAllocatePool2(64LL, 224LL, 845244758LL);
          v13 = *(_QWORD *)(*((_QWORD *)a1 + 4) + 8 * v2);
          v14 = *(__int64 **)(v13 + 8);
          if ( i < *(_DWORD *)(v13 + 80) )
            v14 += i;
          *v14 = v12;
          v15 = 8LL * i;
          v16 = *(_QWORD *)(*((_QWORD *)a1 + 4) + 8 * v2);
          v17 = *(_QWORD **)(v16 + 8);
          if ( i < *(_DWORD *)(v16 + 80) )
            v17 = (_QWORD *)((char *)v17 + v15);
          if ( !*v17 )
            break;
          v18 = *((_QWORD *)a2 + 86);
          v19 = *((_DWORD *)a2 + 190);
          v53 = *((_QWORD *)a2 + 2);
          v20 = v18 + v15;
          if ( i >= v19 )
            v20 = *((_QWORD *)a2 + 86);
          v21 = *(_QWORD *)(344LL * *(unsigned __int16 *)(*(_QWORD *)v20 + 6LL)
                          + *(_QWORD *)(*((_QWORD *)a2 + 2) + 2992LL)
                          + 32);
          v22 = v18 + v15;
          if ( i >= v19 )
            v22 = *((_QWORD *)a2 + 86);
          v23 = 74LL * *(unsigned __int16 *)(*(_QWORD *)v22 + 8LL);
          DestinationString = 0LL;
          v24 = *(int *)(v23 + v21);
          if ( (_DWORD)v24 )
            v25 = off_140058030[v24];
          else
            v25 = (wchar_t *)(v23 + v21 + 4);
          v26 = v18;
          if ( i < v19 )
          {
            v26 = v18 + v15;
            v18 += v15;
          }
          LODWORD(v49) = *(unsigned __int16 *)(*(_QWORD *)v26 + 8LL);
          LODWORD(v48) = *(unsigned __int16 *)(*(_QWORD *)v18 + 6LL);
          LODWORD(v47) = *(_DWORD *)(v53 + 412);
          LODWORD(Data) = *(_DWORD *)(v53 + 416);
          v10 = RtlStringCbPrintfW(
                  pszDest,
                  0x208uLL,
                  L"pid_%Iu_luid_0x%08X_0x%08X_phys_%u_eng_%u_engtype_%s",
                  *((_QWORD *)a1 + 330),
                  Data,
                  v47,
                  v48,
                  v49,
                  v25);
          if ( v10 < 0 )
          {
            WdLogSingleEntry0(1LL);
            v33 = 29124;
            goto LABEL_32;
          }
          RtlInitUnicodeString(&DestinationString, pszDest);
          v27 = *(_QWORD *)(*((_QWORD *)a1 + 4) + 8 * v2);
          v28 = *(_DWORD *)(v27 + 80);
          v29 = *(const void ***)(v27 + 8);
          v30 = &v29[(unsigned __int64)v15 / 8];
          if ( i >= v28 )
            v30 = v29;
          v31 = *v30;
          if ( i < v28 )
            v29 = (const void **)((char *)v29 + v15);
          v50.Data = v31;
          v50.Size = 224;
          v10 = PcwCreateInstance(
                  (PPCW_INSTANCE *)*v29 + 27,
                  GpuPerformanceCounterSetEngine,
                  &DestinationString,
                  1u,
                  &v50);
          if ( v10 < 0 )
          {
            WdLogSingleEntry0(1LL);
            v33 = 29132;
LABEL_32:
            WdLogGlobalForLineNumber = v33;
            DxgkLogInternalTriageEvent(v32, 0x40000LL);
            goto LABEL_33;
          }
        }
        WdLogSingleEntry0(3LL);
        WdLogGlobalForLineNumber = 29102;
        v10 = -1073741801;
LABEL_33:
        operator delete(pszDest);
        if ( v10 >= 0 )
        {
          for ( j = 0; j < *((_DWORD *)a2 + 10); ++j )
          {
            *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 4) + 8 * v2) + 8LL * j + 88) = ExAllocatePool2(
                                                                                      64LL,
                                                                                      12LL,
                                                                                      845244758LL);
            if ( !*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 4) + 8 * v2) + 8LL * j + 88) )
            {
              WdLogSingleEntry0(3LL);
              WdLogGlobalForLineNumber = 29156;
              goto LABEL_40;
            }
          }
          goto LABEL_3;
        }
        goto LABEL_41;
      }
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 29089;
      DxgkLogInternalTriageEvent(v37, 0x40000LL);
    }
    else
    {
      WdLogSingleEntry0(3LL);
      WdLogGlobalForLineNumber = 29078;
    }
LABEL_40:
    v10 = -1073741801;
  }
LABEL_41:
  for ( k = 0; k < *((_DWORD *)a2 + 10); ++k )
  {
    v38 = *(void **)(*(_QWORD *)(*((_QWORD *)a1 + 4) + 8 * v2) + 8LL * k + 88);
    if ( v38 )
    {
      ExFreePoolWithTag(v38, 0);
      *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 4) + 8 * v2) + 8LL * k + 88) = 0LL;
    }
  }
  if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 4) + 8 * v2) + 8LL) )
  {
    for ( m = 0; m < *((_DWORD *)a2 + 20); ++m )
    {
      v40 = *(_QWORD *)(*((_QWORD *)a1 + 4) + 8 * v2);
      v41 = *(_DWORD *)(v40 + 80);
      v42 = *(PVOID **)(v40 + 8);
      v43 = &v42[m];
      if ( m >= v41 )
        v43 = v42;
      if ( *v43 )
      {
        if ( m < v41 )
          v42 += m;
        ExFreePoolWithTag(*v42, 0);
        v44 = *(_QWORD *)(*((_QWORD *)a1 + 4) + 8 * v2);
        v45 = (_QWORD *)(*(_QWORD *)(v44 + 8) + 8LL * m);
        if ( m >= *(_DWORD *)(v44 + 80) )
          v45 = *(_QWORD **)(v44 + 8);
        *v45 = 0LL;
      }
    }
  }
  v36 = *(VIDSCH_PROCESS_ADAPTER_INFO **)(*((_QWORD *)a1 + 4) + 8 * v2);
  if ( v36 )
  {
    VIDSCH_PROCESS_ADAPTER_INFO::`scalar deleting destructor'(v36);
    ExFreePoolWithTag(*(PVOID *)(*((_QWORD *)a1 + 4) + 8 * v2), 0);
    *(_QWORD *)(*((_QWORD *)a1 + 4) + 8 * v2) = 0LL;
  }
  ExReleasePushLockExclusiveEx(v3, 0LL);
  return (unsigned int)v10;
}
