/*
 * XREFs of DxgkSetGammaRamp @ 0x1403FCA30
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x14000BE00 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x14000CB30 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ??1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ @ 0x14000E5A0 (--1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x14000EF08 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@PEBD@Z @ 0x14000F4A0 (-AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@PEBD@Z.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z @ 0x14000F550 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x14000FEB0 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?Initialize@DXGK_GAMMA_RAMP@@QEAAJW4_D3DDDI_GAMMARAMP_TYPE@@PEBX@Z @ 0x140022020 (-Initialize@DXGK_GAMMA_RAMP@@QEAAJW4_D3DDDI_GAMMARAMP_TYPE@@PEBX@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x140023510 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002D590 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ @ 0x14002F470 (--1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ.c)
 *     ?DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z @ 0x14004A724 (-DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z.c)
 *     ??0DXGK_GAMMA_RAMP@@QEAA@XZ @ 0x1400511B0 (--0DXGK_GAMMA_RAMP@@QEAA@XZ.c)
 *     ?SetDeviceGammaRamp@DXGDEVICE@@QEAAXIPEBUDXGK_GAMMA_RAMP@@@Z @ 0x14006C94C (-SetDeviceGammaRamp@DXGDEVICE@@QEAAXIPEBUDXGK_GAMMA_RAMP@@@Z.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x1400A1BF0 (RtlCopyVolatileMemory.c)
 *     memmove @ 0x1400A1D00 (memmove.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x14029C800 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?MonitorNotifyDXGIGammaRampChange@@YAJPEAXI@Z @ 0x1402DFBB8 (-MonitorNotifyDXGIGammaRampChange@@YAJPEAXI@Z.c)
 *     ?DmmEnumClientVidPnPathTargetsFromSource@@YAJQEAXI_KQEAI@Z @ 0x14031592C (-DmmEnumClientVidPnPathTargetsFromSource@@YAJQEAXI_KQEAI@Z.c)
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
  DXGK_GAMMA_RAMP *v10; // rax
  DXGK_GAMMA_RAMP *v11; // rdi
  __int64 v12; // r15
  size_t v13; // r8
  const void *v14; // rdx
  void *v15; // r9
  char *v16; // rcx
  __int64 v17; // rbx
  __int64 v18; // r8
  int v19; // eax
  char v20; // al
  unsigned int v21; // [rsp+50h] [rbp-118h] BYREF
  enum _D3DDDI_GAMMARAMP_TYPE v22[4]; // [rsp+58h] [rbp-110h] BYREF
  void *Src[2]; // [rsp+68h] [rbp-100h]
  DXGDEVICE *v24; // [rsp+78h] [rbp-F0h] BYREF
  _BYTE v25[8]; // [rsp+80h] [rbp-E8h] BYREF
  _BYTE v26[16]; // [rsp+88h] [rbp-E0h] BYREF
  ReferenceCounted *v27; // [rsp+98h] [rbp-D0h]
  _BYTE v28[160]; // [rsp+A0h] [rbp-C8h] BYREF

  v1 = (const void *)a1;
  Current = DXGPROCESS::GetCurrent(a1);
  if ( !Current )
  {
    v3 = -1073741811;
    WdLogSingleEntry1(2LL, -1073741811LL);
    WdLogGlobalForLineNumber = 4264;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Invalid process context, returning 0x%I64x",
      -1073741811LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return v3;
  }
  *(_OWORD *)v22 = 0LL;
  *(_OWORD *)Src = 0LL;
  if ( (unsigned __int64)v1 >= MmUserProbeAddress )
    v1 = (const void *)MmUserProbeAddress;
  RtlCopyVolatileMemory(v22, v1, 0x20uLL);
  v24 = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)v25, v22[0], (struct _KTHREAD **)Current, &v24);
  v5 = v24;
  if ( !v24 )
  {
    v3 = -1073741811;
    WdLogSingleEntry2(2LL, (unsigned int)v22[0], -1073741811LL);
    WdLogGlobalForLineNumber = 4289;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Invalid hDevice (0x%I64x) specified, returning 0x%I64x",
      (unsigned int)v22[0],
      -1073741811LL,
      0LL,
      0LL,
      0LL);
LABEL_36:
    ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)v25);
    return v3;
  }
  v6 = *((_QWORD *)v24 + 237);
  if ( !v6 )
  {
    v3 = -1073741637;
    WdLogSingleEntry2(3LL, (unsigned int)v22[0], -1073741637LL);
    WdLogGlobalForLineNumber = 4299;
    goto LABEL_36;
  }
  v7 = 0;
  v3 = -1073741811;
  if ( v22[2] == D3DDDI_GAMMARAMP_RGB256x3x16 )
  {
    v7 = (*(_DWORD *)(v6 + 2448) & 1) == 0 ? 0xC000000D : 0;
    if ( LODWORD(Src[1]) != 1536 )
      v7 = -1073741811;
  }
  else if ( v22[2] != D3DDDI_GAMMARAMP_DXGI_1 || LODWORD(Src[1]) != 12324 )
  {
    v7 = -1073741811;
  }
  if ( v7 < 0 )
  {
    WdLogSingleEntry3(3LL, v22[2], (unsigned int)v22[0], v7);
    WdLogGlobalForLineNumber = 4338;
LABEL_19:
    v3 = v7;
    goto LABEL_36;
  }
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v26, v24);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v28, (__int64)v5, 1, v8, 0);
  if ( *(_BYTE *)(*(_QWORD *)(v6 + 3120) + 291LL) )
    v9 = COREDEVICEACCESS::AcquireExclusive((__int64)v28, 1u);
  else
    v9 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v28, 0LL);
  v7 = v9;
  if ( v9 < 0 )
  {
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v28);
    DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v26);
    goto LABEL_19;
  }
  if ( *(_DWORD *)(*(_QWORD *)(v6 + 3120) + 96LL) != *((_DWORD *)v5 + 476) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 4363;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"pDisplayAdapter->GetDisplayCore()->GetNumVidPnSources() == pDevice->GetNumVidPnSources()",
      4363LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( *((_DWORD *)v5 + 476) <= v22[1] )
  {
    WdLogSingleEntry3(3LL, v5, (unsigned int)v22[1], -1073741811LL);
    WdLogGlobalForLineNumber = 4370;
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v28);
    DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v26);
    goto LABEL_36;
  }
  v10 = (DXGK_GAMMA_RAMP *)operator new(0x30uLL, 0x4B677844u, 256LL);
  if ( v10 )
    v11 = DXGK_GAMMA_RAMP::DXGK_GAMMA_RAMP(v10);
  else
    v11 = 0LL;
  v27 = v11;
  if ( !v11 )
  {
    WdLogSingleEntry1(6LL, v5);
    WdLogGlobalForLineNumber = 4383;
    DxgkLogInternalTriageEvent(
      0LL,
      262145LL,
      0xFFFFFFFFLL,
      L"Device 0x%I64x: Unable to allocate gamma ramp.",
      (__int64)v5,
      0LL,
      0LL,
      0LL,
      0LL);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v28);
    DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v26);
    v3 = -1073741801;
    goto LABEL_36;
  }
  LODWORD(v12) = DXGK_GAMMA_RAMP::Initialize(v11, v22[2], 0LL);
  if ( (int)v12 < 0 )
  {
    ReferenceCounted::Release(v11);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v28);
    DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v26);
    v3 = v12;
    goto LABEL_36;
  }
  v13 = LODWORD(Src[1]);
  v14 = Src[0];
  v15 = (void *)*((_QWORD *)v11 + 4);
  v16 = (char *)Src[0] + LODWORD(Src[1]);
  if ( v16 < Src[0] || (unsigned __int64)v16 > MmUserProbeAddress )
    *(_BYTE *)MmUserProbeAddress = 0;
  memmove(v15, v14, v13);
  DXGDEVICE::SetDeviceGammaRamp(v5, v22[1], v11);
  v17 = 0LL;
  v21 = -1;
  while ( 1 )
  {
    v18 = v17++;
    if ( (int)DmmEnumClientVidPnPathTargetsFromSource((_QWORD *)v6, v22[1], v18, &v21) < 0 || v21 == -1 )
      break;
    v19 = MonitorNotifyDXGIGammaRampChange((DXGADAPTER *)v6, v21);
    v12 = v19;
    if ( v19 < 0 )
    {
      WdLogSingleEntry1(2LL, v19);
      WdLogGlobalForLineNumber = 4433;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"Failed to DXGI gamma ramp, (Status == 0x%I64x)!",
        v12,
        0LL,
        0LL,
        0LL,
        0LL);
      break;
    }
  }
  v20 = *((_BYTE *)Current + 412);
  *((_BYTE *)Current + 412) = 1;
  if ( !v20 )
    DxgkLogCodePointPacket(0x5Eu, 3u, v12, 0, *(_QWORD *)(v6 + 412));
  ReferenceCounted::Release(v11);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v28);
  DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v26);
  ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)v25);
  return (unsigned int)v12;
}
