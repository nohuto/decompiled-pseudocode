/*
 * XREFs of DpiMdmProcessStartAdapter @ 0x1400893FC
 * Callers:
 *     DpiFdoStartAdapter @ 0x140245688 (DpiFdoStartAdapter.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ?RtlStringCbCopyW@@YAJPEAG_KPEBG@Z @ 0x14002F1C4 (-RtlStringCbCopyW@@YAJPEAG_KPEBG@Z.c)
 *     Feature_DisplayMux_PostGA_BugBundle_2__private_IsEnabledDeviceUsageNoInline @ 0x14006DF3C (Feature_DisplayMux_PostGA_BugBundle_2__private_IsEnabledDeviceUsageNoInline.c)
 *     _DXGKCALLONEXIT__lambda_8812528d28e0c35a9234a005b94c2010____::_2_::DXGKCALLONEXIT::_DXGKCALLONEXIT @ 0x1400827C4 (_DXGKCALLONEXIT__lambda_8812528d28e0c35a9234a005b94c2010____--_2_--DXGKCALLONEXIT--_DXGKCALLONEX.c)
 *     ?DisplayMuxPresent@DISPLAY_MUX_MGR@@QEAA_NXZ @ 0x140084278 (-DisplayMuxPresent@DISPLAY_MUX_MGR@@QEAA_NXZ.c)
 *     ?DpiDoesMdmChildMeetRequirements@@YA_NPEAU_FDO_CONTEXT@@PEAEW4CHECK_CHILD_REQUIREMENTS_TYPE@@@Z @ 0x1400843A8 (-DpiDoesMdmChildMeetRequirements@@YA_NPEAU_FDO_CONTEXT@@PEAEW4CHECK_CHILD_REQUIREMENTS_TYPE@@@Z.c)
 *     ?IsTargetPartOfMux@DISPLAY_MUX_MGR@@QEAAJU_LUID@@IPEAE1@Z @ 0x140085410 (-IsTargetPartOfMux@DISPLAY_MUX_MGR@@QEAAJU_LUID@@IPEAE1@Z.c)
 *     ?ReportMuxGpuChild@DISPLAY_MUX_MGR@@QEAAJPEBU_DISPLAYCONFIG_DISPLAYMUX_ADAPTER_SUPPORT@@W4MUX_GPU_TYPE@@@Z @ 0x140087724 (-ReportMuxGpuChild@DISPLAY_MUX_MGR@@QEAAJPEBU_DISPLAYCONFIG_DISPLAYMUX_ADAPTER_SUPPORT@@W4MUX_GP.c)
 *     ?UseNonFullSupportComponents@DISPLAY_MUX_MGR@@QEAA_NXZ @ 0x14008895C (-UseNonFullSupportComponents@DISPLAY_MUX_MGR@@QEAA_NXZ.c)
 *     DpiDxgkDdiDisplayMuxGetRuntimeStatus @ 0x14008C33C (DpiDxgkDdiDisplayMuxGetRuntimeStatus.c)
 *     DpiDxgkDdiDisplayMuxUpdateState @ 0x14008CA84 (DpiDxgkDdiDisplayMuxUpdateState.c)
 *     DxgkGetDriverVersionNoLock @ 0x14018C9F0 (DxgkGetDriverVersionNoLock.c)
 *     DpiAcpiPrepareDisplayMuxSupport @ 0x1402520FC (DpiAcpiPrepareDisplayMuxSupport.c)
 */

void __fastcall DpiMdmProcessStartAdapter(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // r9
  char *v4; // r8
  __int64 v5; // r9
  int RuntimeStatus; // eax
  int v7; // ecx
  __int64 v8; // r9
  _QWORD *v9; // rax
  char v10; // al
  int v11; // eax
  __int64 v12; // rax
  bool v13; // zf
  int v14; // eax
  unsigned int v15; // r8d
  struct _LUID v16; // rdx
  __int64 v17; // r8
  __int64 *v18; // [rsp+50h] [rbp-10h] BYREF
  char v19; // [rsp+58h] [rbp-8h]
  unsigned __int8 v20; // [rsp+80h] [rbp+20h] BYREF
  int v21; // [rsp+88h] [rbp+28h] BYREF
  __int64 v22; // [rsp+90h] [rbp+30h] BYREF

  if ( !a1 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3791;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"ARGUMENT_PRESENT(FunctionalDeviceObject)",
      3791LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v2 = *(_QWORD *)(a1 + 64);
  v22 = v2;
  if ( *(_DWORD *)(v2 + 6024) != 1 && (int)DpiAcpiPrepareDisplayMuxSupport((struct _FDO_CONTEXT *)v2) >= 0 )
  {
    *(_QWORD *)(v22 + 6036) = *(_QWORD *)(v22 + 2696);
    *(_DWORD *)(v22 + 6048) = *(_DWORD *)(v22 + 1128);
    *(_DWORD *)(v22 + 6044) = *(_DWORD *)(v22 + 1124);
    v3 = v22;
    v4 = *(char **)(v22 + 4968);
    if ( v4 )
    {
      RtlStringCbCopyW((char *)(v22 + 6052), 0x40uLL, v4);
      v3 = v22;
    }
    if ( (int)DxgkGetDriverVersionNoLock(*(_QWORD *)(v3 + 4032)) < 3000 && !*(_BYTE *)(v5 + 2716) )
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 3821;
      *(_DWORD *)(v22 + 6032) = 10;
      return;
    }
    v21 = 0;
    RuntimeStatus = DpiDxgkDdiDisplayMuxGetRuntimeStatus(v5, &v21);
    if ( RuntimeStatus < 0 )
    {
      WdLogSingleEntry1(2LL, RuntimeStatus);
      WdLogGlobalForLineNumber = 3832;
      *(_DWORD *)(v22 + 6032) = 2;
      return;
    }
    v7 = v21;
    *(_DWORD *)(v22 + 6028) = v21;
    if ( ((v7 - 1) & 0xFFFFFFFD) != 0 )
    {
      WdLogSingleEntry0(4LL);
      WdLogGlobalForLineNumber = 3842;
      return;
    }
    if ( (int)DxgkGetDriverVersionNoLock(*(_QWORD *)(v22 + 4032)) < 2400 )
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 3849;
LABEL_56:
      *(_DWORD *)(v22 + 6032) = 3;
      return;
    }
    v9 = *(_QWORD **)(v8 + 40);
    if ( !v9[136] || !v9[141] || !v9[142] || !v9[29] || !v9[122] )
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 3860;
      goto LABEL_56;
    }
    v10 = *(_BYTE *)(v8 + 4041);
    if ( (v10 & 8) == 0 )
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 3866;
      goto LABEL_56;
    }
    if ( (v10 & 1) == 0 && (*(_BYTE *)(v8 + 4040) & 0x40) == 0 )
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 3874;
      *(_DWORD *)(v22 + 6032) = 4;
      return;
    }
    v11 = *(_DWORD *)(v8 + 6380);
    if ( !v11 )
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 3882;
      *(_DWORD *)(v22 + 6032) = 5;
      return;
    }
    if ( v11 != 1 )
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 3888;
      *(_DWORD *)(v22 + 6032) = 6;
      return;
    }
    if ( *(_DWORD *)(v8 + 6116) == 5 && byte_140161432 )
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 3897;
      *(_DWORD *)(v22 + 6116) = 0;
      v8 = v22;
    }
    if ( *(_DWORD *)(v8 + 6116) )
    {
      WdLogSingleEntry1(2LL, *(int *)(v8 + 6116));
      WdLogGlobalForLineNumber = 3904;
LABEL_35:
      v12 = v22;
LABEL_36:
      *(_DWORD *)(v12 + 6032) = 7;
      return;
    }
    v13 = !DpiDoesMdmChildMeetRequirements(v8, 0LL, 0);
    v12 = v22;
    if ( v13 )
      goto LABEL_36;
    if ( *(_DWORD *)(v22 + 6024) != 4 && !DISPLAY_MUX_MGR::UseNonFullSupportComponents(qword_140161380) )
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 3920;
      *(_DWORD *)(v22 + 6032) = 11;
      return;
    }
    if ( (unsigned int)Feature_DisplayMux_PostGA_BugBundle_2__private_IsEnabledDeviceUsageNoInline() )
      *(_DWORD *)(v22 + 6032) = 1;
    v14 = DISPLAY_MUX_MGR::ReportMuxGpuChild(
            (__int64)qword_140161380,
            v22 + 6024,
            (unsigned int)((*(_BYTE *)(v22 + 4041) & 1) == 0) + 1);
    if ( v14 < 0 )
    {
      WdLogSingleEntry1(2LL, v14);
      WdLogGlobalForLineNumber = 3939;
      *(_DWORD *)(v22 + 6116) = 4;
      goto LABEL_35;
    }
    v18 = &v22;
    v19 = 1;
    v15 = *(_DWORD *)(v22 + 6376);
    v16 = *(struct _LUID *)(v22 + 6036);
    v20 = 0;
    if ( (int)DISPLAY_MUX_MGR::IsTargetPartOfMux(qword_140161380, v16, v15, &v20, 0LL) >= 0 )
    {
      if ( DpiDoesMdmChildMeetRequirements(v22, &v20, 1) )
      {
        if ( !(unsigned int)Feature_DisplayMux_PostGA_BugBundle_2__private_IsEnabledDeviceUsageNoInline() )
          *(_DWORD *)(v22 + 6032) = 1;
        if ( DISPLAY_MUX_MGR::DisplayMuxPresent(qword_140161380) )
        {
          LOBYTE(v17) = v20;
          DpiDxgkDdiDisplayMuxUpdateState(v22, *(unsigned int *)(v22 + 6376), v17);
          WdLogSingleEntry1(4LL, v22);
          WdLogGlobalForLineNumber = 3991;
        }
        else
        {
          WdLogSingleEntry0(2LL);
          WdLogGlobalForLineNumber = 3983;
          *(_DWORD *)(v22 + 6116) = 3;
          *(_DWORD *)(v22 + 6032) = 8;
        }
      }
      else
      {
        *(_DWORD *)(v22 + 6032) = 7;
      }
    }
    else
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 3962;
      *(_DWORD *)(v22 + 6032) = 9;
    }
    DXGKCALLONEXIT__lambda_8812528d28e0c35a9234a005b94c2010____::_2_::DXGKCALLONEXIT::_DXGKCALLONEXIT(&v18);
  }
}
