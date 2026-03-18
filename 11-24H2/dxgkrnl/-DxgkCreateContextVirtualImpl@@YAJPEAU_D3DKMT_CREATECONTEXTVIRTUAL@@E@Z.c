/*
 * XREFs of ?DxgkCreateContextVirtualImpl@@YAJPEAU_D3DKMT_CREATECONTEXTVIRTUAL@@E@Z @ 0x1402D17A0
 * Callers:
 *     DxgkCreateContextVirtualInternal @ 0x1401B8F00 (DxgkCreateContextVirtualInternal.c)
 *     ?VmBusCreateContextVirtual@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140220F30 (-VmBusCreateContextVirtual@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     DxgkCreateContextVirtual @ 0x1402CFA60 (DxgkCreateContextVirtual.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x14000CB30 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ??1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ @ 0x14000E5A0 (--1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x14000EF08 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z @ 0x14000F550 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x14000FEB0 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140012444 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140015A70 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140015D30 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x140020540 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400224A0 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x140023510 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x14002F1A0 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ??1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ @ 0x14002F470 (--1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ.c)
 *     ?NodeSupportsGpuVa@ADAPTER_RENDER@@QEBAEII@Z @ 0x14004BCA8 (-NodeSupportsGpuVa@ADAPTER_RENDER@@QEBAEII@Z.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x1400A1BF0 (RtlCopyVolatileMemory.c)
 *     memmove @ 0x1400A1D00 (memmove.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x14029C800 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1402ABDE8 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?CreateContext@DXGDEVICE@@QEAAJPEAPEAVDXGCONTEXT@@IIU_D3DDDI_CREATECONTEXTFLAGS@@PEAXIW4_D3DKMT_CLIENTHINT@@E@Z @ 0x1402CFA78 (-CreateContext@DXGDEVICE@@QEAAJPEAPEAVDXGCONTEXT@@IIU_D3DDDI_CREATECONTEXTFLAGS@@PEAXIW4_D3DKMT_.c)
 *     ?GetHighestBitPos@@YAII@Z @ 0x1402D20F0 (-GetHighestBitPos@@YAII@Z.c)
 *     ?GetBitCount@@YAII@Z @ 0x1402D2104 (-GetBitCount@@YAII@Z.c)
 */

__int64 __fastcall DxgkCreateContextVirtualImpl(struct _D3DKMT_CREATECONTEXTVIRTUAL *a1, char a2, __int64 a3)
{
  __int64 v5; // rcx
  struct _KTHREAD **Current; // rsi
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
  int v20; // r14d
  size_t v21; // r8
  const void *v22; // rdx
  char *v23; // rcx
  unsigned int v24; // edx
  _DWORD *p_hContext; // rcx
  size_t v26; // r8
  void *v27; // rcx
  char *v28; // rax
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // rcx
  __int64 v35; // r8
  struct DXGDEVICE *v36; // [rsp+50h] [rbp-158h] BYREF
  int v37; // [rsp+58h] [rbp-150h] BYREF
  __int64 v38; // [rsp+60h] [rbp-148h]
  char v39; // [rsp+68h] [rbp-140h]
  struct DXGCONTEXT *v40; // [rsp+70h] [rbp-138h] BYREF
  unsigned int v41; // [rsp+78h] [rbp-130h] BYREF
  struct _D3DDDI_CREATECONTEXTFLAGS v42[4]; // [rsp+80h] [rbp-128h] BYREF
  void *Src[2]; // [rsp+90h] [rbp-118h]
  __int64 v44; // [rsp+A0h] [rbp-108h]
  struct DXGDEVICE *v45; // [rsp+A8h] [rbp-100h] BYREF
  void *v46; // [rsp+B0h] [rbp-F8h]
  _BYTE v47[24]; // [rsp+B8h] [rbp-F0h] BYREF
  _BYTE v48[160]; // [rsp+D0h] [rbp-D8h] BYREF

  v40 = (struct DXGCONTEXT *)a1;
  v37 = -1;
  v38 = 0LL;
  if ( (qword_14015E4B0 & 2) != 0 )
  {
    v39 = 1;
    v37 = 2039;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, (__int64)&EventProfilerEnter, a3, 2039);
  }
  else
  {
    v39 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v37, 2039);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v5);
  if ( !Current )
  {
    WdLogSingleEntry1(2LL, -1073741811LL);
    WdLogGlobalForLineNumber = 223;
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
    goto LABEL_68;
  }
  *(_OWORD *)&v42[0].0 = 0LL;
  *(_OWORD *)Src = 0LL;
  v44 = 0LL;
  if ( a2 )
  {
    v7 = a1;
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      v7 = (struct _D3DKMT_CREATECONTEXTVIRTUAL *)MmUserProbeAddress;
    RtlCopyVolatileMemory(v42, v7, 0x28uLL);
  }
  else
  {
    *(_OWORD *)&v42[0].0 = *(_OWORD *)&a1->hDevice;
    *(_OWORD *)Src = *(_OWORD *)&a1->pPrivateDriverData;
    v44 = *(_QWORD *)&a1->hContext;
  }
  if ( !g_OSTestSigningEnabled && ((*(_BYTE *)&v42[3].0 & 0x20) != 0 || (*(_BYTE *)&v42[3].0 & 0x40) != 0) )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 253;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"NoKmdAccess and TestContext can be used only with testsigning",
      253LL,
      0LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_68;
  }
  v45 = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v36, v42[0].Value, Current, &v45);
  v8 = v45;
  if ( !v45 )
  {
    WdLogSingleEntry2(2LL, v42[0].Value, -1073741811LL);
    WdLogGlobalForLineNumber = 264;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Invalid hDevice (0x%I64x) specified, returning 0x%I64x",
      v42[0].Value,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_19;
  }
  v9 = (ADAPTER_RENDER *)*((_QWORD *)v45 + 2);
  HighestBitPos = GetHighestBitPos(v42[2].Value);
  if ( HighestBitPos >= *(_DWORD *)(v12 + 296) )
  {
    WdLogSingleEntry2(3LL, v11, -1073741811LL);
    WdLogGlobalForLineNumber = 278;
    goto LABEL_65;
  }
  if ( v42[1].Value >= *(unsigned __int16 *)(344LL * HighestBitPos + *(_QWORD *)(v12 + 2992)) )
  {
    WdLogSingleEntry2(3LL, v42[1].Value, -1073741811LL);
    WdLogGlobalForLineNumber = 286;
    goto LABEL_65;
  }
  if ( GetBitCount(v11) > 1 )
  {
    WdLogSingleEntry2(3LL, v13, -1073741811LL);
    WdLogGlobalForLineNumber = 295;
    goto LABEL_19;
  }
  if ( (*(_BYTE *)&v42[3].0 & 8) == 0
    && ((*(_DWORD *)(v16 + 2468) & 0x20) == 0 || !ADAPTER_RENDER::NodeSupportsGpuVa(v9, v14, v15)) )
  {
    WdLogSingleEntry1(3LL, -1073741811LL);
    WdLogGlobalForLineNumber = 306;
LABEL_65:
    if ( v36 && _InterlockedExchangeAdd64((volatile signed __int64 *)v36 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v36 + 2), v36);
    goto LABEL_68;
  }
  v17 = *(_DWORD *)(v16 + 2280);
  v41 = v17;
  if ( v17 >= 0x7008 && (v42[3].Value & 0xFFFFFF80) != 0 )
  {
    WdLogSingleEntry1(3LL, -1073741811LL);
    WdLogGlobalForLineNumber = 316;
    goto LABEL_19;
  }
  v18 = 0LL;
  v46 = 0LL;
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
    ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)&v36);
LABEL_68:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v37);
    if ( v39 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v34, (__int64)&EventProfilerExit, v35, v37);
    }
    return 3221225485LL;
  }
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v47, v8);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v48, (__int64)v8, 0, v19, 0);
  v20 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v48, 0LL);
  if ( v20 < 0 )
  {
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v48);
    DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v47);
    if ( !v36 )
    {
LABEL_55:
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v37);
      if ( v39 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v29, (__int64)&EventProfilerExit, v30, v37);
      return (unsigned int)v20;
    }
LABEL_53:
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v36 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v36 + 2), v36);
    goto LABEL_55;
  }
  if ( !Src[0] )
  {
LABEL_37:
    v40 = 0LL;
    v20 = DXGDEVICE::CreateContext(
            v8,
            &v40,
            v42[1].Value,
            v42[2].Value,
            v42[3],
            v18,
            (unsigned int)Src[1],
            SHIDWORD(Src[1]),
            1u);
    if ( v20 >= 0 )
    {
      v24 = *((_DWORD *)v40 + 6);
      v41 = v24;
      p_hContext = &a1->hContext;
      if ( a2 )
      {
        if ( (unsigned __int64)p_hContext >= MmUserProbeAddress )
          p_hContext = (_DWORD *)MmUserProbeAddress;
        RtlCopyVolatileMemory(p_hContext, &v41, 4uLL);
        if ( LODWORD(Src[1]) && DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*((_QWORD *)v8 + 2) + 16LL)) && v17 >= 0x7008 )
        {
          v26 = LODWORD(Src[1]);
          v27 = Src[0];
          v28 = (char *)Src[0] + LODWORD(Src[1]);
          if ( v28 <= Src[0] || (unsigned __int64)v28 > MmUserProbeAddress )
            *(_BYTE *)MmUserProbeAddress = 0;
          memmove(v27, v18, v26);
        }
      }
      else
      {
        *p_hContext = v24;
      }
    }
    if ( v18 != Src[0] )
      DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v18);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v48);
    DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v47);
    if ( !v36 )
      goto LABEL_55;
    goto LABEL_53;
  }
  if ( !a2 )
  {
    v18 = Src[0];
    v46 = Src[0];
    goto LABEL_37;
  }
  v18 = (void *)operator new[](LODWORD(Src[1]), 0x4B677844u, 256LL);
  v46 = v18;
  if ( v18 )
  {
    v21 = LODWORD(Src[1]);
    v22 = Src[0];
    v23 = (char *)Src[0] + LODWORD(Src[1]);
    if ( v23 < Src[0] || (unsigned __int64)v23 > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v18, v22, v21);
    goto LABEL_37;
  }
  WdLogSingleEntry3(3LL, v8, LODWORD(Src[1]), -1073741801LL);
  WdLogGlobalForLineNumber = 355;
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v48);
  DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v47);
  if ( v36 && _InterlockedExchangeAdd64((volatile signed __int64 *)v36 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v36 + 2), v36);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v37);
  if ( v39 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v32, (__int64)&EventProfilerExit, v33, v37);
  return 3221225495LL;
}
