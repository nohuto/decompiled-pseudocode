/*
 * XREFs of MiReferenceIoPages @ 0x140238698
 * Callers:
 *     MiProbeLockFrame @ 0x140238050 (MiProbeLockFrame.c)
 *     MiMapContiguousMemoryLarge @ 0x14026BE10 (MiMapContiguousMemoryLarge.c)
 *     MiFillSystemPtes @ 0x1402A0630 (MiFillSystemPtes.c)
 *     MiMapMdlCommon @ 0x1404EDDA4 (MiMapMdlCommon.c)
 *     MiMapLockedPagesInUserSpace @ 0x1408DC1EC (MiMapLockedPagesInUserSpace.c)
 *     MiMapViewOfPhysicalSection @ 0x140A0BD00 (MiMapViewOfPhysicalSection.c)
 *     MiRotateToFrameBuffer @ 0x140A233E4 (MiRotateToFrameBuffer.c)
 *     MiRotateToFrameBufferNoCopy @ 0x140A23700 (MiRotateToFrameBufferNoCopy.c)
 *     MiAddLoaderHalIoPte @ 0x140C4FD20 (MiAddLoaderHalIoPte.c)
 * Callees:
 *     MiReleaseSpinLockShared @ 0x14020CFC0 (MiReleaseSpinLockShared.c)
 *     MiPageToNode @ 0x140221770 (MiPageToNode.c)
 *     KeShouldYieldProcessor @ 0x14023BA60 (KeShouldYieldProcessor.c)
 *     ExAllocatePoolMm @ 0x1402775A0 (ExAllocatePoolMm.c)
 *     RtlAvlInsertNodeEx @ 0x1402903E0 (RtlAvlInsertNodeEx.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140338DA0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403394D0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140339FE0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     MiDereferenceIoPages @ 0x14038E760 (MiDereferenceIoPages.c)
 *     MiIsPageInIoHugeRangeTransition @ 0x14038ED50 (MiIsPageInIoHugeRangeTransition.c)
 *     MiIoSpaceGetBounds @ 0x14038F8B0 (MiIoSpaceGetBounds.c)
 *     MiUnlockIoPfnTree @ 0x14038F980 (MiUnlockIoPfnTree.c)
 *     MiLockIoPfnTree @ 0x14038FA2C (MiLockIoPfnTree.c)
 *     MiFlushEntireTbDueToAttributeChange @ 0x14039D0A4 (MiFlushEntireTbDueToAttributeChange.c)
 *     MiInitializeIoPageNodeArray @ 0x140484F5C (MiInitializeIoPageNodeArray.c)
 *     MiConvertIoPfnTreeLockExclusiveToShared @ 0x1404BE32C (MiConvertIoPfnTreeLockExclusiveToShared.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     MiFlushCachedIoPfnRange @ 0x140676EF4 (MiFlushCachedIoPfnRange.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiReferenceIoPages(
        unsigned int a1,
        __int64 a2,
        unsigned __int64 a3,
        int a4,
        volatile LONG *a5,
        volatile LONG **a6)
{
  volatile LONG *v6; // r12
  __int64 v9; // rsi
  __int64 v10; // rdx
  ULONG_PTR *v11; // r15
  ULONG_PTR v12; // rbx
  unsigned __int8 CurrentIrql; // si
  __int64 v14; // rcx
  unsigned __int8 v15; // r13
  int v16; // eax
  __int64 v17; // rdx
  int v18; // r10d
  char v19; // r11
  unsigned int v20; // esi
  unsigned __int64 v21; // rcx
  __int64 v22; // r9
  unsigned __int64 i; // r8
  __int64 v24; // rdx
  _QWORD *v25; // rax
  volatile LONG *v26; // rsi
  bool j; // zf
  ULONG_PTR v28; // rax
  __int64 v29; // rdx
  _QWORD *v30; // r14
  unsigned __int64 v31; // rsi
  _QWORD *v32; // rax
  int v33; // ebx
  ULONG_PTR v34; // rdi
  ULONG_PTR v35; // r14
  __int64 v37; // rax
  unsigned __int64 v38; // r14
  int v39; // r8d
  volatile LONG *v40; // r11
  unsigned __int64 v41; // rdx
  __int64 v42; // rdx
  __int64 v43; // rcx
  unsigned __int8 v44; // si
  __int16 v45; // dx
  unsigned __int64 v46; // rax
  int v47; // r12d
  int v48; // eax
  int v49; // r10d
  char v50; // cl
  __int64 PoolMm; // rax
  __int64 v52; // r9
  char v53; // cl
  unsigned int v54; // eax
  __int64 v55; // rdx
  __int64 v56; // rcx
  unsigned __int8 v57; // si
  volatile LONG *v58; // rdx
  int v59; // r12d
  _BYTE *v60; // r9
  unsigned __int64 v61; // rax
  ULONG_PTR v62; // rax
  volatile LONG *v63; // rax
  _QWORD *v64; // r9
  __int64 *v65; // r14
  __int64 v66; // rcx
  int v67; // eax
  unsigned __int64 v68; // [rsp+20h] [rbp-E0h]
  unsigned int v69; // [rsp+28h] [rbp-D8h]
  int v72; // [rsp+34h] [rbp-CCh]
  char v73; // [rsp+38h] [rbp-C8h]
  ULONG_PTR v74; // [rsp+40h] [rbp-C0h]
  __int128 v75; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v76; // [rsp+58h] [rbp-A8h]
  int v77; // [rsp+60h] [rbp-A0h]
  int v78; // [rsp+64h] [rbp-9Ch]
  int v79; // [rsp+68h] [rbp-98h]
  __int64 v80; // [rsp+70h] [rbp-90h]
  _BYTE *v81; // [rsp+78h] [rbp-88h]
  __int64 v82; // [rsp+80h] [rbp-80h]
  __int64 *v83; // [rsp+88h] [rbp-78h]
  PVOID P; // [rsp+90h] [rbp-70h]
  volatile LONG *v85; // [rsp+98h] [rbp-68h]
  volatile LONG **v86; // [rsp+A0h] [rbp-60h]
  _BYTE v87[48]; // [rsp+B0h] [rbp-50h] BYREF
  char v88; // [rsp+E0h] [rbp-20h] BYREF

  v6 = a5;
  v9 = (int)a1;
  v68 = a3;
  v85 = a5;
  v86 = a6;
  memset_0(v87, 0, 0xB0uLL);
  v76 = 0LL;
  v75 = 0LL;
  if ( a5 )
    *a5 = 0;
  if ( a6 )
    *a6 = 0LL;
  v82 = -1LL;
  v81 = 0LL;
  v11 = 0LL;
  v73 = 0;
  v12 = ((1LL << ((unsigned __int8)dword_140E2DC78 - 12)) - 1) & a2;
  P = 0LL;
  v78 = 3;
  v74 = v12;
  v83 = &qword_140E372C0[8 * v9];
  CurrentIrql = KeGetCurrentIrql();
  v14 = 2LL;
  __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(v10) = 2;
    LOBYTE(v14) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(v14, v10);
  }
  v15 = CurrentIrql;
  if ( CurrentIrql == 2 )
    v15 = 17;
  v16 = 5;
  if ( CurrentIrql != 2 )
    v16 = 1;
  v69 = v16;
  MiIoSpaceGetBounds(&v75, v12);
  v20 = a1;
  if ( HIDWORD(v76) != 3 && a1 == 1 && v12 + a3 - 1 <= *((_QWORD *)&v75 + 1) )
  {
    if ( v15 != v19 )
    {
      if ( KiIrqlFlags != v18 )
      {
        LOBYTE(v17) = v15;
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v17);
      }
      __writecr8(v15);
    }
    if ( a5 )
      *a5 |= 1 << v76;
    return 0LL;
  }
  MiLockIoPfnTree(5LL);
  v22 = v69;
  for ( i = a3; ; v68 = i )
  {
LABEL_13:
    v24 = (unsigned int)v22;
    if ( !i )
    {
      v33 = 0;
      goto LABEL_160;
    }
    if ( v12 < (unsigned __int64)v75 || v12 > *((_QWORD *)&v75 + 1) )
    {
      MiIoSpaceGetBounds(&v75, v12);
      i = v68;
      v22 = v69;
    }
    if ( v20 != 1 || HIDWORD(v76) == 3 )
      break;
    if ( v6 )
    {
      v21 = (unsigned int)v76;
      *v6 |= 1 << v76;
    }
    v61 = *((_QWORD *)&v75 + 1) - v12 + 1;
    if ( v61 > i )
      v61 = i;
    v12 += v61;
    i -= v61;
  }
  v25 = (_QWORD *)*((_QWORD *)&xmmword_140E37340 + 1);
  v21 = i + v12 - 1;
  if ( *((_QWORD *)&xmmword_140E37340 + 1) )
  {
    while ( 1 )
    {
      if ( v21 >= v25[3] )
      {
        if ( v12 <= v25[4] )
        {
LABEL_21:
          if ( !v25 )
            break;
          ++dword_140E37388;
          v33 = -1073741800;
          v24 = (unsigned int)v22;
LABEL_160:
          v31 = v68;
LABEL_39:
          v34 = v74;
LABEL_40:
          v35 = v82;
          goto LABEL_41;
        }
        v25 = (_QWORD *)v25[1];
      }
      else
      {
        v25 = (_QWORD *)*v25;
      }
      if ( !v25 )
        goto LABEL_21;
    }
  }
  v72 = 0;
  v26 = (volatile LONG *)*v83;
  for ( j = *v83 == 0; !j; j = v26 == 0LL )
  {
    while ( 1 )
    {
      v28 = *((_QWORD *)v26 + 3);
      if ( v12 < v28 )
        break;
      if ( v12 < v28 + 512 )
        goto LABEL_45;
      v26 = (volatile LONG *)*((_QWORD *)v26 + 1);
      if ( !v26 )
        goto LABEL_27;
    }
    v26 = *(volatile LONG **)v26;
  }
LABEL_27:
  ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(*((_QWORD *)KeGetCurrentPrcb()->MmInternal + 41) + 640LL));
  if ( P )
  {
    v30 = P;
  }
  else
  {
    if ( v15 != 17 )
    {
      if ( KiIrqlFlags )
      {
        LOBYTE(v29) = v15;
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v29);
      }
      __writecr8(v15);
    }
    MiPageToNode(v12);
    PoolMm = ExAllocatePoolMm(0x40uLL, 0x4B0uLL);
    v30 = (_QWORD *)PoolMm;
    if ( !PoolMm )
    {
      MiDereferenceIoPages(a1, v74, v12 - v74);
      return 3221225626LL;
    }
    *(_DWORD *)(PoolMm + 32) = 1;
    MiInitializeIoPageNodeArray(PoolMm);
    if ( v15 != 17 )
    {
      v57 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags )
      {
        LOBYTE(v55) = 2;
        LOBYTE(v56) = v57;
        KiRaiseIrqlProcessIrqlFlags(v56, v55);
      }
      v15 = v57;
    }
    MiIoSpaceGetBounds(&v75, v12);
  }
  v30[3] = v12 & 0xFFFFFFFFFFFFFE00uLL;
  MiLockIoPfnTree(6LL);
  v31 = v68;
  v22 = 0LL;
  v32 = (_QWORD *)*((_QWORD *)&xmmword_140E37340 + 1);
  v21 = v12 + v68 - 1;
  if ( *((_QWORD *)&xmmword_140E37340 + 1) )
  {
    do
    {
      if ( v21 < v32[3] )
      {
        v32 = (_QWORD *)*v32;
      }
      else
      {
        if ( v12 <= v32[4] )
          break;
        v32 = (_QWORD *)v32[1];
      }
    }
    while ( v32 );
    if ( v32 )
    {
      v33 = -1073741800;
      ++dword_140E37388;
      v24 = v69 & 0xFFFFFFFC | 2;
      goto LABEL_39;
    }
  }
  LOBYTE(i) = 0;
  v58 = (volatile LONG *)*v83;
  if ( !*v83 )
  {
LABEL_145:
    v64 = v30;
    v26 = (volatile LONG *)v30;
    v65 = v83;
    RtlAvlInsertNodeEx(v83, v58, i, v64);
    _InterlockedAdd64(v65 + 3, 1uLL);
    P = 0LL;
    v72 = 1;
    goto LABEL_146;
  }
  while ( 1 )
  {
    v62 = *((_QWORD *)v58 + 3);
    v26 = v58;
    if ( v12 < v62 )
    {
      v63 = *(volatile LONG **)v58;
      if ( !*(_QWORD *)v58 )
        goto LABEL_145;
      goto LABEL_150;
    }
    if ( v12 < v62 + 512 )
      break;
    v63 = (volatile LONG *)*((_QWORD *)v58 + 1);
    if ( !v63 )
    {
      LOBYTE(i) = 1;
      goto LABEL_145;
    }
LABEL_150:
    v58 = v63;
  }
  P = v30;
LABEL_146:
  MiConvertIoPfnTreeLockExclusiveToShared();
  i = v68;
LABEL_45:
  v37 = *((_QWORD *)v26 + 3);
  v38 = v12 - v37;
  if ( v37 == -512 || i + v12 <= v37 + 512 )
    v80 = i + v38;
  else
    v80 = 512LL;
  v77 = 0;
  v79 = 0;
  ExAcquireSpinLockExclusiveAtDpcLevel(v26 + 43);
  v39 = v72;
  v40 = 0LL;
  if ( v72 )
    --*((_DWORD *)v26 + 8);
  while ( 2 )
  {
    v41 = v80;
    while ( 2 )
    {
      if ( v38 >= v41 )
      {
        if ( v81 )
          MiFlushCachedIoPfnRange(v81, ((char *)v11 - v81 - 48) >> 3);
        if ( v73 )
        {
          _InterlockedDecrement64(v83 + 1);
          if ( (unsigned int)MiIsPageInIoHugeRangeTransition(*((_QWORD *)v26 + 3)) )
            _InterlockedDecrement64((volatile signed __int64 *)(v52 + 16));
          v73 = 0;
        }
        ExReleaseSpinLockExclusiveFromDpcLevel(v26 + 43);
        i = v68;
        v22 = v69;
        v24 = v69;
        if ( !v68 )
        {
          v31 = 0LL;
          v33 = 0;
          goto LABEL_39;
        }
        v21 = *(unsigned int *)(*((_QWORD *)KeGetCurrentPrcb()->MmInternal + 41) + 640LL);
        if ( (v21 & 0x40000000) != 0 )
        {
LABEL_56:
          MiReleaseSpinLockShared(
            (volatile signed __int32 *)(*((_QWORD *)KeGetCurrentPrcb()->MmInternal + 41) + 640LL),
            v15,
            i,
            v22);
          v44 = KeGetCurrentIrql();
          __writecr8(2uLL);
          if ( KiIrqlFlags )
          {
            LOBYTE(v42) = 2;
            LOBYTE(v43) = v44;
            KiRaiseIrqlProcessIrqlFlags(v43, v42);
          }
          v15 = v44;
          MiIoSpaceGetBounds(&v75, v12);
          MiLockIoPfnTree(5LL);
          goto LABEL_59;
        }
        if ( v15 != 17 )
        {
          if ( KeShouldYieldProcessor() )
            goto LABEL_56;
LABEL_59:
          i = v68;
          v22 = v69;
        }
        v20 = a1;
        goto LABEL_13;
      }
      if ( v12 < (unsigned __int64)v75 || v12 > *((_QWORD *)&v75 + 1) )
      {
        MiIoSpaceGetBounds(&v75, v12);
        v39 = v72;
        v41 = v80;
      }
      if ( HIDWORD(v76) != 3 && a1 == 1 )
      {
        if ( v6 )
          *v6 |= 1 << v76;
        v66 = v41 - v38;
        if ( *((_QWORD *)&v75 + 1) - v12 + 1 <= v41 - v38 )
          v66 = *((_QWORD *)&v75 + 1) - v12 + 1;
        v12 += v66;
        v38 += v66;
        v68 -= v66;
        continue;
      }
      break;
    }
    v45 = *((_WORD *)v26 + v38 + 88);
    v46 = 2 * (((unsigned int)v12 & ((1 << (dword_140E2DC78 - 12)) - 1)) - *((_DWORD *)v26 + 6));
    v47 = ((unsigned int)v26[(v46 >> 5) + 11] >> (v46 & 0x1F)) & 3;
    if ( v45 != -1 )
    {
      if ( v45 )
        goto LABEL_67;
      v48 = *((_DWORD *)v26 + 8);
      if ( !v48 )
      {
        v53 = v73;
        if ( !v39 )
          v53 = 1;
        v73 = v53;
      }
      v49 = a4;
      *((_DWORD *)v26 + 8) = v48 + 1;
      if ( v47 == a4 )
      {
LABEL_67:
        if ( v85 == v40 )
        {
          v6 = v85;
        }
        else
        {
          v50 = v47;
          v6 = v85;
          *v85 |= 1 << v50;
        }
        ++*((_WORD *)v26 + v38 + 88);
        if ( v86 && *v86 == v40 )
          *v86 = v26;
        v39 = v72;
        ++v38;
        ++v12;
        --v68;
        continue;
      }
      if ( a4 == 1 )
        *((_BYTE *)v26 + 40) = 1;
      if ( v47 != 3 )
      {
        if ( v77 == (_DWORD)v40 )
        {
          MiFlushEntireTbDueToAttributeChange();
          v49 = a4;
          v40 = 0LL;
          v77 = 1;
        }
        if ( v47 == 1 )
        {
          v59 = v79;
          if ( !v79 )
          {
            ++dword_140E3737C;
            v60 = v81;
            if ( !v81 )
              goto LABEL_155;
            if ( v78 != v49 )
            {
              MiFlushCachedIoPfnRange(v81, ((char *)v11 - v81 - 48) >> 3);
              v40 = 0LL;
LABEL_155:
              v49 = a4;
              v60 = v87;
              v81 = v87;
              v11 = (ULONG_PTR *)&v88;
            }
            *v11++ = v12;
            v78 = v49;
            if ( v11 == (ULONG_PTR *)(v60 + 176) )
            {
              v67 = MiFlushCachedIoPfnRange(v60, 16LL);
              v49 = a4;
              v40 = 0LL;
              v81 = 0LL;
              if ( v67 )
                v59 = 1;
              v79 = v59;
            }
          }
        }
      }
      LOBYTE(v47) = v49;
      v54 = 2 * ((v12 & ((1 << (dword_140E2DC78 - 12)) - 1)) - *((_DWORD *)v26 + 6));
      v26[(v54 >> 5) + 11] = (v49 << (v54 & 0x1F)) | v26[(v54 >> 5) + 11] & ~(3 << (v54 & 0x1F));
      goto LABEL_67;
    }
    break;
  }
  if ( v81 )
    MiFlushCachedIoPfnRange(v81, ((char *)v11 - v81 - 48) >> 3);
  ExReleaseSpinLockExclusiveFromDpcLevel(v26 + 43);
  v34 = v74;
  v24 = v69;
  v31 = v68;
  if ( v12 == v74 )
  {
    v33 = 0;
    goto LABEL_40;
  }
  v35 = v12;
  v33 = 0;
LABEL_41:
  LOBYTE(v21) = v15;
  MiUnlockIoPfnTree(v21, v24, i, v22);
  if ( v31 )
  {
    if ( v33 >= 0 )
      v33 = -1073741670;
    if ( v35 != -1LL )
      MiDereferenceIoPages(a1, v34, v35 - v34);
  }
  if ( P )
    ExFreePoolWithTag(P, 0);
  return (unsigned int)v33;
}
