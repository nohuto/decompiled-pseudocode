/*
 * XREFs of DxgkInternalDeviceIoctl @ 0x1403A9E70
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140012444 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140015A70 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140015D30 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?DelayLoadWin32k@DXGGLOBAL@@QEAAJPEAX@Z @ 0x14002732C (-DelayLoadWin32k@DXGGLOBAL@@QEAAJPEAX@Z.c)
 *     ?ComputeQueryInterface@@YAJPEAU_DXGKCOMPUTE_INTERFACE@@PEAK@Z @ 0x14006FBBC (-ComputeQueryInterface@@YAJPEAU_DXGKCOMPUTE_INTERFACE@@PEAK@Z.c)
 *     DpiIsFeatureEnabled2 @ 0x14007C480 (DpiIsFeatureEnabled2.c)
 *     DxgkCaptureQueryInterface @ 0x1401B3B34 (DxgkCaptureQueryInterface.c)
 *     ?SetWslInterface@DXGGLOBAL@@QEAAJPEAU_DXGWSL_INTERFACE@@@Z @ 0x1401D6D9C (-SetWslInterface@DXGGLOBAL@@QEAAJPEAU_DXGWSL_INTERFACE@@@Z.c)
 *     ?DxgkpQueryTestInterface@@YAJPEAXIIW4_DXGKTEST_INTERFACE_TYPE@@@Z @ 0x140202938 (-DxgkpQueryTestInterface@@YAJPEAXIIW4_DXGKTEST_INTERFACE_TYPE@@@Z.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x14029AE64 (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 *     ?DxgkCddQueryInterface@@YAJPEAU_DXGKCDD_INTERFACE@@PEAK@Z @ 0x1403AA68C (-DxgkCddQueryInterface@@YAJPEAU_DXGKCDD_INTERFACE@@PEAK@Z.c)
 *     ?DxgkWin32kQueryInterface@@YAJPEAU_DXGKWIN32K_INTERFACE@@PEAK@Z @ 0x1403AABF0 (-DxgkWin32kQueryInterface@@YAJPEAU_DXGKWIN32K_INTERFACE@@PEAK@Z.c)
 */

__int64 __fastcall DxgkInternalDeviceIoctl(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // r14d
  __int64 v5; // r15
  __int64 v6; // r12
  __int64 v7; // rdi
  __int64 v8; // rsi
  __int64 v9; // rbx
  unsigned int *v10; // r15
  int v11; // eax
  int Win32k; // esi
  __int64 v13; // rcx
  __int64 v14; // r8
  struct DXGKW32KIMPORTS **v16; // rax
  __int64 v17; // rdx
  int IsFeatureEnabled2; // eax
  __int64 (__fastcall *v19)(PDRIVER_OBJECT); // rax
  struct DXGGLOBAL *v20; // rax
  int TestInterface; // eax
  __int64 v22; // rdx
  unsigned int v23; // eax
  __int64 v24; // rax
  const wchar_t *v25; // r9
  DXGGLOBAL *Global; // rax
  int v27; // eax
  __int64 v28; // rdx
  int v29; // eax
  __int64 v30; // rdx
  __int64 v31; // rbx
  __int64 v32; // rdi
  int v33; // [rsp+50h] [rbp-20h] BYREF
  __int64 v34; // [rsp+58h] [rbp-18h]
  char v35; // [rsp+60h] [rbp-10h]
  unsigned int v36; // [rsp+B8h] [rbp+48h] BYREF
  int v37; // [rsp+C0h] [rbp+50h] BYREF

  v33 = -1;
  v34 = 0LL;
  if ( (qword_14015E4B0 & 2) != 0 )
  {
    v35 = 1;
    v33 = 2;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, (__int64)&EventProfilerEnter, a3, 2);
  }
  else
  {
    v35 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v33, 2);
  v4 = 0;
  v5 = *(_QWORD *)(a2 + 184);
  v36 = 0;
  v6 = *(unsigned int *)(v5 + 24);
  v7 = *(unsigned int *)(v5 + 8);
  v8 = *(unsigned int *)(v5 + 16);
  if ( *(_BYTE *)(a2 + 64) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1141;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"pIrp->RequestorMode == KernelMode",
      1141LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( (v6 & 3) != 3 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1147;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"METHOD_FROM_CTL_CODE(Ioctl) == METHOD_NEITHER",
      1147LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v9 = *(_QWORD *)(a2 + 112);
  v10 = *(unsigned int **)(v5 + 32);
  if ( (unsigned int)v6 > 0x232063 )
  {
    if ( (_DWORD)v6 != 2351191 )
    {
      switch ( (_DWORD)v6 )
      {
        case 0x23E05B:
          if ( (unsigned int)v8 < 0x210 || (unsigned int)v7 < 0x210 )
          {
            v17 = v8;
            Win32k = -1073741306;
            WdLogSingleEntry3(3LL, v17, v7, -1073741306LL);
            WdLogGlobalForLineNumber = 1169;
            goto LABEL_15;
          }
          v11 = DxgkCddQueryInterface(*(struct _DXGKCDD_INTERFACE **)(a2 + 112), &v36);
          Win32k = v11;
          if ( v11 < 0 )
          {
            WdLogSingleEntry1(3LL, v11);
            WdLogGlobalForLineNumber = 1179;
          }
          break;
        case 0x23E05F:
          if ( (unsigned int)v8 < 0x30 || (unsigned int)v7 < 0x30 )
          {
            v30 = v8;
            Win32k = -1073741306;
            WdLogSingleEntry3(3LL, v30, v7, -1073741306LL);
            WdLogGlobalForLineNumber = 1410;
            goto LABEL_15;
          }
          v29 = DxgkCaptureQueryInterface(*(_QWORD **)(a2 + 112), &v36);
          Win32k = v29;
          if ( v29 < 0 )
          {
            WdLogSingleEntry1(3LL, v29);
            WdLogGlobalForLineNumber = 1420;
          }
          break;
        case 0x23E067:
          if ( (unsigned int)v8 < 0x268 || (unsigned int)v7 < 0x268 )
          {
            v28 = v8;
            Win32k = -1073741306;
            WdLogSingleEntry3(3LL, v28, v7, -1073741306LL);
            WdLogGlobalForLineNumber = 1192;
            goto LABEL_15;
          }
          v27 = ComputeQueryInterface(*(struct _DXGKCOMPUTE_INTERFACE **)(a2 + 112), &v36);
          Win32k = v27;
          if ( v27 < 0 )
          {
            WdLogSingleEntry1(3LL, v27);
            WdLogGlobalForLineNumber = 1202;
          }
          break;
        case 0x23E06B:
          if ( (unsigned int)v8 >= 0xC )
          {
            if ( v10[2] == 1 )
            {
              v23 = v10[1];
              if ( v23 == 1 )
              {
                if ( *v10 == 80 )
                {
                  Global = DXGGLOBAL::GetGlobal();
                  Win32k = DXGGLOBAL::SetWslInterface(Global, (struct _DXGWSL_INTERFACE *)v10);
                  goto LABEL_15;
                }
                WdLogSingleEntry1(2LL, *v10);
                v24 = *v10;
                v25 = L"Invalid size of DXGWSL_INTERFACE: %I64x";
                WdLogGlobalForLineNumber = 1229;
              }
              else
              {
                WdLogSingleEntry1(2LL, v23);
                v24 = v10[1];
                v25 = L"Invalid version of DXGINTERFACE_WSL: %I64x";
                WdLogGlobalForLineNumber = 1223;
              }
            }
            else
            {
              WdLogSingleEntry1(2LL, (int)v10[2]);
              v24 = (int)v10[2];
              v25 = L"Invalid interface type in IOCTL_INTERNAL_VIDEO_SET_INTERFACE: %I64x";
              WdLogGlobalForLineNumber = 1237;
            }
            DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, v25, v24, 0LL, 0LL, 0LL, 0LL);
            Win32k = -1073741811;
          }
          else
          {
            v22 = v8;
            Win32k = -1073741306;
            WdLogSingleEntry2(3LL, v22, -1073741306LL);
            WdLogGlobalForLineNumber = 1213;
          }
          goto LABEL_15;
        case 0x23E06F:
          if ( (unsigned int)v8 < 8 )
          {
            WdLogSingleEntry2(3LL, v8, 8LL);
            WdLogGlobalForLineNumber = 1453;
LABEL_35:
            Win32k = -1073741306;
            goto LABEL_15;
          }
          TestInterface = DxgkpQueryTestInterface(*(_QWORD **)(a2 + 112), v7, *v10, v10[1]);
          Win32k = TestInterface;
          if ( TestInterface < 0 )
          {
            WdLogSingleEntry1(3LL, TestInterface);
            WdLogGlobalForLineNumber = 1464;
          }
          goto LABEL_15;
        default:
LABEL_28:
          Win32k = -1073741808;
          WdLogSingleEntry2(3LL, v6, -1073741808LL);
          WdLogGlobalForLineNumber = 1494;
          goto LABEL_15;
      }
LABEL_14:
      v4 = v36;
      goto LABEL_15;
    }
    if ( (unsigned int)v8 < 0x338 || (unsigned int)v7 < 0x338 )
    {
      v31 = v7;
      v32 = v8;
      Win32k = -1073741306;
      WdLogSingleEntry4(1LL, v32, v31, 824LL, -1073741306LL);
      WdLogGlobalForLineNumber = 1261;
      DxgkLogInternalTriageEvent(
        0LL,
        262146LL,
        0xFFFFFFFFLL,
        L"Invalid lengths specified for IOCTL_INTERNAL_VIDEO_QUERY_WIN32K_INTERFACE (Input = 0n%I64d, Output = 0n%I64d, si"
         "zeof(DXGKWIN32K_INTERFACE) = 0n%I64d), returing 0x%I64x",
        v32,
        v31,
        824LL,
        -1073741306LL,
        0LL);
      goto LABEL_15;
    }
    v16 = (struct DXGKW32KIMPORTS **)DXGGLOBAL::GetGlobal();
    Win32k = DXGGLOBAL::DelayLoadWin32k(v16, *(void **)(v9 + 8));
    if ( Win32k >= 0 )
    {
      Win32k = DxgkWin32kQueryInterface((struct _DXGKWIN32K_INTERFACE *)v9, &v36);
      if ( Win32k >= 0 )
        goto LABEL_14;
      v4 = v36;
    }
    WdLogSingleEntry1(3LL, Win32k);
    WdLogGlobalForLineNumber = 1277;
    goto LABEL_15;
  }
  switch ( (_DWORD)v6 )
  {
    case 0x232063:
      if ( (unsigned int)v7 < 8 || !v9 )
      {
        Win32k = -1073741789;
        WdLogSingleEntry3(3LL, v7, *(_QWORD *)(a2 + 112), -1073741789LL);
        WdLogGlobalForLineNumber = 1385;
        goto LABEL_15;
      }
      v19 = DpiReportSoftwareDevice;
      goto LABEL_55;
    case 0x230007:
      v20 = DXGGLOBAL::GetGlobal();
      v37 = -1073741275;
      Win32k = DXGGLOBAL::IterateAdaptersWithCallback(
                 (__int64)v20,
                 (__int64 (__fastcall *)(_QWORD *, __int64))RfxVgpuResetCallback,
                 (__int64)&v37,
                 0);
      if ( Win32k < 0 || (Win32k = v37, v37 < 0) )
      {
        WdLogSingleEntry1(3LL, Win32k);
        WdLogGlobalForLineNumber = 1441;
      }
      goto LABEL_15;
    case 0x23003F:
      if ( (unsigned int)v7 < 8 || !v9 )
      {
        Win32k = -1073741789;
        WdLogSingleEntry3(3LL, v7, *(_QWORD *)(a2 + 112), -1073741789LL);
        WdLogGlobalForLineNumber = 1313;
        goto LABEL_15;
      }
      v19 = (__int64 (__fastcall *)(PDRIVER_OBJECT))DpiInitialize;
      goto LABEL_55;
    case 0x230043:
      if ( (unsigned int)v7 < 8 || !v9 )
      {
        Win32k = -1073741789;
        WdLogSingleEntry3(3LL, v7, *(_QWORD *)(a2 + 112), -1073741789LL);
        WdLogGlobalForLineNumber = 1337;
        goto LABEL_15;
      }
      v19 = (__int64 (__fastcall *)(PDRIVER_OBJECT))DpiKmdDodInitialize;
      goto LABEL_55;
    case 0x230047:
      if ( (unsigned int)v7 < 8 || !v9 )
      {
        Win32k = -1073741789;
        WdLogSingleEntry3(3LL, v7, *(_QWORD *)(a2 + 112), -1073741789LL);
        WdLogGlobalForLineNumber = 1289;
        goto LABEL_15;
      }
      v19 = (__int64 (__fastcall *)(PDRIVER_OBJECT))DpiInitializeWin8;
      goto LABEL_55;
    case 0x23004B:
      if ( (unsigned int)v7 < 8 || !v9 )
      {
        Win32k = -1073741789;
        WdLogSingleEntry3(3LL, v7, *(_QWORD *)(a2 + 112), -1073741789LL);
        WdLogGlobalForLineNumber = 1361;
        goto LABEL_15;
      }
      v19 = (__int64 (__fastcall *)(PDRIVER_OBJECT))DpiUnInitialize;
LABEL_55:
      Win32k = 0;
      *(_QWORD *)v9 = v19;
      v4 = 8;
      goto LABEL_15;
  }
  if ( (_DWORD)v6 != 2293839 )
    goto LABEL_28;
  if ( (unsigned int)v8 < 0x10 )
  {
    WdLogSingleEntry2(3LL, v8, 16LL);
    WdLogGlobalForLineNumber = 1475;
    goto LABEL_35;
  }
  IsFeatureEnabled2 = DpiIsFeatureEnabled2(0LL, *((unsigned int **)v10 + 1));
  Win32k = IsFeatureEnabled2;
  if ( IsFeatureEnabled2 < 0 )
  {
    WdLogSingleEntry1(3LL, IsFeatureEnabled2);
    WdLogGlobalForLineNumber = 1485;
  }
LABEL_15:
  *(_QWORD *)(a2 + 56) = v4;
  *(_DWORD *)(a2 + 48) = Win32k;
  IofCompleteRequest((PIRP)a2, 0);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v33);
  if ( v35 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v13, (__int64)&EventProfilerExit, v14, v33);
  return (unsigned int)Win32k;
}
