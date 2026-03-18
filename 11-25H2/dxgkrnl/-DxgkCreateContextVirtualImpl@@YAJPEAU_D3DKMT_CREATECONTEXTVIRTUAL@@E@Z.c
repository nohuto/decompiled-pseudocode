/*
 * XREFs of ?DxgkCreateContextVirtualImpl@@YAJPEAU_D3DKMT_CREATECONTEXTVIRTUAL@@E@Z @ 0x140338218
 * Callers:
 *     DxgkCreateContextVirtualInternal @ 0x1401B6950 (DxgkCreateContextVirtualInternal.c)
 *     ?VmBusCreateContextVirtual@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x14021AA90 (-VmBusCreateContextVirtual@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     DxgkCreateContextVirtual @ 0x1403364D0 (DxgkCreateContextVirtual.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x1400110B0 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140013010 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140015644 (McTemplateK0q_EtwWriteTransfer.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x14001C110 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ??1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ @ 0x14001DB80 (--1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x14001E4E8 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z @ 0x14001EB30 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x14001F490 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140021A60 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140021D20 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x140022CE0 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x14002EC00 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ??1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ @ 0x14002EE30 (--1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ.c)
 *     ?NodeSupportsGpuVa@ADAPTER_RENDER@@QEBAEII@Z @ 0x14004C1F4 (-NodeSupportsGpuVa@ADAPTER_RENDER@@QEBAEII@Z.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x14009F890 (RtlCopyVolatileMemory.c)
 *     memmove @ 0x14009F9C0 (memmove.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x140296C50 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1402A5938 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?CreateContext@DXGDEVICE@@QEAAJPEAPEAVDXGCONTEXT@@IIU_D3DDDI_CREATECONTEXTFLAGS@@PEAXIW4_D3DKMT_CLIENTHINT@@E@Z @ 0x1403364E8 (-CreateContext@DXGDEVICE@@QEAAJPEAPEAVDXGCONTEXT@@IIU_D3DDDI_CREATECONTEXTFLAGS@@PEAXIW4_D3DKMT_.c)
 *     ?GetHighestBitPos@@YAII@Z @ 0x140338B68 (-GetHighestBitPos@@YAII@Z.c)
 *     ?GetBitCount@@YAII@Z @ 0x140338B7C (-GetBitCount@@YAII@Z.c)
 */

__int64 __fastcall DxgkCreateContextVirtualImpl(struct _D3DKMT_CREATECONTEXTVIRTUAL *a1, char a2, __int64 a3)
{
  __int64 v5; // rcx
  struct DXGPROCESS *Current; // rsi
  struct _D3DKMT_CREATECONTEXTVIRTUAL *v7; // rdx
  struct DXGDEVICE *v8; // r15
  ADAPTER_RENDER *v9; // rsi
  unsigned int HighestBitPos; // eax
  __int64 v11; // r8
  __int64 v12; // r11
  __int64 v13; // r8
  unsigned int v14; // r9d
  unsigned int v15; // r10d
  __int64 v16; // r11
  unsigned int v17; // r12d
  void *v18; // rsi
  __int64 v19; // r9
  __int64 v20; // r9
  int v21; // r14d
  size_t v22; // r8
  const void *v23; // rdx
  char *v24; // rcx
  unsigned int v25; // edx
  _DWORD *p_hContext; // rcx
  size_t v27; // r8
  void *v28; // rcx
  char *v29; // rax
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // rcx
  __int64 v36; // r8
  struct DXGDEVICE *v37; // [rsp+50h] [rbp-158h] BYREF
  int v38; // [rsp+58h] [rbp-150h] BYREF
  __int64 v39; // [rsp+60h] [rbp-148h]
  char v40; // [rsp+68h] [rbp-140h]
  struct DXGCONTEXT *v41; // [rsp+70h] [rbp-138h] BYREF
  unsigned int v42; // [rsp+78h] [rbp-130h] BYREF
  struct _D3DDDI_CREATECONTEXTFLAGS v43[4]; // [rsp+80h] [rbp-128h] BYREF
  void *Src[2]; // [rsp+90h] [rbp-118h]
  __int64 v45; // [rsp+A0h] [rbp-108h]
  struct DXGDEVICE *v46; // [rsp+A8h] [rbp-100h] BYREF
  void *v47; // [rsp+B0h] [rbp-F8h]
  _BYTE v48[24]; // [rsp+B8h] [rbp-F0h] BYREF
  _BYTE v49[160]; // [rsp+D0h] [rbp-D8h] BYREF

  v41 = (struct DXGCONTEXT *)a1;
  v38 = -1;
  v39 = 0LL;
  if ( (qword_14015B4C0 & 2) != 0 )
  {
    v40 = 1;
    v38 = 2039;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, (__int64)&EventProfilerEnter, a3, 2039);
  }
  else
  {
    v40 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v38, 2039);
  Current = DXGPROCESS::GetCurrent(v5);
  if ( !Current )
  {
    WdLogSingleEntry1(2LL, -1073741811LL);
    WdLogGlobalForLineNumber = 223;
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
    goto LABEL_68;
  }
  *(_OWORD *)&v43[0].0 = 0LL;
  *(_OWORD *)Src = 0LL;
  v45 = 0LL;
  if ( a2 )
  {
    v7 = a1;
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      v7 = (struct _D3DKMT_CREATECONTEXTVIRTUAL *)MmUserProbeAddress;
    RtlCopyVolatileMemory(v43, v7, 0x28uLL);
  }
  else
  {
    *(_OWORD *)&v43[0].0 = *(_OWORD *)&a1->hDevice;
    *(_OWORD *)Src = *(_OWORD *)&a1->pPrivateDriverData;
    v45 = *(_QWORD *)&a1->hContext;
  }
  if ( !g_OSTestSigningEnabled && ((*(_BYTE *)&v43[3].0 & 0x20) != 0 || (*(_BYTE *)&v43[3].0 & 0x40) != 0) )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 253;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"NoKmdAccess and TestContext can be used only with testsigning",
      253LL,
      0LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_68;
  }
  v46 = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v37, v43[0].Value, Current, &v46);
  v8 = v46;
  if ( !v46 )
  {
    WdLogSingleEntry2(2LL, v43[0].Value, -1073741811LL);
    WdLogGlobalForLineNumber = 264;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Invalid hDevice (0x%I64x) specified, returning 0x%I64x",
      v43[0].Value,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_19;
  }
  v9 = (ADAPTER_RENDER *)*((_QWORD *)v46 + 2);
  HighestBitPos = GetHighestBitPos(v43[2].Value);
  if ( HighestBitPos >= *(_DWORD *)(v12 + 296) )
  {
    WdLogSingleEntry2(3LL, v11, -1073741811LL);
    WdLogGlobalForLineNumber = 278;
    goto LABEL_65;
  }
  if ( v43[1].Value >= *(unsigned __int16 *)(344LL * HighestBitPos + *(_QWORD *)(v12 + 2992)) )
  {
    WdLogSingleEntry2(3LL, v43[1].Value, -1073741811LL);
    WdLogGlobalForLineNumber = 286;
    goto LABEL_65;
  }
  if ( GetBitCount(v11) > 1 )
  {
    WdLogSingleEntry2(3LL, v13, -1073741811LL);
    WdLogGlobalForLineNumber = 295;
    goto LABEL_19;
  }
  if ( (*(_BYTE *)&v43[3].0 & 8) == 0
    && ((*(_DWORD *)(v16 + 2468) & 0x20) == 0 || !ADAPTER_RENDER::NodeSupportsGpuVa(v9, v14, v15)) )
  {
    WdLogSingleEntry1(3LL, -1073741811LL);
    WdLogGlobalForLineNumber = 306;
LABEL_65:
    if ( v37 && _InterlockedExchangeAdd64((volatile signed __int64 *)v37 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v37 + 2), v37);
    goto LABEL_68;
  }
  v17 = *(_DWORD *)(v16 + 2280);
  v42 = v17;
  if ( v17 >= 0x7008 && (v43[3].Value & 0xFFFFFF80) != 0 )
  {
    WdLogSingleEntry1(3LL, -1073741811LL);
    WdLogGlobalForLineNumber = 316;
    goto LABEL_19;
  }
  v18 = 0LL;
  v47 = 0LL;
  if ( Src[0] )
  {
    if ( !LODWORD(Src[1]) )
      goto LABEL_18;
  }
  else if ( LODWORD(Src[1]) )
  {
LABEL_18:
    WdLogSingleEntry3(3LL, Src[0], LODWORD(Src[1]), -1073741811LL);
    WdLogGlobalForLineNumber = 330;
LABEL_19:
    ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)&v37);
LABEL_68:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v38);
    if ( v40 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v35, (__int64)&EventProfilerExit, v36, v38);
    }
    return 3221225485LL;
  }
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v48, v8);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v49, (__int64)v8, 0, v19, 0);
  v21 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v49, 0LL);
  if ( v21 < 0 )
  {
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v49);
    DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v48);
    if ( !v37 )
    {
LABEL_55:
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v38);
      if ( v40 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v30, (__int64)&EventProfilerExit, v31, v38);
      return (unsigned int)v21;
    }
LABEL_53:
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v37 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v37 + 2), v37);
    goto LABEL_55;
  }
  if ( !Src[0] )
  {
LABEL_37:
    v41 = 0LL;
    v21 = DXGDEVICE::CreateContext(
            v8,
            &v41,
            v43[1].Value,
            v43[2].Value,
            v43[3],
            v18,
            (unsigned int)Src[1],
            SHIDWORD(Src[1]),
            1);
    if ( v21 >= 0 )
    {
      v25 = *((_DWORD *)v41 + 6);
      v42 = v25;
      p_hContext = &a1->hContext;
      if ( a2 )
      {
        if ( (unsigned __int64)p_hContext >= MmUserProbeAddress )
          p_hContext = (_DWORD *)MmUserProbeAddress;
        RtlCopyVolatileMemory(p_hContext, &v42, 4uLL);
        if ( LODWORD(Src[1]) && DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*((_QWORD *)v8 + 2) + 16LL)) && v17 >= 0x7008 )
        {
          v27 = LODWORD(Src[1]);
          v28 = Src[0];
          v29 = (char *)Src[0] + LODWORD(Src[1]);
          if ( v29 <= Src[0] || (unsigned __int64)v29 > MmUserProbeAddress )
            *(_BYTE *)MmUserProbeAddress = 0;
          memmove(v28, v18, v27);
        }
      }
      else
      {
        *p_hContext = v25;
      }
    }
    if ( v18 != Src[0] )
      DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v18);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v49);
    DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v48);
    if ( !v37 )
      goto LABEL_55;
    goto LABEL_53;
  }
  if ( !a2 )
  {
    v18 = Src[0];
    v47 = Src[0];
    goto LABEL_37;
  }
  v18 = (void *)operator new[](LODWORD(Src[1]), 0x4B677844u, 256LL, v20);
  v47 = v18;
  if ( v18 )
  {
    v22 = LODWORD(Src[1]);
    v23 = Src[0];
    v24 = (char *)Src[0] + LODWORD(Src[1]);
    if ( v24 < Src[0] || (unsigned __int64)v24 > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v18, v23, v22);
    goto LABEL_37;
  }
  WdLogSingleEntry3(3LL, v8, LODWORD(Src[1]), -1073741801LL);
  WdLogGlobalForLineNumber = 355;
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v49);
  DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v48);
  if ( v37 && _InterlockedExchangeAdd64((volatile signed __int64 *)v37 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v37 + 2), v37);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v38);
  if ( v40 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v33, (__int64)&EventProfilerExit, v34, v38);
  return 3221225495LL;
}
