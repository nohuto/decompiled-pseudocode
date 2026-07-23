/*
 * XREFs of HvpEnlistFreeCells @ 0x14096C4B0
 * Callers:
 *     HvpBuildMapForMemoryBackedHive @ 0x1407E3D2C (HvpBuildMapForMemoryBackedHive.c)
 *     HvpRemapAndEnlistHiveBins @ 0x14096A820 (HvpRemapAndEnlistHiveBins.c)
 * Callees:
 *     RtlSetBits @ 0x14027C2D0 (RtlSetBits.c)
 *     SetFailureLocation @ 0x14045B110 (SetFailureLocation.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     HvpMarkDirty @ 0x140886940 (HvpMarkDirty.c)
 *     HvpGetCellMap @ 0x140BBB710 (HvpGetCellMap.c)
 *     HvpMapEntryGetBinAddress @ 0x140BBB770 (HvpMapEntryGetBinAddress.c)
 *     HvpGetBinContextInitialize @ 0x140BBB8D0 (HvpGetBinContextInitialize.c)
 */

__int64 __fastcall HvpEnlistFreeCells(ULONG_PTR BugCheckParameter2, __int64 a2, int a3, int a4)
{
  __int64 v4; // r13
  int v5; // r12d
  unsigned int v7; // r10d
  unsigned int i; // r14d
  unsigned int v10; // ecx
  unsigned int *v11; // rbx
  unsigned int v12; // esi
  int v13; // eax
  unsigned int v14; // edi
  unsigned int v15; // edi
  unsigned int v16; // ebx
  int v17; // r12d
  unsigned int v18; // r13d
  unsigned int v19; // r12d
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 BinAddress; // rax
  ULONG v23; // edi
  ULONG_PTR v24; // rbx
  char v25; // cl
  unsigned int v27; // r12d
  __int64 v28; // rax
  _QWORD *v29; // r8
  _QWORD *CellMap; // rax
  _QWORD *v31; // rax
  __int64 v32; // rcx
  __int64 v33; // [rsp+30h] [rbp-58h]
  char v34; // [rsp+90h] [rbp+8h]
  unsigned int v35; // [rsp+98h] [rbp+10h] BYREF
  int v36; // [rsp+A0h] [rbp+18h]
  int v37; // [rsp+A8h] [rbp+20h]

  v37 = a4;
  v36 = a3;
  v4 = *(_QWORD *)(BugCheckParameter2 + 56);
  v5 = a3;
  *(_DWORD *)(BugCheckParameter2 + 144) += 32;
  v7 = 0;
  v33 = v4;
  v34 = 0;
  for ( i = 32; ; i += v12 )
  {
    v10 = *(_DWORD *)(a2 + 8);
    if ( i >= v10 )
      break;
    v11 = (unsigned int *)(a2 + i);
    v12 = *v11;
    if ( (*v11 & 0x80000000) != 0 )
      v12 = -v12;
    if ( v12 + i < i || v12 + i > v10 || (v12 & 7) != 0 || !v12 )
    {
      v14 = -1073741492;
      SetFailureLocation(v4, 1, 26, -1073741492, 8);
      if ( (v37 & 0x20000) != 0 || !BYTE2(NlsMbOemCodePageTag) && (CmpBootType & 6) == 0 )
      {
        SetFailureLocation(v4, 0, 26, -1073741492, 0);
        return v14;
      }
      v12 = *(_DWORD *)(a2 + 8) - i;
      v13 = HvpMarkDirty(BugCheckParameter2, i + v5, v12, 0);
      v14 = v13;
      if ( v13 < 0 )
      {
        SetFailureLocation(v4, 0, 26, v13, 16);
        return v14;
      }
      memset_0((void *)(a2 + i), 0, v12);
      *v11 = v12;
      v34 = 1;
      *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 4088LL) |= 4u;
      SetFailureLocation(v4, 1, 26, 1073741833, 32);
    }
    else if ( (*v11 & 0x80000000) != 0 )
    {
      *(_DWORD *)(BugCheckParameter2 + 152) += v12;
      continue;
    }
    *(_DWORD *)(BugCheckParameter2 + 148) += v12;
    v15 = i + v5;
    v16 = ((i + v5) & 0xFFFFF000) - *(_DWORD *)HvpGetCellMap(BugCheckParameter2, i + v5);
    v17 = *(_DWORD *)(HvpGetCellMap(BugCheckParameter2, v16) + 16);
    v18 = v17 + v16;
    if ( v16
      && v15 == v16 + 32LL
      && v15 + v12 == v18
      && (v28 = guard_dispatch_icall_no_overrides(24LL, 0LL), v7 = 0, (v29 = (_QWORD *)v28) != 0LL) )
    {
      *(_QWORD *)v28 = 0LL;
      *(_QWORD *)(v28 + 8) = 0LL;
      *(_DWORD *)(v28 + 16) = v17;
      for ( *(_DWORD *)(v28 + 20) = v16 & 0x7FFFFFFF; v16 < v18; *CellMap = v29 )
      {
        CellMap = (_QWORD *)HvpGetCellMap(BugCheckParameter2, v16);
        v16 += 4096;
        CellMap[1] |= 2uLL;
      }
      v31 = (_QWORD *)(BugCheckParameter2 + 888);
      v32 = *(_QWORD *)(BugCheckParameter2 + 888);
      if ( *(_QWORD *)(v32 + 8) != BugCheckParameter2 + 888 )
        __fastfail(3u);
      v4 = v33;
      v5 = v36;
      *v29 = v32;
      v29[1] = v31;
      *(_QWORD *)(v32 + 8) = v29;
      *v31 = v29;
    }
    else
    {
      v35 = v7;
      v19 = (v12 >> 3) - 1;
      if ( v19 >= 0x10 )
      {
        v27 = v19 >> 4;
        if ( v27 > 0xFF )
        {
          v19 = 23;
        }
        else
        {
          _BitScanReverse(&v27, v27);
          v19 = v27 + 16;
        }
      }
      LOWORD(v35) = v7;
      HvpGetBinContextInitialize(&v35);
      v20 = HvpGetCellMap(BugCheckParameter2, v15);
      if ( !v20 )
        KeBugCheckEx(0x51u, 1uLL, BugCheckParameter2, v15, 0x2B9uLL);
      BinAddress = HvpMapEntryGetBinAddress(v21, v20, &v35);
      v23 = *(_DWORD *)(BinAddress + 4) >> 12;
      v24 = BugCheckParameter2 + 24LL * v19;
      RtlSetBits((PRTL_BITMAP)(v24 + 320), v23, *(_DWORD *)(BinAddress + 8) >> 12);
      v4 = v33;
      v25 = v19;
      v5 = v36;
      *(_DWORD *)(v24 + 316) = v23;
      *(_DWORD *)(BugCheckParameter2 + 904) |= 1 << v25;
      v7 = 0;
    }
  }
  v14 = v7;
  if ( v34 )
    return 1073741833;
  return v14;
}
