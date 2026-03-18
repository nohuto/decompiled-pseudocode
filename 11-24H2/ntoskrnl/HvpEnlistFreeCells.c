/*
 * XREFs of HvpEnlistFreeCells @ 0x140983CA0
 * Callers:
 *     HvpBuildMapForMemoryBackedHive @ 0x1407E37DC (HvpBuildMapForMemoryBackedHive.c)
 *     HvpRemapAndEnlistHiveBins @ 0x140982010 (HvpRemapAndEnlistHiveBins.c)
 * Callees:
 *     RtlSetBits @ 0x14024BCC0 (RtlSetBits.c)
 *     SetFailureLocation @ 0x1404649E0 (SetFailureLocation.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     HvpMarkDirty @ 0x140882A90 (HvpMarkDirty.c)
 *     HvpGetCellMap @ 0x140BB9710 (HvpGetCellMap.c)
 *     HvpMapEntryGetBinAddress @ 0x140BB9770 (HvpMapEntryGetBinAddress.c)
 *     HvpGetBinContextInitialize @ 0x140BB98D0 (HvpGetBinContextInitialize.c)
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
  __int64 v17; // r9
  int v18; // r12d
  unsigned int v19; // r13d
  unsigned int v20; // r12d
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 BinAddress; // rax
  ULONG v24; // edi
  ULONG_PTR v25; // rbx
  char v26; // cl
  unsigned int v28; // r12d
  __int64 v29; // rax
  _QWORD *v30; // r8
  _QWORD *CellMap; // rax
  _QWORD *v32; // rax
  __int64 v33; // rcx
  __int64 v34; // [rsp+30h] [rbp-58h]
  char v35; // [rsp+90h] [rbp+8h]
  unsigned int v36; // [rsp+98h] [rbp+10h] BYREF
  int v37; // [rsp+A0h] [rbp+18h]
  int v38; // [rsp+A8h] [rbp+20h]

  v38 = a4;
  v37 = a3;
  v4 = *(_QWORD *)(BugCheckParameter2 + 56);
  v5 = a3;
  *(_DWORD *)(BugCheckParameter2 + 144) += 32;
  v7 = 0;
  v34 = v4;
  v35 = 0;
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
      if ( (v38 & 0x20000) != 0 || !BYTE2(NlsMbOemCodePageTag) && (CmpBootType & 6) == 0 )
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
      v35 = 1;
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
    v18 = *(_DWORD *)(HvpGetCellMap(BugCheckParameter2, v16) + 16);
    v19 = v18 + v16;
    if ( v16
      && v15 == v16 + 32LL
      && v15 + v12 == v19
      && (v29 = guard_dispatch_icall_no_overrides(24LL, 0LL, 540495171LL, v17), v7 = 0, (v30 = (_QWORD *)v29) != 0LL) )
    {
      *(_QWORD *)v29 = 0LL;
      *(_QWORD *)(v29 + 8) = 0LL;
      *(_DWORD *)(v29 + 16) = v18;
      for ( *(_DWORD *)(v29 + 20) = v16 & 0x7FFFFFFF; v16 < v19; *CellMap = v30 )
      {
        CellMap = (_QWORD *)HvpGetCellMap(BugCheckParameter2, v16);
        v16 += 4096;
        CellMap[1] |= 2uLL;
      }
      v32 = (_QWORD *)(BugCheckParameter2 + 888);
      v33 = *(_QWORD *)(BugCheckParameter2 + 888);
      if ( *(_QWORD *)(v33 + 8) != BugCheckParameter2 + 888 )
        __fastfail(3u);
      v4 = v34;
      v5 = v37;
      *v30 = v33;
      v30[1] = v32;
      *(_QWORD *)(v33 + 8) = v30;
      *v32 = v30;
    }
    else
    {
      v36 = v7;
      v20 = (v12 >> 3) - 1;
      if ( v20 >= 0x10 )
      {
        v28 = v20 >> 4;
        if ( v28 > 0xFF )
        {
          v20 = 23;
        }
        else
        {
          _BitScanReverse(&v28, v28);
          v20 = v28 + 16;
        }
      }
      LOWORD(v36) = v7;
      HvpGetBinContextInitialize(&v36);
      v21 = HvpGetCellMap(BugCheckParameter2, v15);
      if ( !v21 )
        KeBugCheckEx(0x51u, 1uLL, BugCheckParameter2, v15, 0x2B9uLL);
      BinAddress = HvpMapEntryGetBinAddress(v22, v21, &v36);
      v24 = *(_DWORD *)(BinAddress + 4) >> 12;
      v25 = BugCheckParameter2 + 24LL * v20;
      RtlSetBits((PRTL_BITMAP)(v25 + 320), v24, *(_DWORD *)(BinAddress + 8) >> 12);
      v4 = v34;
      v26 = v20;
      v5 = v37;
      *(_DWORD *)(v25 + 316) = v24;
      *(_DWORD *)(BugCheckParameter2 + 904) |= 1 << v26;
      v7 = 0;
    }
  }
  v14 = v7;
  if ( v35 )
    return 1073741833;
  return v14;
}
