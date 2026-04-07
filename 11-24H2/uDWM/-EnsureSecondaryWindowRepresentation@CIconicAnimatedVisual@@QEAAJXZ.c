/*
 * XREFs of ?EnsureSecondaryWindowRepresentation@CIconicAnimatedVisual@@QEAAJXZ @ 0x1800C4C7C
 * Callers:
 *     ?EnsureVisualBrush@CIconicAnimatedVisual@@AEAAJXZ @ 0x1800C4D78 (-EnsureVisualBrush@CIconicAnimatedVisual@@AEAAJXZ.c)
 * Callees:
 *     ?GetScaleFactorForMonitorImp@@YAJPEAUHMONITOR__@@PEAW4DEVICE_SCALE_FACTOR@@@Z @ 0x18000438C (-GetScaleFactorForMonitorImp@@YAJPEAUHMONITOR__@@PEAW4DEVICE_SCALE_FACTOR@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Create@CSecondaryWindowRepresentation@@SAJU?$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@PEAUISecondaryWindowRepresentationChangedListener@@PEAVCWindowData@@IW4DEVICE_SCALE_FACTOR@@PEAPEAV1@@Z @ 0x18003CD84 (-Create@CSecondaryWindowRepresentation@@SAJU-$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@PEAUISeconda.c)
 */

__int64 __fastcall CIconicAnimatedVisual::EnsureSecondaryWindowRepresentation(CIconicAnimatedVisual *this)
{
  CBaseObject **v1; // rsi
  unsigned int v3; // ebx
  _DWORD *v4; // rbp
  HMONITOR v5; // rax
  int ScaleFactorForMonitorImp; // eax
  int v7; // r9d
  int v8; // eax
  void *v10; // [rsp+20h] [rbp-28h]
  enum DEVICE_SCALE_FACTOR v11; // [rsp+50h] [rbp+8h] BYREF

  v1 = (CBaseObject **)((char *)this + 248);
  v3 = 0;
  if ( !*((_QWORD *)this + 31) && *((_QWORD *)this + 32) )
  {
    v4 = (_DWORD *)((char *)this + 312);
    v11 = DEVICE_SCALE_FACTOR_INVALID;
    v5 = MonitorFromRect((LPCRECT)((char *)this + 312), 2u);
    ScaleFactorForMonitorImp = GetScaleFactorForMonitorImp(v5, &v11);
    v3 = ScaleFactorForMonitorImp;
    if ( ScaleFactorForMonitorImp < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, ScaleFactorForMonitorImp, 0x4Au, 0LL);
    }
    else
    {
      v7 = v4[2] - *v4;
      if ( v7 < 0 )
        v7 = 0;
      LODWORD(v10) = v11;
      v8 = CSecondaryWindowRepresentation::Create(
             *((_DWORD *)this + 86) | 0x802u,
             ((unsigned __int64)this + 240) & -(__int64)(this != 0LL),
             *((_QWORD *)this + 32),
             v7,
             v10,
             v1);
      v3 = v8;
      if ( v8 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, 0x51u, 0LL);
    }
  }
  return v3;
}
