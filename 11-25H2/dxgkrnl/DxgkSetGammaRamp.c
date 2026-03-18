/*
 * XREFs of DxgkSetGammaRamp @ 0x140402BB0
 * Callers:
 *     <none>
 * Callees:
 *     ?Initialize@DXGK_GAMMA_RAMP@@QEAAJW4_D3DDDI_GAMMARAMP_TYPE@@PEBX@Z @ 0x140012B90 (-Initialize@DXGK_GAMMA_RAMP@@QEAAJW4_D3DDDI_GAMMARAMP_TYPE@@PEBX@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x14001B3E0 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x14001C110 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ??1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ @ 0x14001DB80 (--1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x14001E4E8 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@PEBD@Z @ 0x14001EA80 (-AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@PEBD@Z.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z @ 0x14001EB30 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x14001F490 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x140022CE0 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002CD80 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ @ 0x14002EE30 (--1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ.c)
 *     ?DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z @ 0x14004ABD8 (-DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z.c)
 *     ??0DXGK_GAMMA_RAMP@@QEAA@XZ @ 0x1400518A0 (--0DXGK_GAMMA_RAMP@@QEAA@XZ.c)
 *     ?SetDeviceGammaRamp@DXGDEVICE@@QEAAXIPEBUDXGK_GAMMA_RAMP@@@Z @ 0x14006CC38 (-SetDeviceGammaRamp@DXGDEVICE@@QEAAXIPEBUDXGK_GAMMA_RAMP@@@Z.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x14009F890 (RtlCopyVolatileMemory.c)
 *     memmove @ 0x14009F9C0 (memmove.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x140296C50 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DmmEnumClientVidPnPathTargetsFromSource@@YAJQEAXI_KQEAI@Z @ 0x1402D5A28 (-DmmEnumClientVidPnPathTargetsFromSource@@YAJQEAXI_KQEAI@Z.c)
 *     ?MonitorNotifyDXGIGammaRampChange@@YAJPEAXI@Z @ 0x1402D78FC (-MonitorNotifyDXGIGammaRampChange@@YAJPEAXI@Z.c)
 */

__int64 __fastcall DxgkSetGammaRamp(__int64 a1)
{
  const void *v1; // rbx
  struct DXGPROCESS *Current; // r12
  unsigned int v3; // ebx
  DXGDEVICE *v5; // rsi
  __int64 v6; // r13
  signed int v7; // edi
  __int64 v8; // r9
  int v9; // eax
  __int64 v10; // r9
  DXGK_GAMMA_RAMP *v11; // rax
  DXGK_GAMMA_RAMP *v12; // rdi
  __int64 v13; // r15
  size_t v14; // r8
  const void *v15; // rdx
  void *v16; // r9
  char *v17; // rcx
  __int64 v18; // rbx
  __int64 v19; // r8
  int v20; // eax
  char v21; // al
  unsigned int v22; // [rsp+50h] [rbp-118h] BYREF
  enum _D3DDDI_GAMMARAMP_TYPE v23[4]; // [rsp+58h] [rbp-110h] BYREF
  void *Src[2]; // [rsp+68h] [rbp-100h]
  DXGDEVICE *v25; // [rsp+78h] [rbp-F0h] BYREF
  _BYTE v26[8]; // [rsp+80h] [rbp-E8h] BYREF
  _BYTE v27[16]; // [rsp+88h] [rbp-E0h] BYREF
  ReferenceCounted *v28; // [rsp+98h] [rbp-D0h]
  _BYTE v29[160]; // [rsp+A0h] [rbp-C8h] BYREF

  v1 = (const void *)a1;
  Current = DXGPROCESS::GetCurrent(a1);
  if ( !Current )
  {
    v3 = -1073741811;
    WdLogSingleEntry1(2LL, -1073741811LL);
    WdLogGlobalForLineNumber = 4124;
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
    return v3;
  }
  *(_OWORD *)v23 = 0LL;
  *(_OWORD *)Src = 0LL;
  if ( (unsigned __int64)v1 >= MmUserProbeAddress )
    v1 = (const void *)MmUserProbeAddress;
  RtlCopyVolatileMemory(v23, v1, 0x20uLL);
  v25 = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)v26, v23[0], Current, &v25);
  v5 = v25;
  if ( !v25 )
  {
    v3 = -1073741811;
    WdLogSingleEntry2(2LL, (unsigned int)v23[0], -1073741811LL);
    WdLogGlobalForLineNumber = 4149;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Invalid hDevice (0x%I64x) specified, returning 0x%I64x",
      (unsigned int)v23[0],
      -1073741811LL,
      0LL,
      0LL,
      0LL);
LABEL_36:
    ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)v26);
    return v3;
  }
  v6 = *((_QWORD *)v25 + 235);
  if ( !v6 )
  {
    v3 = -1073741637;
    WdLogSingleEntry2(3LL, (unsigned int)v23[0], -1073741637LL);
    WdLogGlobalForLineNumber = 4159;
    goto LABEL_36;
  }
  v7 = 0;
  v3 = -1073741811;
  if ( v23[2] == D3DDDI_GAMMARAMP_RGB256x3x16 )
  {
    v7 = (*(_DWORD *)(v6 + 2448) & 1) == 0 ? 0xC000000D : 0;
    if ( LODWORD(Src[1]) != 1536 )
      v7 = -1073741811;
  }
  else if ( v23[2] != D3DDDI_GAMMARAMP_DXGI_1 || LODWORD(Src[1]) != 12324 )
  {
    v7 = -1073741811;
  }
  if ( v7 < 0 )
  {
    WdLogSingleEntry3(3LL, v23[2], (unsigned int)v23[0], v7);
    WdLogGlobalForLineNumber = 4198;
LABEL_19:
    v3 = v7;
    goto LABEL_36;
  }
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v27, v25);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v29, (__int64)v5, 1, v8, 0);
  if ( *(_BYTE *)(*(_QWORD *)(v6 + 3120) + 291LL) )
    v9 = COREDEVICEACCESS::AcquireExclusive((__int64)v29, 1u);
  else
    v9 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v29, 0LL);
  v7 = v9;
  if ( v9 < 0 )
  {
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v29);
    DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v27);
    goto LABEL_19;
  }
  if ( *(_DWORD *)(*(_QWORD *)(v6 + 3120) + 96LL) != *((_DWORD *)v5 + 472) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 4223;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"pDisplayAdapter->GetDisplayCore()->GetNumVidPnSources() == pDevice->GetNumVidPnSources()",
      4223LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( *((_DWORD *)v5 + 472) <= v23[1] )
  {
    WdLogSingleEntry3(3LL, v5, (unsigned int)v23[1], -1073741811LL);
    WdLogGlobalForLineNumber = 4230;
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v29);
    DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v27);
    goto LABEL_36;
  }
  v11 = (DXGK_GAMMA_RAMP *)operator new(0x30uLL, 0x4B677844u, 256LL, v10);
  if ( v11 )
    v12 = DXGK_GAMMA_RAMP::DXGK_GAMMA_RAMP(v11);
  else
    v12 = 0LL;
  v28 = v12;
  if ( !v12 )
  {
    WdLogSingleEntry1(6LL, v5);
    WdLogGlobalForLineNumber = 4243;
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      0xFFFFFFFFLL,
      L"Device 0x%I64x: Unable to allocate gamma ramp.",
      (__int64)v5,
      0LL,
      0LL,
      0LL,
      0LL);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v29);
    DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v27);
    v3 = -1073741801;
    goto LABEL_36;
  }
  LODWORD(v13) = DXGK_GAMMA_RAMP::Initialize(v12, v23[2], 0LL);
  if ( (int)v13 < 0 )
  {
    ReferenceCounted::Release(v12);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v29);
    DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v27);
    v3 = v13;
    goto LABEL_36;
  }
  v14 = LODWORD(Src[1]);
  v15 = Src[0];
  v16 = (void *)*((_QWORD *)v12 + 4);
  v17 = (char *)Src[0] + LODWORD(Src[1]);
  if ( v17 < Src[0] || (unsigned __int64)v17 > MmUserProbeAddress )
    *(_BYTE *)MmUserProbeAddress = 0;
  memmove(v16, v15, v14);
  DXGDEVICE::SetDeviceGammaRamp(v5, v23[1], v12);
  v18 = 0LL;
  v22 = -1;
  while ( 1 )
  {
    v19 = v18++;
    if ( (int)DmmEnumClientVidPnPathTargetsFromSource((_QWORD *)v6, v23[1], v19, &v22) < 0 || v22 == -1 )
      break;
    v20 = MonitorNotifyDXGIGammaRampChange((DXGADAPTER *)v6, v22);
    v13 = v20;
    if ( v20 < 0 )
    {
      WdLogSingleEntry1(2LL, v20);
      WdLogGlobalForLineNumber = 4293;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"Failed to DXGI gamma ramp, (Status == 0x%I64x)!",
        v13,
        0LL,
        0LL,
        0LL,
        0LL);
      break;
    }
  }
  v21 = *((_BYTE *)Current + 412);
  *((_BYTE *)Current + 412) = 1;
  if ( !v21 )
    DxgkLogCodePointPacket(0x5Eu, 3u, v13, 0, *(_QWORD *)(v6 + 412));
  ReferenceCounted::Release(v12);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v29);
  DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v27);
  ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)v26);
  return (unsigned int)v13;
}
