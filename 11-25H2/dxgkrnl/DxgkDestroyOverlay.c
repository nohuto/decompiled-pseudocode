/*
 * XREFs of DxgkDestroyOverlay @ 0x1401E39B0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x140015644 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1400196D0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1400199A0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14001AFC0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x14001C1A0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXPEBD@Z @ 0x14001D9E0 (-AcquireShared@COREACCESS@@QEAAXPEBD@Z.c)
 *     ??1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ @ 0x14001DB80 (--1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ??0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z @ 0x14001E450 (--0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x14001E4E8 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140021A60 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140021D20 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x140022CE0 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??0DXGOVERLAYMUTEX@@QEAA@PEAVADAPTER_RENDER@@@Z @ 0x1400287A4 (--0DXGOVERLAYMUTEX@@QEAA@PEAVADAPTER_RENDER@@@Z.c)
 *     ??1DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@XZ @ 0x14002CEA8 (--1DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ??1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ @ 0x14002EE30 (--1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x14003583C (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?IsSupportOverlay@DXGDEVICE@@QEAAEXZ @ 0x140076738 (-IsSupportOverlay@DXGDEVICE@@QEAAEXZ.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x14009F890 (RtlCopyVolatileMemory.c)
 *     ?DestroyOverlay@DXGDEVICE@@QEAAXPEAVDXGOVERLAY@@@Z @ 0x1401B73F0 (-DestroyOverlay@DXGDEVICE@@QEAAXPEAVDXGOVERLAY@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x140296C50 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkDestroyOverlay(__int64 a1, __int64 a2, __int64 a3)
{
  const void *v3; // rbx
  struct DXGPROCESS *Current; // rdi
  DXGDEVICE *v5; // rbx
  unsigned __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  unsigned int v10; // r9d
  unsigned int v11; // eax
  __int64 v12; // r8
  int v13; // edx
  __int64 v14; // rbx
  struct ADAPTER_RENDER **v15; // rsi
  unsigned __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  unsigned int v19; // r9d
  __int64 v20; // rax
  __int64 v21; // r8
  int v22; // edx
  unsigned int v23[2]; // [rsp+50h] [rbp-C8h] BYREF
  int v24; // [rsp+58h] [rbp-C0h] BYREF
  __int64 v25; // [rsp+60h] [rbp-B8h]
  char v26; // [rsp+68h] [rbp-B0h]
  _BYTE v27[8]; // [rsp+70h] [rbp-A8h] BYREF
  DXGDEVICE *v28; // [rsp+78h] [rbp-A0h] BYREF
  _BYTE v29[16]; // [rsp+80h] [rbp-98h] BYREF
  _BYTE v30[16]; // [rsp+90h] [rbp-88h] BYREF
  _BYTE v31[32]; // [rsp+A0h] [rbp-78h] BYREF
  _BYTE v32[64]; // [rsp+C0h] [rbp-58h] BYREF

  v3 = (const void *)a1;
  v24 = -1;
  v25 = 0LL;
  if ( (qword_14015B4C0 & 2) != 0 )
  {
    v26 = 1;
    v24 = 2025;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, (__int64)&EventProfilerEnter, a3, 2025);
  }
  else
  {
    v26 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v24, 2025);
  Current = DXGPROCESS::GetCurrent();
  if ( !Current )
  {
    WdLogSingleEntry1(2LL, -1073741811LL);
    WdLogGlobalForLineNumber = 909;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Invalid process context, returning 0x%I64x",
      -1073741811LL,
      0LL,
      0LL,
      0LL,
      0LL);
LABEL_30:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v24);
    if ( v26 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v17, (__int64)&EventProfilerExit, v18, v24);
    }
    return 3221225485LL;
  }
  *(_QWORD *)v23 = 0LL;
  if ( (unsigned __int64)v3 >= MmUserProbeAddress )
    v3 = (const void *)MmUserProbeAddress;
  RtlCopyVolatileMemory(v23, v3, 8uLL);
  v28 = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)v27, v23[0], Current, &v28);
  v5 = v28;
  if ( !v28 )
  {
    WdLogSingleEntry2(2LL, v23[0], -1073741811LL);
    WdLogGlobalForLineNumber = 934;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Invalid hDevice (0x%I64x) specified, returning 0x%I64x",
      v23[0],
      -1073741811LL,
      0LL,
      0LL,
      0LL);
LABEL_29:
    ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)v27);
    goto LABEL_30;
  }
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v29, v28);
  COREACCESS::COREACCESS((COREACCESS *)v32, *(struct DXGADAPTER *const *)(*((_QWORD *)v5 + 2) + 16LL));
  COREACCESS::AcquireShared((COREACCESS *)v32, 0LL);
  if ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v5 + 2) + 16LL) + 200LL) != 4 )
  {
    DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v31, Current);
    v10 = v23[1];
    v11 = (v23[1] >> 6) & 0xFFFFFF;
    if ( v11 < *((_DWORD *)Current + 74) )
    {
      v12 = *((_QWORD *)Current + 35);
      if ( ((v23[1] >> 25) & 0x60) == (*(_BYTE *)(v12 + 16LL * v11 + 8) & 0x60)
        && (*(_DWORD *)(v12 + 16LL * v11 + 8) & 0x2000) == 0 )
      {
        v13 = *(_DWORD *)(v12 + 16LL * v11 + 8) & 0x1F;
        if ( v13 )
        {
          if ( v13 == 6 )
          {
            v14 = *(_QWORD *)(v12 + 16LL * v11);
LABEL_23:
            if ( v14 )
            {
              v15 = (struct ADAPTER_RENDER **)v28;
              if ( v28 == *(DXGDEVICE **)(v14 + 16) )
              {
                if ( !DXGDEVICE::IsSupportOverlay(v28) )
                {
                  WdLogSingleEntry0(1LL);
                  WdLogGlobalForLineNumber = 984;
                  DxgkLogInternalTriageEvent(
                    0LL,
                    262146,
                    0xFFFFFFFFLL,
                    L"pDevice->IsSupportOverlay()",
                    984LL,
                    0LL,
                    0LL,
                    0LL,
                    0LL);
                  v19 = v23[1];
                }
                v20 = (v19 >> 6) & 0xFFFFFF;
                if ( (unsigned int)v20 < *((_DWORD *)Current + 74) )
                {
                  v21 = *((_QWORD *)Current + 35);
                  v22 = *(_DWORD *)(v21 + 16 * v20 + 8);
                  if ( ((v19 >> 25) & 0x60) == (*(_BYTE *)(v21 + 16 * v20 + 8) & 0x60)
                    && (v22 & 0x2000) == 0
                    && (v22 & 0x1F) != 0 )
                  {
                    *(_DWORD *)(v21 + 16LL * ((v19 >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
                  }
                }
                DXGHANDLETABLELOCKEXCLUSIVE::~DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v31);
                DXGOVERLAYMUTEX::DXGOVERLAYMUTEX((DXGOVERLAYMUTEX *)v30, v15[2]);
                DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v30);
                DXGDEVICE::DestroyOverlay((DXGDEVICE *)v15, (struct DXGOVERLAY ***)v14);
                DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v30);
                DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v30);
                goto LABEL_12;
              }
              WdLogSingleEntry3(3LL, v10, v23[0], -1073741811LL);
              WdLogGlobalForLineNumber = 979;
            }
            else
            {
              WdLogSingleEntry2(3LL, v10, -1073741811LL);
              WdLogGlobalForLineNumber = 969;
            }
            DXGHANDLETABLELOCKEXCLUSIVE::~DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v31);
            COREACCESS::~COREACCESS((COREACCESS *)v32, v16);
            DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v29);
            goto LABEL_29;
          }
          WdLogSingleEntry0(2LL);
          WdLogGlobalForLineNumber = 318;
          DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
          v10 = v23[1];
        }
      }
    }
    v14 = 0LL;
    goto LABEL_23;
  }
LABEL_12:
  COREACCESS::~COREACCESS((COREACCESS *)v32, v6);
  DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v29);
  ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)v27);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v24);
  if ( v26 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v7, (__int64)&EventProfilerExit, v8, v24);
  return 0LL;
}
