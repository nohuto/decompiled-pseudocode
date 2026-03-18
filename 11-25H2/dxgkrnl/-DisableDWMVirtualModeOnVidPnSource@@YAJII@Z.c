/*
 * XREFs of ?DisableDWMVirtualModeOnVidPnSource@@YAJII@Z @ 0x1401B7878
 * Callers:
 *     DxgkSetVidPnSourceOwner @ 0x1403D2690 (DxgkSetVidPnSourceOwner.c)
 * Callees:
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1400136BC (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140013780 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x14001C110 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ??1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ @ 0x14001DB80 (--1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x14001E4E8 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@PEBD@Z @ 0x14001EA80 (-AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@PEBD@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x14001F490 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x140022CE0 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ @ 0x14002EE30 (--1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x140034400 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?ContextScopeConstructor@CDisplayScenarioContextScope@@QEAAXPEBU_GUID@@II@Z @ 0x1400354D0 (-ContextScopeConstructor@CDisplayScenarioContextScope@@QEAAXPEBU_GUID@@II@Z.c)
 *     ??0MANAGEDPRIMARIESTRACKER@@QEAA@PEAVADAPTER_DISPLAY@@PEAVDXGPROCESS@@@Z @ 0x140038630 (--0MANAGEDPRIMARIESTRACKER@@QEAA@PEAVADAPTER_DISPLAY@@PEAVDXGPROCESS@@@Z.c)
 *     ??1CDisplayScenarioContextScope@@QEAA@XZ @ 0x140043904 (--1CDisplayScenarioContextScope@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     DxgkNotifyDisplayChange @ 0x1401F6724 (DxgkNotifyDisplayChange.c)
 *     ?DisableDWMCloneAndDWMVirtualMode@CCD_TOPOLOGY@@QEAAJPEAU_LUID@@I@Z @ 0x140261064 (-DisableDWMCloneAndDWMVirtualMode@CCD_TOPOLOGY@@QEAAJPEAU_LUID@@I@Z.c)
 *     ?AcquireWin32kDwmStateAndPDevLocks@MANAGEDPRIMARIESTRACKER@@QEAAXXZ @ 0x140286A00 (-AcquireWin32kDwmStateAndPDevLocks@MANAGEDPRIMARIESTRACKER@@QEAAXXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x140296C50 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     DxgkGetGlobalRawmodeFlag @ 0x1402C2A80 (DxgkGetGlobalRawmodeFlag.c)
 *     ??1CCD_TOPOLOGY@@QEAA@XZ @ 0x1402CDFF8 (--1CCD_TOPOLOGY@@QEAA@XZ.c)
 *     ?ApplyTopology@CCD_TOPOLOGY@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14031B21C (-ApplyTopology@CCD_TOPOLOGY@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?Functionalize@CCD_TOPOLOGY@@QEAAJI_N@Z @ 0x140373174 (-Functionalize@CCD_TOPOLOGY@@QEAAJI_N@Z.c)
 *     ??0CCD_TOPOLOGY@@QEAA@GG@Z @ 0x140373D4C (--0CCD_TOPOLOGY@@QEAA@GG@Z.c)
 *     ?RetrieveActive@CCD_TOPOLOGY@@QEAAJ_N00PEAG@Z @ 0x140373DCC (-RetrieveActive@CCD_TOPOLOGY@@QEAAJ_N00PEAG@Z.c)
 *     ?Reserve@CCD_TOPOLOGY@@QEAAGG@Z @ 0x140374C0C (-Reserve@CCD_TOPOLOGY@@QEAAGG@Z.c)
 *     ??1MANAGEDPRIMARIESTRACKER@@QEAA@XZ @ 0x14039A4CC (--1MANAGEDPRIMARIESTRACKER@@QEAA@XZ.c)
 */

__int64 __fastcall DisableDWMVirtualModeOnVidPnSource(unsigned int a1, unsigned int a2)
{
  __int64 v3; // rsi
  struct DXGPROCESS *Current; // rax
  __int64 v5; // rdi
  struct DXGDEVICE *v7; // rbx
  __int64 v8; // r14
  __int64 v9; // r9
  unsigned __int16 v10; // bx
  int v11; // eax
  const wchar_t *v12; // r9
  int v13; // eax
  unsigned int v14; // ebx
  int v15; // eax
  int v16; // eax
  __int64 v17; // rcx
  unsigned int i; // edx
  __int64 v19; // r8
  unsigned __int16 v20; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v21[16]; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE v22[8]; // [rsp+68h] [rbp-98h] BYREF
  struct DXGDEVICE *v23; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v24[24]; // [rsp+78h] [rbp-88h] BYREF
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v25[2]; // [rsp+90h] [rbp-70h] BYREF
  struct _LUID v26; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v27[64]; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v28; // [rsp+F0h] [rbp-10h]
  _BYTE v29[432]; // [rsp+120h] [rbp+20h] BYREF
  _BYTE v30[160]; // [rsp+2D0h] [rbp+1D0h] BYREF

  v3 = a1;
  Current = DXGPROCESS::GetCurrent();
  v5 = (__int64)Current;
  if ( !Current )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 3397;
    DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, L"Invalid process context", 3397LL, 0LL, 0LL, 0LL, 0LL);
    return 3221225485LL;
  }
  v23 = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)v22, v3, Current, &v23);
  v7 = v23;
  if ( !v23 )
  {
    WdLogSingleEntry1(2LL, v3);
    WdLogGlobalForLineNumber = 3405;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Invalid hDevice (0x%I64x) specified",
      v3,
      0LL,
      0LL,
      0LL,
      0LL);
    LODWORD(v5) = -1073741811;
LABEL_24:
    ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)v22);
    return (unsigned int)v5;
  }
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v21, v23);
  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v24, (struct _KTHREAD **)v7 + 18);
  v8 = *((_QWORD *)v7 + 235);
  if ( !v8 )
  {
    WdLogSingleEntry1(2LL, v3);
    WdLogGlobalForLineNumber = 3415;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"DisableDWMVirtualModeOnVidPnSource function cannot be called on a render only device (0x%I64x)",
      v3,
      0LL,
      0LL,
      0LL,
      0LL);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v24);
    DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v21);
    LODWORD(v5) = -1073741637;
    goto LABEL_24;
  }
  MANAGEDPRIMARIESTRACKER::MANAGEDPRIMARIESTRACKER(
    (MANAGEDPRIMARIESTRACKER *)v29,
    *(struct ADAPTER_DISPLAY **)(v8 + 3120),
    (struct DXGPROCESS *)v5);
  MANAGEDPRIMARIESTRACKER::AcquireWin32kDwmStateAndPDevLocks((MANAGEDPRIMARIESTRACKER *)v29);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v30, (__int64)v7, 1, v9, 0);
  LODWORD(v5) = COREDEVICEACCESS::AcquireExclusive((__int64)v30, 2u);
  if ( (int)v5 < 0 )
  {
LABEL_23:
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v30);
    MANAGEDPRIMARIESTRACKER::~MANAGEDPRIMARIESTRACKER((MANAGEDPRIMARIESTRACKER *)v29);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v24);
    DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v21);
    goto LABEL_24;
  }
  v26 = *(struct _LUID *)(v8 + 412);
  COREDEVICEACCESS::Release((COREDEVICEACCESS *)v30);
  v10 = 8;
  CCD_TOPOLOGY::CCD_TOPOLOGY((CCD_TOPOLOGY *)v27, 8u, 0);
  v20 = 8;
  while ( CCD_TOPOLOGY::Reserve((CCD_TOPOLOGY *)v27, v10) >= v10 )
  {
    v11 = CCD_TOPOLOGY::RetrieveActive((CCD_TOPOLOGY *)v27, 0, 0, 0, &v20);
    v5 = v11;
    if ( v11 != -1073741789 )
    {
      if ( v11 < 0 )
      {
        WdLogSingleEntry1(2LL, v11);
        v12 = L"Failed to set active topology, Status = 0x%I64x)";
        WdLogGlobalForLineNumber = 3462;
        goto LABEL_14;
      }
      v13 = CCD_TOPOLOGY::DisableDWMCloneAndDWMVirtualMode((CCD_TOPOLOGY *)v27, &v26, a2);
      v5 = v13;
      if ( v13 < 0 )
      {
        WdLogSingleEntry1(2LL, v13);
        v12 = L"Failed to set physical mode/IHV clone, (Status = 0x%I64x)";
        WdLogGlobalForLineNumber = 3472;
        goto LABEL_14;
      }
      v14 = (unsigned __int8)DxgkGetGlobalRawmodeFlag() != 0 ? 0x20000 : 0;
      v15 = CCD_TOPOLOGY::Functionalize((CCD_TOPOLOGY *)v27, v14, 0);
      v5 = v15;
      if ( v15 >= 0 )
      {
        LOBYTE(v25[0]) = 0;
        CDisplayScenarioContextScope::ContextScopeConstructor(v25, 0LL, 0x39u, 0);
        v16 = CCD_TOPOLOGY::ApplyTopology((CCD_TOPOLOGY *)v27, v14, v25[1]);
        v5 = v16;
        if ( v16 >= 0 )
        {
          v17 = *(_QWORD *)(v28 + 48);
          if ( v17 )
          {
            for ( i = 0; i < *(_DWORD *)(v28 + 40); ++i )
            {
              v19 = 340LL * i;
              if ( *(_DWORD *)(v19 + v17 + 88) || *(_DWORD *)(v19 + v17 + 92) || *(_DWORD *)(v19 + v17 + 124) )
              {
                DxgkNotifyDisplayChange(0LL);
                break;
              }
            }
          }
        }
        else
        {
          WdLogSingleEntry1(2LL, v16);
          WdLogGlobalForLineNumber = 3498;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            0xFFFFFFFFLL,
            L"Failed to apply the new topology, (Status = 0x%I64x)",
            v5,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        CDisplayScenarioContextScope::~CDisplayScenarioContextScope(v25);
      }
      else
      {
        WdLogSingleEntry1(2LL, v15);
        v12 = L"Failed to functionalize the new topology, (Status = 0x%I64x)";
        WdLogGlobalForLineNumber = 3487;
LABEL_14:
        DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, v12, v5, 0LL, 0LL, 0LL, 0LL);
      }
      CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)v27);
      goto LABEL_23;
    }
    v10 = v20;
  }
  WdLogSingleEntry1(6LL, v10);
  WdLogGlobalForLineNumber = 3453;
  DxgkLogInternalTriageEvent(
    0LL,
    262145,
    0xFFFFFFFFLL,
    L"Failed to reserve the memory for active topology. (RequiredPathsCount = %I64u)",
    v10,
    0LL,
    0LL,
    0LL,
    0LL);
  CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)v27);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v30);
  MANAGEDPRIMARIESTRACKER::~MANAGEDPRIMARIESTRACKER((MANAGEDPRIMARIESTRACKER *)v29);
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v24);
  DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v21);
  ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)v22);
  return 3221225495LL;
}
