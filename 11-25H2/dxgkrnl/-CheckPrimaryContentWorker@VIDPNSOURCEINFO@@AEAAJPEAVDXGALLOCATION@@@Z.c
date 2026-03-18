/*
 * XREFs of ?CheckPrimaryContentWorker@VIDPNSOURCEINFO@@AEAAJPEAVDXGALLOCATION@@@Z @ 0x1401BC6E8
 * Callers:
 *     ?CheckPrimaryContent@VIDPNSOURCEINFO@@QEAAJXZ @ 0x1401BC428 (-CheckPrimaryContent@VIDPNSOURCEINFO@@QEAAJXZ.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x140013A20 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x14001C110 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x14001C140 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z @ 0x14001EB30 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x14001F490 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z @ 0x14001F610 (--0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z.c)
 *     Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline @ 0x14006681C (Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     ?DestroyStagingSurface@DXGDEVICE@@QEAAXIIPEAVCOREDEVICEACCESS@@@Z @ 0x1401B749C (-DestroyStagingSurface@DXGDEVICE@@QEAAXIIPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?GetPresentContext@DXGDEVICE@@QEAAPEAVDXGCONTEXT@@XZ @ 0x1401B86BC (-GetPresentContext@DXGDEVICE@@QEAAPEAVDXGCONTEXT@@XZ.c)
 *     ?DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z @ 0x1402A2AD0 (-DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z.c)
 *     ?Blt@DXGCONTEXT@@QEAAJIIIPEAPEAV1@PEAUtagRECT@@IPEBU2@PEAVCOREDEVICEACCESS@@PEAPEAVDXGHWQUEUE@@@Z @ 0x14034D5A0 (-Blt@DXGCONTEXT@@QEAAJIIIPEAPEAV1@PEAUtagRECT@@IPEBU2@PEAVCOREDEVICEACCESS@@PEAPEAVDXGHWQUEUE@@@.c)
 *     ?CheckPrimaryContentTile@VIDPNSOURCEINFO@@AEAAJPEAVDXGDEVICE@@IIPEBUtagRECT@@PEAVCOREDEVICEACCESS@@PEAI3@Z @ 0x14037F988 (-CheckPrimaryContentTile@VIDPNSOURCEINFO@@AEAAJPEAVDXGDEVICE@@IIPEBUtagRECT@@PEAVCOREDEVICEACCES.c)
 *     ?CreateStagingSurface2@DXGDEVICE@@QEAAJPEAU_D3DKMDT_STAGINGSURFACEDATA@@PEAVCOREDEVICEACCESS@@PEAI2@Z @ 0x1403C7634 (-CreateStagingSurface2@DXGDEVICE@@QEAAJPEAU_D3DKMDT_STAGINGSURFACEDATA@@PEAVCOREDEVICEACCESS@@PE.c)
 */

__int64 __fastcall VIDPNSOURCEINFO::CheckPrimaryContentWorker(VIDPNSOURCEINFO *this, struct DXGALLOCATION *a2)
{
  DXGDEVICE *v2; // r14
  struct DXGCONTEXT *PresentContext; // rax
  unsigned int v6; // ebx
  __int64 v8; // r9
  __int64 v9; // rsi
  struct DXGHWQUEUE *v10; // rcx
  __int64 v11; // rax
  int v12; // r13d
  int v13; // eax
  __int64 v14; // r15
  int v15; // ecx
  UINT Height; // eax
  int v17; // edx
  signed int Width; // r10d
  signed int v19; // r9d
  unsigned int v20; // ebx
  UINT v21; // ecx
  UINT v22; // r13d
  UINT v23; // eax
  LONG v24; // edx
  LONG v25; // r11d
  unsigned int v26; // r8d
  __int64 v27; // rax
  int v28; // r10d
  unsigned int v29; // edx
  int v30; // eax
  unsigned int v31; // ecx
  int v32; // edx
  unsigned int v33; // edx
  unsigned int v34; // r8d
  int v35; // ecx
  unsigned int v36; // ecx
  unsigned int *v37; // rbx
  struct DXGCONTEXT *v38; // rbx
  VIDPNSOURCEINFO *v39; // [rsp+20h] [rbp-E0h]
  unsigned int v40; // [rsp+50h] [rbp-B0h]
  unsigned int v41; // [rsp+54h] [rbp-ACh] BYREF
  unsigned int v42; // [rsp+58h] [rbp-A8h] BYREF
  struct DXGCONTEXT *v43; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v44[2]; // [rsp+68h] [rbp-98h] BYREF
  UINT v45; // [rsp+70h] [rbp-90h]
  int v46; // [rsp+74h] [rbp-8Ch]
  struct DXGHWQUEUE *v47; // [rsp+78h] [rbp-88h] BYREF
  struct _DXGKARG_DESCRIBEALLOCATION v48; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v49[24]; // [rsp+B0h] [rbp-50h] BYREF
  struct tagRECT v50; // [rsp+C8h] [rbp-38h] BYREF
  struct _D3DKMDT_STAGINGSURFACEDATA v51; // [rsp+D8h] [rbp-28h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+E8h] [rbp-18h] BYREF
  _BYTE v53[192]; // [rsp+120h] [rbp+20h] BYREF

  v2 = (DXGDEVICE *)*((_QWORD *)a2 + 1);
  PresentContext = DXGDEVICE::GetPresentContext(v2);
  v6 = 0;
  v43 = PresentContext;
  if ( PresentContext )
  {
    DXGPUSHLOCK::AcquireExclusive((struct DXGCONTEXT *)((char *)PresentContext + 440));
    DXGADAPTERSTOPRESETLOCKSHARED::DXGADAPTERSTOPRESETLOCKSHARED(
      (DXGADAPTERSTOPRESETLOCKSHARED *)v49,
      *(struct DXGADAPTER **)(*((_QWORD *)v2 + 2) + 16LL),
      1);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v53, (__int64)v2, 1, v8, 0);
    LODWORD(v9) = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v53, 0LL);
    if ( (int)v9 >= 0 )
    {
      v47 = 0LL;
      if ( (*((_DWORD *)v43 + 98) & 0x10) != 0 )
      {
        v10 = 0LL;
        if ( *((struct DXGCONTEXT **)v43 + 50) != (struct DXGCONTEXT *)((char *)v43 + 400) )
          v10 = (struct DXGHWQUEUE *)*((_QWORD *)v43 + 50);
        v47 = v10;
      }
      v11 = *((_QWORD *)a2 + 6);
      *(_QWORD *)v44 = 0LL;
      memset(&v48, 0, sizeof(v48));
      v12 = 0;
      memset(&ApcState, 0, sizeof(ApcState));
      v48.hAllocation = *(HANDLE *)(v11 + 16);
      v13 = ADAPTER_RENDER::DdiDescribeAllocation(*(ADAPTER_RENDER **)(*((_QWORD *)v43 + 2) + 16LL), &v48);
      v9 = v13;
      v14 = 2LL;
      if ( v13 < 0 )
      {
        WdLogSingleEntry1(2LL, v13);
        WdLogGlobalForLineNumber = 2022;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          0xFFFFFFFFLL,
          L"DdiDescribeAllocation() failed with status : 0x%I64x",
          v9,
          0LL,
          0LL,
          0LL,
          0LL);
        *((_DWORD *)this + 12) = 1;
        goto LABEL_56;
      }
      v15 = *((_DWORD *)this + 7);
      if ( (v15 & 0x20) != 0 )
      {
        v40 = 1;
      }
      else
      {
        Height = v48.Height;
        if ( v48.Width > v48.Height )
          Height = v48.Width;
        v40 = 2 * Height;
      }
      v17 = *((_DWORD *)this + 7);
      if ( v48.Format != D3DDDIFMT_A8R8G8B8
        && v48.Format != D3DDDIFMT_X8R8G8B8
        && v48.Format != D3DDDIFMT_A8B8G8R8
        && v48.Format != D3DDDIFMT_X8B8G8R8 )
      {
        v17 = v15 | 0x40;
        *((_DWORD *)this + 12) = 1;
        *((_DWORD *)this + 7) = v15 | 0x40;
      }
      if ( (*(_DWORD *)(*((_QWORD *)a2 + 6) + 4LL) & 0xC000) != 0 )
      {
        v17 |= 0x80u;
        *((_DWORD *)this + 12) = 1;
        *((_DWORD *)this + 7) = v17;
      }
      if ( !*((_DWORD *)this + 12) )
      {
        if ( (v17 & 0x1000) == 0 && (*(_DWORD *)(*((_QWORD *)a2 + 6) + 4LL) & 0x2000) != 0 )
          *((_DWORD *)this + 7) = v17 | 0x2000;
        KeStackAttachProcess(*(PRKPROCESS *)(*((_QWORD *)v2 + 5) + 56LL), &ApcState);
        v46 = 1;
        v51.Width = 512;
        *(_QWORD *)&v51.Height = 512LL;
        do
        {
          LODWORD(v9) = DXGDEVICE::CreateStagingSurface2(v2, &v51, (struct COREDEVICEACCESS *)v53, &v44[v6], 0LL);
          if ( (int)v9 < 0 )
            break;
          ++v6;
        }
        while ( v6 < 2 );
        Width = v48.Width;
        v19 = v48.Height;
        v20 = 0;
        v50 = 0LL;
        v42 = 0;
        v41 = 0;
        v21 = (v48.Width + 511) >> 9;
        v22 = v21 * ((v48.Height + 511) >> 9);
        v45 = v21;
        *(_QWORD *)((char *)this + 52) = 0LL;
        v23 = v22 + 1;
        if ( v22 == -1 )
          goto LABEL_48;
        while ( 1 )
        {
          if ( v20 < v22 )
          {
            v24 = (v20 % v21) << 9;
            v25 = (v20 / v21) << 9;
            v50.left = v24;
            v50.top = v25;
            if ( v24 + 512 < Width )
              Width = v24 + 512;
            v50.right = Width;
            if ( v25 + 512 < v19 )
              v19 = v25 + 512;
            v50.bottom = v19;
            v26 = v44[v20 & 1];
            v27 = 16LL * (v20 & 1);
            v28 = Width - v24;
            v29 = *((_DWORD *)a2 + 4);
            *(_DWORD *)&v53[v27 + 164] = 0;
            *(_DWORD *)&v53[v27 + 160] = 0;
            *(_DWORD *)&v53[v27 + 172] = v19 - v25;
            *(_DWORD *)&v53[v27 + 168] = v28;
            LODWORD(v9) = DXGCONTEXT::Blt(
                            v43,
                            v29,
                            v26,
                            0,
                            &v43,
                            &v50,
                            1u,
                            (const struct tagRECT *)&v53[v27 + 160],
                            (struct COREDEVICEACCESS *)v53,
                            &v47);
            if ( (int)v9 < 0 )
              goto LABEL_48;
            v19 = v48.Height;
            v23 = v22 + 1;
            Width = v48.Width;
          }
          if ( v20 )
          {
            v39 = (VIDPNSOURCEINFO *)&v53[16 * (((_BYTE)v20 - 1) & 1) + 160];
            v30 = VIDPNSOURCEINFO::CheckPrimaryContentTile(
                    v39,
                    v2,
                    v44[((_BYTE)v20 - 1) & 1],
                    v51.Pitch,
                    (const struct tagRECT *)v39,
                    (struct COREDEVICEACCESS *)v53,
                    &v42,
                    &v41);
            v9 = v30;
            if ( v30 < 0 )
            {
              WdLogSingleEntry1(2LL, v30);
              WdLogGlobalForLineNumber = 2155;
              DxgkLogInternalTriageEvent(
                0LL,
                0x40000,
                0xFFFFFFFFLL,
                L"CheckPrimaryContentTile() failed with status : 0x%I64x",
                v9,
                0LL,
                0LL,
                0LL,
                0LL);
LABEL_48:
              v34 = v40;
LABEL_49:
              v35 = *((_DWORD *)this + 7);
              if ( (int)v9 < 0 )
              {
                v36 = v35 & 0xFFFFFFE7 | 0x10;
                goto LABEL_54;
              }
              if ( (v35 & 0x18) != 0 && *((_DWORD *)this + 14) < v34 )
              {
                v36 = v35 & 0xFFFFFFE7 | 8;
LABEL_54:
                *((_DWORD *)this + 7) = v36;
              }
              v12 = v46;
              break;
            }
            v31 = v41;
            if ( v41 == v42 )
            {
              *((_DWORD *)this + 7) &= 0xFFFFFFE7;
              goto LABEL_48;
            }
            v32 = *((_DWORD *)this + 14);
            *((_DWORD *)this + 13) += v42;
            v33 = v31 + v32;
            *((_DWORD *)this + 14) = v33;
            if ( v20 >= 2 )
            {
              v34 = v40;
              if ( v33 >= v40 )
              {
                *((_DWORD *)this + 7) &= 0xFFFFFFE7;
                goto LABEL_49;
              }
            }
            v19 = v48.Height;
            v23 = v22 + 1;
            Width = v48.Width;
          }
          if ( ++v20 >= v23 )
            goto LABEL_48;
          v21 = v45;
        }
      }
LABEL_56:
      v37 = v44;
      do
      {
        if ( *v37 )
          DXGDEVICE::DestroyStagingSurface((ADAPTER_RENDER **)v2, *v37, 0, (struct COREDEVICEACCESS *)v53);
        ++v37;
        --v14;
      }
      while ( v14 );
      if ( v12 )
        KeUnstackDetachProcess(&ApcState);
    }
    v38 = v43;
    Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
    *((_QWORD *)v38 + 56) = 0LL;
    ExReleasePushLockExclusiveEx((char *)v38 + 440, 0LL);
    KeLeaveCriticalRegion();
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v53);
    DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v49);
    return (unsigned int)v9;
  }
  else
  {
    WdLogSingleEntry1(2LL, v2);
    WdLogGlobalForLineNumber = 1973;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"The rendering device (0x%I64x) has not been used for Present",
      (__int64)v2,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225860LL;
  }
}
