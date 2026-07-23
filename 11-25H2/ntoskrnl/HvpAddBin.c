/*
 * XREFs of HvpAddBin @ 0x1409F795C
 * Callers:
 *     HvpDoAllocateCell @ 0x140880110 (HvpDoAllocateCell.c)
 *     HvAllocateCell @ 0x1408803CC (HvAllocateCell.c)
 * Callees:
 *     RtlNumberOfSetBits @ 0x140395F40 (RtlNumberOfSetBits.c)
 *     HvpGrowDirtyVectors @ 0x1404612E4 (HvpGrowDirtyVectors.c)
 *     CmpProtectPoolEx @ 0x14048B830 (CmpProtectPoolEx.c)
 *     MmSetPageProtection @ 0x1404F43C0 (MmSetPageProtection.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     HvpViewMapShrinkStorage @ 0x1407CF774 (HvpViewMapShrinkStorage.c)
 *     HvpShrinkMap @ 0x1407D4128 (HvpShrinkMap.c)
 *     CmpReleaseGlobalQuota @ 0x14087E2C0 (CmpReleaseGlobalQuota.c)
 *     HvpAdjustHiveFreeDisplay @ 0x14087E300 (HvpAdjustHiveFreeDisplay.c)
 *     CmpClaimGlobalQuota @ 0x14087E52C (CmpClaimGlobalQuota.c)
 *     HvpMarkDirty @ 0x140880BA0 (HvpMarkDirty.c)
 *     HvpSetRangeProtection @ 0x1408813B4 (HvpSetRangeProtection.c)
 *     HvpViewMapCOWAndUnsealRange @ 0x140881A90 (HvpViewMapCOWAndUnsealRange.c)
 *     HvpViewMapPromoteRangeToMapping @ 0x14088274C (HvpViewMapPromoteRangeToMapping.c)
 *     HvpProtectBinPartial @ 0x140882DC4 (HvpProtectBinPartial.c)
 *     HvpViewMapExtendStorage @ 0x1408834A4 (HvpViewMapExtendStorage.c)
 *     HvpAllocateBin @ 0x1409F7114 (HvpAllocateBin.c)
 *     HvpFindFreeBin @ 0x1409F80E4 (HvpFindFreeBin.c)
 *     CmpCanGrowHive @ 0x1409F8148 (CmpCanGrowHive.c)
 *     HvpExpandMap @ 0x1409F81BC (HvpExpandMap.c)
 *     CmpDoFileSetSizeEx @ 0x1409F8288 (CmpDoFileSetSizeEx.c)
 *     HvpPointMapEntriesToBuffer @ 0x1409F8650 (HvpPointMapEntriesToBuffer.c)
 *     CmpUpdateSystemHiveHysteresis @ 0x1409F8710 (CmpUpdateSystemHiveHysteresis.c)
 *     HvpAllocateNonPagedBin @ 0x1409F8730 (HvpAllocateNonPagedBin.c)
 *     HvpFreeBin @ 0x140A674FC (HvpFreeBin.c)
 *     HvpGetCellMap @ 0x140BA97C0 (HvpGetCellMap.c)
 */

__int64 __fastcall HvpAddBin(ULONG_PTR BugCheckParameter2, unsigned int a2, int a3, unsigned int *a4)
{
  __int64 v4; // rsi
  unsigned int v5; // edi
  char v8; // r12
  _QWORD *FreeBin; // rax
  _QWORD *v10; // rbx
  unsigned int v11; // r15d
  int v12; // ebx
  unsigned int v13; // r13d
  int Bin; // esi
  __int64 v15; // rdx
  __int64 v16; // rcx
  unsigned int v17; // eax
  int v18; // eax
  signed __int64 v19; // rax
  _DWORD *v20; // rbx
  void *v21; // rdx
  int v22; // ecx
  unsigned int v23; // esi
  __int64 v25; // rcx
  _QWORD *v26; // rax
  _DWORD *v27; // rax
  int v28; // edi
  int v29; // edi
  unsigned int v30; // r8d
  __int64 CellMap; // rax
  unsigned int v32; // r8d
  unsigned int v33; // r11d
  _QWORD *v34; // r10
  __int64 v35; // rax
  __int64 v36; // rax
  int v37; // eax
  __int64 *v38; // rax
  __int64 v39; // rcx
  __int64 v40; // rdx
  __int64 *v41; // rax
  __int64 v42; // rcx
  __int64 v43; // r8
  int v44; // ebx
  ULONG v45; // eax
  __int64 v46; // rax
  _DWORD *v47; // rcx
  __int64 v48; // rax
  unsigned int v49; // [rsp+30h] [rbp-38h]
  size_t Size; // [rsp+34h] [rbp-34h]
  unsigned int v51; // [rsp+3Ch] [rbp-2Ch] BYREF
  void *v52; // [rsp+40h] [rbp-28h] BYREF
  void *v53; // [rsp+48h] [rbp-20h] BYREF
  __int64 v54; // [rsp+50h] [rbp-18h]
  __int64 v55; // [rsp+58h] [rbp-10h]
  char v56; // [rsp+B0h] [rbp+48h]
  char v57; // [rsp+B8h] [rbp+50h]

  v4 = a3;
  Size = 0LL;
  v5 = (a2 + 4127) & 0xFFFFF000;
  v51 = 0;
  v56 = 0;
  v52 = 0LL;
  v54 = 0LL;
  v8 = 0;
  v53 = 0LL;
  v57 = 0;
  if ( v5 <= 0x3000 && v5 - (unsigned __int64)a2 - 32 < 0xE00 )
    v5 += 4096;
  FreeBin = (_QWORD *)HvpFindFreeBin(BugCheckParameter2, v5, (unsigned int)a3, &v51);
  v10 = FreeBin;
  if ( FreeBin )
  {
    v25 = *FreeBin;
    if ( *(_QWORD **)(*FreeBin + 8LL) != FreeBin )
      goto LABEL_40;
    v26 = (_QWORD *)FreeBin[1];
    if ( (_QWORD *)*v26 != v10 )
      goto LABEL_40;
    *v26 = v25;
    *(_QWORD *)(v25 + 8) = v26;
    v28 = (_DWORD)v4 << 31;
    Bin = HvpMarkDirty(BugCheckParameter2, ((_DWORD)v4 << 31) + *((_DWORD *)v10 + 5), *((_DWORD *)v10 + 4), 0);
    if ( Bin < 0 )
    {
      v41 = (__int64 *)(BugCheckParameter2 + 632LL * a3 + 888);
      v42 = *v41;
      if ( *(__int64 **)(*v41 + 8) == v41 )
      {
        *v10 = v42;
        v10[1] = v41;
        *(_QWORD *)(v42 + 8) = v10;
        *v41 = (__int64)v10;
        return (unsigned int)Bin;
      }
      goto LABEL_40;
    }
    v29 = *((_DWORD *)v10 + 5) + v28;
    v30 = 0;
    while ( v30 < v51 )
    {
      CellMap = HvpGetCellMap(BugCheckParameter2, v30 + v29);
      v34 = (_QWORD *)CellMap;
      if ( !CellMap )
        KeBugCheckEx(0x51u, 1uLL, BugCheckParameter2, v33, 0x394uLL);
      *(_QWORD *)(CellMap + 8) &= ~2uLL;
      v35 = v32;
      v30 = v32 + 4096;
      *v34 = v35;
    }
    guard_dispatch_icall_no_overrides(v10);
    *a4 = v29;
    return 0;
  }
  else
  {
    v55 = 632 * v4;
    v11 = *(_DWORD *)(632 * v4 + BugCheckParameter2 + 280);
    v12 = v11;
    v49 = v11;
    v13 = v11 + v5;
    if ( !(_DWORD)v4 && v5 <= 0x40000 && (((v11 + 4096) ^ (v13 + 4095)) & 0xFFFC0000) != 0 )
    {
      v12 = ((v11 + 266239) & 0xFFFC0000) - 4096;
      v49 = v12;
      LODWORD(Size) = v12 - v11;
      v13 = v12 + v5;
    }
    if ( v13 < v11 || !(unsigned __int8)CmpCanGrowHive(BugCheckParameter2, v13) )
      return (unsigned int)-1073741670;
    Bin = HvpExpandMap(BugCheckParameter2, (unsigned int)v4, v11, v13);
    if ( Bin >= 0 )
    {
      *(_DWORD *)(v55 + BugCheckParameter2 + 280) = v13;
      Bin = HvpAdjustHiveFreeDisplay(BugCheckParameter2, v13, a3);
      if ( Bin < 0 )
      {
LABEL_43:
        HvpShrinkMap(BugCheckParameter2, a3, v13, v11);
        *(_DWORD *)(632LL * a3 + BugCheckParameter2 + 280) = v11;
        if ( v56 )
        {
          *(_QWORD *)(BugCheckParameter2 + 96) = *(_QWORD *)(BugCheckParameter2 + 96);
          *(_DWORD *)(BugCheckParameter2 + 88) = v11 >> 9;
          v44 = *(_DWORD *)(BugCheckParameter2 + 104);
          v45 = RtlNumberOfSetBits((PRTL_BITMAP)(BugCheckParameter2 + 88));
          *(_DWORD *)(BugCheckParameter2 + 104) = v45;
          _InterlockedAdd(&CmpDirtySectorCount, v45 - v44);
          v46 = *(_QWORD *)(BugCheckParameter2 + 120);
          *(_DWORD *)(BugCheckParameter2 + 112) = v11 >> 9;
          *(_QWORD *)(BugCheckParameter2 + 120) = v46;
          *(_DWORD *)(BugCheckParameter2 + 128) = RtlNumberOfSetBits((PRTL_BITMAP)(BugCheckParameter2 + 112));
        }
        if ( v57 )
          HvpViewMapShrinkStorage(BugCheckParameter2 + 224, v11);
        if ( v52 && !v8 )
          HvpFreeBin(BugCheckParameter2, v49 - v11);
        if ( v54 )
          guard_dispatch_icall_no_overrides(v54);
        if ( v53 && !v8 )
          HvpFreeBin(BugCheckParameter2, v13 - v49);
        if ( HIDWORD(Size) )
          CmpReleaseGlobalQuota(HIDWORD(Size));
        return (unsigned int)Bin;
      }
      v17 = a3;
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
            v57 = v8;
            Bin = HvpViewMapPromoteRangeToMapping(BugCheckParameter2 + 224, v11, Size, (__int64 *)&v52);
            if ( Bin < 0 )
              goto LABEL_42;
            v37 = HvpViewMapCOWAndUnsealRange(BugCheckParameter2 + 224, v11, Size);
          }
          else
          {
            v57 = 0;
            Bin = HvpAllocateBin(BugCheckParameter2, (unsigned int)Size, v17, 808602947LL, (__int64 *)&v52);
            if ( Bin < 0 )
              goto LABEL_42;
            v37 = HvpProtectBinPartial(BugCheckParameter2, (unsigned __int64)v52, v43, 0, Size, 1);
          }
          v57 = v8;
          Bin = v37;
          if ( v37 < 0 )
            goto LABEL_42;
          memset_0(v52, 0, (unsigned int)Size);
          v47 = v52;
          *((_DWORD *)v52 + 7) = 0;
          v47[1] = v11 & 0x7FFFFFFF;
          v47[8] = Size - 32;
          *v47 = 1852400232;
          v47[2] = Size;
          v48 = guard_dispatch_icall_no_overrides(24LL);
          v54 = v48;
          if ( !v48 )
            goto LABEL_41;
          *(_DWORD *)(v48 + 16) = Size;
          *(_DWORD *)(v48 + 20) = v11;
        }
        if ( v8 )
        {
          if ( CmpClaimGlobalQuota(v5, v15) )
          {
            HIDWORD(Size) += v5;
            v57 = v8;
            Bin = HvpViewMapPromoteRangeToMapping(BugCheckParameter2 + 224, v12, v5, (__int64 *)&v53);
            if ( Bin >= 0 )
            {
              v57 = v8;
              Bin = HvpViewMapCOWAndUnsealRange(BugCheckParameter2 + 224, v12, v5);
              if ( Bin >= 0 )
              {
                v20 = v53;
                goto LABEL_34;
              }
            }
LABEL_42:
            HvpAdjustHiveFreeDisplay(BugCheckParameter2, v11, a3);
            goto LABEL_43;
          }
LABEL_41:
          Bin = -1073741670;
          v57 = v8;
          goto LABEL_42;
        }
        if ( (*(_DWORD *)(BugCheckParameter2 + 160) & 0x2000000) != 0 )
        {
          Bin = HvpAllocateNonPagedBin(v16, v5, &v53);
          v57 = 0;
          if ( Bin < 0 )
            goto LABEL_42;
          v20 = v53;
        }
        else
        {
          v27 = (_DWORD *)guard_dispatch_icall_no_overrides(v5);
          if ( !v27 )
            goto LABEL_41;
          v20 = v27;
          v53 = v27;
        }
        if ( (*(_DWORD *)(BugCheckParameter2 + 160) & 0x2000000) != 0 )
        {
          MmSetPageProtection((unsigned __int64)v20, v5, 4u);
          goto LABEL_34;
        }
        if ( (unsigned int)CmpProtectPoolEx((unsigned __int64)v20, (unsigned __int64)v20, v5, 4u) )
        {
LABEL_34:
          memset_0(v20, 0, v5);
          v20[7] = 0;
          v21 = v52;
          v22 = a3 << 31;
          v20[1] = v49 & 0x7FFFFFFF;
          v20[8] = v5 - 32;
          *v20 = 1852400232;
          v20[2] = v5;
          if ( !v21 )
          {
LABEL_35:
            v23 = v22 + v49;
            v49 += v22;
            HvpPointMapEntriesToBuffer(BugCheckParameter2, v8 ^ 1, 0LL);
            if ( a3 )
            {
LABEL_36:
              *a4 = v23;
              return 0;
            }
            if ( (*(_DWORD *)(BugCheckParameter2 + 160) & 1) != 0 )
            {
LABEL_64:
              CmpUpdateSystemHiveHysteresis(BugCheckParameter2, v13, v11);
              HvpSetRangeProtection(BugCheckParameter2, v11, v13 - v11, 4);
              goto LABEL_36;
            }
            v57 = v8;
            Bin = HvpMarkDirty(BugCheckParameter2, v11, v13 - v11, 0);
            if ( Bin >= 0 )
            {
              v23 = v49;
              goto LABEL_64;
            }
            goto LABEL_42;
          }
          HvpPointMapEntriesToBuffer(BugCheckParameter2, v8 ^ 1, v54);
          v38 = (__int64 *)(BugCheckParameter2 + 632LL * a3 + 888);
          v39 = *v38;
          if ( *(__int64 **)(*v38 + 8) == v38 )
          {
            v40 = v54;
            *(_QWORD *)v54 = v39;
            *(_QWORD *)(v40 + 8) = v38;
            *(_QWORD *)(v39 + 8) = v40;
            v22 = a3 << 31;
            *v38 = v40;
            goto LABEL_35;
          }
LABEL_40:
          __fastfail(3u);
        }
        goto LABEL_41;
      }
      if ( (*(_DWORD *)(BugCheckParameter2 + 160) & 1) == 0 )
      {
        Bin = HvpGrowDirtyVectors(BugCheckParameter2, v13);
        if ( Bin < 0 )
          goto LABEL_42;
        v56 = 1;
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
        v17 = 0;
        goto LABEL_28;
      }
      v18 = *(_DWORD *)(BugCheckParameter2 + 256);
      v16 = BugCheckParameter2 + 224;
      v15 = 2147479552LL;
      if ( (v18 & 1) != 0 )
      {
        v36 = *(_QWORD *)(BugCheckParameter2 + 240);
      }
      else
      {
        if ( (v18 & 8) == 0 )
          goto LABEL_23;
        v36 = *(_QWORD *)(BugCheckParameter2 + 232);
      }
      v19 = v36 & 0xFFFFFFFFFFFFF000uLL;
      if ( v19 < 2147479552 )
      {
LABEL_24:
        if ( v13 <= (int)v19 - 4096 )
        {
          Bin = HvpViewMapExtendStorage(v16, v13);
          if ( Bin < 0 )
            goto LABEL_42;
          v8 = 1;
        }
        goto LABEL_27;
      }
LABEL_23:
      LODWORD(v19) = 2147479552;
      goto LABEL_24;
    }
  }
  return (unsigned int)Bin;
}
