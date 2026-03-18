/*
 * XREFs of HvpRemapAndEnlistHiveBins @ 0x1408820A0
 * Callers:
 *     HvLoadHive @ 0x1409F8C4C (HvLoadHive.c)
 * Callees:
 *     RtlSetBits @ 0x140339430 (RtlSetBits.c)
 *     SetFailureLocation @ 0x140465824 (SetFailureLocation.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     HvIsRangeDirty @ 0x1407D3D6C (HvIsRangeDirty.c)
 *     CmpReleaseGlobalQuota @ 0x14087E2C0 (CmpReleaseGlobalQuota.c)
 *     HvpMarkDirty @ 0x140880BA0 (HvpMarkDirty.c)
 *     HvpEnlistFreeCells @ 0x140881C80 (HvpEnlistFreeCells.c)
 *     HvpViewMapPromoteRangeToMapping @ 0x14088274C (HvpViewMapPromoteRangeToMapping.c)
 *     HvpProtectBinPartial @ 0x140882DC4 (HvpProtectBinPartial.c)
 *     HvpAllocateBin @ 0x1409F7114 (HvpAllocateBin.c)
 *     HvpPointMapEntriesToBuffer @ 0x1409F8650 (HvpPointMapEntriesToBuffer.c)
 *     HvpValidateLoadedBin @ 0x1409FF1DC (HvpValidateLoadedBin.c)
 *     HvpFreeBin @ 0x140A674FC (HvpFreeBin.c)
 *     HvpGetCellMap @ 0x140BA97C0 (HvpGetCellMap.c)
 *     HvpMapEntryGetBinAddress @ 0x140BA9820 (HvpMapEntryGetBinAddress.c)
 *     HvpMapEntryReleaseBinAddress @ 0x140BA9840 (HvpMapEntryReleaseBinAddress.c)
 *     HvpGetBinContextInitialize @ 0x140BA99C0 (HvpGetBinContextInitialize.c)
 */

__int64 __fastcall HvpRemapAndEnlistHiveBins(ULONG_PTR BugCheckParameter2, int a2, __int64 a3)
{
  __int64 v4; // r13
  __int64 v5; // r9
  bool v6; // zf
  unsigned int v7; // ebx
  unsigned int v8; // r10d
  unsigned int v9; // r14d
  __int64 CellMap; // r15
  __int64 v11; // rcx
  _DWORD *BinAddress; // rax
  int v13; // r11d
  _DWORD *v14; // rdi
  __int64 v15; // rcx
  int v16; // r8d
  __int64 v17; // rdx
  unsigned int v18; // eax
  char v19; // r9
  __int64 v20; // r10
  unsigned int v21; // ebx
  __int64 v22; // rdx
  unsigned int v23; // r12d
  int Bin; // ebx
  int v25; // r15d
  _DWORD *v26; // rbx
  __int64 v27; // rcx
  _DWORD *v28; // rax
  int v29; // r8d
  unsigned int v30; // ebx
  int v31; // r8d
  unsigned int v32; // r15d
  unsigned int v33; // r15d
  unsigned int v34; // r8d
  __int64 v35; // rax
  __int64 v36; // rcx
  unsigned int v37; // r8d
  ULONG_PTR v38; // r10
  __int64 v39; // rax
  ULONG v40; // edi
  char v41; // r11
  unsigned int v42; // r15d
  unsigned int v43; // r12d
  unsigned int v44; // r10d
  int v45; // eax
  __int64 v46; // rcx
  __int64 v47; // rbx
  unsigned int v48; // r8d
  __int64 v49; // rax
  unsigned int v50; // r8d
  unsigned int v51; // r11d
  __int64 v52; // r10
  unsigned int v53; // eax
  __int64 v54; // rax
  int v55; // r12d
  int v56; // r8d
  __int64 v57; // rax
  _QWORD *v58; // r8
  _QWORD *v59; // rax
  _QWORD *v60; // rax
  int v61; // r9d
  __int64 v62; // rdi
  __int64 v64; // r15
  __int64 v65; // rcx
  _DWORD *v66; // rdi
  __int64 v67; // rdx
  __int64 v68; // rcx
  ULONG v69; // eax
  __int64 v70; // rdx
  __int64 v71; // rcx
  ULONG v72; // r12d
  ULONG v73; // ebx
  __int64 v74; // r13
  __int64 v75; // rcx
  const void *v76; // rax
  __int64 v77; // rdx
  __int64 v78; // rcx
  int v79; // r8d
  int v80; // eax
  __int64 v81; // rcx
  int BugCheckParameter4; // [rsp+20h] [rbp-49h]
  char v83; // [rsp+30h] [rbp-39h]
  __int64 v84; // [rsp+38h] [rbp-31h]
  __int64 v85; // [rsp+38h] [rbp-31h]
  int v86; // [rsp+40h] [rbp-29h] BYREF
  unsigned int v87; // [rsp+44h] [rbp-25h]
  unsigned int v88; // [rsp+48h] [rbp-21h]
  unsigned int v89; // [rsp+4Ch] [rbp-1Dh]
  unsigned int v90; // [rsp+50h] [rbp-19h]
  __int64 v91; // [rsp+58h] [rbp-11h]
  void *v92; // [rsp+60h] [rbp-9h]
  __int64 v93; // [rsp+68h] [rbp-1h] BYREF
  __int64 v94; // [rsp+70h] [rbp+7h] BYREF
  _DWORD *v95; // [rsp+78h] [rbp+Fh]
  char v96; // [rsp+D0h] [rbp+67h]
  __int64 v99; // [rsp+E8h] [rbp+7Fh] BYREF

  LOWORD(v99) = 0;
  v4 = a3;
  HvpGetBinContextInitialize(&v99);
  v6 = (*(_DWORD *)(BugCheckParameter2 + 160) & 0x20000) == 0;
  v7 = *(_DWORD *)(BugCheckParameter2 + 280);
  v84 = (unsigned int)v5;
  v93 = (unsigned int)v5;
  v83 = v5;
  v94 = v5;
  v90 = v5;
  v89 = v7;
  if ( v6 )
    v8 = v5;
  else
    v8 = *(_DWORD *)(BugCheckParameter2 + 232) - 4096;
  v88 = v8;
  v9 = v5;
  while ( 1 )
  {
    if ( v9 >= v8 )
      goto LABEL_69;
    CellMap = HvpGetCellMap(BugCheckParameter2, v9);
    BinAddress = (_DWORD *)HvpMapEntryGetBinAddress(v11, CellMap, &v99);
    v14 = BinAddress;
    v95 = BinAddress;
    v15 = (unsigned int)BinAddress[2];
    v16 = BinAddress[1];
    v17 = (unsigned int)(v16 + v15);
    if ( (unsigned int)v17 > v7
      || (unsigned int)v15 < 0x1000
      || (unsigned int)v17 < (unsigned int)v15
      || (v15 & 0xFFF) != 0
      || v16 != v9
      || *BinAddress != 1852400232 )
    {
      break;
    }
LABEL_11:
    v18 = v14[2];
    if ( v18 == 4096 )
    {
      v19 = 0;
    }
    else
    {
      v90 = v14[2];
      v43 = v18;
      HvpMapEntryReleaseBinAddress(v15, v17, &v99);
      HvpGetBinContextInitialize(&v99);
      if ( v43 + v9 > v44 )
      {
        while ( 1 )
        {
LABEL_69:
          if ( v9 >= v7 )
          {
            Bin = v83 != 0 ? 0x40000009 : 0;
            goto LABEL_60;
          }
          v64 = HvpGetCellMap(BugCheckParameter2, v9);
          v66 = (_DWORD *)HvpMapEntryGetBinAddress(v65, v64, &v99);
          if ( !(unsigned __int8)HvpValidateLoadedBin(v66, v9, v7) )
          {
            Bin = -1073741492;
            SetFailureLocation(v4, 1, 34, -1073741492, 96);
            if ( (a2 & 0x20000) != 0 || !BYTE2(NlsMbOemCodePageTag) && (CmpBootType & 6) == 0 )
            {
              BugCheckParameter4 = 112;
              goto LABEL_92;
            }
            Bin = HvpMarkDirty(BugCheckParameter2, v9, 0x1000u, 0);
            if ( Bin < 0 )
            {
              BugCheckParameter4 = 128;
              goto LABEL_89;
            }
            memset_0(v66, 0, 0x1000uLL);
            v66[2] = 4096;
            *v66 = 1852400232;
            v66[1] = v9 & 0x7FFFFFFF;
            v66[8] = 4064;
            *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 4088LL) |= 4u;
            v83 = 1;
          }
          v69 = v66[2];
          if ( v69 != 4096 )
          {
            v90 = v66[2];
            v72 = v69;
            HvpMapEntryReleaseBinAddress(v68, v67, &v99);
            HvpGetBinContextInitialize(&v99);
            Bin = HvpAllocateBin(BugCheckParameter2, v72, 0, 825445699, (__int64)&v93);
            if ( Bin < 0 )
            {
              SetFailureLocation(v4, 0, 34, Bin, 144);
              v62 = v93;
              goto LABEL_61;
            }
            v62 = v93;
            v73 = 0;
            v85 = v93;
            if ( v72 )
            {
              v74 = v93;
              do
              {
                v64 = HvpGetCellMap(BugCheckParameter2, v73 + v9);
                v76 = (const void *)HvpMapEntryGetBinAddress(v75, v64, &v99);
                memmove((void *)(v74 + v73), v76, 0x1000uLL);
                HvpMapEntryReleaseBinAddress(v78, v77, &v99);
                HvpGetBinContextInitialize(&v99);
                if ( (*(_BYTE *)(v64 + 8) & 8) != 0 )
                  HvpFreeBin(BugCheckParameter2, 4096LL);
                else
                  CmpReleaseGlobalQuota(0x1000u);
                v73 += 4096;
                *(_QWORD *)v64 = 0LL;
                *(_QWORD *)(v64 + 8) = 0LL;
                *(_DWORD *)(v64 + 16) = 0;
              }
              while ( v73 < v72 );
              v4 = a3;
              v62 = v85;
            }
            if ( !HvIsRangeDirty(BugCheckParameter2, v9, v72) )
            {
              v80 = HvpProtectBinPartial(BugCheckParameter2, v62, v79, 0, v72, 0);
              Bin = v80;
              if ( v80 < 0 )
              {
                SetFailureLocation(v4, 0, 34, v80, 160);
                goto LABEL_61;
              }
            }
            HvpPointMapEntriesToBuffer(BugCheckParameter2, 1, 0LL);
            v66 = (_DWORD *)HvpMapEntryGetBinAddress(v81, v64, &v99);
            v84 = 0LL;
            v93 = 0LL;
          }
          Bin = HvpEnlistFreeCells(BugCheckParameter2, (__int64)v66, v9, a2);
          if ( Bin == 1073741833 )
          {
            v83 = 1;
          }
          else if ( Bin < 0 )
          {
            SetFailureLocation(v4, 0, 34, Bin, 176);
            goto LABEL_60;
          }
          v9 += v66[2];
          HvpMapEntryReleaseBinAddress(v71, v70, &v99);
          HvpGetBinContextInitialize(&v99);
          v7 = v89;
        }
      }
      v45 = HvpViewMapPromoteRangeToMapping(BugCheckParameter2 + 224, v9, v43, &v94);
      Bin = v45;
      if ( v45 < 0 )
      {
        BugCheckParameter4 = 64;
        v61 = v45;
        goto LABEL_59;
      }
      v47 = v94;
      v48 = 0;
      while ( v48 < v43 )
      {
        v49 = HvpGetCellMap(BugCheckParameter2, v48 + v9);
        v52 = v49;
        if ( !v49 )
          KeBugCheckEx(0x51u, 1uLL, BugCheckParameter2, v51, 0x428uLL);
        *(_QWORD *)(v49 + 8) = v47;
        if ( v50 )
        {
          v53 = 0;
        }
        else
        {
          v46 = v47 | 1;
          *(_QWORD *)(v49 + 8) = v47 | 1;
          v53 = v43;
        }
        *(_DWORD *)(v52 + 16) = v53;
        v54 = v50;
        v48 = v50 + 4096;
        *(_QWORD *)v52 = v54;
      }
      v14 = (_DWORD *)HvpMapEntryGetBinAddress(v46, CellMap, &v99);
      v95 = v14;
    }
    v20 = *(_QWORD *)(BugCheckParameter2 + 56);
    v21 = 32;
    *(_DWORD *)(BugCheckParameter2 + 144) += 32;
    v91 = v20;
    v96 = v19;
    while ( 1 )
    {
      v22 = (unsigned int)v14[2];
      v87 = v21;
      if ( v21 >= (unsigned int)v22 )
        break;
      v92 = (char *)v14 + v21;
      v23 = *(_DWORD *)v92;
      if ( *(int *)v92 < 0 )
        v23 = -v23;
      v15 = v23 + v21;
      if ( (unsigned int)v15 < v21 || (unsigned int)v15 > (unsigned int)v22 || (v23 & 7) != 0 || !v23 )
      {
        v55 = -1073741492;
        v25 = -1073741492;
        SetFailureLocation(v20, 1, 26, -1073741492, 8);
        v56 = 0;
        if ( (a2 & 0x20000) != 0 || !BYTE2(NlsMbOemCodePageTag) && (CmpBootType & 6) == 0 )
        {
          Bin = -1073741492;
LABEL_86:
          SetFailureLocation(v91, 0, 26, v55, v56);
          SetFailureLocation(v4, 0, 34, v25, 80);
          goto LABEL_60;
        }
        v23 = v14[2] - v21;
        Bin = HvpMarkDirty(BugCheckParameter2, v21 + v9, v23, 0);
        v25 = Bin;
        if ( Bin < 0 )
        {
          v55 = Bin;
          v56 = 16;
          goto LABEL_86;
        }
        v26 = v92;
        memset_0(v92, 0, v23);
        *v26 = v23;
        v96 = 1;
        v27 = v91;
        *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 4088LL) |= 4u;
        SetFailureLocation(v27, 1, 26, 1073741833, 32);
        v21 = v87;
      }
      else if ( *(int *)v92 < 0 )
      {
        *(_DWORD *)(BugCheckParameter2 + 152) += v23;
        goto LABEL_23;
      }
      *(_DWORD *)(BugCheckParameter2 + 148) += v23;
      LODWORD(v92) = v21 + v9;
      v28 = (_DWORD *)HvpGetCellMap(BugCheckParameter2, v21 + v9);
      v30 = (v29 & 0xFFFFF000) - *v28;
      v86 = *(_DWORD *)(HvpGetCellMap(BugCheckParameter2, v30) + 16);
      v32 = v86 + v30;
      if ( v30
        && v31 == v30 + 32LL
        && v31 + v23 == v32
        && (v57 = guard_dispatch_icall_no_overrides(24LL), v19 = 0, (v58 = (_QWORD *)v57) != 0LL) )
      {
        *(_QWORD *)v57 = 0LL;
        *(_QWORD *)(v57 + 8) = 0LL;
        *(_DWORD *)(v57 + 16) = v86;
        *(_DWORD *)(v57 + 20) = v30 & 0x7FFFFFFF;
        if ( v30 < v32 )
        {
          do
          {
            v59 = (_QWORD *)HvpGetCellMap(BugCheckParameter2, v30);
            v30 += 4096;
            v59[1] |= 2uLL;
            *v59 = v58;
          }
          while ( v30 < v32 );
          v19 = 0;
        }
        v60 = (_QWORD *)(BugCheckParameter2 + 888);
        v15 = *(_QWORD *)(BugCheckParameter2 + 888);
        if ( *(_QWORD *)(v15 + 8) != BugCheckParameter2 + 888 )
          __fastfail(3u);
        *v58 = v15;
        v58[1] = v60;
        *(_QWORD *)(v15 + 8) = v58;
        *v60 = v58;
      }
      else
      {
        LODWORD(v92) = 0;
        v33 = (v23 >> 3) - 1;
        if ( v33 >= 0x10 )
        {
          v42 = v33 >> 4;
          if ( v42 > 0xFF )
          {
            v33 = 23;
          }
          else
          {
            _BitScanReverse(&v42, v42);
            v33 = v42 + 16;
          }
        }
        LOWORD(v86) = 0;
        HvpGetBinContextInitialize(&v86);
        v35 = HvpGetCellMap(BugCheckParameter2, v34);
        if ( !v35 )
          KeBugCheckEx(0x51u, v38, BugCheckParameter2, v37, 0x2B9uLL);
        v39 = HvpMapEntryGetBinAddress(v36, v35, &v86);
        v40 = *(_DWORD *)(v39 + 4) >> 12;
        RtlSetBits((PRTL_BITMAP)(BugCheckParameter2 + 320 + 24LL * v33), v40, *(_DWORD *)(v39 + 8) >> 12);
        *(_DWORD *)(BugCheckParameter2 + 24LL * v33 + 316) = v40;
        v15 = v33;
        v14 = v95;
        *(_DWORD *)(BugCheckParameter2 + 904) |= 1 << v33;
        v19 = 0;
      }
      v20 = v91;
      v21 = v87;
LABEL_23:
      v21 += v23;
    }
    v41 = v83;
    if ( v96 != v19 )
      v41 = 1;
    v9 += v22;
    v83 = v41;
    HvpMapEntryReleaseBinAddress(v15, v22, &v99);
    HvpGetBinContextInitialize(&v99);
    v8 = v88;
    v7 = v89;
  }
  Bin = -1073741492;
  SetFailureLocation(v4, 1, 34, -1073741492, v13);
  if ( (a2 & 0x20000) == 0 && (BYTE2(NlsMbOemCodePageTag) || (CmpBootType & 6) != 0) )
  {
    Bin = HvpMarkDirty(BugCheckParameter2, v9, 0x1000u, 0);
    if ( Bin < 0 )
    {
      BugCheckParameter4 = 48;
LABEL_89:
      v61 = Bin;
      goto LABEL_59;
    }
    memset_0(v14, 0, 0x1000uLL);
    v7 = v89;
    v14[2] = 4096;
    v14[1] = v9 & 0x7FFFFFFF;
    *v14 = 1852400232;
    v14[8] = 4064;
    *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 4088LL) |= 4u;
    v83 = 1;
    goto LABEL_11;
  }
  BugCheckParameter4 = 32;
LABEL_92:
  v61 = -1073741492;
LABEL_59:
  SetFailureLocation(v4, 0, 34, v61, BugCheckParameter4);
LABEL_60:
  v62 = v84;
LABEL_61:
  if ( v62 )
    HvpFreeBin(BugCheckParameter2, v90);
  return (unsigned int)Bin;
}
