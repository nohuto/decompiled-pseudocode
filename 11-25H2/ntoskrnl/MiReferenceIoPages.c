/*
 * XREFs of MiReferenceIoPages @ 0x1402AD138
 * Callers:
 *     MiProbeLockFrame @ 0x1402ACAF0 (MiProbeLockFrame.c)
 *     MiFillSystemPtes @ 0x14032AD60 (MiFillSystemPtes.c)
 *     MiMapContiguousMemoryLarge @ 0x14038FD94 (MiMapContiguousMemoryLarge.c)
 *     MiMapMdlCommon @ 0x1404ECDC4 (MiMapMdlCommon.c)
 *     MiMapViewOfPhysicalSection @ 0x1408B6998 (MiMapViewOfPhysicalSection.c)
 *     MiMapLockedPagesInUserSpace @ 0x1408F8DEC (MiMapLockedPagesInUserSpace.c)
 *     MiRotateToFrameBuffer @ 0x140A28F1C (MiRotateToFrameBuffer.c)
 *     MiRotateToFrameBufferNoCopy @ 0x140A29238 (MiRotateToFrameBufferNoCopy.c)
 *     MiAddLoaderHalIoPte @ 0x140C3C880 (MiAddLoaderHalIoPte.c)
 * Callees:
 *     MiFlushEntireTbDueToAttributeChange @ 0x14026F550 (MiFlushEntireTbDueToAttributeChange.c)
 *     RtlAvlInsertNodeEx @ 0x1402A8320 (RtlAvlInsertNodeEx.c)
 *     KeShouldYieldProcessor @ 0x1402B0440 (KeShouldYieldProcessor.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402B5440 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAllocatePoolMm @ 0x1402DA890 (ExAllocatePoolMm.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14031F3B0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14031F890 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiReleaseSpinLockShared @ 0x140323610 (MiReleaseSpinLockShared.c)
 *     MiPageToNode @ 0x140346EA0 (MiPageToNode.c)
 *     MiDereferenceIoPages @ 0x140391A60 (MiDereferenceIoPages.c)
 *     MiIsPageInIoHugeRangeTransition @ 0x140392060 (MiIsPageInIoHugeRangeTransition.c)
 *     MiIoSpaceGetBounds @ 0x140392208 (MiIoSpaceGetBounds.c)
 *     MiUnlockIoPfnTree @ 0x1403922D8 (MiUnlockIoPfnTree.c)
 *     MiLockIoPfnTree @ 0x140392384 (MiLockIoPfnTree.c)
 *     MiInitializeIoPageNodeArray @ 0x14048C828 (MiInitializeIoPageNodeArray.c)
 *     MiConvertIoPfnTreeLockExclusiveToShared @ 0x1404C4700 (MiConvertIoPfnTreeLockExclusiveToShared.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     MiFlushCachedIoPfnRange @ 0x14066A2C4 (MiFlushCachedIoPfnRange.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiReferenceIoPages(
        unsigned int a1,
        __int64 a2,
        unsigned __int64 a3,
        int a4,
        _DWORD *a5,
        unsigned __int64 *a6)
{
  _DWORD *v6; // r12
  __int64 v9; // rsi
  ULONG_PTR *v10; // r15
  ULONG_PTR v11; // rbx
  unsigned __int8 CurrentIrql; // si
  __int64 v13; // rcx
  unsigned __int8 v14; // r13
  int v15; // eax
  __int64 v16; // rdx
  int v17; // r10d
  char v18; // r11
  unsigned int v19; // esi
  ULONG_PTR v20; // rcx
  __int64 v21; // r9
  unsigned __int64 i; // r8
  __int64 v23; // rdx
  _QWORD *v24; // rax
  unsigned __int64 v25; // rsi
  bool j; // zf
  ULONG_PTR v27; // rax
  __int64 v28; // rdx
  _QWORD *v29; // r14
  unsigned __int64 v30; // rsi
  _QWORD *v31; // rax
  int v32; // ebx
  ULONG_PTR v33; // rdi
  ULONG_PTR v34; // r14
  __int64 v36; // rax
  unsigned __int64 v37; // r14
  int v38; // r8d
  _DWORD *v39; // r11
  unsigned __int64 v40; // rdx
  __int64 v41; // rcx
  unsigned __int8 v42; // si
  __int16 v43; // dx
  int v44; // r12d
  int v45; // eax
  int v46; // r10d
  char v47; // cl
  __int64 PoolMm; // rax
  __int64 v49; // r9
  char v50; // cl
  unsigned int v51; // eax
  __int64 v52; // rcx
  unsigned __int8 v53; // si
  bool v54; // r8
  _QWORD *v55; // rdx
  int v56; // r12d
  _BYTE *v57; // r9
  unsigned __int64 v58; // rax
  ULONG_PTR v59; // rax
  _QWORD *v60; // rax
  _QWORD *v61; // r9
  unsigned __int64 *v62; // r14
  __int64 v63; // rcx
  int v64; // eax
  unsigned __int64 v65; // [rsp+20h] [rbp-E0h]
  unsigned int v66; // [rsp+28h] [rbp-D8h]
  int v69; // [rsp+34h] [rbp-CCh]
  char v70; // [rsp+38h] [rbp-C8h]
  ULONG_PTR v71; // [rsp+40h] [rbp-C0h]
  __int128 v72; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v73; // [rsp+58h] [rbp-A8h]
  int v74; // [rsp+60h] [rbp-A0h]
  int v75; // [rsp+64h] [rbp-9Ch]
  int v76; // [rsp+68h] [rbp-98h]
  __int64 v77; // [rsp+70h] [rbp-90h]
  _BYTE *v78; // [rsp+78h] [rbp-88h]
  __int64 v79; // [rsp+80h] [rbp-80h]
  unsigned __int64 *v80; // [rsp+88h] [rbp-78h]
  PVOID P; // [rsp+90h] [rbp-70h]
  _DWORD *v82; // [rsp+98h] [rbp-68h]
  unsigned __int64 *v83; // [rsp+A0h] [rbp-60h]
  _BYTE v84[48]; // [rsp+B0h] [rbp-50h] BYREF
  char v85; // [rsp+E0h] [rbp-20h] BYREF

  v6 = a5;
  v9 = (int)a1;
  v65 = a3;
  v82 = a5;
  v83 = a6;
  memset_0(v84, 0, 0xB0uLL);
  v73 = 0LL;
  v72 = 0LL;
  if ( a5 )
    *a5 = 0;
  if ( a6 )
    *a6 = 0LL;
  v79 = -1LL;
  v78 = 0LL;
  v10 = 0LL;
  v70 = 0;
  v11 = ((1LL << ((unsigned __int8)dword_140E2D8F8 - 12)) - 1) & a2;
  P = 0LL;
  v75 = 3;
  v71 = v11;
  v80 = (unsigned __int64 *)&qword_140E36F40[8 * v9];
  CurrentIrql = KeGetCurrentIrql();
  v13 = 2LL;
  __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(v13) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(v13);
  }
  v14 = CurrentIrql;
  if ( CurrentIrql == 2 )
    v14 = 17;
  v15 = 5;
  if ( CurrentIrql != 2 )
    v15 = 1;
  v66 = v15;
  MiIoSpaceGetBounds(&v72, v11);
  v19 = a1;
  if ( HIDWORD(v73) != 3 && a1 == 1 && v11 + a3 - 1 <= *((_QWORD *)&v72 + 1) )
  {
    if ( v14 != v18 )
    {
      if ( KiIrqlFlags != v17 )
      {
        LOBYTE(v16) = v14;
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v16);
      }
      __writecr8(v14);
    }
    if ( a5 )
      *a5 |= 1 << v73;
    return 0LL;
  }
  MiLockIoPfnTree(5LL);
  v21 = v66;
  for ( i = a3; ; v65 = i )
  {
LABEL_13:
    v23 = (unsigned int)v21;
    if ( !i )
    {
      v32 = 0;
      goto LABEL_160;
    }
    if ( v11 < (unsigned __int64)v72 || v11 > *((_QWORD *)&v72 + 1) )
    {
      MiIoSpaceGetBounds(&v72, v11);
      i = v65;
      v21 = v66;
    }
    if ( v19 != 1 || HIDWORD(v73) == 3 )
      break;
    if ( v6 )
    {
      v20 = (unsigned int)v73;
      *v6 |= 1 << v73;
    }
    v58 = *((_QWORD *)&v72 + 1) - v11 + 1;
    if ( v58 > i )
      v58 = i;
    v11 += v58;
    i -= v58;
  }
  v24 = (_QWORD *)*((_QWORD *)&xmmword_140E36FC0 + 1);
  v20 = i + v11 - 1;
  if ( *((_QWORD *)&xmmword_140E36FC0 + 1) )
  {
    while ( 1 )
    {
      if ( v20 >= v24[3] )
      {
        if ( v11 <= v24[4] )
        {
LABEL_21:
          if ( !v24 )
            break;
          ++dword_140E37008;
          v32 = -1073741800;
          v23 = (unsigned int)v21;
LABEL_160:
          v30 = v65;
          goto LABEL_39;
        }
        v24 = (_QWORD *)v24[1];
      }
      else
      {
        v24 = (_QWORD *)*v24;
      }
      if ( !v24 )
        goto LABEL_21;
    }
  }
  v69 = 0;
  v25 = *v80;
  for ( j = *v80 == 0; !j; j = v25 == 0 )
  {
    while ( 1 )
    {
      v27 = *(_QWORD *)(v25 + 24);
      if ( v11 < v27 )
        break;
      if ( v11 < v27 + 512 )
        goto LABEL_45;
      v25 = *(_QWORD *)(v25 + 8);
      if ( !v25 )
        goto LABEL_27;
    }
    v25 = *(_QWORD *)v25;
  }
LABEL_27:
  ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(*((_QWORD *)KeGetCurrentPrcb()->MmInternal + 41) + 640LL));
  if ( P )
  {
    v29 = P;
  }
  else
  {
    if ( v14 != 17 )
    {
      if ( KiIrqlFlags )
      {
        LOBYTE(v28) = v14;
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v28);
      }
      __writecr8(v14);
    }
    MiPageToNode(v11);
    PoolMm = ExAllocatePoolMm(0x40uLL, 0x4B0uLL);
    v29 = (_QWORD *)PoolMm;
    if ( !PoolMm )
    {
      MiDereferenceIoPages(a1, v71, v11 - v71);
      return 3221225626LL;
    }
    *(_DWORD *)(PoolMm + 32) = 1;
    MiInitializeIoPageNodeArray(PoolMm);
    if ( v14 != 17 )
    {
      v53 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags )
      {
        LOBYTE(v52) = v53;
        KiRaiseIrqlProcessIrqlFlags(v52);
      }
      v14 = v53;
    }
    MiIoSpaceGetBounds(&v72, v11);
  }
  v29[3] = v11 & 0xFFFFFFFFFFFFFE00uLL;
  MiLockIoPfnTree(6LL);
  v30 = v65;
  v21 = 0LL;
  v31 = (_QWORD *)*((_QWORD *)&xmmword_140E36FC0 + 1);
  v20 = v11 + v65 - 1;
  if ( *((_QWORD *)&xmmword_140E36FC0 + 1) )
  {
    do
    {
      if ( v20 < v31[3] )
      {
        v31 = (_QWORD *)*v31;
      }
      else
      {
        if ( v11 <= v31[4] )
          break;
        v31 = (_QWORD *)v31[1];
      }
    }
    while ( v31 );
    if ( v31 )
    {
      v32 = -1073741800;
      ++dword_140E37008;
      v23 = v66 & 0xFFFFFFFC | 2;
      goto LABEL_39;
    }
  }
  v54 = 0;
  v55 = (_QWORD *)*v80;
  if ( !*v80 )
  {
LABEL_145:
    v61 = v29;
    v25 = (unsigned __int64)v29;
    v62 = v80;
    RtlAvlInsertNodeEx(v80, (unsigned __int64)v55, v54, v61);
    _InterlockedAdd64((volatile signed __int64 *)v62 + 3, 1uLL);
    P = 0LL;
    v69 = 1;
    goto LABEL_146;
  }
  while ( 1 )
  {
    v59 = v55[3];
    v25 = (unsigned __int64)v55;
    if ( v11 < v59 )
    {
      v60 = (_QWORD *)*v55;
      if ( !*v55 )
        goto LABEL_145;
      goto LABEL_150;
    }
    if ( v11 < v59 + 512 )
      break;
    v60 = (_QWORD *)v55[1];
    if ( !v60 )
    {
      v54 = 1;
      goto LABEL_145;
    }
LABEL_150:
    v55 = v60;
  }
  P = v29;
LABEL_146:
  MiConvertIoPfnTreeLockExclusiveToShared();
  i = v65;
LABEL_45:
  v36 = *(_QWORD *)(v25 + 24);
  v37 = v11 - v36;
  if ( v36 == -512 || i + v11 <= v36 + 512 )
    v77 = i + v37;
  else
    v77 = 512LL;
  v74 = 0;
  v76 = 0;
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v25 + 172));
  v38 = v69;
  v39 = 0LL;
  if ( v69 )
    --*(_DWORD *)(v25 + 32);
  while ( 2 )
  {
    v40 = v77;
    while ( 2 )
    {
      if ( v37 >= v40 )
      {
        if ( v78 )
          MiFlushCachedIoPfnRange(v78, ((char *)v10 - v78 - 48) >> 3);
        if ( v70 )
        {
          _InterlockedDecrement64((volatile signed __int64 *)v80 + 1);
          if ( (unsigned int)MiIsPageInIoHugeRangeTransition(*(_QWORD *)(v25 + 24)) )
            _InterlockedDecrement64((volatile signed __int64 *)(v49 + 16));
          v70 = 0;
        }
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v25 + 172));
        i = v65;
        v21 = v66;
        v23 = v66;
        if ( v65 )
        {
          v20 = *(unsigned int *)(*((_QWORD *)KeGetCurrentPrcb()->MmInternal + 41) + 640LL);
          if ( (v20 & 0x40000000) != 0 )
            goto LABEL_56;
          if ( v14 != 17 )
          {
            if ( KeShouldYieldProcessor() )
            {
LABEL_56:
              LOBYTE(v23) = v14;
              MiReleaseSpinLockShared(*((_QWORD *)KeGetCurrentPrcb()->MmInternal + 41) + 640LL, v23);
              v42 = KeGetCurrentIrql();
              __writecr8(2uLL);
              if ( KiIrqlFlags )
              {
                LOBYTE(v41) = v42;
                KiRaiseIrqlProcessIrqlFlags(v41);
              }
              v14 = v42;
              MiIoSpaceGetBounds(&v72, v11);
              MiLockIoPfnTree(5LL);
            }
            i = v65;
            v21 = v66;
          }
          v19 = a1;
          goto LABEL_13;
        }
        v30 = 0LL;
        v32 = 0;
LABEL_39:
        v33 = v71;
LABEL_40:
        v34 = v79;
        goto LABEL_41;
      }
      if ( v11 < (unsigned __int64)v72 || v11 > *((_QWORD *)&v72 + 1) )
      {
        MiIoSpaceGetBounds(&v72, v11);
        v38 = v69;
        v40 = v77;
      }
      if ( HIDWORD(v73) != 3 && a1 == 1 )
      {
        if ( v6 )
          *v6 |= 1 << v73;
        v63 = v40 - v37;
        if ( *((_QWORD *)&v72 + 1) - v11 + 1 <= v40 - v37 )
          v63 = *((_QWORD *)&v72 + 1) - v11 + 1;
        v11 += v63;
        v37 += v63;
        v65 -= v63;
        continue;
      }
      break;
    }
    v43 = *(_WORD *)(v25 + 2 * v37 + 176);
    v44 = (*(_DWORD *)(v25
                     + 4
                     * ((unsigned __int64)(2
                                         * (((unsigned int)v11 & ((1 << (dword_140E2D8F8 - 12)) - 1))
                                          - *(_DWORD *)(v25 + 24))) >> 5)
                     + 44) >> ((2 * ((v11 & ((1 << (dword_140E2D8F8 - 12)) - 1)) - *(_BYTE *)(v25 + 24))) & 0x1F)) & 3;
    if ( v43 != -1 )
    {
      if ( v43 )
        goto LABEL_67;
      v45 = *(_DWORD *)(v25 + 32);
      if ( !v45 )
      {
        v50 = v70;
        if ( !v38 )
          v50 = 1;
        v70 = v50;
      }
      v46 = a4;
      *(_DWORD *)(v25 + 32) = v45 + 1;
      if ( v44 == a4 )
      {
LABEL_67:
        if ( v82 == v39 )
        {
          v6 = v82;
        }
        else
        {
          v47 = v44;
          v6 = v82;
          *v82 |= 1 << v47;
        }
        ++*(_WORD *)(v25 + 2 * v37 + 176);
        if ( v83 && (_DWORD *)*v83 == v39 )
          *v83 = v25;
        v38 = v69;
        ++v37;
        ++v11;
        --v65;
        continue;
      }
      if ( a4 == 1 )
        *(_BYTE *)(v25 + 40) = 1;
      if ( v44 != 3 )
      {
        if ( v74 == (_DWORD)v39 )
        {
          MiFlushEntireTbDueToAttributeChange();
          v46 = a4;
          v39 = 0LL;
          v74 = 1;
        }
        if ( v44 == 1 )
        {
          v56 = v76;
          if ( !v76 )
          {
            ++dword_140E36FFC;
            v57 = v78;
            if ( !v78 )
              goto LABEL_155;
            if ( v75 != v46 )
            {
              MiFlushCachedIoPfnRange(v78, ((char *)v10 - v78 - 48) >> 3);
              v39 = 0LL;
LABEL_155:
              v46 = a4;
              v57 = v84;
              v78 = v84;
              v10 = (ULONG_PTR *)&v85;
            }
            *v10++ = v11;
            v75 = v46;
            if ( v10 == (ULONG_PTR *)(v57 + 176) )
            {
              v64 = MiFlushCachedIoPfnRange(v57, 16LL);
              v46 = a4;
              v39 = 0LL;
              v78 = 0LL;
              if ( v64 )
                v56 = 1;
              v76 = v56;
            }
          }
        }
      }
      LOBYTE(v44) = v46;
      v51 = 2 * ((v11 & ((1 << (dword_140E2D8F8 - 12)) - 1)) - *(_DWORD *)(v25 + 24));
      *(_DWORD *)(v25 + 4LL * (v51 >> 5) + 44) = (v46 << (v51 & 0x1F)) | *(_DWORD *)(v25 + 4LL * (v51 >> 5) + 44) & ~(3 << (v51 & 0x1F));
      goto LABEL_67;
    }
    break;
  }
  if ( v78 )
    MiFlushCachedIoPfnRange(v78, ((char *)v10 - v78 - 48) >> 3);
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v25 + 172));
  v33 = v71;
  v23 = v66;
  v30 = v65;
  if ( v11 == v71 )
  {
    v32 = 0;
    goto LABEL_40;
  }
  v34 = v11;
  v32 = 0;
LABEL_41:
  LOBYTE(v20) = v14;
  MiUnlockIoPfnTree(v20, v23, i, v21);
  if ( v30 )
  {
    if ( v32 >= 0 )
      v32 = -1073741670;
    if ( v34 != -1LL )
      MiDereferenceIoPages(a1, v33, v34 - v33);
  }
  if ( P )
    ExFreePoolWithTag(P, 0);
  return (unsigned int)v32;
}
