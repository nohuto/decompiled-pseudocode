/*
 * XREFs of HvHiveStartMemoryBacked @ 0x140A9F924
 * Callers:
 *     CmpCreateHive @ 0x14090EE00 (CmpCreateHive.c)
 *     CmpGetSystemControlValues @ 0x140C377A8 (CmpGetSystemControlValues.c)
 * Callees:
 *     SetFailureLocation @ 0x140465824 (SetFailureLocation.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     HvIsInPlaceBaseBlockValid @ 0x1407D1D84 (HvIsInPlaceBaseBlockValid.c)
 *     HvpBuildMapForMemoryBackedHive @ 0x1407D3EFC (HvpBuildMapForMemoryBackedHive.c)
 *     HvpAdjustHiveFreeDisplay @ 0x14087E300 (HvpAdjustHiveFreeDisplay.c)
 *     HvpFillFileName @ 0x1409F9B54 (HvpFillFileName.c)
 *     HvpHeaderCheckSum @ 0x140BA9850 (HvpHeaderCheckSum.c)
 */

__int64 __fastcall HvHiveStartMemoryBacked(
        ULONG_PTR BugCheckParameter2,
        unsigned int a2,
        int a3,
        unsigned int a4,
        _DWORD *a5,
        _QWORD *a6,
        int a7,
        unsigned __int16 *a8,
        int a9,
        _OWORD *a10,
        _OWORD *a11,
        __int64 a12,
        __int64 a13,
        _BYTE *a14,
        _DWORD *a15,
        __int64 a16)
{
  __int64 v18; // r13
  int v19; // eax
  __int64 v20; // rbx
  _DWORD *v21; // rsi
  int v22; // ebx
  int v24; // r14d
  int v25; // eax
  int v26; // ecx
  int v27; // eax
  int v28; // r10d
  int v29; // r11d
  int v30; // ecx
  int v31; // eax
  int v32; // eax
  unsigned int *v33; // rbx
  __int64 *v34; // r14
  __int64 v35; // rcx
  __int64 v36; // rax
  __int64 *v37; // r15
  _OWORD *v38; // rax
  _OWORD *v39; // rcx
  __int128 v40; // xmm1
  int v41; // eax
  int v42; // [rsp+20h] [rbp-38h]

  *(_QWORD *)(BugCheckParameter2 + 56) = a16;
  if ( a2 == 2
    || a2 >= 5
    || (a3 & 0xF5617CEC) != 0
    || a4 > 2
    || (unsigned int)(a7 - 1) > 7
    || !a5 && ((a2 - 1) & 0xFFFFFFFC) == 0 )
  {
    __fastfail(5u);
  }
  if ( a14 )
    *a14 = 0;
  if ( a6 )
  {
    *(_QWORD *)(BugCheckParameter2 + 24) = *a6;
    *(_QWORD *)(BugCheckParameter2 + 32) = a6[1];
    *(_QWORD *)(BugCheckParameter2 + 40) = a6[3];
    *(_QWORD *)(BugCheckParameter2 + 48) = a6[4];
  }
  v18 = 4LL;
  if ( a4 )
  {
    v19 = 4;
    if ( a4 == 1 )
      v19 = 1;
    *(_DWORD *)(BugCheckParameter2 + 168) = v19;
  }
  else
  {
    *(_DWORD *)(BugCheckParameter2 + 168) = 0;
  }
  *(_DWORD *)(BugCheckParameter2 + 160) = a3;
  *(_QWORD *)(BugCheckParameter2 + 8) = HvpGetCellPaged;
  *(_DWORD *)(BugCheckParameter2 + 136) = a7;
  *(_DWORD *)(BugCheckParameter2 + 216) = 2;
  *(_QWORD *)(BugCheckParameter2 + 16) = HvpReleaseCellPaged;
  *(_DWORD *)(BugCheckParameter2 + 132) = 4096;
  v20 = MEMORY[0xFFFFF78000000014];
  *(_QWORD *)(BugCheckParameter2 + 200) = MEMORY[0xFFFFF78000000014];
  *(_BYTE *)(BugCheckParameter2 + 194) = 1;
  if ( a2 )
  {
    if ( a2 == 4 )
    {
      *(_QWORD *)(BugCheckParameter2 + 64) = a5;
      v26 = a5[5];
      v27 = a5[6] - 4096;
      *(_BYTE *)(BugCheckParameter2 + 140) |= 3u;
      *(_QWORD *)(BugCheckParameter2 + 8) = HvpGetCellFlat;
      *(_QWORD *)(BugCheckParameter2 + 16) = HvpReleaseCellFlat;
      *(_DWORD *)(BugCheckParameter2 + 220) = v27 + (v26 << 12);
      *(_DWORD *)(BugCheckParameter2 + 280) = a5[10];
      *(_DWORD *)(BugCheckParameter2 + 216) = 1;
      if ( a15 )
        *a15 = 0;
      return 0LL;
    }
    if ( a2 == 3 )
    {
      if ( HvIsInPlaceBaseBlockValid(a5) )
      {
        v30 = a5[5];
        v31 = a5[6];
        *(_BYTE *)(BugCheckParameter2 + 140) &= ~2u;
        *(_QWORD *)(BugCheckParameter2 + 64) = a5;
        *(_DWORD *)(BugCheckParameter2 + 216) = v29;
        *(_DWORD *)(BugCheckParameter2 + 220) = v31 - 4096 + (v30 << 12);
        a5[1022] = v28;
        v32 = a5[1];
        *(_DWORD *)(BugCheckParameter2 + 172) = v32;
        *(_DWORD *)(BugCheckParameter2 + 184) = v32;
        *(_DWORD *)(BugCheckParameter2 + 176) = v32;
        v22 = HvpAdjustHiveFreeDisplay(BugCheckParameter2, a5[10], 0);
        if ( v22 < 0 )
        {
          SetFailureLocation(a16, 0, 25, v22, 144);
          return (unsigned int)v22;
        }
        v22 = HvpBuildMapForMemoryBackedHive(BugCheckParameter2, (__int64)(a5 + 1024), a9, a12, a13);
        if ( v22 < 0 )
        {
          SetFailureLocation(a16, 0, 25, v22, 160);
          return (unsigned int)v22;
        }
        if ( a15 )
          *a15 = 0;
        return 0LL;
      }
      v42 = 128;
    }
    else
    {
      if ( *a5 == 1718052210 && !a5[7] && a5[8] == 1 && a5[5] <= 1u && (unsigned int)(a5[6] - 3) <= 3 )
      {
        v33 = a5 + 10;
        if ( a5[10] <= 0x7FFFE000u && (unsigned int)HvpHeaderCheckSum(a5) == a5[127] )
        {
          v34 = (__int64 *)(BugCheckParameter2 + 64);
          v35 = guard_dispatch_icall_no_overrides(*(unsigned int *)(BugCheckParameter2 + 132));
          *(_QWORD *)(BugCheckParameter2 + 64) = v35;
          if ( !v35 )
          {
            v42 = 192;
            goto LABEL_20;
          }
          if ( (((a7 << 9) - 1) & (unsigned int)v35) != 0 )
          {
            guard_dispatch_icall_no_overrides(v35);
            v36 = guard_dispatch_icall_no_overrides(4096LL);
            *v34 = v36;
            if ( !v36 )
            {
              v42 = 208;
              goto LABEL_20;
            }
            v37 = (__int64 *)(BugCheckParameter2 + 64);
            *(_DWORD *)(BugCheckParameter2 + 132) = 4096;
            if ( a15 )
            {
              *a15 = 875646275;
              v37 = (__int64 *)(BugCheckParameter2 + 64);
            }
            v33 = a5 + 10;
          }
          else
          {
            v37 = (__int64 *)(BugCheckParameter2 + 64);
            if ( a15 )
              *a15 = 858869059;
          }
          v38 = (_OWORD *)*v34;
          v39 = a5;
          do
          {
            *v38 = *v39;
            v38[1] = v39[1];
            v38[2] = v39[2];
            v38[3] = v39[3];
            v38[4] = v39[4];
            v38[5] = v39[5];
            v38[6] = v39[6];
            v38 += 8;
            v40 = v39[7];
            v39 += 8;
            *(v38 - 1) = v40;
            --v18;
          }
          while ( v18 );
          *(_DWORD *)(*v34 + 4092) = a5[1023];
          *(_DWORD *)(*v34 + 4088) = a5[1022];
          v41 = a5[1];
          *(_DWORD *)(BugCheckParameter2 + 172) = v41;
          *(_DWORD *)(BugCheckParameter2 + 184) = v41;
          *(_DWORD *)(BugCheckParameter2 + 176) = v41;
          *(_DWORD *)(BugCheckParameter2 + 220) = *(_DWORD *)(*v34 + 24) - 4096 + (*(_DWORD *)(*v34 + 20) << 12);
          v22 = HvpAdjustHiveFreeDisplay(BugCheckParameter2, *v33, 0);
          if ( v22 < 0 )
          {
            guard_dispatch_icall_no_overrides(*v34);
            *v37 = 0LL;
            SetFailureLocation(a16, 0, 25, v22, 224);
            return (unsigned int)v22;
          }
          if ( (int)HvpBuildMapForMemoryBackedHive(BugCheckParameter2, (__int64)(a5 + 1024), a9, a12, a13) < 0 )
          {
            v22 = -1073741492;
            SetFailureLocation(a16, 0, 25, -1073741492, 240);
            guard_dispatch_icall_no_overrides(*v34);
            *v37 = 0LL;
            return (unsigned int)v22;
          }
          if ( (*(_DWORD *)(*v34 + 144) & 1) != 0 && a14 )
            *a14 = 1;
          *(_DWORD *)(*v37 + 144) &= ~1u;
          HvpFillFileName(*v37, a8);
          return 0LL;
        }
      }
      v42 = 176;
    }
    v22 = -1073741492;
    goto LABEL_21;
  }
  v21 = (_DWORD *)guard_dispatch_icall_no_overrides(*(unsigned int *)(BugCheckParameter2 + 132));
  if ( !v21 )
  {
    v42 = 96;
LABEL_20:
    v22 = -1073741670;
LABEL_21:
    SetFailureLocation(a16, 0, 25, v22, v42);
    return (unsigned int)v22;
  }
  if ( (((a7 << 9) - 1) & (unsigned int)v21) != 0 )
  {
    guard_dispatch_icall_no_overrides(v21);
    v21 = (_DWORD *)guard_dispatch_icall_no_overrides(4096LL);
    if ( !v21 )
    {
      v42 = 112;
      goto LABEL_20;
    }
    *(_DWORD *)(BugCheckParameter2 + 132) = 4096;
    if ( a15 )
      *a15 = 842091843;
  }
  else if ( a15 )
  {
    *a15 = 825314627;
  }
  memset_0(v21, 0, 0x1000uLL);
  v21[9] = -1;
  *v21 = 1718052210;
  v21[1] = 1;
  v21[2] = 1;
  v21[8] = 1;
  v21[11] = 1;
  HvpFillFileName((__int64)v21, a8);
  v21[36] = 0;
  v24 = a3 & 0x80000;
  if ( v24 )
    v21[36] = 2;
  v21[5] = 1;
  v25 = v24 != 0 ? 6 : 3;
  v21[6] = v25;
  *(_DWORD *)(BugCheckParameter2 + 220) = v25;
  v21[41] = 1836346738;
  *(_DWORD *)(BugCheckParameter2 + 172) = 1;
  *(_DWORD *)(BugCheckParameter2 + 184) = 1;
  *(_DWORD *)(BugCheckParameter2 + 176) = 1;
  *(_QWORD *)(v21 + 3) = v20;
  if ( a10 )
  {
    *((_OWORD *)v21 + 7) = *a10;
    *((_OWORD *)v21 + 8) = *a10;
  }
  if ( a11 )
    *(_OWORD *)(v21 + 37) = *a11;
  *(_QWORD *)(BugCheckParameter2 + 64) = v21;
  v21[1022] = 0;
  return 0LL;
}
