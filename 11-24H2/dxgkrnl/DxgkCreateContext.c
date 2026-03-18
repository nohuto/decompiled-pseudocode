/*
 * XREFs of DxgkCreateContext @ 0x1401B8760
 * Callers:
 *     <none>
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
 *     ??1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ @ 0x14002F470 (--1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x1400A1BF0 (RtlCopyVolatileMemory.c)
 *     memmove @ 0x1400A1D00 (memmove.c)
 *     memset @ 0x1400A2000 (memset.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x14029C800 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?CreateContext@DXGDEVICE@@QEAAJPEAPEAVDXGCONTEXT@@IIU_D3DDDI_CREATECONTEXTFLAGS@@PEAXIW4_D3DKMT_CLIENTHINT@@E@Z @ 0x1402CFA78 (-CreateContext@DXGDEVICE@@QEAAJPEAPEAVDXGCONTEXT@@IIU_D3DDDI_CREATECONTEXTFLAGS@@PEAXIW4_D3DKMT_.c)
 *     ?GetHighestBitPos@@YAII@Z @ 0x1402D20F0 (-GetHighestBitPos@@YAII@Z.c)
 *     ?GetBitCount@@YAII@Z @ 0x1402D2104 (-GetBitCount@@YAII@Z.c)
 */

__int64 __fastcall DxgkCreateContext(struct DXGCONTEXT *a1, __int64 a2, __int64 a3)
{
  struct _KTHREAD **Current; // rdi
  unsigned int v5; // edi
  const void *v6; // rdx
  struct DXGDEVICE *v7; // r14
  unsigned int v8; // r8d
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // r10
  __int64 v12; // r9
  int v13; // esi
  __int64 v14; // rcx
  __int64 v15; // r8
  void *v17; // rdi
  __int64 v18; // rcx
  __int64 v19; // r8
  size_t v20; // r8
  const void *v21; // rdx
  ULONG64 v22; // rcx
  void *v23; // rcx
  void *v24; // rcx
  void *v25; // rcx
  void *v26; // rcx
  void *v27; // rcx
  void *v28; // rcx
  void *v29; // rcx
  int v30; // [rsp+50h] [rbp-1A8h] BYREF
  __int64 v31; // [rsp+58h] [rbp-1A0h]
  char v32; // [rsp+60h] [rbp-198h]
  _BYTE v33[8]; // [rsp+68h] [rbp-190h] BYREF
  struct DXGDEVICE *v34; // [rsp+70h] [rbp-188h] BYREF
  struct DXGCONTEXT *v35; // [rsp+78h] [rbp-180h] BYREF
  int v36; // [rsp+80h] [rbp-178h] BYREF
  int v37; // [rsp+84h] [rbp-174h] BYREF
  int v38; // [rsp+88h] [rbp-170h] BYREF
  void *v39; // [rsp+90h] [rbp-168h]
  _BYTE v40[24]; // [rsp+98h] [rbp-160h] BYREF
  unsigned int v41[24]; // [rsp+B0h] [rbp-148h] BYREF
  __int64 v42; // [rsp+110h] [rbp-E8h] BYREF
  __int64 v43; // [rsp+118h] [rbp-E0h] BYREF
  __int64 v44; // [rsp+120h] [rbp-D8h] BYREF
  __int64 v45; // [rsp+128h] [rbp-D0h] BYREF
  _BYTE v46[160]; // [rsp+130h] [rbp-C8h] BYREF

  v35 = a1;
  v30 = -1;
  v31 = 0LL;
  if ( (qword_14015E4B0 & 2) != 0 )
  {
    v32 = 1;
    v30 = 2039;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, (__int64)&EventProfilerEnter, a3, 2039);
  }
  else
  {
    v32 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v30, 2039);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  if ( !Current )
  {
    v5 = -1073741811;
    WdLogSingleEntry1(2LL, -1073741811LL);
    WdLogGlobalForLineNumber = 28;
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
LABEL_33:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v30);
    if ( v32 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v18, (__int64)&EventProfilerExit, v19, v30);
    }
    return v5;
  }
  memset(v41, 0, sizeof(v41));
  v6 = a1;
  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    v6 = (const void *)MmUserProbeAddress;
  RtlCopyVolatileMemory(v41, v6, 0x60uLL);
  v34 = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)v33, v41[0], Current, &v34);
  v7 = v34;
  if ( !v34 )
  {
    v5 = -1073741811;
    WdLogSingleEntry2(2LL, v41[0], -1073741811LL);
    WdLogGlobalForLineNumber = 53;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Invalid hDevice (0x%I64x) specified, returning 0x%I64x",
      v41[0],
      -1073741811LL,
      0LL,
      0LL,
      0LL);
LABEL_32:
    ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)v33);
    goto LABEL_33;
  }
  if ( (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)v34 + 2) + 16LL) + 2464LL) & 1) != 0 )
  {
    GetHighestBitPos(v41[2]);
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
    if ( v41[1] >= *(unsigned __int16 *)(344 * v11 + *(_QWORD *)(v10 + 2992)) )
    {
      v5 = -1073741811;
      WdLogSingleEntry2(3LL, v41[1], -1073741811LL);
      WdLogGlobalForLineNumber = 93;
      goto LABEL_32;
    }
  }
  else if ( v41[1] || v41[2] )
  {
    v5 = -1073741811;
    WdLogSingleEntry3(3LL, v41[1], v41[2], -1073741811LL);
    WdLogGlobalForLineNumber = 65;
    goto LABEL_32;
  }
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v40, v7);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v46, (__int64)v7, 0, v12, 0);
  v13 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v46, 0LL);
  if ( v13 >= 0 )
  {
    v17 = 0LL;
    v39 = 0LL;
    if ( *(_QWORD *)&v41[4] )
    {
      if ( v41[6] )
      {
        v17 = (void *)operator new[](v41[6], 0x4B677844u, 256LL);
        v39 = v17;
        if ( !v17 )
        {
          v5 = -1073741801;
          WdLogSingleEntry3(3LL, v7, v41[6], -1073741801LL);
          WdLogGlobalForLineNumber = 131;
          goto LABEL_31;
        }
        v20 = v41[6];
        v21 = *(const void **)&v41[4];
        v22 = *(_QWORD *)&v41[4] + v41[6];
        if ( v22 < *(_QWORD *)&v41[4] || v22 > MmUserProbeAddress )
          *(_BYTE *)MmUserProbeAddress = 0;
        memmove(v17, v21, v20);
LABEL_44:
        v35 = 0LL;
        v13 = DXGDEVICE::CreateContext(
                v7,
                &v35,
                v41[1],
                v41[2],
                (struct _D3DDDI_CREATECONTEXTFLAGS)v41[3],
                v17,
                v41[6],
                (enum _D3DKMT_CLIENTHINT)v41[7],
                0);
        if ( v13 >= 0 )
        {
          v36 = *((_DWORD *)v35 + 6);
          v42 = *((_QWORD *)v35 + 7);
          v43 = *((_QWORD *)v35 + 6);
          v44 = *((_QWORD *)v35 + 11);
          v37 = *((_DWORD *)v35 + 18);
          v45 = *((_QWORD *)v35 + 15);
          v38 = *((_DWORD *)v35 + 26);
          v23 = (char *)a1 + 32;
          if ( (unsigned __int64)a1 + 32 >= MmUserProbeAddress )
            v23 = (void *)MmUserProbeAddress;
          RtlCopyVolatileMemory(v23, &v36, 4uLL);
          v24 = (char *)a1 + 40;
          if ( (unsigned __int64)a1 + 40 >= MmUserProbeAddress )
            v24 = (void *)MmUserProbeAddress;
          RtlCopyVolatileMemory(v24, &v42, 8uLL);
          v25 = (char *)a1 + 48;
          if ( (unsigned __int64)a1 + 48 >= MmUserProbeAddress )
            v25 = (void *)MmUserProbeAddress;
          RtlCopyVolatileMemory(v25, &v43, 8uLL);
          v26 = (char *)a1 + 56;
          if ( (unsigned __int64)a1 + 56 >= MmUserProbeAddress )
            v26 = (void *)MmUserProbeAddress;
          RtlCopyVolatileMemory(v26, &v44, 8uLL);
          v27 = (char *)a1 + 64;
          if ( (unsigned __int64)a1 + 64 >= MmUserProbeAddress )
            v27 = (void *)MmUserProbeAddress;
          RtlCopyVolatileMemory(v27, &v37, 4uLL);
          v28 = (char *)a1 + 72;
          if ( (unsigned __int64)a1 + 72 >= MmUserProbeAddress )
            v28 = (void *)MmUserProbeAddress;
          RtlCopyVolatileMemory(v28, &v45, 8uLL);
          v29 = (char *)a1 + 80;
          if ( (unsigned __int64)a1 + 80 >= MmUserProbeAddress )
            v29 = (void *)MmUserProbeAddress;
          RtlCopyVolatileMemory(v29, &v38, 4uLL);
        }
        DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v17);
        goto LABEL_22;
      }
    }
    else if ( !v41[6] )
    {
      goto LABEL_44;
    }
    v5 = -1073741811;
    WdLogSingleEntry3(3LL, *(_QWORD *)&v41[4], v41[6], -1073741811LL);
    WdLogGlobalForLineNumber = 119;
LABEL_31:
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v46);
    DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v40);
    goto LABEL_32;
  }
LABEL_22:
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v46);
  DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v40);
  ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)v33);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v30);
  if ( v32 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v14, (__int64)&EventProfilerExit, v15, v30);
  return (unsigned int)v13;
}
