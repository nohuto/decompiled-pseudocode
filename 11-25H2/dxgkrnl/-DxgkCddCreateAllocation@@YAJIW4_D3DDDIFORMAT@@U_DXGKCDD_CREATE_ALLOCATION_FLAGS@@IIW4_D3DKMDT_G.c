/*
 * XREFs of ?DxgkCddCreateAllocation@@YAJIW4_D3DDDIFORMAT@@U_DXGKCDD_CREATE_ALLOCATION_FLAGS@@IIW4_D3DKMDT_GDISURFACETYPE@@P6APEAXPEBXI@ZPEAX5IPEAI6PEAPEAX6@Z @ 0x140411970
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x140015644 (McTemplateK0q_EtwWriteTransfer.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x14001C110 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x14001C140 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z @ 0x14001EB30 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x14001F490 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z @ 0x14001F610 (--0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140021A60 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140021D20 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x140022CE0 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ @ 0x14002EE30 (--1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z @ 0x140038EBC (--0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ @ 0x14003BE0C (-Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ.c)
 *     Feature_Servicing_GraphicsKernel_CddShadowBuffer__private_IsEnabledDeviceUsageNoInline @ 0x140067E20 (Feature_Servicing_GraphicsKernel_CddShadowBuffer__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     memset @ 0x14009FCC0 (memset.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x140296C50 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DxgkpExpandStackAndCreateStandardAllocation@@YAJPEAVDXGDEVICE@@PEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1403C4210 (-DxgkpExpandStackAndCreateStandardAllocation@@YAJPEAVDXGDEVICE@@PEAU_D3DKM_CREATESTANDARDALLOCAT.c)
 */

__int64 __fastcall DxgkCddCreateAllocation(
        __int64 a1,
        int a2,
        __int64 a3,
        unsigned int a4,
        unsigned int a5,
        int a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        int a10,
        _DWORD *a11,
        _DWORD *a12,
        _QWORD *a13,
        _DWORD *a14)
{
  struct DXGDEVICE *v14; // r14
  char v16; // bl
  __int64 v18; // rdi
  __int64 v19; // rcx
  struct DXGPROCESS *Current; // rax
  __int64 v21; // rcx
  __int64 v22; // rsi
  __int64 CurrentProcess; // rax
  unsigned int v24; // edi
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // r8
  __int64 v28; // rbx
  __int64 v29; // rcx
  __int64 v30; // r8
  bool v31; // zf
  __int64 v33; // r9
  int v34; // eax
  int v35; // eax
  unsigned int v36; // r15d
  int StandardAllocation; // ebx
  int v38; // eax
  __int64 v39; // rcx
  __int64 v40; // r8
  unsigned int v41; // ebx
  int v42; // ebx
  int v43; // eax
  int v44; // eax
  __int64 v45; // rcx
  __int64 v46; // r8
  int v47; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v48; // [rsp+58h] [rbp-A8h]
  char v49; // [rsp+60h] [rbp-A0h]
  char v50[8]; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v51; // [rsp+70h] [rbp-90h]
  struct DXGDEVICE *v52; // [rsp+78h] [rbp-88h] BYREF
  __int64 v53; // [rsp+80h] [rbp-80h]
  __int64 v54; // [rsp+88h] [rbp-78h]
  __int64 v55; // [rsp+90h] [rbp-70h]
  _DWORD *v56; // [rsp+98h] [rbp-68h]
  _BYTE v57[16]; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v58[32]; // [rsp+B0h] [rbp-50h] BYREF
  _QWORD v59[54]; // [rsp+D0h] [rbp-30h] BYREF
  _DWORD *v60; // [rsp+280h] [rbp+180h] BYREF
  int v61; // [rsp+288h] [rbp+188h]
  int v62; // [rsp+28Ch] [rbp+18Ch]
  _QWORD *v63; // [rsp+290h] [rbp+190h] BYREF
  int v64; // [rsp+298h] [rbp+198h]
  int v65; // [rsp+29Ch] [rbp+19Ch]
  _DWORD v66[4]; // [rsp+2A0h] [rbp+1A0h] BYREF
  __int64 v67; // [rsp+2B0h] [rbp+1B0h]
  _BYTE v68[160]; // [rsp+2C0h] [rbp+1C0h] BYREF

  LOBYTE(v14) = 0;
  v47 = -1;
  v16 = a3;
  v54 = a7;
  v55 = a8;
  v53 = a9;
  v56 = a11;
  v60 = a12;
  v63 = a13;
  v51 = a4;
  v18 = (unsigned int)a1;
  v48 = 0LL;
  if ( (qword_14015B4C0 & 2) != 0 )
  {
    v49 = 1;
    v47 = 3017;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, (__int64)&EventProfilerEnter, a3, 3017);
  }
  else
  {
    v49 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v47, 3017);
  Current = DXGPROCESS::GetCurrent(v19);
  v22 = (__int64)Current;
  if ( !Current )
  {
    CurrentProcess = PsGetCurrentProcess(v21);
    v24 = -1073741811;
    WdLogSingleEntry2(2LL, -1073741811LL, CurrentProcess);
    WdLogGlobalForLineNumber = 1019;
    v26 = PsGetCurrentProcess(v25);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"0x%I64x Unexpected process 0x%I64x",
      -1073741811LL,
      v26,
      0LL,
      0LL,
      0LL);
LABEL_9:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v47);
    v31 = v49 == (char)v14;
LABEL_10:
    if ( !v31 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v29, (__int64)&EventProfilerExit, v30, v47);
    return v24;
  }
  v52 = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)v50, v18, Current, &v52);
  v14 = v52;
  if ( !v52 )
  {
    v27 = v18;
    v28 = v18;
    v24 = -1073741811;
    WdLogSingleEntry3(2LL, -1073741811LL, v27, v22);
    WdLogGlobalForLineNumber = 1028;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"0x%I64x Invalid hDevice=0x%I64x specified DXGPROCESS=0x%I64x",
      -1073741811LL,
      v28,
      v22,
      0LL,
      0LL);
    ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)v50);
    goto LABEL_9;
  }
  DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v57, v52);
  DXGADAPTERSTOPRESETLOCKSHARED::DXGADAPTERSTOPRESETLOCKSHARED(
    (DXGADAPTERSTOPRESETLOCKSHARED *)v58,
    *(struct DXGADAPTER **)(*((_QWORD *)v14 + 2) + 16LL),
    1);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v68, (__int64)v14, 0, v33, 0);
  v34 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v68, 0LL);
  v24 = v34;
  if ( v34 < 0 )
  {
    WdLogSingleEntry3(4LL, v34, v14, v22);
    WdLogGlobalForLineNumber = 1046;
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v68);
    DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v58);
    DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v57);
    ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)v50);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v47);
    v31 = v49 == 0;
    goto LABEL_10;
  }
  memset(v59, 0, 424);
  v59[39] = v53;
  LODWORD(v59[40]) = a10;
  v35 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v14 + 2) + 16LL) + 2452LL);
  if ( (v35 & 4) != 0 || (v35 & 0x10000000) != 0 && ((a6 - 6) & 0xFFFFFFFD) == 0 )
  {
    v67 = 0LL;
    v59[3] = v66;
    v41 = v59[0] & 0xFFFFFFE7 | (8 * (v16 & 3));
    v66[0] = a4;
    v36 = a5;
    v66[1] = a5;
    v66[2] = a2;
    v66[3] = a6;
    LODWORD(v59[2]) = 4;
    LODWORD(v59[0]) = v41;
    if ( a6 != 1 )
    {
      if ( a6 == 2 )
      {
        v42 = v41 | 2;
        goto LABEL_43;
      }
      if ( a6 == 5 )
      {
        v42 = v41 | 4;
        v59[4] = v54;
        v59[5] = v55;
        goto LABEL_43;
      }
      if ( a6 != 6 )
      {
        if ( (unsigned int)(a6 - 7) > 1 )
          goto LABEL_44;
        v42 = v41 | 0x21;
LABEL_43:
        LODWORD(v59[0]) = v42;
LABEL_44:
        StandardAllocation = DxgkpExpandStackAndCreateStandardAllocation(
                               v14,
                               (struct _D3DKM_CREATESTANDARDALLOCATION *)v59,
                               (struct COREDEVICEACCESS *)v68);
        if ( StandardAllocation < 0 )
          goto LABEL_30;
        if ( a6 != 1 )
        {
          if ( a6 == 2 || a6 == 5 )
          {
            v38 = HIDWORD(v67);
            if ( !HIDWORD(v67) )
            {
              WdLogSingleEntry0(1LL);
              WdLogGlobalForLineNumber = 1121;
              DxgkLogInternalTriageEvent(
                0LL,
                262146,
                0xFFFFFFFFLL,
                L"0 != GdiSurfaceData.Pitch",
                1121LL,
                0LL,
                0LL,
                0LL,
                0LL);
              v38 = HIDWORD(v67);
            }
LABEL_65:
            *a14 = v38;
            goto LABEL_57;
          }
          if ( a6 == 6 )
            goto LABEL_51;
          if ( a6 != 7 )
          {
            if ( a6 != 8 )
            {
LABEL_57:
              if ( !LODWORD(v59[1]) )
              {
                WdLogSingleEntry0(1LL);
                WdLogGlobalForLineNumber = 1182;
                DxgkLogInternalTriageEvent(
                  0LL,
                  262146,
                  0xFFFFFFFFLL,
                  L"NULL != CreateStandardAlloc.hResource",
                  1182LL,
                  0LL,
                  0LL,
                  0LL,
                  0LL);
              }
              *v56 = HIDWORD(v59[6]);
              COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v68);
              DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v58);
              DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v57);
              ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)v50);
              DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v47);
              if ( v49 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
                McTemplateK0q_EtwWriteTransfer(v45, (__int64)&EventProfilerExit, v46, v47);
              return 0LL;
            }
LABEL_51:
            *v63 = v59[41];
            v43 = HIDWORD(v67);
            if ( !HIDWORD(v67) )
            {
              WdLogSingleEntry0(1LL);
              WdLogGlobalForLineNumber = 1109;
              DxgkLogInternalTriageEvent(
                0LL,
                262146,
                0xFFFFFFFFLL,
                L"0 != GdiSurfaceData.Pitch",
                1109LL,
                0LL,
                0LL,
                0LL,
                0LL);
              v43 = HIDWORD(v67);
            }
            *a14 = v43;
          }
        }
        v44 = HIDWORD(v59[1]);
        if ( !HIDWORD(v59[1]) )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 1116;
          DxgkLogInternalTriageEvent(
            0LL,
            262146,
            0xFFFFFFFFLL,
            L"NULL != CreateStandardAlloc.hGlobalShare",
            1116LL,
            0LL,
            0LL,
            0LL,
            0LL);
          v44 = HIDWORD(v59[1]);
        }
        *v60 = v44;
        goto LABEL_57;
      }
    }
    v42 = v41 | 1;
    goto LABEL_43;
  }
  if ( a6 != 1 )
  {
    if ( a6 != 2 )
    {
      if ( a6 != 3 && a6 != 6 )
        goto LABEL_57;
      goto LABEL_27;
    }
    v62 = 0;
    LODWORD(v59[0]) |= 2u;
    v60 = (_DWORD *)__PAIR64__(a5, a4);
    v36 = a5;
    v59[3] = &v60;
    v61 = a2;
    LODWORD(v59[2]) = 2;
    StandardAllocation = DxgkpExpandStackAndCreateStandardAllocation(
                           v14,
                           (struct _D3DKM_CREATESTANDARDALLOCATION *)v59,
                           (struct COREDEVICEACCESS *)v68);
    if ( StandardAllocation < 0 )
      goto LABEL_30;
    v38 = v62;
    if ( !v62 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 1165;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        0xFFFFFFFFLL,
        L"0 != StagingSurfaceData.Pitch",
        1165LL,
        0LL,
        0LL,
        0LL,
        0LL);
      v38 = v62;
    }
    goto LABEL_65;
  }
LABEL_27:
  v65 = 0;
  v63 = (_QWORD *)__PAIR64__(a5, a4);
  v36 = a5;
  v59[3] = &v63;
  v64 = a2;
  LODWORD(v59[2]) = 2;
  if ( (unsigned int)Feature_Servicing_GraphicsKernel_CddShadowBuffer__private_IsEnabledDeviceUsageNoInline() )
    LODWORD(v59[0]) |= 1u;
  StandardAllocation = DxgkpExpandStackAndCreateStandardAllocation(
                         v14,
                         (struct _D3DKM_CREATESTANDARDALLOCATION *)v59,
                         (struct COREDEVICEACCESS *)v68);
  if ( StandardAllocation >= 0 )
    goto LABEL_57;
LABEL_30:
  WdLogSingleEntry4(3LL, StandardAllocation, v14, v51, v36);
  WdLogGlobalForLineNumber = 1176;
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v68);
  DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v58);
  DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v57);
  ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)v50);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v47);
  if ( v49 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v39, (__int64)&EventProfilerExit, v40, v47);
  return (unsigned int)StandardAllocation;
}
