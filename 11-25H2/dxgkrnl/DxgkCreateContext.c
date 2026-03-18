/*
 * XREFs of DxgkCreateContext @ 0x1401B61B0
 * Callers:
 *     <none>
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
 *     ??1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ @ 0x14002EE30 (--1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x14009F890 (RtlCopyVolatileMemory.c)
 *     memmove @ 0x14009F9C0 (memmove.c)
 *     memset @ 0x14009FCC0 (memset.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x140296C50 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?CreateContext@DXGDEVICE@@QEAAJPEAPEAVDXGCONTEXT@@IIU_D3DDDI_CREATECONTEXTFLAGS@@PEAXIW4_D3DKMT_CLIENTHINT@@E@Z @ 0x1403364E8 (-CreateContext@DXGDEVICE@@QEAAJPEAPEAVDXGCONTEXT@@IIU_D3DDDI_CREATECONTEXTFLAGS@@PEAXIW4_D3DKMT_.c)
 *     ?GetHighestBitPos@@YAII@Z @ 0x140338B68 (-GetHighestBitPos@@YAII@Z.c)
 *     ?GetBitCount@@YAII@Z @ 0x140338B7C (-GetBitCount@@YAII@Z.c)
 */

__int64 __fastcall DxgkCreateContext(struct DXGCONTEXT *a1, __int64 a2, __int64 a3)
{
  struct DXGPROCESS *Current; // rdi
  unsigned int v5; // edi
  const void *v6; // rdx
  struct DXGDEVICE *v7; // r14
  unsigned int v8; // r8d
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // r10
  __int64 v12; // r9
  int v13; // esi
  __int64 v14; // r9
  __int64 v15; // rcx
  __int64 v16; // r8
  void *v18; // rdi
  __int64 v19; // rcx
  __int64 v20; // r8
  size_t v21; // r8
  const void *v22; // rdx
  ULONG64 v23; // rcx
  void *v24; // rcx
  void *v25; // rcx
  void *v26; // rcx
  void *v27; // rcx
  void *v28; // rcx
  void *v29; // rcx
  void *v30; // rcx
  int v31; // [rsp+50h] [rbp-1A8h] BYREF
  __int64 v32; // [rsp+58h] [rbp-1A0h]
  char v33; // [rsp+60h] [rbp-198h]
  _BYTE v34[8]; // [rsp+68h] [rbp-190h] BYREF
  struct DXGDEVICE *v35; // [rsp+70h] [rbp-188h] BYREF
  struct DXGCONTEXT *v36; // [rsp+78h] [rbp-180h] BYREF
  int v37; // [rsp+80h] [rbp-178h] BYREF
  int v38; // [rsp+84h] [rbp-174h] BYREF
  int v39; // [rsp+88h] [rbp-170h] BYREF
  void *v40; // [rsp+90h] [rbp-168h]
  _BYTE v41[24]; // [rsp+98h] [rbp-160h] BYREF
  unsigned int v42[24]; // [rsp+B0h] [rbp-148h] BYREF
  __int64 v43; // [rsp+110h] [rbp-E8h] BYREF
  __int64 v44; // [rsp+118h] [rbp-E0h] BYREF
  __int64 v45; // [rsp+120h] [rbp-D8h] BYREF
  __int64 v46; // [rsp+128h] [rbp-D0h] BYREF
  _BYTE v47[160]; // [rsp+130h] [rbp-C8h] BYREF

  v36 = a1;
  v31 = -1;
  v32 = 0LL;
  if ( (qword_14015B4C0 & 2) != 0 )
  {
    v33 = 1;
    v31 = 2039;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, (__int64)&EventProfilerEnter, a3, 2039);
  }
  else
  {
    v33 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v31, 2039);
  Current = DXGPROCESS::GetCurrent();
  if ( !Current )
  {
    v5 = -1073741811;
    WdLogSingleEntry1(2LL, -1073741811LL);
    WdLogGlobalForLineNumber = 28;
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
LABEL_33:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v31);
    if ( v33 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v19, (__int64)&EventProfilerExit, v20, v31);
    }
    return v5;
  }
  memset(v42, 0, sizeof(v42));
  v6 = a1;
  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    v6 = (const void *)MmUserProbeAddress;
  RtlCopyVolatileMemory(v42, v6, 0x60uLL);
  v35 = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)v34, v42[0], Current, &v35);
  v7 = v35;
  if ( !v35 )
  {
    v5 = -1073741811;
    WdLogSingleEntry2(2LL, v42[0], -1073741811LL);
    WdLogGlobalForLineNumber = 53;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Invalid hDevice (0x%I64x) specified, returning 0x%I64x",
      v42[0],
      -1073741811LL,
      0LL,
      0LL,
      0LL);
LABEL_32:
    ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)v34);
    goto LABEL_33;
  }
  if ( (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)v35 + 2) + 16LL) + 2464LL) & 1) != 0 )
  {
    GetHighestBitPos(v42[2]);
    if ( GetBitCount(v8) > 1 )
    {
      v5 = -1073741811;
      WdLogSingleEntry2(3LL, (unsigned int)v9, -1073741811LL);
      WdLogGlobalForLineNumber = 77;
      goto LABEL_32;
    }
    if ( (unsigned int)v11 >= *(_DWORD *)(v10 + 296) )
    {
      v5 = -1073741811;
      WdLogSingleEntry2(3LL, v9, -1073741811LL);
      WdLogGlobalForLineNumber = 85;
      goto LABEL_32;
    }
    if ( v42[1] >= *(unsigned __int16 *)(344 * v11 + *(_QWORD *)(v10 + 2992)) )
    {
      v5 = -1073741811;
      WdLogSingleEntry2(3LL, v42[1], -1073741811LL);
      WdLogGlobalForLineNumber = 93;
      goto LABEL_32;
    }
  }
  else if ( v42[1] || v42[2] )
  {
    v5 = -1073741811;
    WdLogSingleEntry3(3LL, v42[1], v42[2], -1073741811LL);
    WdLogGlobalForLineNumber = 65;
    goto LABEL_32;
  }
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v41, v7);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v47, (__int64)v7, 0, v12, 0);
  v13 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v47, 0LL);
  if ( v13 >= 0 )
  {
    v18 = 0LL;
    v40 = 0LL;
    if ( *(_QWORD *)&v42[4] )
    {
      if ( v42[6] )
      {
        v18 = (void *)operator new[](v42[6], 0x4B677844u, 256LL, v14);
        v40 = v18;
        if ( !v18 )
        {
          v5 = -1073741801;
          WdLogSingleEntry3(3LL, v7, v42[6], -1073741801LL);
          WdLogGlobalForLineNumber = 131;
          goto LABEL_31;
        }
        v21 = v42[6];
        v22 = *(const void **)&v42[4];
        v23 = *(_QWORD *)&v42[4] + v42[6];
        if ( v23 < *(_QWORD *)&v42[4] || v23 > MmUserProbeAddress )
          *(_BYTE *)MmUserProbeAddress = 0;
        memmove(v18, v22, v21);
LABEL_44:
        v36 = 0LL;
        v13 = DXGDEVICE::CreateContext(
                v7,
                &v36,
                v42[1],
                v42[2],
                (struct _D3DDDI_CREATECONTEXTFLAGS)v42[3],
                v18,
                v42[6],
                (enum _D3DKMT_CLIENTHINT)v42[7],
                0);
        if ( v13 >= 0 )
        {
          v37 = *((_DWORD *)v36 + 6);
          v43 = *((_QWORD *)v36 + 7);
          v44 = *((_QWORD *)v36 + 6);
          v45 = *((_QWORD *)v36 + 11);
          v38 = *((_DWORD *)v36 + 18);
          v46 = *((_QWORD *)v36 + 15);
          v39 = *((_DWORD *)v36 + 26);
          v24 = (char *)a1 + 32;
          if ( (unsigned __int64)a1 + 32 >= MmUserProbeAddress )
            v24 = (void *)MmUserProbeAddress;
          RtlCopyVolatileMemory(v24, &v37, 4uLL);
          v25 = (char *)a1 + 40;
          if ( (unsigned __int64)a1 + 40 >= MmUserProbeAddress )
            v25 = (void *)MmUserProbeAddress;
          RtlCopyVolatileMemory(v25, &v43, 8uLL);
          v26 = (char *)a1 + 48;
          if ( (unsigned __int64)a1 + 48 >= MmUserProbeAddress )
            v26 = (void *)MmUserProbeAddress;
          RtlCopyVolatileMemory(v26, &v44, 8uLL);
          v27 = (char *)a1 + 56;
          if ( (unsigned __int64)a1 + 56 >= MmUserProbeAddress )
            v27 = (void *)MmUserProbeAddress;
          RtlCopyVolatileMemory(v27, &v45, 8uLL);
          v28 = (char *)a1 + 64;
          if ( (unsigned __int64)a1 + 64 >= MmUserProbeAddress )
            v28 = (void *)MmUserProbeAddress;
          RtlCopyVolatileMemory(v28, &v38, 4uLL);
          v29 = (char *)a1 + 72;
          if ( (unsigned __int64)a1 + 72 >= MmUserProbeAddress )
            v29 = (void *)MmUserProbeAddress;
          RtlCopyVolatileMemory(v29, &v46, 8uLL);
          v30 = (char *)a1 + 80;
          if ( (unsigned __int64)a1 + 80 >= MmUserProbeAddress )
            v30 = (void *)MmUserProbeAddress;
          RtlCopyVolatileMemory(v30, &v39, 4uLL);
        }
        DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v18);
        goto LABEL_22;
      }
    }
    else if ( !v42[6] )
    {
      goto LABEL_44;
    }
    v5 = -1073741811;
    WdLogSingleEntry3(3LL, *(_QWORD *)&v42[4], v42[6], -1073741811LL);
    WdLogGlobalForLineNumber = 119;
LABEL_31:
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v47);
    DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v41);
    goto LABEL_32;
  }
LABEL_22:
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v47);
  DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v41);
  ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)v34);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v31);
  if ( v33 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v15, (__int64)&EventProfilerExit, v16, v31);
  return (unsigned int)v13;
}
