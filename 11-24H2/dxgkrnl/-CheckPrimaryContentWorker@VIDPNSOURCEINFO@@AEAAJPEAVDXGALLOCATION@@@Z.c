/*
 * XREFs of ?CheckPrimaryContentWorker@VIDPNSOURCEINFO@@AEAAJPEAVDXGALLOCATION@@@Z @ 0x1401BF068
 * Callers:
 *     ?CheckPrimaryContent@VIDPNSOURCEINFO@@QEAAJXZ @ 0x1401BEDA8 (-CheckPrimaryContent@VIDPNSOURCEINFO@@QEAAJXZ.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x14000CB30 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x14000CB60 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z @ 0x14000F550 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x14000FEB0 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z @ 0x140010030 (--0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x140022B90 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     ?DestroyStagingSurface@DXGDEVICE@@QEAAXIIPEAVCOREDEVICEACCESS@@@Z @ 0x1401B9A4C (-DestroyStagingSurface@DXGDEVICE@@QEAAXIIPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?GetPresentContext@DXGDEVICE@@QEAAPEAVDXGCONTEXT@@XZ @ 0x1401BAD68 (-GetPresentContext@DXGDEVICE@@QEAAPEAVDXGCONTEXT@@XZ.c)
 *     ?CheckPrimaryContentTile@VIDPNSOURCEINFO@@AEAAJPEAVDXGDEVICE@@IIPEBUtagRECT@@PEAVCOREDEVICEACCESS@@PEAI3@Z @ 0x1402A9884 (-CheckPrimaryContentTile@VIDPNSOURCEINFO@@AEAAJPEAVDXGDEVICE@@IIPEBUtagRECT@@PEAVCOREDEVICEACCES.c)
 *     ?Blt@DXGCONTEXT@@QEAAJIIIPEAPEAV1@PEAUtagRECT@@IPEBU2@PEAVCOREDEVICEACCESS@@PEAPEAVDXGHWQUEUE@@@Z @ 0x1402F4884 (-Blt@DXGCONTEXT@@QEAAJIIIPEAPEAV1@PEAUtagRECT@@IPEBU2@PEAVCOREDEVICEACCESS@@PEAPEAVDXGHWQUEUE@@@.c)
 *     ?DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z @ 0x1402F57E0 (-DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z.c)
 *     ?CreateStagingSurface2@DXGDEVICE@@QEAAJPEAU_D3DKMDT_STAGINGSURFACEDATA@@PEAVCOREDEVICEACCESS@@PEAI2@Z @ 0x1403BBC84 (-CreateStagingSurface2@DXGDEVICE@@QEAAJPEAU_D3DKMDT_STAGINGSURFACEDATA@@PEAVCOREDEVICEACCESS@@PE.c)
 */

__int64 __fastcall VIDPNSOURCEINFO::CheckPrimaryContentWorker(VIDPNSOURCEINFO *this, struct DXGALLOCATION *a2)
{
  DXGDEVICE *v2; // r14
  struct DXGCONTEXT *PresentContext; // rax
  __int64 v7; // r9
  int v8; // ebx
  char *v9; // rcx
  struct DXGHWQUEUE *v10; // rcx
  __int64 v11; // rax
  int v12; // r13d
  int v13; // eax
  __int64 v14; // rsi
  __int64 v15; // r15
  int v16; // ecx
  UINT Height; // eax
  int v18; // edx
  unsigned int i; // ebx
  signed int Width; // r10d
  signed int v21; // r9d
  unsigned int v22; // ebx
  UINT v23; // ecx
  UINT v24; // r13d
  UINT v25; // eax
  LONG v26; // edx
  LONG v27; // r11d
  unsigned int v28; // r8d
  __int64 v29; // rax
  int v30; // r10d
  unsigned int v31; // edx
  int v32; // eax
  unsigned int v33; // ecx
  int v34; // edx
  unsigned int v35; // edx
  unsigned int v36; // r8d
  int v37; // ecx
  unsigned int v38; // ecx
  unsigned int *v39; // rbx
  char *v40; // rcx
  VIDPNSOURCEINFO *v41; // [rsp+20h] [rbp-E0h]
  unsigned int v42; // [rsp+50h] [rbp-B0h]
  unsigned int v43; // [rsp+54h] [rbp-ACh] BYREF
  unsigned int v44; // [rsp+58h] [rbp-A8h] BYREF
  struct DXGCONTEXT *v45; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v46[2]; // [rsp+68h] [rbp-98h] BYREF
  UINT v47; // [rsp+70h] [rbp-90h]
  int v48; // [rsp+74h] [rbp-8Ch]
  struct DXGHWQUEUE *v49; // [rsp+78h] [rbp-88h] BYREF
  struct _DXGKARG_DESCRIBEALLOCATION v50; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v51[24]; // [rsp+B0h] [rbp-50h] BYREF
  struct tagRECT v52; // [rsp+C8h] [rbp-38h] BYREF
  struct _D3DKMDT_STAGINGSURFACEDATA v53; // [rsp+D8h] [rbp-28h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+E8h] [rbp-18h] BYREF
  _BYTE v55[192]; // [rsp+120h] [rbp+20h] BYREF

  v2 = (DXGDEVICE *)*((_QWORD *)a2 + 1);
  PresentContext = DXGDEVICE::GetPresentContext(v2);
  v45 = PresentContext;
  if ( PresentContext )
  {
    DXGPUSHLOCK::AcquireExclusive((struct DXGCONTEXT *)((char *)PresentContext + 440));
    DXGADAPTERSTOPRESETLOCKSHARED::DXGADAPTERSTOPRESETLOCKSHARED(
      (DXGADAPTERSTOPRESETLOCKSHARED *)v51,
      *(struct DXGADAPTER **)(*((_QWORD *)v2 + 2) + 16LL),
      1);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v55, (__int64)v2, 1, v7, 0);
    v8 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v55, 0LL);
    if ( v8 >= 0 )
    {
      v49 = 0LL;
      if ( (*((_DWORD *)v45 + 98) & 0x10) != 0 )
      {
        v10 = 0LL;
        if ( *((struct DXGCONTEXT **)v45 + 50) != (struct DXGCONTEXT *)((char *)v45 + 400) )
          v10 = (struct DXGHWQUEUE *)*((_QWORD *)v45 + 50);
        v49 = v10;
      }
      v11 = *((_QWORD *)a2 + 6);
      *(_QWORD *)v46 = 0LL;
      memset(&v50, 0, sizeof(v50));
      v12 = 0;
      memset(&ApcState, 0, sizeof(ApcState));
      v50.hAllocation = *(HANDLE *)(v11 + 16);
      v13 = ADAPTER_RENDER::DdiDescribeAllocation(*(ADAPTER_RENDER **)(*((_QWORD *)v45 + 2) + 16LL), &v50);
      v14 = v13;
      v15 = 2LL;
      if ( v13 < 0 )
      {
        WdLogSingleEntry1(2LL, v13);
        WdLogGlobalForLineNumber = 2022;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000LL,
          0xFFFFFFFFLL,
          L"DdiDescribeAllocation() failed with status : 0x%I64x",
          v14,
          0LL,
          0LL,
          0LL,
          0LL);
        *((_DWORD *)this + 12) = 1;
        goto LABEL_57;
      }
      v16 = *((_DWORD *)this + 7);
      if ( (v16 & 0x20) != 0 )
      {
        v42 = 1;
      }
      else
      {
        Height = v50.Height;
        if ( v50.Width > v50.Height )
          Height = v50.Width;
        v42 = 2 * Height;
      }
      v18 = *((_DWORD *)this + 7);
      if ( v50.Format != D3DDDIFMT_A8R8G8B8
        && v50.Format != D3DDDIFMT_X8R8G8B8
        && v50.Format != D3DDDIFMT_A8B8G8R8
        && v50.Format != D3DDDIFMT_X8B8G8R8 )
      {
        v18 = v16 | 0x40;
        *((_DWORD *)this + 12) = 1;
        *((_DWORD *)this + 7) = v16 | 0x40;
      }
      if ( (*(_DWORD *)(*((_QWORD *)a2 + 6) + 4LL) & 0xC000) != 0 )
      {
        v18 |= 0x80u;
        *((_DWORD *)this + 12) = 1;
        *((_DWORD *)this + 7) = v18;
      }
      if ( !*((_DWORD *)this + 12) )
      {
        if ( (v18 & 0x1000) == 0 && (*(_DWORD *)(*((_QWORD *)a2 + 6) + 4LL) & 0x2000) != 0 )
          *((_DWORD *)this + 7) = v18 | 0x2000;
        KeStackAttachProcess(*(PRKPROCESS *)(*((_QWORD *)v2 + 5) + 56LL), &ApcState);
        v48 = 1;
        v53.Width = 512;
        *(_QWORD *)&v53.Height = 512LL;
        for ( i = 0; i < 2; ++i )
        {
          LODWORD(v14) = DXGDEVICE::CreateStagingSurface2(v2, &v53, (struct COREDEVICEACCESS *)v55, &v46[i], 0LL);
          if ( (int)v14 < 0 )
            break;
        }
        Width = v50.Width;
        v21 = v50.Height;
        v22 = 0;
        v52 = 0LL;
        v44 = 0;
        v43 = 0;
        v23 = (v50.Width + 511) >> 9;
        v24 = v23 * ((v50.Height + 511) >> 9);
        v47 = v23;
        *(_QWORD *)((char *)this + 52) = 0LL;
        v25 = v24 + 1;
        if ( v24 == -1 )
          goto LABEL_49;
        while ( 1 )
        {
          if ( v22 < v24 )
          {
            v26 = (v22 % v23) << 9;
            v27 = (v22 / v23) << 9;
            v52.left = v26;
            v52.top = v27;
            if ( v26 + 512 < Width )
              Width = v26 + 512;
            v52.right = Width;
            if ( v27 + 512 < v21 )
              v21 = v27 + 512;
            v52.bottom = v21;
            v28 = v46[v22 & 1];
            v29 = 16LL * (v22 & 1);
            v30 = Width - v26;
            v31 = *((_DWORD *)a2 + 4);
            *(_DWORD *)&v55[v29 + 164] = 0;
            *(_DWORD *)&v55[v29 + 160] = 0;
            *(_DWORD *)&v55[v29 + 172] = v21 - v27;
            *(_DWORD *)&v55[v29 + 168] = v30;
            LODWORD(v14) = DXGCONTEXT::Blt(
                             v45,
                             v31,
                             v28,
                             0,
                             &v45,
                             &v52,
                             1u,
                             (const struct tagRECT *)&v55[v29 + 160],
                             (struct COREDEVICEACCESS *)v55,
                             &v49);
            if ( (int)v14 < 0 )
              goto LABEL_49;
            v21 = v50.Height;
            v25 = v24 + 1;
            Width = v50.Width;
          }
          if ( v22 )
          {
            v41 = (VIDPNSOURCEINFO *)&v55[16 * (((_BYTE)v22 - 1) & 1) + 160];
            v32 = VIDPNSOURCEINFO::CheckPrimaryContentTile(
                    v41,
                    v2,
                    v46[((_BYTE)v22 - 1) & 1],
                    v53.Pitch,
                    (const struct tagRECT *)v41,
                    (struct COREDEVICEACCESS *)v55,
                    &v44,
                    &v43);
            v14 = v32;
            if ( v32 < 0 )
            {
              WdLogSingleEntry1(2LL, v32);
              WdLogGlobalForLineNumber = 2155;
              DxgkLogInternalTriageEvent(
                0LL,
                0x40000LL,
                0xFFFFFFFFLL,
                L"CheckPrimaryContentTile() failed with status : 0x%I64x",
                v14,
                0LL,
                0LL,
                0LL,
                0LL);
LABEL_49:
              v36 = v42;
LABEL_50:
              v37 = *((_DWORD *)this + 7);
              if ( (int)v14 < 0 )
              {
                v38 = v37 & 0xFFFFFFE7 | 0x10;
                goto LABEL_55;
              }
              if ( (v37 & 0x18) != 0 && *((_DWORD *)this + 14) < v36 )
              {
                v38 = v37 & 0xFFFFFFE7 | 8;
LABEL_55:
                *((_DWORD *)this + 7) = v38;
              }
              v12 = v48;
              break;
            }
            v33 = v43;
            if ( v43 == v44 )
            {
              *((_DWORD *)this + 7) &= 0xFFFFFFE7;
              goto LABEL_49;
            }
            v34 = *((_DWORD *)this + 14);
            *((_DWORD *)this + 13) += v44;
            v35 = v33 + v34;
            *((_DWORD *)this + 14) = v35;
            if ( v22 >= 2 )
            {
              v36 = v42;
              if ( v35 >= v42 )
              {
                *((_DWORD *)this + 7) &= 0xFFFFFFE7;
                goto LABEL_50;
              }
            }
            v21 = v50.Height;
            v25 = v24 + 1;
            Width = v50.Width;
          }
          if ( ++v22 >= v25 )
            goto LABEL_49;
          v23 = v47;
        }
      }
LABEL_57:
      v39 = v46;
      do
      {
        if ( *v39 )
          DXGDEVICE::DestroyStagingSurface((ADAPTER_RENDER **)v2, *v39, 0, (struct COREDEVICEACCESS *)v55);
        ++v39;
        --v15;
      }
      while ( v15 );
      if ( v12 )
        KeUnstackDetachProcess(&ApcState);
      v40 = (char *)v45 + 440;
      *((_QWORD *)v45 + 56) = 0LL;
      ExReleasePushLockExclusiveEx(v40, 0LL);
      KeLeaveCriticalRegion();
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v55);
      DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v51);
      return (unsigned int)v14;
    }
    else
    {
      v9 = (char *)v45 + 440;
      *((_QWORD *)v45 + 56) = 0LL;
      ExReleasePushLockExclusiveEx(v9, 0LL);
      KeLeaveCriticalRegion();
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v55);
      DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v51);
      return (unsigned int)v8;
    }
  }
  else
  {
    WdLogSingleEntry1(2LL, v2);
    WdLogGlobalForLineNumber = 1973;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
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
