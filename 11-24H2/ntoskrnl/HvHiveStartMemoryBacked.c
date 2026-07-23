/*
 * XREFs of HvHiveStartMemoryBacked @ 0x14093363C
 * Callers:
 *     CmpCreateHive @ 0x140931678 (CmpCreateHive.c)
 *     CmpGetSystemControlValues @ 0x140C4ABDC (CmpGetSystemControlValues.c)
 * Callees:
 *     SetFailureLocation @ 0x14045B110 (SetFailureLocation.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     HvIsInPlaceBaseBlockValid @ 0x1407E1BB4 (HvIsInPlaceBaseBlockValid.c)
 *     HvpBuildMapForMemoryBackedHive @ 0x1407E3D2C (HvpBuildMapForMemoryBackedHive.c)
 *     HvpAdjustHiveFreeDisplay @ 0x140882DB0 (HvpAdjustHiveFreeDisplay.c)
 *     HvpFillFileName @ 0x140A4E984 (HvpFillFileName.c)
 *     HvpHeaderCheckSum @ 0x140BBB7A0 (HvpHeaderCheckSum.c)
 */

__int64 __fastcall HvHiveStartMemoryBacked(
        ULONG_PTR BugCheckParameter2,
        __int64 a2,
        int a3,
        unsigned int a4,
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
  int v22; // ebx
  __int64 v24; // rdx
  int v25; // r14d
  int v26; // eax
  int v27; // ecx
  int v28; // eax
  int v29; // r10d
  int v30; // r11d
  int v31; // ecx
  int v32; // eax
  int v33; // eax
  unsigned int *v34; // rbx
  __int64 v35; // rdx
  char v36; // r9
  __int64 *v37; // r14
  __int64 v38; // rcx
  __int64 v39; // rdx
  __int64 v40; // rax
  _QWORD *v41; // r15
  _OWORD *v42; // rax
  _OWORD *v43; // rcx
  __int128 v44; // xmm1
  int v45; // eax
  int v46; // [rsp+20h] [rbp-38h]

  *(_QWORD *)(BugCheckParameter2 + 56) = a16;
  if ( (_DWORD)a2 == 2
    || (unsigned int)a2 >= 5
    || (a3 & 0xF5617CEC) != 0
    || a4 > 2
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
  if ( (_DWORD)a2 )
  {
    if ( (_DWORD)a2 == 4 )
    {
      *(_QWORD *)(BugCheckParameter2 + 64) = a5;
      v27 = a5[5];
      v28 = a5[6] - 4096;
      *(_BYTE *)(BugCheckParameter2 + 140) |= 3u;
      *(_QWORD *)(BugCheckParameter2 + 8) = HvpGetCellFlat;
      *(_QWORD *)(BugCheckParameter2 + 16) = HvpReleaseCellFlat;
      *(_DWORD *)(BugCheckParameter2 + 220) = v28 + (v27 << 12);
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
        v31 = a5[5];
        v32 = a5[6];
        *(_BYTE *)(BugCheckParameter2 + 140) &= ~2u;
        *(_QWORD *)(BugCheckParameter2 + 64) = a5;
        *(_DWORD *)(BugCheckParameter2 + 216) = v30;
        *(_DWORD *)(BugCheckParameter2 + 220) = v32 - 4096 + (v31 << 12);
        a5[1022] = v29;
        v33 = a5[1];
        *(_DWORD *)(BugCheckParameter2 + 172) = v33;
        *(_DWORD *)(BugCheckParameter2 + 184) = v33;
        *(_DWORD *)(BugCheckParameter2 + 176) = v33;
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
      v46 = 128;
    }
    else
    {
      if ( *a5 == 1718052210 && !a5[7] && a5[8] == 1 && a5[5] <= 1u && (unsigned int)(a5[6] - 3) <= 3 )
      {
        v34 = a5 + 10;
        if ( a5[10] <= 0x7FFFE000u && (unsigned int)HvpHeaderCheckSum(a5) == a5[127] )
        {
          LOBYTE(v35) = v36;
          v37 = (__int64 *)(BugCheckParameter2 + 64);
          v38 = guard_dispatch_icall_no_overrides(*(unsigned int *)(BugCheckParameter2 + 132), v35);
          *(_QWORD *)(BugCheckParameter2 + 64) = v38;
          if ( !v38 )
          {
            v46 = 192;
            goto LABEL_20;
          }
          if ( (((a7 << 9) - 1) & (unsigned int)v38) != 0 )
          {
            guard_dispatch_icall_no_overrides(v38, *(unsigned int *)(BugCheckParameter2 + 132));
            LOBYTE(v39) = 1;
            v40 = guard_dispatch_icall_no_overrides(4096LL, v39);
            *v37 = v40;
            if ( !v40 )
            {
              v46 = 208;
              goto LABEL_20;
            }
            v41 = (_QWORD *)(BugCheckParameter2 + 64);
            *(_DWORD *)(BugCheckParameter2 + 132) = 4096;
            if ( a15 )
            {
              *a15 = 875646275;
              v41 = (_QWORD *)(BugCheckParameter2 + 64);
            }
            v34 = a5 + 10;
          }
          else
          {
            v41 = (_QWORD *)(BugCheckParameter2 + 64);
            if ( a15 )
              *a15 = 858869059;
          }
          v42 = (_OWORD *)*v37;
          v43 = a5;
          do
          {
            *v42 = *v43;
            v42[1] = v43[1];
            v42[2] = v43[2];
            v42[3] = v43[3];
            v42[4] = v43[4];
            v42[5] = v43[5];
            v42[6] = v43[6];
            v42 += 8;
            v44 = v43[7];
            v43 += 8;
            *(v42 - 1) = v44;
            --v18;
          }
          while ( v18 );
          *(_DWORD *)(*v37 + 4092) = a5[1023];
          *(_DWORD *)(*v37 + 4088) = a5[1022];
          v45 = a5[1];
          *(_DWORD *)(BugCheckParameter2 + 172) = v45;
          *(_DWORD *)(BugCheckParameter2 + 184) = v45;
          *(_DWORD *)(BugCheckParameter2 + 176) = v45;
          *(_DWORD *)(BugCheckParameter2 + 220) = *(_DWORD *)(*v37 + 24) - 4096 + (*(_DWORD *)(*v37 + 20) << 12);
          v22 = HvpAdjustHiveFreeDisplay(BugCheckParameter2, *v34, 0);
          if ( v22 < 0 )
          {
            guard_dispatch_icall_no_overrides(*v37, *(unsigned int *)(BugCheckParameter2 + 132));
            *v41 = 0LL;
            SetFailureLocation(a16, 0, 25, v22, 224);
            return (unsigned int)v22;
          }
          if ( (int)HvpBuildMapForMemoryBackedHive(BugCheckParameter2, (__int64)(a5 + 1024), a9, a12, a13) < 0 )
          {
            v22 = -1073741492;
            SetFailureLocation(a16, 0, 25, -1073741492, 240);
            guard_dispatch_icall_no_overrides(*v37, *(unsigned int *)(BugCheckParameter2 + 132));
            *v41 = 0LL;
            return (unsigned int)v22;
          }
          if ( (*(_DWORD *)(*v37 + 144) & 1) != 0 && a14 )
            *a14 = 1;
          *(_DWORD *)(*v41 + 144LL) &= ~1u;
          HvpFillFileName(*v41, a8);
          return 0LL;
        }
      }
      v46 = 176;
    }
    v22 = -1073741492;
    goto LABEL_21;
  }
  LODWORD(a2) = (a3 & 1) == 0;
  v21 = (_DWORD *)guard_dispatch_icall_no_overrides(*(unsigned int *)(BugCheckParameter2 + 132), a2);
  if ( !v21 )
  {
    v46 = 96;
LABEL_20:
    v22 = -1073741670;
LABEL_21:
    SetFailureLocation(a16, 0, 25, v22, v46);
    return (unsigned int)v22;
  }
  if ( (((a7 << 9) - 1) & (unsigned int)v21) != 0 )
  {
    guard_dispatch_icall_no_overrides(v21, *(unsigned int *)(BugCheckParameter2 + 132));
    LOBYTE(v24) = 1;
    v21 = (_DWORD *)guard_dispatch_icall_no_overrides(4096LL, v24);
    if ( !v21 )
    {
      v46 = 112;
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
  v25 = a3 & 0x80000;
  if ( v25 )
    v21[36] = 2;
  v21[5] = 1;
  v26 = v25 != 0 ? 6 : 3;
  v21[6] = v26;
  *(_DWORD *)(BugCheckParameter2 + 220) = v26;
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
