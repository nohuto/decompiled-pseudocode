/*
 * XREFs of ?MonitorGetAdvancedColorParams@@YAJPEAUHDXGMONITOR__@@PEAUDISPLAY_COLORIMETRY_FLAGS_INTERNAL_IN@@PEAUDISPLAY_COLORIMETRY_INTERNAL@@PEAUDISPLAY_COLORIMETRY_FLAGS_INTERNAL_OUT@@@Z @ 0x14042C2E8
 * Callers:
 *     DxgkGetAdapterDeviceDesc @ 0x140418390 (DxgkGetAdapterDeviceDesc.c)
 *     DxgkGetMonitorInternalInfo @ 0x140419880 (DxgkGetMonitorInternalInfo.c)
 * Callees:
 *     ??1CONST_MONITOR_REF_LOCK_ACCESSOR@@QEAA@XZ @ 0x140034CB0 (--1CONST_MONITOR_REF_LOCK_ACCESSOR@@QEAA@XZ.c)
 *     ?AcquireMonitorShared@MONITOR_MGR@@SA?AVCONST_MONITOR_REF_LOCK_ACCESSOR@@PEAUHDXGMONITOR__@@@Z @ 0x140036128 (-AcquireMonitorShared@MONITOR_MGR@@SA-AVCONST_MONITOR_REF_LOCK_ACCESSOR@@PEAUHDXGMONITOR__@@@Z.c)
 *     Feature_DolbyVisionAndUpdatedHdrUx__private_IsEnabledDeviceUsageNoInline @ 0x14006E13C (Feature_DolbyVisionAndUpdatedHdrUx__private_IsEnabledDeviceUsageNoInline.c)
 *     ?MonitorGetSupportedHDRFlavors@@YAJPEAUHDXGMONITOR__@@PEAW4_DISPLAYCONFIG_HDR_FLAVOR@@@Z @ 0x14026794C (-MonitorGetSupportedHDRFlavors@@YAJPEAUHDXGMONITOR__@@PEAW4_DISPLAYCONFIG_HDR_FLAVOR@@@Z.c)
 */

__int64 __fastcall MonitorGetAdvancedColorParams(
        struct HDXGMONITOR__ *a1,
        struct DISPLAY_COLORIMETRY_FLAGS_INTERNAL_IN *a2,
        struct DISPLAY_COLORIMETRY_INTERNAL *a3,
        struct DISPLAY_COLORIMETRY_FLAGS_INTERNAL_OUT *a4)
{
  __int64 v9; // rbp
  unsigned int v10; // ebx
  __int64 v11; // rdx
  __int64 v12; // rax
  bool v13; // zf
  int v14; // eax
  int v15; // ecx
  int v16; // r8d
  __int64 v17; // rcx
  unsigned int v18; // eax
  __int64 v19; // rax
  __int64 v20; // rcx
  unsigned int v21; // edx
  unsigned int v22; // edx
  _QWORD v23[7]; // [rsp+20h] [rbp-38h] BYREF
  int v24; // [rsp+60h] [rbp+8h] BYREF

  if ( !a1 )
    return 3221225485LL;
  MONITOR_MGR::AcquireMonitorShared(v23, (__int64)a1);
  v9 = v23[0];
  if ( v23[0] )
  {
    v11 = *(_QWORD *)(v23[0] + 224LL);
    if ( *((_BYTE *)a2 + 1) )
    {
      *(_QWORD *)a3 = *(_QWORD *)(v11 + 416);
      *((_QWORD *)a3 + 1) = *(_QWORD *)(v11 + 424);
      *((_QWORD *)a3 + 2) = *(_QWORD *)(v11 + 432);
      v19 = *(_QWORD *)(v11 + 440);
      *((_DWORD *)a3 + 6) = v19;
      *(_WORD *)a4 = 0;
      *((_DWORD *)a3 + 7) = HIDWORD(v19);
      *((_DWORD *)a3 + 8) = *(_DWORD *)(v11 + 448);
      LODWORD(v19) = *(_DWORD *)(v11 + 452);
      *((_DWORD *)a3 + 9) = v19;
      *((_DWORD *)a3 + 10) = v19;
      *((_BYTE *)a4 + 5) = 0;
      if ( (unsigned int)Feature_DolbyVisionAndUpdatedHdrUx__private_IsEnabledDeviceUsageNoInline() )
        *((_BYTE *)a4 + 6) = 0;
    }
    else
    {
      *(_QWORD *)a3 = *(_QWORD *)(v11 + 240);
      *((_QWORD *)a3 + 1) = *(_QWORD *)(v11 + 248);
      *((_QWORD *)a3 + 2) = *(_QWORD *)(v11 + 256);
      v12 = *(_QWORD *)(v11 + 264);
      *((_DWORD *)a3 + 6) = v12;
      v13 = *(_BYTE *)a2 == 0;
      *((_DWORD *)a3 + 7) = HIDWORD(v12);
      if ( v13 )
      {
        v14 = *(_DWORD *)(v11 + 372);
        v15 = *(_DWORD *)(v11 + 368);
        v16 = *(_DWORD *)(v11 + 364);
      }
      else
      {
        v14 = *(_DWORD *)(v11 + 388);
        v15 = *(_DWORD *)(v11 + 384);
        v16 = *(_DWORD *)(v11 + 380);
      }
      *((_DWORD *)a3 + 8) = v16;
      *((_DWORD *)a3 + 9) = v15;
      *((_DWORD *)a3 + 10) = v14;
      v17 = *(_QWORD *)(v11 + 112);
      v18 = *(_DWORD *)(v11 + 392) - 1;
      *(_BYTE *)a4 = 0;
      *((_BYTE *)a4 + 1) = v18 <= 2;
      *((_BYTE *)a4 + 4) = *(_BYTE *)(v11 + 120);
      *((_BYTE *)a4 + 2) = BYTE6(v17) != 0;
      v13 = *(_BYTE *)(v11 + 413) == 0;
      *((_BYTE *)a4 + 3) = HIBYTE(v17) != 0;
      *((_BYTE *)a4 + 5) = !v13;
      if ( (unsigned int)Feature_DolbyVisionAndUpdatedHdrUx__private_IsEnabledDeviceUsageNoInline()
        && *((_BYTE *)a4 + 5) )
      {
        v24 = 0;
        MonitorGetSupportedHDRFlavors(a1, (enum _DISPLAYCONFIG_HDR_FLAVOR *)&v24);
        *((_BYTE *)a4 + 5) = (v24 & 2) != 0;
      }
    }
    v20 = *(_QWORD *)(v9 + 224);
    v21 = *(_DWORD *)(v20 + 472);
    if ( v21 )
      v22 = v21 / 0x3E8;
    else
      v22 = *(_DWORD *)(v20 + 368) / 0x2710u;
    *((_DWORD *)a3 + 11) = v22;
    v10 = 0;
  }
  else
  {
    v10 = -1073741275;
    WdLogSingleEntry1(2LL, -1073741275LL);
    WdLogGlobalForLineNumber = 3727;
  }
  CONST_MONITOR_REF_LOCK_ACCESSOR::~CONST_MONITOR_REF_LOCK_ACCESSOR((CONST_MONITOR_REF_LOCK_ACCESSOR *)v23);
  return v10;
}
