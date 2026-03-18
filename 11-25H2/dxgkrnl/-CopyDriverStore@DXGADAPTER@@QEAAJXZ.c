/*
 * XREFs of ?CopyDriverStore@DXGADAPTER@@QEAAJXZ @ 0x1401C7468
 * Callers:
 *     ?InitializeParavirtualizedAdapter@DXGADAPTER@@QEAAJPEAUDRIVER_WORKAROUNDS@@@Z @ 0x1401902D4 (-InitializeParavirtualizedAdapter@DXGADAPTER@@QEAAJPEAUDRIVER_WORKAROUNDS@@@Z.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x1400110B0 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140013010 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?RtlStringCbCopyW@@YAJPEAG_KPEBG@Z @ 0x14002ED20 (-RtlStringCbCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?RtlStringCbCatW@@YAJPEAG_KPEBG@Z @ 0x140033390 (-RtlStringCbCatW@@YAJPEAG_KPEBG@Z.c)
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x1400670D8 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x14006735C (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     memset @ 0x14009FCC0 (memset.c)
 *     ?TranslateUmdFileNameToVm@@YAJPEAGIPEAK@Z @ 0x1401A8FA8 (-TranslateUmdFileNameToVm@@YAJPEAGIPEAK@Z.c)
 *     ?DxgkpCreateFile@@YAJPEAGKKKKPEAPEAX@Z @ 0x1401C7F88 (-DxgkpCreateFile@@YAJPEAGKKKKPEAPEAX@Z.c)
 *     ?DxgkpDeleteFile@@YAJPEBG@Z @ 0x1401C80D8 (-DxgkpDeleteFile@@YAJPEBG@Z.c)
 *     ?DxgkpPopulateFile@@YAJPEAG0W4DXGKP_HARDLINKOVERWRITETYPE@@@Z @ 0x1401C82AC (-DxgkpPopulateFile@@YAJPEAG0W4DXGKP_HARDLINKOVERWRITETYPE@@@Z.c)
 *     ?VmBusSendGetDriverStoreFile@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJQEAGPEAKPEAEPEAU_FILE_BASIC_INFORMATION@@@Z @ 0x140224D9C (-VmBusSendGetDriverStoreFile@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJQEAGPEAKPEAEPEAU_FILE_BASIC_INFORM.c)
 *     ?VmBusSendGetNextHardLink@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJQEAG0PEAW4DXGKP_HARDLINKTYPE@@PEAW4DXGKP_HARDLINKOVERWRITETYPE@@@Z @ 0x140225364 (-VmBusSendGetNextHardLink@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJQEAG0PEAW4DXGKP_HARDLINKTYPE@@PEAW4DX.c)
 *     ?VmBusSendQueryAdapterInfo@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAU_D3DKMT_QUERYADAPTERINFO@@I@Z @ 0x14040CF48 (-VmBusSendQueryAdapterInfo@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAU_D3DKMT_QUERYADA.c)
 */

__int64 __fastcall DXGADAPTER::CopyDriverStore(DXGADAPTER *this)
{
  char *v2; // r14
  __int64 result; // rax
  DXG_GUEST_VIRTUALGPU_VMBUS *v4; // r15
  unsigned int v5; // r9d
  int v6; // eax
  __int64 v7; // rdi
  const wchar_t *v8; // r9
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // r9
  char *v12; // rax
  unsigned int v13; // r9d
  int v14; // eax
  int v15; // eax
  int i; // eax
  __int64 v17; // rdx
  __int64 v18; // rdx
  __int64 v19; // rdx
  char *NtSystemRoot; // rax
  __int64 v21; // rdx
  __int64 v22; // rdx
  unsigned __int16 *v23; // r8
  __int64 v24; // rdx
  int v25; // eax
  __int64 v26; // rbx
  __int64 v27; // [rsp+58h] [rbp-B0h]
  __int64 v28; // [rsp+58h] [rbp-B0h]
  __int64 v29; // [rsp+60h] [rbp-A8h] BYREF
  HANDLE Handle; // [rsp+68h] [rbp-A0h] BYREF
  struct _D3DKMT_QUERYADAPTERINFO v31; // [rsp+70h] [rbp-98h] BYREF
  struct _D3DKMT_QUERYADAPTERINFO v32; // [rsp+88h] [rbp-80h] BYREF
  _DWORD v33[138]; // [rsp+A8h] [rbp-60h] BYREF
  _BYTE v34[518]; // [rsp+2D0h] [rbp+1C8h] BYREF
  __int16 v35; // [rsp+4D6h] [rbp+3CEh]
  WCHAR SourceString[264]; // [rsp+4D8h] [rbp+3D0h] BYREF
  unsigned __int16 v37[264]; // [rsp+6E8h] [rbp+5E0h] BYREF
  unsigned __int16 v38[264]; // [rsp+8F8h] [rbp+7F0h] BYREF
  unsigned __int16 v39[264]; // [rsp+B08h] [rbp+A00h] BYREF

  DXGGLOBAL::GetGlobal();
  v2 = 0LL;
  Handle = (HANDLE)-1LL;
  if ( *((_BYTE *)this + 210) )
  {
    WdLogSingleEntry0(4LL);
    result = 0LL;
    WdLogGlobalForLineNumber = 1695;
    return result;
  }
  if ( (Feature_CopyDriverToSystem32__private_featureState & 0x10) == 0 )
  {
    v27 = Feature_CopyDriverToSystem32__private_featureState | 1u;
    wil_details_FeatureReporting_ReportUsageToService(
      (__int64)&Feature_CopyDriverToSystem32__private_descriptor,
      v27,
      3LL);
    wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(
      v27,
      3,
      (__int64)&Feature_CopyDriverToSystem32__private_descriptor);
  }
  memset(&v33[1], 0, 0x224uLL);
  memset(v34, 0, sizeof(v34));
  v33[0] = 3;
  v35 = 0;
  v4 = (DXGADAPTER *)((char *)this + 4664);
  v31.hAdapter = 0;
  v31.pPrivateDriverData = v33;
  *(_QWORD *)&v31.PrivateDriverDataSize = 1072LL;
  v31.Type = KMTQAITYPE_QUERYREGISTRY;
  v6 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendQueryAdapterInfo((DXGADAPTER *)((char *)this + 4664), 0LL, &v31, v5);
  v7 = v6;
  if ( v6 >= 0 )
  {
    v9 = TranslateUmdFileNameToVm((char *)&v33[136], 0x104u, &v33[134]);
    v7 = v9;
    if ( v9 >= 0 )
    {
      RtlStringCbCopyW((char *)SourceString, 0x208uLL, (char *)L"\\??\\");
      RtlStringCbCatW(SourceString, v10, (char *)&v33[136]);
      if ( (int)DxgkpCreateFile(SourceString, 1u, 0x80u, 0x20u, 1u, &Handle) < 0 )
      {
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 1764;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          0xFFFFFFFFLL,
          L"Driver image does not exists in the VM",
          1764LL,
          0LL,
          0LL,
          0LL,
          0LL);
        LODWORD(v7) = -1073741823;
        goto LABEL_31;
      }
      ZwClose(Handle);
      Handle = (HANDLE)-1LL;
      if ( *((_DWORD *)this + 766) == 2 )
        DxgkpDeleteFile(SourceString);
      v12 = (char *)operator new[](0x208uLL, 0x4B677844u, 256LL, v11);
      v2 = v12;
      if ( !v12 )
      {
        LODWORD(v7) = -1073741801;
        goto LABEL_31;
      }
      RtlStringCbCopyW(v12, 0x208uLL, (char *)SourceString);
      v33[0] = 2;
      v32.pPrivateDriverData = v33;
      v32.hAdapter = 0;
      *(_QWORD *)&v32.PrivateDriverDataSize = 1072LL;
      v32.Type = KMTQAITYPE_QUERYREGISTRY;
      v14 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendQueryAdapterInfo((DXGADAPTER *)((char *)this + 4664), 0LL, &v32, v13);
      v7 = v14;
      if ( v14 < 0 )
      {
        WdLogSingleEntry1(2LL, v14);
        v8 = L"D3DDDI_QUERYREGISTRY_DRIVERSTOREPATH failed: 0x%I64x";
        WdLogGlobalForLineNumber = 1787;
        goto LABEL_7;
      }
      v15 = TranslateUmdFileNameToVm((char *)&v33[136], 0x104u, &v33[134]);
      v7 = v15;
      if ( v15 >= 0 )
      {
        if ( (Feature_NonDXKryptonGpuSupport__private_featureState & 0x10) == 0 )
        {
          v28 = Feature_NonDXKryptonGpuSupport__private_featureState | 1u;
          wil_details_FeatureReporting_ReportUsageToService(
            (__int64)&Feature_NonDXKryptonGpuSupport__private_descriptor,
            v28,
            3LL);
          wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(
            v28,
            3,
            (__int64)&Feature_NonDXKryptonGpuSupport__private_descriptor);
        }
        v29 = 0LL;
        for ( i = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendGetNextHardLink(
                    v4,
                    v39,
                    v38,
                    (enum DXGKP_HARDLINKTYPE *)((char *)&v29 + 4),
                    (enum DXGKP_HARDLINKOVERWRITETYPE *)&v29);
              i >= 0;
              i = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendGetNextHardLink(
                    v4,
                    v39,
                    v38,
                    (enum DXGKP_HARDLINKTYPE *)((char *)&v29 + 4),
                    (enum DXGKP_HARDLINKOVERWRITETYPE *)&v29) )
        {
          RtlStringCbCopyW((char *)SourceString, 0x208uLL, (char *)L"\\??\\");
          RtlStringCbCatW(SourceString, v17, (char *)&v33[136]);
          RtlStringCbCatW(SourceString, v18, (char *)L"\\");
          RtlStringCbCatW(SourceString, v19, (char *)v39);
          RtlStringCbCopyW((char *)v37, 0x208uLL, (char *)L"\\??\\");
          NtSystemRoot = (char *)RtlGetNtSystemRoot();
          RtlStringCbCatW(v37, v21, NtSystemRoot);
          v23 = L"\\System32\\";
          if ( HIDWORD(v29) )
            v23 = L"\\Syswow64\\";
          RtlStringCbCatW(v37, v22, (char *)v23);
          RtlStringCbCatW(v37, v24, (char *)v38);
          v25 = DxgkpPopulateFile(SourceString, v37, (unsigned int)v29);
          if ( v25 < 0 )
          {
            v26 = v25;
            WdLogSingleEntry1(2LL, v25);
            WdLogGlobalForLineNumber = 2046;
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              0xFFFFFFFFLL,
              L"Failed to populate file: 0x%I64x",
              v26,
              0LL,
              0LL,
              0LL,
              0LL);
          }
        }
        LODWORD(v7) = 0;
        goto LABEL_31;
      }
      WdLogSingleEntry1(2LL, v15);
      WdLogGlobalForLineNumber = 1793;
    }
    else
    {
      WdLogSingleEntry1(2LL, v9);
      WdLogGlobalForLineNumber = 1731;
    }
    v8 = L"TranslateUmdFileNameToVm failed: 0x%I64x";
  }
  else
  {
    WdLogSingleEntry1(2LL, v6);
    v8 = L"D3DDDI_QUERYREGISTRY_DRIVERIMAGEPATH failed: 0x%I64x";
    WdLogGlobalForLineNumber = 1725;
  }
LABEL_7:
  DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, v8, v7, 0LL, 0LL, 0LL, 0LL);
LABEL_31:
  DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v2);
  if ( Handle != (HANDLE)-1LL )
  {
    ZwClose(Handle);
    Handle = (HANDLE)-1LL;
  }
  DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendGetDriverStoreFile(v4, SourceString, 0LL, 0LL, 0LL);
  if ( (int)v7 < 0 )
  {
    WdLogSingleEntry1(2LL, (int)v7);
    WdLogGlobalForLineNumber = 2103;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Failed to copy driver store files: 0x%I64x",
      (int)v7,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  return (unsigned int)v7;
}
