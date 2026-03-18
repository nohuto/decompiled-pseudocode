/*
 * XREFs of DpiMdmProcessStartAdapter @ 0x140088D14
 * Callers:
 *     DpiFdoStartAdapter @ 0x14023E8A8 (DpiFdoStartAdapter.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?RtlStringCbCopyW@@YAJPEAG_KPEBG@Z @ 0x14002ED20 (-RtlStringCbCopyW@@YAJPEAG_KPEBG@Z.c)
 *     Feature_DisplayMux_PostGA_BugBundle_1__private_IsEnabledDeviceUsageNoInline @ 0x14006E0E8 (Feature_DisplayMux_PostGA_BugBundle_1__private_IsEnabledDeviceUsageNoInline.c)
 *     _DXGKCALLONEXIT__lambda_8812528d28e0c35a9234a005b94c2010____::_2_::DXGKCALLONEXIT::_DXGKCALLONEXIT @ 0x140082160 (_DXGKCALLONEXIT__lambda_8812528d28e0c35a9234a005b94c2010____--_2_--DXGKCALLONEXIT--_DXGKCALLONEX.c)
 *     ?DisplayMuxPresent@DISPLAY_MUX_MGR@@QEAA_NXZ @ 0x140083BEC (-DisplayMuxPresent@DISPLAY_MUX_MGR@@QEAA_NXZ.c)
 *     ?DpiDoesMdmChildMeetRequirements@@YA_NPEAU_FDO_CONTEXT@@PEAEW4CHECK_CHILD_REQUIREMENTS_TYPE@@@Z @ 0x140083D18 (-DpiDoesMdmChildMeetRequirements@@YA_NPEAU_FDO_CONTEXT@@PEAEW4CHECK_CHILD_REQUIREMENTS_TYPE@@@Z.c)
 *     ?IsTargetPartOfMux@DISPLAY_MUX_MGR@@QEAAJU_LUID@@IPEAE1@Z @ 0x140084D80 (-IsTargetPartOfMux@DISPLAY_MUX_MGR@@QEAAJU_LUID@@IPEAE1@Z.c)
 *     ?ReportMuxGpuChild@DISPLAY_MUX_MGR@@QEAAJPEBU_DISPLAYCONFIG_DISPLAYMUX_ADAPTER_SUPPORT@@W4MUX_GPU_TYPE@@@Z @ 0x140087068 (-ReportMuxGpuChild@DISPLAY_MUX_MGR@@QEAAJPEBU_DISPLAYCONFIG_DISPLAYMUX_ADAPTER_SUPPORT@@W4MUX_GP.c)
 *     ?UseNonFullSupportComponents@DISPLAY_MUX_MGR@@QEAA_NXZ @ 0x140088334 (-UseNonFullSupportComponents@DISPLAY_MUX_MGR@@QEAA_NXZ.c)
 *     DpiDxgkDdiDisplayMuxGetRuntimeStatus @ 0x14008B37C (DpiDxgkDdiDisplayMuxGetRuntimeStatus.c)
 *     DpiDxgkDdiDisplayMuxUpdateState @ 0x14008BAC4 (DpiDxgkDdiDisplayMuxUpdateState.c)
 *     DxgkGetDriverVersionNoLock @ 0x14018AA00 (DxgkGetDriverVersionNoLock.c)
 *     DpiAcpiPrepareDisplayMuxSupport @ 0x14024B2CC (DpiAcpiPrepareDisplayMuxSupport.c)
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
    WdLogGlobalForLineNumber = 3828;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"ARGUMENT_PRESENT(FunctionalDeviceObject)",
      3828LL,
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
      WdLogGlobalForLineNumber = 3858;
      *(_DWORD *)(v22 + 6032) = 10;
      return;
    }
    v21 = 0;
    RuntimeStatus = DpiDxgkDdiDisplayMuxGetRuntimeStatus(v5, &v21);
    if ( RuntimeStatus < 0 )
    {
      WdLogSingleEntry1(2LL, RuntimeStatus);
      WdLogGlobalForLineNumber = 3869;
      *(_DWORD *)(v22 + 6032) = 2;
      return;
    }
    v7 = v21;
    *(_DWORD *)(v22 + 6028) = v21;
    if ( ((v7 - 1) & 0xFFFFFFFD) != 0 )
    {
      WdLogSingleEntry0(4LL);
      WdLogGlobalForLineNumber = 3879;
      return;
    }
    if ( (int)DxgkGetDriverVersionNoLock(*(_QWORD *)(v22 + 4032)) < 2400 )
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 3886;
LABEL_56:
      *(_DWORD *)(v22 + 6032) = 3;
      return;
    }
    v9 = *(_QWORD **)(v8 + 40);
    if ( !v9[136] || !v9[141] || !v9[142] || !v9[29] || !v9[122] )
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 3897;
      goto LABEL_56;
    }
    v10 = *(_BYTE *)(v8 + 4041);
    if ( (v10 & 8) == 0 )
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 3903;
      goto LABEL_56;
    }
    if ( (v10 & 1) == 0 && (*(_BYTE *)(v8 + 4040) & 0x40) == 0 )
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 3911;
      *(_DWORD *)(v22 + 6032) = 4;
      return;
    }
    v11 = *(_DWORD *)(v8 + 6380);
    if ( !v11 )
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 3919;
      *(_DWORD *)(v22 + 6032) = 5;
      return;
    }
    if ( v11 != 1 )
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 3925;
      *(_DWORD *)(v22 + 6032) = 6;
      return;
    }
    if ( *(_DWORD *)(v8 + 6116) == 5 && byte_14015E432 )
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 3934;
      *(_DWORD *)(v22 + 6116) = 0;
      v8 = v22;
    }
    if ( *(_DWORD *)(v8 + 6116) )
    {
      WdLogSingleEntry1(2LL, *(int *)(v8 + 6116));
      WdLogGlobalForLineNumber = 3941;
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
    if ( *(_DWORD *)(v22 + 6024) != 4 && !DISPLAY_MUX_MGR::UseNonFullSupportComponents(qword_14015E3C0) )
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 3957;
      *(_DWORD *)(v22 + 6032) = 11;
      return;
    }
    if ( (unsigned int)Feature_DisplayMux_PostGA_BugBundle_1__private_IsEnabledDeviceUsageNoInline() )
      *(_DWORD *)(v22 + 6032) = 1;
    v14 = DISPLAY_MUX_MGR::ReportMuxGpuChild(
            (__int64)qword_14015E3C0,
            v22 + 6024,
            (unsigned int)((*(_BYTE *)(v22 + 4041) & 1) == 0) + 1);
    if ( v14 < 0 )
    {
      WdLogSingleEntry1(2LL, v14);
      WdLogGlobalForLineNumber = 3976;
      *(_DWORD *)(v22 + 6116) = 4;
      goto LABEL_35;
    }
    v18 = &v22;
    v19 = 1;
    v15 = *(_DWORD *)(v22 + 6376);
    v16 = *(struct _LUID *)(v22 + 6036);
    v20 = 0;
    if ( (int)DISPLAY_MUX_MGR::IsTargetPartOfMux(qword_14015E3C0, v16, v15, &v20, 0LL) >= 0 )
    {
      if ( DpiDoesMdmChildMeetRequirements(v22, &v20, 1) )
      {
        if ( !(unsigned int)Feature_DisplayMux_PostGA_BugBundle_1__private_IsEnabledDeviceUsageNoInline() )
          *(_DWORD *)(v22 + 6032) = 1;
        if ( DISPLAY_MUX_MGR::DisplayMuxPresent(qword_14015E3C0) )
        {
          LOBYTE(v17) = v20;
          DpiDxgkDdiDisplayMuxUpdateState(v22, *(unsigned int *)(v22 + 6376), v17);
          WdLogSingleEntry1(4LL, v22);
          WdLogGlobalForLineNumber = 4028;
        }
        else
        {
          WdLogSingleEntry0(2LL);
          WdLogGlobalForLineNumber = 4020;
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
      WdLogGlobalForLineNumber = 3999;
      *(_DWORD *)(v22 + 6032) = 9;
    }
    DXGKCALLONEXIT__lambda_8812528d28e0c35a9234a005b94c2010____::_2_::DXGKCALLONEXIT::_DXGKCALLONEXIT(&v18);
  }
}
