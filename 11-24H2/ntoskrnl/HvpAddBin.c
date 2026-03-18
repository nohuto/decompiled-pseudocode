/*
 * XREFs of HvpAddBin @ 0x140980584
 * Callers:
 *     HvpDoAllocateCell @ 0x140882054 (HvpDoAllocateCell.c)
 *     HvAllocateCell @ 0x1408822D8 (HvAllocateCell.c)
 * Callees:
 *     HvpGrowDirtyVectors @ 0x14037D62C (HvpGrowDirtyVectors.c)
 *     RtlNumberOfSetBits @ 0x14042B480 (RtlNumberOfSetBits.c)
 *     CmpProtectPoolEx @ 0x14048B094 (CmpProtectPoolEx.c)
 *     MmSetPageProtection @ 0x1404D6CF0 (MmSetPageProtection.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     HvpViewMapShrinkStorage @ 0x1407DF04C (HvpViewMapShrinkStorage.c)
 *     HvpShrinkMap @ 0x1407E3A08 (HvpShrinkMap.c)
 *     CmpReleaseGlobalQuota @ 0x14087EEC0 (CmpReleaseGlobalQuota.c)
 *     HvpAdjustHiveFreeDisplay @ 0x14087EF00 (HvpAdjustHiveFreeDisplay.c)
 *     CmpClaimGlobalQuota @ 0x14087F12C (CmpClaimGlobalQuota.c)
 *     HvpMarkDirty @ 0x140882A90 (HvpMarkDirty.c)
 *     HvpSetRangeProtection @ 0x1408832A4 (HvpSetRangeProtection.c)
 *     HvpViewMapExtendStorage @ 0x14097FB04 (HvpViewMapExtendStorage.c)
 *     HvpViewMapCOWAndUnsealRange @ 0x14097FDC0 (HvpViewMapCOWAndUnsealRange.c)
 *     HvpFindFreeBin @ 0x140980D0C (HvpFindFreeBin.c)
 *     CmpCanGrowHive @ 0x140980D70 (CmpCanGrowHive.c)
 *     HvpExpandMap @ 0x140980DE8 (HvpExpandMap.c)
 *     CmpDoFileSetSizeEx @ 0x140980EB4 (CmpDoFileSetSizeEx.c)
 *     HvpPointMapEntriesToBuffer @ 0x14098127C (HvpPointMapEntriesToBuffer.c)
 *     HvpViewMapPromoteRangeToMapping @ 0x1409826CC (HvpViewMapPromoteRangeToMapping.c)
 *     HvpProtectBinPartial @ 0x140A378BC (HvpProtectBinPartial.c)
 *     CmpUpdateSystemHiveHysteresis @ 0x140A5B334 (CmpUpdateSystemHiveHysteresis.c)
 *     HvpAllocateBin @ 0x140A60328 (HvpAllocateBin.c)
 *     HvpAllocateNonPagedBin @ 0x140A60388 (HvpAllocateNonPagedBin.c)
 *     HvpFreeBin @ 0x140A6A13C (HvpFreeBin.c)
 *     HvpGetCellMap @ 0x140BB9710 (HvpGetCellMap.c)
 */

__int64 __fastcall HvpAddBin(ULONG_PTR BugCheckParameter2, unsigned int a2, int a3, unsigned int *a4)
{
  __int64 v4; // rsi
  unsigned int v5; // edi
  char v8; // r12
  _QWORD *FreeBin; // rax
  _QWORD *v10; // rbx
  unsigned int v11; // r15d
  unsigned int v12; // ebx
  unsigned int v13; // r13d
  int Bin; // esi
  __int64 v15; // rdx
  __int64 *v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  int v19; // eax
  int v20; // eax
  signed __int64 v21; // rax
  _DWORD *v22; // rbx
  void *v23; // rdx
  int v24; // ecx
  unsigned int v25; // esi
  __int64 v27; // rcx
  _QWORD *v28; // rax
  __int64 v29; // r8
  __int64 v30; // r9
  _DWORD *v31; // rax
  int v32; // edi
  __int64 v33; // r9
  unsigned int v34; // edi
  __int64 v35; // r8
  __int64 CellMap; // rax
  unsigned int v37; // r8d
  unsigned int v38; // r11d
  _QWORD *v39; // r10
  __int64 v40; // rax
  __int64 v41; // rax
  int v42; // eax
  __int64 *v43; // rax
  __int64 v44; // rcx
  __int64 v45; // rdx
  __int64 *v46; // rax
  __int64 v47; // rcx
  int v48; // r8d
  int v49; // ebx
  ULONG v50; // eax
  __int64 v51; // rax
  _DWORD *v52; // rcx
  __int64 v53; // r9
  __int64 v54; // rax
  unsigned int v55; // [rsp+30h] [rbp-38h]
  size_t Size; // [rsp+34h] [rbp-34h]
  unsigned int v57; // [rsp+3Ch] [rbp-2Ch] BYREF
  void *v58; // [rsp+40h] [rbp-28h] BYREF
  void *v59; // [rsp+48h] [rbp-20h] BYREF
  __int64 v60; // [rsp+50h] [rbp-18h]
  __int64 v61; // [rsp+58h] [rbp-10h]
  char v62; // [rsp+B0h] [rbp+48h]
  char v63; // [rsp+B8h] [rbp+50h]

  v4 = a3;
  Size = 0LL;
  v5 = (a2 + 4127) & 0xFFFFF000;
  v57 = 0;
  v62 = 0;
  v58 = 0LL;
  v60 = 0LL;
  v8 = 0;
  v59 = 0LL;
  v63 = 0;
  if ( v5 <= 0x3000 && v5 - (unsigned __int64)a2 - 32 < 0xE00 )
    v5 += 4096;
  FreeBin = (_QWORD *)HvpFindFreeBin(BugCheckParameter2, v5, (unsigned int)a3, &v57);
  v10 = FreeBin;
  if ( FreeBin )
  {
    v27 = *FreeBin;
    if ( *(_QWORD **)(*FreeBin + 8LL) != FreeBin )
      goto LABEL_40;
    v28 = (_QWORD *)FreeBin[1];
    if ( (_QWORD *)*v28 != v10 )
      goto LABEL_40;
    *v28 = v27;
    *(_QWORD *)(v27 + 8) = v28;
    v32 = (_DWORD)v4 << 31;
    Bin = HvpMarkDirty(BugCheckParameter2, ((_DWORD)v4 << 31) + *((_DWORD *)v10 + 5), *((_DWORD *)v10 + 4), 0);
    if ( Bin < 0 )
    {
      v46 = (__int64 *)(BugCheckParameter2 + 632LL * a3 + 888);
      v47 = *v46;
      if ( *(__int64 **)(*v46 + 8) == v46 )
      {
        *v10 = v47;
        v10[1] = v46;
        *(_QWORD *)(v47 + 8) = v10;
        *v46 = (__int64)v10;
        return (unsigned int)Bin;
      }
      goto LABEL_40;
    }
    v34 = *((_DWORD *)v10 + 5) + v32;
    v35 = 0LL;
    while ( (unsigned int)v35 < v57 )
    {
      CellMap = HvpGetCellMap(BugCheckParameter2, (unsigned int)v35 + v34);
      v39 = (_QWORD *)CellMap;
      if ( !CellMap )
        KeBugCheckEx(0x51u, 1uLL, BugCheckParameter2, v38, 0x394uLL);
      *(_QWORD *)(CellMap + 8) &= ~2uLL;
      v40 = v37;
      v35 = v37 + 4096;
      *v39 = v40;
    }
    guard_dispatch_icall_no_overrides(v10, 24LL, v35, v33);
    *a4 = v34;
    return 0;
  }
  else
  {
    v61 = 632 * v4;
    v11 = *(_DWORD *)(632 * v4 + BugCheckParameter2 + 280);
    v12 = v11;
    v55 = v11;
    v13 = v11 + v5;
    if ( !(_DWORD)v4 && v5 <= 0x40000 && (((v11 + 4096) ^ (v13 + 4095)) & 0xFFFC0000) != 0 )
    {
      v12 = ((v11 + 266239) & 0xFFFC0000) - 4096;
      v55 = v12;
      LODWORD(Size) = v12 - v11;
      v13 = v12 + v5;
    }
    if ( v13 < v11 || !(unsigned __int8)CmpCanGrowHive(BugCheckParameter2, v13) )
      return (unsigned int)-1073741670;
    Bin = HvpExpandMap(BugCheckParameter2, (unsigned int)v4, v11, v13);
    if ( Bin >= 0 )
    {
      *(_DWORD *)(v61 + BugCheckParameter2 + 280) = v13;
      Bin = HvpAdjustHiveFreeDisplay(BugCheckParameter2, v13, a3);
      if ( Bin < 0 )
      {
LABEL_43:
        HvpShrinkMap(BugCheckParameter2, a3, v13, v11);
        *(_DWORD *)(632LL * a3 + BugCheckParameter2 + 280) = v11;
        if ( v62 )
        {
          *(_QWORD *)(BugCheckParameter2 + 96) = *(_QWORD *)(BugCheckParameter2 + 96);
          *(_DWORD *)(BugCheckParameter2 + 88) = v11 >> 9;
          v49 = *(_DWORD *)(BugCheckParameter2 + 104);
          v50 = RtlNumberOfSetBits((PRTL_BITMAP)(BugCheckParameter2 + 88));
          *(_DWORD *)(BugCheckParameter2 + 104) = v50;
          _InterlockedAdd(&CmpDirtySectorCount, v50 - v49);
          v51 = *(_QWORD *)(BugCheckParameter2 + 120);
          *(_DWORD *)(BugCheckParameter2 + 112) = v11 >> 9;
          *(_QWORD *)(BugCheckParameter2 + 120) = v51;
          *(_DWORD *)(BugCheckParameter2 + 128) = RtlNumberOfSetBits((PRTL_BITMAP)(BugCheckParameter2 + 112));
        }
        if ( v63 )
          HvpViewMapShrinkStorage(BugCheckParameter2 + 224, v11);
        if ( v58 && !v8 )
          HvpFreeBin(BugCheckParameter2, v55 - v11);
        if ( v60 )
          guard_dispatch_icall_no_overrides(v60, 24LL, v29, v30);
        if ( v59 && !v8 )
          HvpFreeBin(BugCheckParameter2, v13 - v55);
        if ( HIDWORD(Size) )
          CmpReleaseGlobalQuota(HIDWORD(Size));
        return (unsigned int)Bin;
      }
      v19 = a3;
      if ( a3 )
      {
LABEL_28:
        if ( (_DWORD)Size )
        {
          if ( v8 )
          {
            if ( !CmpClaimGlobalQuota((unsigned int)Size, v15) )
              goto LABEL_41;
            HIDWORD(Size) = Size;
            v63 = v8;
            Bin = HvpViewMapPromoteRangeToMapping(BugCheckParameter2 + 224, v11, (unsigned int)Size, &v58);
            if ( Bin < 0 )
              goto LABEL_42;
            v42 = HvpViewMapCOWAndUnsealRange(BugCheckParameter2 + 224, v11, Size);
          }
          else
          {
            v63 = 0;
            Bin = HvpAllocateBin(BugCheckParameter2, Size, v19, 808602947, (__int64)&v58);
            if ( Bin < 0 )
              goto LABEL_42;
            v42 = HvpProtectBinPartial(BugCheckParameter2, (_DWORD)v58, v48, 0, Size, 1);
          }
          v63 = v8;
          Bin = v42;
          if ( v42 < 0 )
            goto LABEL_42;
          memset_0(v58, 0, (unsigned int)Size);
          v52 = v58;
          *((_DWORD *)v58 + 7) = 0;
          v52[1] = v11 & 0x7FFFFFFF;
          v52[8] = Size - 32;
          *v52 = 1852400232;
          v52[2] = Size;
          v54 = guard_dispatch_icall_no_overrides(24LL, 0LL, 825380163LL, v53);
          v60 = v54;
          if ( !v54 )
            goto LABEL_41;
          *(_DWORD *)(v54 + 16) = Size;
          *(_DWORD *)(v54 + 20) = v11;
        }
        if ( v8 )
        {
          if ( CmpClaimGlobalQuota(v5, v15) )
          {
            HIDWORD(Size) += v5;
            v63 = v8;
            Bin = HvpViewMapPromoteRangeToMapping(BugCheckParameter2 + 224, v12, v5, &v59);
            if ( Bin >= 0 )
            {
              v63 = v8;
              Bin = HvpViewMapCOWAndUnsealRange(BugCheckParameter2 + 224, v12, v5);
              if ( Bin >= 0 )
              {
                v22 = v59;
                goto LABEL_34;
              }
            }
LABEL_42:
            HvpAdjustHiveFreeDisplay(BugCheckParameter2, v11, a3);
            goto LABEL_43;
          }
LABEL_41:
          Bin = -1073741670;
          v63 = v8;
          goto LABEL_42;
        }
        if ( (*(_DWORD *)(BugCheckParameter2 + 160) & 0x2000000) != 0 )
        {
          Bin = HvpAllocateNonPagedBin(v16, v5, &v59);
          v63 = 0;
          if ( Bin < 0 )
            goto LABEL_42;
          v22 = v59;
        }
        else
        {
          LOBYTE(v15) = a3 == 0;
          v31 = (_DWORD *)guard_dispatch_icall_no_overrides(v5, v15, 909200707LL, v18);
          if ( !v31 )
            goto LABEL_41;
          v22 = v31;
          v59 = v31;
        }
        if ( (*(_DWORD *)(BugCheckParameter2 + 160) & 0x2000000) != 0 )
        {
          MmSetPageProtection((unsigned __int64)v22, v5, 4u);
          goto LABEL_34;
        }
        if ( (unsigned int)CmpProtectPoolEx((unsigned __int64)v22, (unsigned __int64)v22, v5, 4u) )
        {
LABEL_34:
          memset_0(v22, 0, v5);
          v22[7] = 0;
          v23 = v58;
          v24 = a3 << 31;
          v22[1] = v55 & 0x7FFFFFFF;
          v22[8] = v5 - 32;
          *v22 = 1852400232;
          v22[2] = v5;
          if ( !v23 )
          {
LABEL_35:
            v25 = v24 + v55;
            v55 += v24;
            HvpPointMapEntriesToBuffer(BugCheckParameter2, v8 ^ 1, 0LL);
            if ( a3 )
            {
LABEL_36:
              *a4 = v25;
              return 0;
            }
            if ( (*(_DWORD *)(BugCheckParameter2 + 160) & 1) != 0 )
            {
LABEL_64:
              CmpUpdateSystemHiveHysteresis(BugCheckParameter2, v13, v11);
              HvpSetRangeProtection(BugCheckParameter2, v11, v13 - v11, 4);
              goto LABEL_36;
            }
            v63 = v8;
            Bin = HvpMarkDirty(BugCheckParameter2, v11, v13 - v11, 0);
            if ( Bin >= 0 )
            {
              v25 = v55;
              goto LABEL_64;
            }
            goto LABEL_42;
          }
          HvpPointMapEntriesToBuffer(BugCheckParameter2, v8 ^ 1, v60);
          v43 = (__int64 *)(BugCheckParameter2 + 632LL * a3 + 888);
          v44 = *v43;
          if ( *(__int64 **)(*v43 + 8) == v43 )
          {
            v45 = v60;
            *(_QWORD *)v60 = v44;
            *(_QWORD *)(v45 + 8) = v43;
            *(_QWORD *)(v44 + 8) = v45;
            v24 = a3 << 31;
            *v43 = v45;
            goto LABEL_35;
          }
LABEL_40:
          __fastfail(3u);
        }
        goto LABEL_41;
      }
      if ( (*(_DWORD *)(BugCheckParameter2 + 160) & 1) == 0 )
      {
        Bin = HvpGrowDirtyVectors(BugCheckParameter2, v13, v17, v18);
        if ( Bin < 0 )
          goto LABEL_42;
        v62 = 1;
      }
      if ( (*(_DWORD *)(BugCheckParameter2 + 160) & 0x8001) == 0 )
      {
        Bin = CmpDoFileSetSizeEx(BugCheckParameter2, 0LL, v13 + 4096, 1LL);
        if ( Bin < 0 )
          goto LABEL_42;
        if ( (*(_DWORD *)(BugCheckParameter2 + 4112) & 0x800) != 0 && !*(_DWORD *)(BugCheckParameter2 + 4228) )
          *(_DWORD *)(BugCheckParameter2 + 4228) = v11;
      }
      if ( (*(_DWORD *)(BugCheckParameter2 + 160) & 0x20000) == 0 )
      {
LABEL_27:
        v19 = 0;
        goto LABEL_28;
      }
      v20 = *(_DWORD *)(BugCheckParameter2 + 256);
      v16 = (__int64 *)(BugCheckParameter2 + 224);
      v15 = 2147479552LL;
      if ( (v20 & 1) != 0 )
      {
        v41 = *(_QWORD *)(BugCheckParameter2 + 240);
      }
      else
      {
        if ( (v20 & 8) == 0 )
          goto LABEL_23;
        v41 = *(_QWORD *)(BugCheckParameter2 + 232);
      }
      v21 = v41 & 0xFFFFFFFFFFFFF000uLL;
      if ( v21 < 2147479552 )
      {
LABEL_24:
        if ( v13 <= (int)v21 - 4096 )
        {
          Bin = HvpViewMapExtendStorage(v16, v13);
          if ( Bin < 0 )
            goto LABEL_42;
          v8 = 1;
        }
        goto LABEL_27;
      }
LABEL_23:
      LODWORD(v21) = 2147479552;
      goto LABEL_24;
    }
  }
  return (unsigned int)Bin;
}
