/*
 * XREFs of ?EnsureSecondaryWindowRepresentation@CThumbnailVisual@@QEAAJPEAPEAVCSecondaryWindowRepresentation@@@Z @ 0x18000D57C
 * Callers:
 *     ?QueryThumbnailType@CWindowList@@AEAAJKPEAUMILCMD_DWM_REDIRECTION_QUERYTHUMBNAILTYPE@@@Z @ 0x180005400 (-QueryThumbnailType@CWindowList@@AEAAJKPEAUMILCMD_DWM_REDIRECTION_QUERYTHUMBNAILTYPE@@@Z.c)
 *     ?EnsureSecondaryWindowVisual@CThumbnailVisual@@QEAAJXZ @ 0x180009C74 (-EnsureSecondaryWindowVisual@CThumbnailVisual@@QEAAJXZ.c)
 *     ?EnsureVisualBrush@CThumbnailVisual@@QEAAJXZ @ 0x18000CDB0 (-EnsureVisualBrush@CThumbnailVisual@@QEAAJXZ.c)
 *     ?UpdateDestinationRect@CThumbnailVisual@@QEAAJXZ @ 0x18000D7AC (-UpdateDestinationRect@CThumbnailVisual@@QEAAJXZ.c)
 *     ?QueryThumbnailSourceSize@CWindowList@@AEAAJKPEAUMILCMD_DWM_REDIRECTION_QUERYTHUMBNAILSOURCESIZE@@@Z @ 0x18006EF10 (-QueryThumbnailSourceSize@CWindowList@@AEAAJKPEAUMILCMD_DWM_REDIRECTION_QUERYTHUMBNAILSOURCESIZE.c)
 * Callees:
 *     ?Create@CSecondaryWindowRepresentation@@SAJU?$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@PEAUISecondaryWindowRepresentationChangedListener@@PEAVCWindowData@@IW4DEVICE_SCALE_FACTOR@@PEAPEAV1@@Z @ 0x180033B10 (-Create@CSecondaryWindowRepresentation@@SAJU-$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@PEAUISeconda.c)
 *     ?IsImmersiveWindow@CWindowData@@QEBA_NXZ @ 0x180035620 (-IsImmersiveWindow@CWindowData@@QEBA_NXZ.c)
 *     ?GetScaleFactorForMonitorImp@@YAJPEAUHMONITOR__@@PEAW4DEVICE_SCALE_FACTOR@@@Z @ 0x180054520 (-GetScaleFactorForMonitorImp@@YAJPEAUHMONITOR__@@PEAW4DEVICE_SCALE_FACTOR@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CThumbnailVisual::EnsureSecondaryWindowRepresentation(
        CThumbnailVisual *this,
        struct CSecondaryWindowRepresentation **a2)
{
  unsigned int v2; // edi
  struct CSecondaryWindowRepresentation **v3; // rsi
  __int64 v7; // rcx
  CWindowData *v8; // rcx
  enum DEVICE_SCALE_FACTOR v9; // edi
  __int64 v10; // r8
  int v11; // r9d
  int v12; // eax
  HMONITOR v13; // rax
  void *v14; // [rsp+20h] [rbp-18h]
  enum DEVICE_SCALE_FACTOR v15; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0;
  v3 = (struct CSecondaryWindowRepresentation **)((char *)this + 384);
  if ( *((_QWORD *)this + 48) )
    goto LABEL_2;
  v7 = *((_QWORD *)this + 47);
  if ( !v7 )
    goto LABEL_2;
  v8 = *(CWindowData **)(v7 + 24);
  v9 = SCALE_100_PERCENT;
  v15 = SCALE_100_PERCENT;
  if ( CWindowData::IsImmersiveWindow(v8) )
  {
    v13 = MonitorFromRect((LPCRECT)(*(_QWORD *)(*((_QWORD *)this + 47) + 16LL) + 48LL), 2u);
    GetScaleFactorForMonitorImp(v13, &v15);
    v9 = v15;
  }
  v10 = *((_QWORD *)this + 47);
  v11 = 0;
  if ( v10 && (*(_BYTE *)(v10 + 36) & 1) != 0 && *(_DWORD *)(v10 + 48) - *(_DWORD *)(v10 + 40) >= 0 )
    v11 = *(_DWORD *)(v10 + 48) - *(_DWORD *)(v10 + 40);
  LODWORD(v14) = v9;
  v12 = CSecondaryWindowRepresentation::Create(
          (*(_DWORD *)(v10 + 77) != 0 ? 6 : 2) | (*(_BYTE *)(v10 + 32) != 0 ? 0x120 : 0) | ((*(_DWORD *)(v10 + 36) & 0x1000000 | ((*(_DWORD *)(v10 + 36) & 0x100000 | (*(_DWORD *)(v10 + 36) >> 1) & 0x400000u) >> 1)) >> 10),
          ((_DWORD)this + 368) & (unsigned int)-(this != 0LL),
          *(_QWORD *)(v10 + 24),
          v11,
          v14,
          (__int64)v3);
  v2 = v12;
  if ( v12 >= 0 )
  {
LABEL_2:
    if ( a2 )
      *a2 = *v3;
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0x217u, 0LL);
  }
  return v2;
}
