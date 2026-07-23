/*
 * XREFs of MiAllocateLargeProcessPagesFromCache @ 0x140692A4C
 * Callers:
 *     MiCreateLargePfnList @ 0x14026A8C0 (MiCreateLargePfnList.c)
 * Callees:
 *     MiCreateLargePfnList @ 0x14026A8C0 (MiCreateLargePfnList.c)
 *     MiComputePreferredNode @ 0x14026AF48 (MiComputePreferredNode.c)
 *     MiFreeLargeZeroPages @ 0x14026DAE0 (MiFreeLargeZeroPages.c)
 *     RtlSetBits @ 0x14027C2D0 (RtlSetBits.c)
 *     MiReleaseSpinLockExclusive @ 0x14029EA30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 *     MiZeroLargePage @ 0x140312ABC (MiZeroLargePage.c)
 *     MiReturnResident @ 0x140338A10 (MiReturnResident.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x14033E678 (MiSetOriginalPtePfnFromFreeList.c)
 *     MiPopLargePfnList @ 0x14048BDB4 (MiPopLargePfnList.c)
 *     MiGetVadCacheAttribute @ 0x1404A0228 (MiGetVadCacheAttribute.c)
 *     MiCreateProcessLargePageCacheAnchor @ 0x140693304 (MiCreateProcessLargePageCacheAnchor.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall MiAllocateLargeProcessPagesFromCache(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        int a4,
        char a5,
        _QWORD *a6)
{
  int v6; // ebx
  __int64 v8; // r14
  __int64 v9; // r8
  __int64 v10; // rdx
  __int64 v11; // r8
  int VadCacheAttribute; // r12d
  BOOL v13; // r9d
  BOOL v14; // r15d
  unsigned int v15; // ecx
  _KPROCESS *Process; // rdi
  __int64 Blink_high; // rcx
  __int64 v18; // r10
  __int64 ProcessLargePageCacheAnchor; // r9
  __int64 v20; // r11
  unsigned int v21; // eax
  unsigned __int64 v22; // rsi
  unsigned int v23; // ecx
  _BYTE *v24; // rdx
  int v25; // r14d
  int v26; // edi
  __int16 *v27; // rdx
  __int64 v28; // r9
  __int16 v29; // cx
  __int16 v30; // cx
  __int16 v31; // ax
  __int16 v32; // cx
  __int64 v33; // r10
  unsigned __int16 *v34; // rax
  unsigned int v35; // r9d
  unsigned __int16 v36; // r8
  unsigned int v37; // edx
  unsigned __int16 *v38; // rcx
  __int64 v39; // rdx
  __int64 v40; // rax
  unsigned __int64 v41; // r9
  __int64 v42; // r11
  bool v43; // zf
  __int64 v44; // rax
  char v45; // r10
  _QWORD *v46; // r8
  _QWORD *v47; // rcx
  unsigned int v48; // r14d
  _QWORD *v49; // rdi
  _QWORD *v51; // rax
  unsigned __int64 v52; // rdx
  __int64 v53; // rcx
  unsigned __int64 v54; // r14
  unsigned __int64 v55; // rbx
  _QWORD *v56; // rdi
  _QWORD *v57; // rcx
  _QWORD *v58; // rax
  __int64 v59; // rdi
  KIRQL v60; // si
  unsigned int v61; // edx
  __int16 *v62; // r9
  _BYTE *v63; // r8
  _QWORD *v64; // rbx
  __int16 v65; // ax
  __int16 v66; // cx
  __int16 v67; // cx
  unsigned __int64 v68; // rax
  unsigned int i; // r8d
  __int64 *v70; // rcx
  KIRQL v71; // [rsp+50h] [rbp-B0h]
  __int64 v73; // [rsp+58h] [rbp-A8h]
  _RTL_BITMAP BitMapHeader; // [rsp+68h] [rbp-98h] BYREF
  __int64 v75; // [rsp+78h] [rbp-88h]
  __int64 v76; // [rsp+80h] [rbp-80h]
  __int64 v77; // [rsp+88h] [rbp-78h]
  __int64 v78; // [rsp+90h] [rbp-70h]
  _DWORD *v79; // [rsp+98h] [rbp-68h]
  __int64 v80; // [rsp+A0h] [rbp-60h]
  _BYTE v81[48]; // [rsp+B0h] [rbp-50h] BYREF
  _QWORD *v82; // [rsp+E0h] [rbp-20h]
  unsigned __int64 v83; // [rsp+F0h] [rbp-10h]

  v6 = a4;
  *(_QWORD *)&BitMapHeader.SizeOfBitMap = a2;
  v80 = a1;
  v8 = a1;
  memset_0(v81, 0, 0x60uLL);
  v9 = *(_QWORD *)v8;
  v10 = 1LL;
  v77 = 1LL;
  if ( v9 )
  {
    VadCacheAttribute = MiGetVadCacheAttribute(v9);
    v14 = v13;
    LOBYTE(v14) = (*(_DWORD *)(v11 + 48) & 0x1A00000) == 27262976;
    goto LABEL_9;
  }
  v15 = *(_DWORD *)(v8 + 20);
  if ( v15 >> 3 != 3 )
  {
    VadCacheAttribute = 0;
    if ( v15 >> 3 == 1 )
      goto LABEL_8;
LABEL_7:
    VadCacheAttribute = 1;
    goto LABEL_8;
  }
  if ( (v15 & 7) == 0 )
    goto LABEL_7;
  VadCacheAttribute = 2;
LABEL_8:
  v14 = *(_DWORD *)(v8 + 16) != 0;
LABEL_9:
  Process = KeGetCurrentThread()->ApcState.Process;
  Blink_high = HIWORD(Process[2].ProcessListEntry.Blink);
  v18 = (__int64)&Process[2].ActiveProcessors[2].StaticBitmap[29];
  v76 = v18;
  ProcessLargePageCacheAnchor = *(_QWORD *)(v18 + 280);
  v20 = *((_QWORD *)qword_140E300C8 + Blink_high);
  v75 = v20;
  if ( ProcessLargePageCacheAnchor )
    goto LABEL_12;
  ProcessLargePageCacheAnchor = MiCreateProcessLargePageCacheAnchor(v20, v10, 0LL);
  if ( ProcessLargePageCacheAnchor )
  {
    v18 = v76;
    v20 = v75;
LABEL_12:
    if ( v6 )
    {
      v21 = v6 - 1;
      if ( v6 - 1 >= (unsigned int)(unsigned __int16)KeNumberNodes )
        return 3221225485LL;
    }
    else
    {
      v21 = MiComputePreferredNode((__int64)&Process[2].ReadyListHead.Blink, *(_QWORD *)v8);
    }
    *(_DWORD *)(ProcessLargePageCacheAnchor + 24) = *(_DWORD *)(v20 + 16472);
    v22 = a3 >> 4;
    v23 = 0;
    v73 = ProcessLargePageCacheAnchor + 32 + ((3LL * v21 + VadCacheAttribute) << 6);
    v24 = (_BYTE *)(v73 + 12);
    do
    {
      if ( (*v24 & 0x3F) != 0 )
        goto LABEL_18;
      ++v23;
      v24 += 16;
    }
    while ( v23 < 4 );
    if ( v23 != 4 )
    {
LABEL_18:
      v25 = 0;
      v79 = (_DWORD *)(v18 + 288);
      v26 = 0;
      v71 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v18 + 288));
      v27 = (__int16 *)(v73 + 12);
      v28 = 4LL;
      do
      {
        v29 = v27[1];
        if ( v29 != -1 )
          v27[1] = v29 + 1;
        v30 = *v27;
        if ( (*v27 & 0x3F) == 0 )
          ++v25;
        v31 = v30 & 0xFFBF;
        v32 = v30 | 0x40;
        if ( (*v27 & 0x3F) != 0 )
          v32 = v31;
        *v27 = v32;
        v27 += 8;
        --v28;
      }
      while ( v28 );
      v6 = a4;
      v33 = v73;
      if ( v25 != 4 )
      {
        v34 = (unsigned __int16 *)(v73 + 14);
        v78 = v73 + 14;
        while ( 1 )
        {
          v35 = -1;
          v36 = -1;
          v37 = 0;
          v38 = v34;
          do
          {
            if ( (*(_BYTE *)(v38 - 1) & 0x40) == 0 && *v38 <= v36 )
            {
              v36 = *v38;
              v35 = v37;
            }
            ++v37;
            v38 += 8;
          }
          while ( v37 < 4 );
          ++v25;
          v39 = v33 + 16LL * v35;
          v40 = *(_QWORD *)v39;
          *(_WORD *)(v39 + 12) |= 0x40u;
          v41 = *(unsigned int *)(v39 + 8);
          v42 = 48 * v40 - 0x220000000000LL;
          *(_WORD *)(v39 + 14) = 0;
          while ( v41 )
          {
            v43 = !_BitScanForward64((unsigned __int64 *)&v44, v41);
            v45 = -1;
            if ( !v43 )
              v45 = v44;
            v46 = (_QWORD *)(v42 + 768LL * v45);
            *(_WORD *)(v39 + 12) ^= (*(_WORD *)(v39 + 12) ^ (*(_WORD *)(v39 + 12) - v77)) & 0x3F;
            v47 = (_QWORD *)a6[7];
            if ( (_QWORD *)*v47 != a6 + 6 )
              goto LABEL_69;
            v46[1] = v47;
            *v46 = a6 + 6;
            *v47 = v46;
            a6[7] = v46;
            ++a6[8];
            if ( (v46[2] & 0x3E0LL) != 0 )
              ++v26;
            v41 = ~(1 << v45) & (unsigned int)v41;
            *(_DWORD *)(v39 + 8) = v41;
            if ( !--v22 )
              goto LABEL_41;
          }
          if ( v25 == 4 )
            break;
          v34 = (unsigned __int16 *)v78;
          v33 = v73;
        }
      }
LABEL_41:
      MiReleaseSpinLockExclusive(v79, v71);
      if ( !v14 )
      {
        if ( v26 )
        {
          v48 = 0;
          v49 = (_QWORD *)a6[6];
          if ( a6[8] )
          {
            do
            {
              if ( (v49[2] & 0x3E0LL) != 0 )
              {
                MiZeroLargePage(0LL, (__int64)v49, 2u, VadCacheAttribute, 0);
                v49[2] &= 0xFFFFFFFFFFFFFC1FuLL;
              }
              v49 = (_QWORD *)*v49;
              ++v48;
            }
            while ( (unsigned __int64)v48 < a6[8] );
            v6 = a4;
          }
        }
      }
      if ( !v22 )
        return 0LL;
      v8 = v80;
    }
    v51 = v81;
    v52 = *(_QWORD *)&BitMapHeader.SizeOfBitMap & 0xFFFFFFFFFFE00000uLL;
    v53 = 4LL;
    do
    {
      v51[2] = 0LL;
      v51[1] = v51;
      *v51 = v51;
      v51 += 3;
      --v53;
    }
    while ( v53 );
    if ( (int)MiCreateLargePfnList((__int64 *)v8, v52, 0x200uLL, 0x200uLL, v6, a5, 0LL, 8, (__int64)v81) < 0 )
      return 3221225626LL;
    v54 = v75;
    MiReturnResident(v75, 0x200uLL);
    v55 = 32 - v22;
    if ( v22 )
    {
      v56 = a6 + 6;
      while ( 1 )
      {
        v57 = (_QWORD *)(48 * MiPopLargePfnList((__int64)v81, 2LL) - 0x220000000000LL);
        v58 = (_QWORD *)a6[7];
        if ( (_QWORD *)*v58 != v56 )
          break;
        v57[1] = v58;
        *v57 = v56;
        *v58 = v57;
        a6[7] = v57;
        ++a6[8];
        if ( !--v22 )
          goto LABEL_62;
      }
LABEL_69:
      __fastfail(3u);
    }
LABEL_62:
    v59 = v76;
    v60 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v76 + 288));
    v61 = 0;
    v62 = (__int16 *)(v73 + 12);
    v63 = (_BYTE *)(v73 + 12);
    while ( (*v63 & 0x3F) == 0 )
    {
      ++v61;
      v63 += 16;
      if ( v61 >= 4 )
      {
        if ( v61 == 4 )
        {
          v64 = v82;
          BitMapHeader.Buffer = (unsigned int *)(v73 + 8);
          v65 = *v62;
          v66 = *v62;
          *(_QWORD *)&BitMapHeader.SizeOfBitMap = 32LL;
          v67 = v65 ^ (v83 ^ v66) & 0x3F;
          *v62 = v67;
          *(_WORD *)(v73 + 14) = 0;
          v68 = (0xAAAAAAAAAAAAAAABuLL * ((__int64)(v64 + 0x44000000000LL) >> 4)) & 0xFFFFFFFFFFFFFE00uLL;
          *(_QWORD *)v73 = v68;
          RtlSetBits(
            &BitMapHeader,
            (0xAAAAAAAAAAAAAAABuLL * ((__int64)(v64 + 0x44000000000LL) >> 4) - v68) >> 4,
            v67 & 0x3F);
          for ( i = 0; i < v83; ++i )
          {
            v70 = v64 + 2;
            if ( v14 )
              MiSetOriginalPtePfnFromFreeList(v70);
            else
              v64[2] = *v70 & 0xFFFFFFFFFFFFFC1FuLL;
            v64 = (_QWORD *)*v64;
          }
          v55 = 0LL;
        }
        break;
      }
    }
    MiReleaseSpinLockExclusive((_DWORD *)(v59 + 288), v60);
    if ( v55 )
      MiFreeLargeZeroPages(v54, (__int64)v81, v14);
    return 0LL;
  }
  return 3221225626LL;
}
