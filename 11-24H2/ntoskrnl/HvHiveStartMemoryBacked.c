/*
 * XREFs of HvHiveStartMemoryBacked @ 0x1409314FC
 * Callers:
 *     CmpCreateHive @ 0x14092F538 (CmpCreateHive.c)
 *     CmpGetSystemControlValues @ 0x140C48AB8 (CmpGetSystemControlValues.c)
 * Callees:
 *     SetFailureLocation @ 0x1404649E0 (SetFailureLocation.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     HvIsInPlaceBaseBlockValid @ 0x1407E1664 (HvIsInPlaceBaseBlockValid.c)
 *     HvpBuildMapForMemoryBackedHive @ 0x1407E37DC (HvpBuildMapForMemoryBackedHive.c)
 *     HvpAdjustHiveFreeDisplay @ 0x14087EF00 (HvpAdjustHiveFreeDisplay.c)
 *     HvpFillFileName @ 0x140A56AF4 (HvpFillFileName.c)
 *     HvpHeaderCheckSum @ 0x140BB97A0 (HvpHeaderCheckSum.c)
 */

__int64 __fastcall HvHiveStartMemoryBacked(
        ULONG_PTR BugCheckParameter2,
        __int64 a2,
        int a3,
        __int64 a4,
        _DWORD *a5,
        _QWORD *a6,
        int a7,
        __int64 a8,
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
  __int64 v22; // r8
  __int64 v23; // r9
  int v24; // ebx
  __int64 v26; // rdx
  __int64 v27; // r9
  int v28; // r14d
  int v29; // eax
  int v30; // ecx
  int v31; // eax
  int v32; // r10d
  int v33; // r11d
  int v34; // ecx
  int v35; // eax
  int v36; // eax
  unsigned int *v37; // rbx
  __int64 v38; // rdx
  __int64 v39; // r9
  __int64 *v40; // r14
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  __int64 v44; // rdx
  __int64 v45; // r9
  __int64 v46; // rax
  _QWORD *v47; // r15
  _OWORD *v48; // rax
  _OWORD *v49; // rcx
  __int128 v50; // xmm1
  int v51; // eax
  __int64 v52; // r8
  __int64 v53; // r9
  __int64 v54; // r8
  __int64 v55; // r9
  int v56; // [rsp+20h] [rbp-38h]

  *(_QWORD *)(BugCheckParameter2 + 56) = a16;
  if ( (_DWORD)a2 == 2
    || (unsigned int)a2 >= 5
    || (a3 & 0xF5617CEC) != 0
    || (unsigned int)a4 > 2
    || (unsigned int)(a7 - 1) > 7
    || !a5 && (((_DWORD)a2 - 1) & 0xFFFFFFFC) == 0 )
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
  if ( (_DWORD)a4 )
  {
    v19 = 4;
    if ( (_DWORD)a4 == 1 )
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
  LOBYTE(a4) = (a3 & 1) == 0;
  v20 = MEMORY[0xFFFFF78000000014];
  *(_QWORD *)(BugCheckParameter2 + 200) = MEMORY[0xFFFFF78000000014];
  *(_BYTE *)(BugCheckParameter2 + 194) = 1;
  if ( (_DWORD)a2 )
  {
    if ( (_DWORD)a2 == 4 )
    {
      *(_QWORD *)(BugCheckParameter2 + 64) = a5;
      v30 = a5[5];
      v31 = a5[6] - 4096;
      *(_BYTE *)(BugCheckParameter2 + 140) |= 3u;
      *(_QWORD *)(BugCheckParameter2 + 8) = HvpGetCellFlat;
      *(_QWORD *)(BugCheckParameter2 + 16) = HvpReleaseCellFlat;
      *(_DWORD *)(BugCheckParameter2 + 220) = v31 + (v30 << 12);
      *(_DWORD *)(BugCheckParameter2 + 280) = a5[10];
      *(_DWORD *)(BugCheckParameter2 + 216) = 1;
      if ( a15 )
        *a15 = 0;
      return 0LL;
    }
    if ( (_DWORD)a2 == 3 )
    {
      if ( HvIsInPlaceBaseBlockValid(a5) )
      {
        v34 = a5[5];
        v35 = a5[6];
        *(_BYTE *)(BugCheckParameter2 + 140) &= ~2u;
        *(_QWORD *)(BugCheckParameter2 + 64) = a5;
        *(_DWORD *)(BugCheckParameter2 + 216) = v33;
        *(_DWORD *)(BugCheckParameter2 + 220) = v35 - 4096 + (v34 << 12);
        a5[1022] = v32;
        v36 = a5[1];
        *(_DWORD *)(BugCheckParameter2 + 172) = v36;
        *(_DWORD *)(BugCheckParameter2 + 184) = v36;
        *(_DWORD *)(BugCheckParameter2 + 176) = v36;
        v24 = HvpAdjustHiveFreeDisplay(BugCheckParameter2, a5[10], 0);
        if ( v24 < 0 )
        {
          SetFailureLocation(a16, 0, 25, v24, 144);
          return (unsigned int)v24;
        }
        v24 = HvpBuildMapForMemoryBackedHive(BugCheckParameter2, (__int64)(a5 + 1024), a9, a12, a13);
        if ( v24 < 0 )
        {
          SetFailureLocation(a16, 0, 25, v24, 160);
          return (unsigned int)v24;
        }
        if ( a15 )
          *a15 = 0;
        return 0LL;
      }
      v56 = 128;
    }
    else
    {
      if ( *a5 == 1718052210 && !a5[7] && a5[8] == 1 && a5[5] <= 1u && (unsigned int)(a5[6] - 3) <= 3 )
      {
        v37 = a5 + 10;
        if ( a5[10] <= 0x7FFFE000u && (unsigned int)HvpHeaderCheckSum(a5) == a5[127] )
        {
          LOBYTE(v38) = v39;
          v40 = (__int64 *)(BugCheckParameter2 + 64);
          v41 = guard_dispatch_icall_no_overrides(*(unsigned int *)(BugCheckParameter2 + 132), v38, 858869059LL, v39);
          *(_QWORD *)(BugCheckParameter2 + 64) = v41;
          if ( !v41 )
          {
            v56 = 192;
            goto LABEL_20;
          }
          if ( (((a7 << 9) - 1) & (unsigned int)v41) != 0 )
          {
            guard_dispatch_icall_no_overrides(v41, *(unsigned int *)(BugCheckParameter2 + 132), v42, v43);
            LOBYTE(v44) = 1;
            v46 = guard_dispatch_icall_no_overrides(4096LL, v44, 875646275LL, v45);
            *v40 = v46;
            if ( !v46 )
            {
              v56 = 208;
              goto LABEL_20;
            }
            v47 = (_QWORD *)(BugCheckParameter2 + 64);
            *(_DWORD *)(BugCheckParameter2 + 132) = 4096;
            if ( a15 )
            {
              *a15 = 875646275;
              v47 = (_QWORD *)(BugCheckParameter2 + 64);
            }
            v37 = a5 + 10;
          }
          else
          {
            v47 = (_QWORD *)(BugCheckParameter2 + 64);
            if ( a15 )
              *a15 = 858869059;
          }
          v48 = (_OWORD *)*v40;
          v49 = a5;
          do
          {
            *v48 = *v49;
            v48[1] = v49[1];
            v48[2] = v49[2];
            v48[3] = v49[3];
            v48[4] = v49[4];
            v48[5] = v49[5];
            v48[6] = v49[6];
            v48 += 8;
            v50 = v49[7];
            v49 += 8;
            *(v48 - 1) = v50;
            --v18;
          }
          while ( v18 );
          *(_DWORD *)(*v40 + 4092) = a5[1023];
          *(_DWORD *)(*v40 + 4088) = a5[1022];
          v51 = a5[1];
          *(_DWORD *)(BugCheckParameter2 + 172) = v51;
          *(_DWORD *)(BugCheckParameter2 + 184) = v51;
          *(_DWORD *)(BugCheckParameter2 + 176) = v51;
          *(_DWORD *)(BugCheckParameter2 + 220) = *(_DWORD *)(*v40 + 24) - 4096 + (*(_DWORD *)(*v40 + 20) << 12);
          v24 = HvpAdjustHiveFreeDisplay(BugCheckParameter2, *v37, 0);
          if ( v24 < 0 )
          {
            guard_dispatch_icall_no_overrides(*v40, *(unsigned int *)(BugCheckParameter2 + 132), v52, v53);
            *v47 = 0LL;
            SetFailureLocation(a16, 0, 25, v24, 224);
            return (unsigned int)v24;
          }
          if ( (int)HvpBuildMapForMemoryBackedHive(BugCheckParameter2, (__int64)(a5 + 1024), a9, a12, a13) < 0 )
          {
            v24 = -1073741492;
            SetFailureLocation(a16, 0, 25, -1073741492, 240);
            guard_dispatch_icall_no_overrides(*v40, *(unsigned int *)(BugCheckParameter2 + 132), v54, v55);
            *v47 = 0LL;
            return (unsigned int)v24;
          }
          if ( (*(_DWORD *)(*v40 + 144) & 1) != 0 && a14 )
            *a14 = 1;
          *(_DWORD *)(*v47 + 144LL) &= ~1u;
          HvpFillFileName(*v47, a8);
          return 0LL;
        }
      }
      v56 = 176;
    }
    v24 = -1073741492;
    goto LABEL_21;
  }
  LODWORD(a2) = (unsigned __int8)a4;
  v21 = (_DWORD *)guard_dispatch_icall_no_overrides(*(unsigned int *)(BugCheckParameter2 + 132), a2, 825314627LL, a4);
  if ( !v21 )
  {
    v56 = 96;
LABEL_20:
    v24 = -1073741670;
LABEL_21:
    SetFailureLocation(a16, 0, 25, v24, v56);
    return (unsigned int)v24;
  }
  if ( (((a7 << 9) - 1) & (unsigned int)v21) != 0 )
  {
    guard_dispatch_icall_no_overrides(v21, *(unsigned int *)(BugCheckParameter2 + 132), v22, v23);
    LOBYTE(v26) = 1;
    v21 = (_DWORD *)guard_dispatch_icall_no_overrides(4096LL, v26, 842091843LL, v27);
    if ( !v21 )
    {
      v56 = 112;
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
  HvpFillFileName(v21, a8);
  v21[36] = 0;
  v28 = a3 & 0x80000;
  if ( v28 )
    v21[36] = 2;
  v21[5] = 1;
  v29 = v28 != 0 ? 6 : 3;
  v21[6] = v29;
  *(_DWORD *)(BugCheckParameter2 + 220) = v29;
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
