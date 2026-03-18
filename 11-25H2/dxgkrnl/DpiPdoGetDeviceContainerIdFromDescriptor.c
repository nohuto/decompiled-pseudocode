/*
 * XREFs of DpiPdoGetDeviceContainerIdFromDescriptor @ 0x1403F6A3C
 * Callers:
 *     DpiPdoAddPdo @ 0x1403C8AA0 (DpiPdoAddPdo.c)
 * Callees:
 *     ?AcquireMonitorShared@MONITOR_MGR@@SA?AVCONST_MONITOR_REF_LOCK_ACCESSOR@@PEAXI_N@Z @ 0x140030B40 (-AcquireMonitorShared@MONITOR_MGR@@SA-AVCONST_MONITOR_REF_LOCK_ACCESSOR@@PEAXI_N@Z.c)
 *     ??1CONST_MONITOR_REF_LOCK_ACCESSOR@@QEAA@XZ @ 0x140034CB0 (--1CONST_MONITOR_REF_LOCK_ACCESSOR@@QEAA@XZ.c)
 *     ?IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z @ 0x14004C14C (-IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     ?MonitorGetContainerIDFromDescriptor@@YAJPEAXIPEAU_GUID@@@Z @ 0x1401882C8 (-MonitorGetContainerIDFromDescriptor@@YAJPEAXIPEAU_GUID@@@Z.c)
 *     DpiDxgkDdiGetChildContainerId @ 0x14024D868 (DpiDxgkDdiGetChildContainerId.c)
 *     ?_GetMonitorEldInformation@DXGMONITOR@@QEBAJPEAU_MONITOR_PACKED_ELD_INFORMATION@@@Z @ 0x14026F164 (-_GetMonitorEldInformation@DXGMONITOR@@QEBAJPEAU_MONITOR_PACKED_ELD_INFORMATION@@@Z.c)
 *     DxgkAcquireAdapterDdiSync @ 0x1403762D8 (DxgkAcquireAdapterDdiSync.c)
 *     DxgkReleaseAdapterDdiSync @ 0x1403763C8 (DxgkReleaseAdapterDdiSync.c)
 */

__int64 __fastcall DpiPdoGetDeviceContainerIdFromDescriptor(__int64 a1)
{
  char v1; // r12
  __int64 v2; // r15
  __int64 ChildContainerId; // rdi
  __int64 v4; // r13
  _QWORD *v5; // rbx
  __int64 v6; // r14
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rbx
  __int64 v12; // rdi
  __int64 v13; // rax
  __int64 v14; // r8
  __int64 v15; // r9
  int MonitorEldInformation; // ebx
  GUID v17; // rax
  __int64 v18; // rcx
  int v19; // eax
  __int64 v20; // rax
  GUID *p_Guid; // rcx
  NTSTATUS v22; // eax
  _QWORD *v24; // [rsp+30h] [rbp-39h]
  DXGMONITOR *v26[3]; // [rsp+40h] [rbp-29h] BYREF
  GUID Guid; // [rsp+58h] [rbp-11h] BYREF
  __int64 v28; // [rsp+68h] [rbp-1h] BYREF
  int v29; // [rsp+70h] [rbp+7h]
  GUID v30; // [rsp+78h] [rbp+Fh] BYREF
  __int128 v31; // [rsp+88h] [rbp+1Fh]

  Guid = 0LL;
  v28 = 0LL;
  v1 = 0;
  v2 = *(_QWORD *)(a1 + 64);
  LODWORD(ChildContainerId) = -1073741637;
  v29 = 0;
  v30 = 0LL;
  v31 = 0LL;
  v4 = v2 + 936;
  v5 = *(_QWORD **)(*(_QWORD *)(v2 + 32) + 64LL);
  v24 = v5;
  v6 = v5[5];
  if ( *(_DWORD *)(v2 + 496) == 1 )
  {
    if ( IsInternalVideoOutput(*(enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *)(*(_QWORD *)v4 + 4LL)) )
      return (unsigned int)ChildContainerId;
    v11 = *(unsigned int *)(v2 + 504);
    v12 = v24[504];
    v13 = WdLogNewEntry5_WdTrace(v8, v7, v9, v10);
    *(_QWORD *)(v13 + 24) = v11;
    *(_QWORD *)(v13 + 32) = v12;
    WdLogGlobalForLineNumber = 4289;
    if ( !v12 || (_DWORD)v11 == -1 )
    {
      LODWORD(ChildContainerId) = -1073741811;
      return (unsigned int)ChildContainerId;
    }
    MONITOR_MGR::AcquireMonitorShared(v26, v12, v11, 1u);
    if ( !v26[0] )
    {
      LODWORD(ChildContainerId) = -1073741275;
      WdLogSingleEntry1(2LL, -1073741275LL);
      WdLogGlobalForLineNumber = 4301;
      CONST_MONITOR_REF_LOCK_ACCESSOR::~CONST_MONITOR_REF_LOCK_ACCESSOR((CONST_MONITOR_REF_LOCK_ACCESSOR *)v26);
      return (unsigned int)ChildContainerId;
    }
    MonitorEldInformation = DXGMONITOR::_GetMonitorEldInformation(
                              v26[0],
                              (struct _MONITOR_PACKED_ELD_INFORMATION *)&v28,
                              v14,
                              v15);
    CONST_MONITOR_REF_LOCK_ACCESSOR::~CONST_MONITOR_REF_LOCK_ACCESSOR((CONST_MONITOR_REF_LOCK_ACCESSOR *)v26);
    LODWORD(ChildContainerId) = MonitorEldInformation;
    if ( MonitorEldInformation < 0 )
      goto LABEL_26;
    v5 = v24;
    LODWORD(ChildContainerId) = MonitorGetContainerIDFromDescriptor(v24[504], *(_DWORD *)(v2 + 504), &Guid);
    if ( (int)ChildContainerId < 0 )
    {
      v19 = RtlGenerateClass5Guid(&GUID_DISPLAY_CONTAINER_ID_NAMESPACE, &v28, 12LL, &Guid);
      LODWORD(ChildContainerId) = v19;
      if ( v19 < 0 )
      {
        WdLogSingleEntry2(2LL, *(_QWORD *)(v6 + 768), v19);
        WdLogGlobalForLineNumber = 3307;
        return (unsigned int)ChildContainerId;
      }
    }
    else
    {
      v1 = 1;
    }
    *(_QWORD *)&v31 = v28;
    DWORD2(v31) = v29;
    v30 = Guid;
  }
  if ( *(_DWORD *)(v6 + 28) < 0x3005u || !*(_QWORD *)(v6 + 768) )
    goto LABEL_16;
  KeWaitForSingleObject(*(PVOID *)(*(_QWORD *)v4 + 72LL), Executive, 0, 0, 0LL);
  DxgkAcquireAdapterDdiSync(v5[504], 1);
  ChildContainerId = (int)DpiDxgkDdiGetChildContainerId(
                            v6,
                            v5[6],
                            *(unsigned int *)(*(_QWORD *)v4 + 24LL),
                            (__int64)&v30);
  DxgkReleaseAdapterDdiSync((DXGADAPTER *)v5[504]);
  KeReleaseMutex(*(PRKMUTEX *)(*(_QWORD *)v4 + 72LL), 0);
  if ( (_DWORD)ChildContainerId == -1071841279 )
  {
    if ( *(_DWORD *)(v2 + 496) == 1 )
    {
      WdLogSingleEntry1(4LL, a1);
      WdLogGlobalForLineNumber = 3359;
      LODWORD(ChildContainerId) = 0;
      v30 = Guid;
      goto LABEL_16;
    }
LABEL_25:
    WdLogSingleEntry2(2LL, *(_QWORD *)(v6 + 768), ChildContainerId);
    WdLogGlobalForLineNumber = 3370;
    goto LABEL_26;
  }
  if ( (int)ChildContainerId < 0 )
    goto LABEL_25;
LABEL_16:
  if ( v1 )
  {
    v17 = v30;
    v18 = *(_QWORD *)&v30.Data1 - *(_QWORD *)&Guid.Data1;
    if ( *(_QWORD *)&v30.Data1 == *(_QWORD *)&Guid.Data1 )
      v18 = *(_QWORD *)v30.Data4 - *(_QWORD *)Guid.Data4;
    if ( v18 )
    {
      WdLogSingleEntry2(2LL, *(_QWORD *)(v6 + 768), (int)ChildContainerId);
      WdLogGlobalForLineNumber = 3385;
      WdLogSingleEntry4(2LL, *(_QWORD *)&Guid.Data1, *(_QWORD *)Guid.Data4, *(_QWORD *)&v30.Data1, *(_QWORD *)v30.Data4);
      WdLogGlobalForLineNumber = 3391;
      *(_QWORD *)&v17.Data1 = *(_QWORD *)&Guid.Data1;
      *(_QWORD *)v17.Data4 = _mm_srli_si128((__m128i)Guid, 8).m128i_u64[0];
      v30 = Guid;
    }
    goto LABEL_27;
  }
LABEL_26:
  v17 = v30;
LABEL_27:
  if ( (int)ChildContainerId >= 0 || v1 )
  {
    v20 = *(_QWORD *)&v17.Data1 - *(_QWORD *)&GUID_SPM_DEFAULT.Data1;
    if ( !v20 )
      v20 = *(_QWORD *)v17.Data4 - *(_QWORD *)GUID_SPM_DEFAULT.Data4;
    if ( v20 )
    {
      p_Guid = &v30;
      if ( v1 )
        p_Guid = &Guid;
      v22 = RtlStringFromGUID(p_Guid, (PUNICODE_STRING)(v2 + 960));
      LODWORD(ChildContainerId) = v22;
      if ( v22 < 0 )
      {
        WdLogSingleEntry2(2LL, *(_QWORD *)(v6 + 768), v22);
        WdLogGlobalForLineNumber = 3422;
      }
    }
    else
    {
      LODWORD(ChildContainerId) = -1073741823;
      WdLogSingleEntry2(2LL, *(_QWORD *)(v6 + 768), -1073741823LL);
      WdLogGlobalForLineNumber = 3410;
    }
  }
  return (unsigned int)ChildContainerId;
}
