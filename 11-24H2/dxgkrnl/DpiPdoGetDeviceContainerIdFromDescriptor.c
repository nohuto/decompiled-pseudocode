/*
 * XREFs of DpiPdoGetDeviceContainerIdFromDescriptor @ 0x1403F0AAC
 * Callers:
 *     DpiPdoAddPdo @ 0x1404293CC (DpiPdoAddPdo.c)
 * Callees:
 *     ?AcquireMonitorShared@MONITOR_MGR@@SA?AVCONST_MONITOR_REF_LOCK_ACCESSOR@@PEAXI_N@Z @ 0x140031240 (-AcquireMonitorShared@MONITOR_MGR@@SA-AVCONST_MONITOR_REF_LOCK_ACCESSOR@@PEAXI_N@Z.c)
 *     ??1CONST_MONITOR_REF_LOCK_ACCESSOR@@QEAA@XZ @ 0x140034BE4 (--1CONST_MONITOR_REF_LOCK_ACCESSOR@@QEAA@XZ.c)
 *     ?IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z @ 0x14004BC00 (-IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     ?MonitorGetContainerIDFromDescriptor@@YAJPEAXIPEAU_GUID@@@Z @ 0x14018A5D8 (-MonitorGetContainerIDFromDescriptor@@YAJPEAXIPEAU_GUID@@@Z.c)
 *     DpiDxgkDdiGetChildContainerId @ 0x140254698 (DpiDxgkDdiGetChildContainerId.c)
 *     ?_GetMonitorEldInformation@DXGMONITOR@@QEBAJPEAU_MONITOR_PACKED_ELD_INFORMATION@@@Z @ 0x1402760C4 (-_GetMonitorEldInformation@DXGMONITOR@@QEBAJPEAU_MONITOR_PACKED_ELD_INFORMATION@@@Z.c)
 *     DxgkAcquireAdapterDdiSync @ 0x14031E9B8 (DxgkAcquireAdapterDdiSync.c)
 *     DxgkReleaseAdapterDdiSync @ 0x14031EAA8 (DxgkReleaseAdapterDdiSync.c)
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
  int MonitorEldInformation; // ebx
  GUID v15; // rax
  __int64 v16; // rcx
  int v17; // eax
  __int64 v18; // rax
  GUID *p_Guid; // rcx
  NTSTATUS v20; // eax
  _QWORD *v22; // [rsp+30h] [rbp-39h]
  DXGMONITOR *v24[3]; // [rsp+40h] [rbp-29h] BYREF
  GUID Guid; // [rsp+58h] [rbp-11h] BYREF
  __int64 v26; // [rsp+68h] [rbp-1h] BYREF
  int v27; // [rsp+70h] [rbp+7h]
  GUID v28; // [rsp+78h] [rbp+Fh] BYREF
  __int128 v29; // [rsp+88h] [rbp+1Fh]

  Guid = 0LL;
  v26 = 0LL;
  v1 = 0;
  v2 = *(_QWORD *)(a1 + 64);
  LODWORD(ChildContainerId) = -1073741637;
  v27 = 0;
  v28 = 0LL;
  v29 = 0LL;
  v4 = v2 + 936;
  v5 = *(_QWORD **)(*(_QWORD *)(v2 + 32) + 64LL);
  v22 = v5;
  v6 = v5[5];
  if ( *(_DWORD *)(v2 + 496) == 1 )
  {
    if ( IsInternalVideoOutput(*(enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *)(*(_QWORD *)v4 + 4LL)) )
      return (unsigned int)ChildContainerId;
    v11 = *(unsigned int *)(v2 + 504);
    v12 = v22[504];
    v13 = WdLogNewEntry5_WdTrace(v8, v7, v9, v10);
    *(_QWORD *)(v13 + 24) = v11;
    *(_QWORD *)(v13 + 32) = v12;
    WdLogGlobalForLineNumber = 4291;
    if ( !v12 || (_DWORD)v11 == -1 )
    {
      LODWORD(ChildContainerId) = -1073741811;
      return (unsigned int)ChildContainerId;
    }
    MONITOR_MGR::AcquireMonitorShared(v24, v12, v11, 1u);
    if ( !v24[0] )
    {
      LODWORD(ChildContainerId) = -1073741275;
      WdLogSingleEntry1(2LL, -1073741275LL);
      WdLogGlobalForLineNumber = 4303;
      CONST_MONITOR_REF_LOCK_ACCESSOR::~CONST_MONITOR_REF_LOCK_ACCESSOR((CONST_MONITOR_REF_LOCK_ACCESSOR *)v24);
      return (unsigned int)ChildContainerId;
    }
    MonitorEldInformation = DXGMONITOR::_GetMonitorEldInformation(
                              v24[0],
                              (struct _MONITOR_PACKED_ELD_INFORMATION *)&v26);
    CONST_MONITOR_REF_LOCK_ACCESSOR::~CONST_MONITOR_REF_LOCK_ACCESSOR((CONST_MONITOR_REF_LOCK_ACCESSOR *)v24);
    LODWORD(ChildContainerId) = MonitorEldInformation;
    if ( MonitorEldInformation < 0 )
      goto LABEL_26;
    v5 = v22;
    LODWORD(ChildContainerId) = MonitorGetContainerIDFromDescriptor(v22[504], *(_DWORD *)(v2 + 504), &Guid);
    if ( (int)ChildContainerId < 0 )
    {
      v17 = RtlGenerateClass5Guid(&GUID_DISPLAY_CONTAINER_ID_NAMESPACE, &v26, 12LL, &Guid);
      LODWORD(ChildContainerId) = v17;
      if ( v17 < 0 )
      {
        WdLogSingleEntry2(2LL, *(_QWORD *)(v6 + 768), v17);
        WdLogGlobalForLineNumber = 3473;
        return (unsigned int)ChildContainerId;
      }
    }
    else
    {
      v1 = 1;
    }
    *(_QWORD *)&v29 = v26;
    DWORD2(v29) = v27;
    v28 = Guid;
  }
  if ( *(_DWORD *)(v6 + 28) < 0x3005u || !*(_QWORD *)(v6 + 768) )
    goto LABEL_16;
  KeWaitForSingleObject(*(PVOID *)(*(_QWORD *)v4 + 72LL), Executive, 0, 0, 0LL);
  DxgkAcquireAdapterDdiSync(v5[504], 1);
  ChildContainerId = (int)DpiDxgkDdiGetChildContainerId(
                            v6,
                            v5[6],
                            *(unsigned int *)(*(_QWORD *)v4 + 24LL),
                            (__int64)&v28);
  DxgkReleaseAdapterDdiSync((DXGADAPTER *)v5[504]);
  KeReleaseMutex(*(PRKMUTEX *)(*(_QWORD *)v4 + 72LL), 0);
  if ( (_DWORD)ChildContainerId == -1071841279 )
  {
    if ( *(_DWORD *)(v2 + 496) == 1 )
    {
      WdLogSingleEntry1(4LL, a1);
      WdLogGlobalForLineNumber = 3525;
      LODWORD(ChildContainerId) = 0;
      v28 = Guid;
      goto LABEL_16;
    }
LABEL_25:
    WdLogSingleEntry2(2LL, *(_QWORD *)(v6 + 768), ChildContainerId);
    WdLogGlobalForLineNumber = 3536;
    goto LABEL_26;
  }
  if ( (int)ChildContainerId < 0 )
    goto LABEL_25;
LABEL_16:
  if ( v1 )
  {
    v15 = v28;
    v16 = *(_QWORD *)&v28.Data1 - *(_QWORD *)&Guid.Data1;
    if ( *(_QWORD *)&v28.Data1 == *(_QWORD *)&Guid.Data1 )
      v16 = *(_QWORD *)v28.Data4 - *(_QWORD *)Guid.Data4;
    if ( v16 )
    {
      WdLogSingleEntry2(2LL, *(_QWORD *)(v6 + 768), (int)ChildContainerId);
      WdLogGlobalForLineNumber = 3551;
      WdLogSingleEntry4(2LL, *(_QWORD *)&Guid.Data1, *(_QWORD *)Guid.Data4, *(_QWORD *)&v28.Data1, *(_QWORD *)v28.Data4);
      WdLogGlobalForLineNumber = 3557;
      *(_QWORD *)&v15.Data1 = *(_QWORD *)&Guid.Data1;
      *(_QWORD *)v15.Data4 = _mm_srli_si128((__m128i)Guid, 8).m128i_u64[0];
      v28 = Guid;
    }
    goto LABEL_27;
  }
LABEL_26:
  v15 = v28;
LABEL_27:
  if ( (int)ChildContainerId >= 0 || v1 )
  {
    v18 = *(_QWORD *)&v15.Data1 - *(_QWORD *)&GUID_SPM_DEFAULT.Data1;
    if ( !v18 )
      v18 = *(_QWORD *)v15.Data4 - *(_QWORD *)GUID_SPM_DEFAULT.Data4;
    if ( v18 )
    {
      p_Guid = &v28;
      if ( v1 )
        p_Guid = &Guid;
      v20 = RtlStringFromGUID(p_Guid, (PUNICODE_STRING)(v2 + 960));
      LODWORD(ChildContainerId) = v20;
      if ( v20 < 0 )
      {
        WdLogSingleEntry2(2LL, *(_QWORD *)(v6 + 768), v20);
        WdLogGlobalForLineNumber = 3588;
      }
    }
    else
    {
      LODWORD(ChildContainerId) = -1073741823;
      WdLogSingleEntry2(2LL, *(_QWORD *)(v6 + 768), -1073741823LL);
      WdLogGlobalForLineNumber = 3576;
    }
  }
  return (unsigned int)ChildContainerId;
}
