/*
 * XREFs of DxgkInternalDeviceIoctl @ 0x1403AECB0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x140015644 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140021A60 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140021D20 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?DelayLoadWin32k@DXGGLOBAL@@QEAAJPEAX@Z @ 0x1400270A4 (-DelayLoadWin32k@DXGGLOBAL@@QEAAJPEAX@Z.c)
 *     ?ComputeQueryInterface@@YAJPEAU_DXGKCOMPUTE_INTERFACE@@PEAK@Z @ 0x14006F17C (-ComputeQueryInterface@@YAJPEAU_DXGKCOMPUTE_INTERFACE@@PEAK@Z.c)
 *     DpiIsFeatureEnabled2 @ 0x14007BFE0 (DpiIsFeatureEnabled2.c)
 *     DxgkCaptureQueryInterface @ 0x1401B1584 (DxgkCaptureQueryInterface.c)
 *     ?SetWslInterface@DXGGLOBAL@@QEAAJPEAU_DXGWSL_INTERFACE@@@Z @ 0x1401D1A6C (-SetWslInterface@DXGGLOBAL@@QEAAJPEAU_DXGWSL_INTERFACE@@@Z.c)
 *     ?DxgkpQueryTestInterface@@YAJPEAXIIW4_DXGKTEST_INTERFACE_TYPE@@@Z @ 0x1401FC228 (-DxgkpQueryTestInterface@@YAJPEAXIIW4_DXGKTEST_INTERFACE_TYPE@@@Z.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x140295218 (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 *     ?DxgkCddQueryInterface@@YAJPEAU_DXGKCDD_INTERFACE@@PEAK@Z @ 0x1403AF4CC (-DxgkCddQueryInterface@@YAJPEAU_DXGKCDD_INTERFACE@@PEAK@Z.c)
 *     ?DxgkWin32kQueryInterface@@YAJPEAU_DXGKWIN32K_INTERFACE@@PEAK@Z @ 0x1403AFA30 (-DxgkWin32kQueryInterface@@YAJPEAU_DXGKWIN32K_INTERFACE@@PEAK@Z.c)
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
  __int64 v27; // r8
  __int64 v28; // r9
  int v29; // eax
  __int64 v30; // rdx
  int v31; // eax
  __int64 v32; // rdx
  __int64 v33; // rbx
  __int64 v34; // rdi
  int v35; // [rsp+50h] [rbp-20h] BYREF
  __int64 v36; // [rsp+58h] [rbp-18h]
  char v37; // [rsp+60h] [rbp-10h]
  unsigned int v38; // [rsp+B8h] [rbp+48h] BYREF
  int v39; // [rsp+C0h] [rbp+50h] BYREF

  v35 = -1;
  v36 = 0LL;
  if ( (qword_14015B4C0 & 2) != 0 )
  {
    v37 = 1;
    v35 = 2;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, (__int64)&EventProfilerEnter, a3, 2);
  }
  else
  {
    v37 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v35, 2);
  v4 = 0;
  v5 = *(_QWORD *)(a2 + 184);
  v38 = 0;
  v6 = *(unsigned int *)(v5 + 24);
  v7 = *(unsigned int *)(v5 + 8);
  v8 = *(unsigned int *)(v5 + 16);
  if ( *(_BYTE *)(a2 + 64) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1158;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"pIrp->RequestorMode == KernelMode",
      1158LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( (v6 & 3) != 3 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1164;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"METHOD_FROM_CTL_CODE(Ioctl) == METHOD_NEITHER",
      1164LL,
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
            WdLogGlobalForLineNumber = 1186;
            goto LABEL_15;
          }
          v11 = DxgkCddQueryInterface(*(struct _DXGKCDD_INTERFACE **)(a2 + 112), &v38);
          Win32k = v11;
          if ( v11 < 0 )
          {
            WdLogSingleEntry1(3LL, v11);
            WdLogGlobalForLineNumber = 1196;
          }
          break;
        case 0x23E05F:
          if ( (unsigned int)v8 < 0x30 || (unsigned int)v7 < 0x30 )
          {
            v32 = v8;
            Win32k = -1073741306;
            WdLogSingleEntry3(3LL, v32, v7, -1073741306LL);
            WdLogGlobalForLineNumber = 1427;
            goto LABEL_15;
          }
          v31 = DxgkCaptureQueryInterface(*(_QWORD **)(a2 + 112), &v38);
          Win32k = v31;
          if ( v31 < 0 )
          {
            WdLogSingleEntry1(3LL, v31);
            WdLogGlobalForLineNumber = 1437;
          }
          break;
        case 0x23E067:
          if ( (unsigned int)v8 < 0x268 || (unsigned int)v7 < 0x268 )
          {
            v30 = v8;
            Win32k = -1073741306;
            WdLogSingleEntry3(3LL, v30, v7, -1073741306LL);
            WdLogGlobalForLineNumber = 1209;
            goto LABEL_15;
          }
          v29 = ComputeQueryInterface(*(struct _DXGKCOMPUTE_INTERFACE **)(a2 + 112), &v38);
          Win32k = v29;
          if ( v29 < 0 )
          {
            WdLogSingleEntry1(3LL, v29);
            WdLogGlobalForLineNumber = 1219;
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
                  Win32k = DXGGLOBAL::SetWslInterface(Global, (struct _DXGWSL_INTERFACE *)v10, v27, v28);
                  goto LABEL_15;
                }
                WdLogSingleEntry1(2LL, *v10);
                v24 = *v10;
                v25 = L"Invalid size of DXGWSL_INTERFACE: %I64x";
                WdLogGlobalForLineNumber = 1246;
              }
              else
              {
                WdLogSingleEntry1(2LL, v23);
                v24 = v10[1];
                v25 = L"Invalid version of DXGINTERFACE_WSL: %I64x";
                WdLogGlobalForLineNumber = 1240;
              }
            }
            else
            {
              WdLogSingleEntry1(2LL, (int)v10[2]);
              v24 = (int)v10[2];
              v25 = L"Invalid interface type in IOCTL_INTERNAL_VIDEO_SET_INTERFACE: %I64x";
              WdLogGlobalForLineNumber = 1254;
            }
            DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, v25, v24, 0LL, 0LL, 0LL, 0LL);
            Win32k = -1073741811;
          }
          else
          {
            v22 = v8;
            Win32k = -1073741306;
            WdLogSingleEntry2(3LL, v22, -1073741306LL);
            WdLogGlobalForLineNumber = 1230;
          }
          goto LABEL_15;
        case 0x23E06F:
          if ( (unsigned int)v8 < 8 )
          {
            WdLogSingleEntry2(3LL, v8, 8LL);
            WdLogGlobalForLineNumber = 1470;
LABEL_35:
            Win32k = -1073741306;
            goto LABEL_15;
          }
          TestInterface = DxgkpQueryTestInterface(*(_QWORD **)(a2 + 112), v7, *v10, v10[1]);
          Win32k = TestInterface;
          if ( TestInterface < 0 )
          {
            WdLogSingleEntry1(3LL, TestInterface);
            WdLogGlobalForLineNumber = 1481;
          }
          goto LABEL_15;
        default:
LABEL_28:
          Win32k = -1073741808;
          WdLogSingleEntry2(3LL, v6, -1073741808LL);
          WdLogGlobalForLineNumber = 1511;
          goto LABEL_15;
      }
LABEL_14:
      v4 = v38;
      goto LABEL_15;
    }
    if ( (unsigned int)v8 < 0x330 || (unsigned int)v7 < 0x330 )
    {
      v33 = v7;
      v34 = v8;
      Win32k = -1073741306;
      WdLogSingleEntry4(1LL, v34, v33, 816LL, -1073741306LL);
      WdLogGlobalForLineNumber = 1278;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        0xFFFFFFFFLL,
        L"Invalid lengths specified for IOCTL_INTERNAL_VIDEO_QUERY_WIN32K_INTERFACE (Input = 0n%I64d, Output = 0n%I64d, si"
         "zeof(DXGKWIN32K_INTERFACE) = 0n%I64d), returing 0x%I64x",
        v34,
        v33,
        816LL,
        -1073741306LL,
        0LL);
      goto LABEL_15;
    }
    v16 = (struct DXGKW32KIMPORTS **)DXGGLOBAL::GetGlobal();
    Win32k = DXGGLOBAL::DelayLoadWin32k(v16, *(void **)(v9 + 8));
    if ( Win32k >= 0 )
    {
      Win32k = DxgkWin32kQueryInterface((struct _DXGKWIN32K_INTERFACE *)v9, &v38);
      if ( Win32k >= 0 )
        goto LABEL_14;
      v4 = v38;
    }
    WdLogSingleEntry1(3LL, Win32k);
    WdLogGlobalForLineNumber = 1294;
    goto LABEL_15;
  }
  switch ( (_DWORD)v6 )
  {
    case 0x232063:
      if ( (unsigned int)v7 < 8 || !v9 )
      {
        Win32k = -1073741789;
        WdLogSingleEntry3(3LL, v7, *(_QWORD *)(a2 + 112), -1073741789LL);
        WdLogGlobalForLineNumber = 1402;
        goto LABEL_15;
      }
      v19 = DpiReportSoftwareDevice;
      goto LABEL_55;
    case 0x230007:
      v20 = DXGGLOBAL::GetGlobal();
      v39 = -1073741275;
      Win32k = DXGGLOBAL::IterateAdaptersWithCallback(
                 (__int64)v20,
                 (__int64 (__fastcall *)(_QWORD *, __int64))RfxVgpuResetCallback,
                 (__int64)&v39,
                 0);
      if ( Win32k < 0 || (Win32k = v39, v39 < 0) )
      {
        WdLogSingleEntry1(3LL, Win32k);
        WdLogGlobalForLineNumber = 1458;
      }
      goto LABEL_15;
    case 0x23003F:
      if ( (unsigned int)v7 < 8 || !v9 )
      {
        Win32k = -1073741789;
        WdLogSingleEntry3(3LL, v7, *(_QWORD *)(a2 + 112), -1073741789LL);
        WdLogGlobalForLineNumber = 1330;
        goto LABEL_15;
      }
      v19 = (__int64 (__fastcall *)(PDRIVER_OBJECT))DpiInitialize;
      goto LABEL_55;
    case 0x230043:
      if ( (unsigned int)v7 < 8 || !v9 )
      {
        Win32k = -1073741789;
        WdLogSingleEntry3(3LL, v7, *(_QWORD *)(a2 + 112), -1073741789LL);
        WdLogGlobalForLineNumber = 1354;
        goto LABEL_15;
      }
      v19 = (__int64 (__fastcall *)(PDRIVER_OBJECT))DpiKmdDodInitialize;
      goto LABEL_55;
    case 0x230047:
      if ( (unsigned int)v7 < 8 || !v9 )
      {
        Win32k = -1073741789;
        WdLogSingleEntry3(3LL, v7, *(_QWORD *)(a2 + 112), -1073741789LL);
        WdLogGlobalForLineNumber = 1306;
        goto LABEL_15;
      }
      v19 = (__int64 (__fastcall *)(PDRIVER_OBJECT))DpiInitializeWin8;
      goto LABEL_55;
    case 0x23004B:
      if ( (unsigned int)v7 < 8 || !v9 )
      {
        Win32k = -1073741789;
        WdLogSingleEntry3(3LL, v7, *(_QWORD *)(a2 + 112), -1073741789LL);
        WdLogGlobalForLineNumber = 1378;
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
    WdLogGlobalForLineNumber = 1492;
    goto LABEL_35;
  }
  IsFeatureEnabled2 = DpiIsFeatureEnabled2(0LL, *((unsigned int **)v10 + 1));
  Win32k = IsFeatureEnabled2;
  if ( IsFeatureEnabled2 < 0 )
  {
    WdLogSingleEntry1(3LL, IsFeatureEnabled2);
    WdLogGlobalForLineNumber = 1502;
  }
LABEL_15:
  *(_QWORD *)(a2 + 56) = v4;
  *(_DWORD *)(a2 + 48) = Win32k;
  IofCompleteRequest((PIRP)a2, 0);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v35);
  if ( v37 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v13, (__int64)&EventProfilerExit, v14, v35);
  return (unsigned int)Win32k;
}
