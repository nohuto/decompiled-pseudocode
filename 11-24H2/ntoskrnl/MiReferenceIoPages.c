/*
 * XREFs of MiReferenceIoPages @ 0x140283108
 * Callers:
 *     MiProbeLockFrame @ 0x140282AC0 (MiProbeLockFrame.c)
 *     MiFillSystemPtes @ 0x140290A30 (MiFillSystemPtes.c)
 *     MiMapContiguousMemoryLarge @ 0x1403A6D44 (MiMapContiguousMemoryLarge.c)
 *     MiMapMdlCommon @ 0x1404F0304 (MiMapMdlCommon.c)
 *     MiMapLockedPagesInUserSpace @ 0x1409C3AE8 (MiMapLockedPagesInUserSpace.c)
 *     MiMapViewOfPhysicalSection @ 0x140A135A0 (MiMapViewOfPhysicalSection.c)
 *     MiRotateToFrameBuffer @ 0x140A2E9A4 (MiRotateToFrameBuffer.c)
 *     MiRotateToFrameBufferNoCopy @ 0x140A2ECC0 (MiRotateToFrameBufferNoCopy.c)
 *     MiAddLoaderHalIoPte @ 0x140C4DB90 (MiAddLoaderHalIoPte.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14020FA40 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140210170 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140210C80 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     MiReleaseSpinLockShared @ 0x140244830 (MiReleaseSpinLockShared.c)
 *     RtlAvlInsertNodeEx @ 0x14025FDD0 (RtlAvlInsertNodeEx.c)
 *     MiPageToNode @ 0x14026C1E0 (MiPageToNode.c)
 *     ExAllocatePoolMm @ 0x1402ACBC0 (ExAllocatePoolMm.c)
 *     KeShouldYieldProcessor @ 0x1402DA180 (KeShouldYieldProcessor.c)
 *     MiFlushEntireTbDueToAttributeChange @ 0x1403AE894 (MiFlushEntireTbDueToAttributeChange.c)
 *     MiDereferenceIoPages @ 0x1403CE8E0 (MiDereferenceIoPages.c)
 *     MiIsPageInIoHugeRangeTransition @ 0x1403CEED0 (MiIsPageInIoHugeRangeTransition.c)
 *     MiIoSpaceGetBounds @ 0x1403D0398 (MiIoSpaceGetBounds.c)
 *     MiUnlockIoPfnTree @ 0x1403D0468 (MiUnlockIoPfnTree.c)
 *     MiLockIoPfnTree @ 0x1403D0514 (MiLockIoPfnTree.c)
 *     MiInitializeIoPageNodeArray @ 0x140489C60 (MiInitializeIoPageNodeArray.c)
 *     MiConvertIoPfnTreeLockExclusiveToShared @ 0x1404C2DF4 (MiConvertIoPfnTreeLockExclusiveToShared.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 *     MiFlushCachedIoPfnRange @ 0x140675D24 (MiFlushCachedIoPfnRange.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
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
  ULONG_PTR v21; // rcx
  __int64 v22; // r9
  unsigned __int64 i; // r8
  __int64 v24; // rdx
  _QWORD *v25; // rax
  unsigned __int64 v26; // rsi
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
  _BYTE *v39; // r9
  __int64 v40; // r8
  _DWORD *v41; // r11
  unsigned __int64 v42; // rdx
  __int64 v43; // rdx
  __int64 v44; // rcx
  unsigned __int8 v45; // si
  __int64 v46; // rdx
  unsigned __int64 v47; // rax
  __int64 v48; // rcx
  int v49; // r12d
  int v50; // eax
  int v51; // r10d
  char v52; // cl
  __int64 PoolMm; // rax
  __int64 v54; // r9
  unsigned int v55; // eax
  __int64 v56; // rdx
  __int64 v57; // rcx
  unsigned __int8 v58; // si
  bool v59; // r8
  _QWORD *v60; // rdx
  int v61; // r12d
  unsigned __int64 v62; // rax
  ULONG_PTR v63; // rax
  _QWORD *v64; // rax
  _QWORD *v65; // r9
  unsigned __int64 *v66; // r14
  __int64 v67; // rcx
  int v68; // eax
  unsigned __int64 v69; // [rsp+20h] [rbp-E0h]
  unsigned int v70; // [rsp+28h] [rbp-D8h]
  unsigned int v73; // [rsp+34h] [rbp-CCh]
  unsigned __int8 v74; // [rsp+38h] [rbp-C8h]
  ULONG_PTR v75; // [rsp+40h] [rbp-C0h]
  __int128 v76; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v77; // [rsp+58h] [rbp-A8h]
  int v78; // [rsp+60h] [rbp-A0h]
  int v79; // [rsp+64h] [rbp-9Ch]
  int v80; // [rsp+68h] [rbp-98h]
  __int64 v81; // [rsp+70h] [rbp-90h]
  _BYTE *v82; // [rsp+78h] [rbp-88h]
  __int64 v83; // [rsp+80h] [rbp-80h]
  unsigned __int64 *v84; // [rsp+88h] [rbp-78h]
  PVOID P; // [rsp+90h] [rbp-70h]
  _DWORD *v86; // [rsp+98h] [rbp-68h]
  unsigned __int64 *v87; // [rsp+A0h] [rbp-60h]
  _BYTE v88[48]; // [rsp+B0h] [rbp-50h] BYREF
  char v89; // [rsp+E0h] [rbp-20h] BYREF

  v6 = a5;
  v9 = (int)a1;
  v69 = a3;
  v86 = a5;
  v87 = a6;
  memset_0(v88, 0, 0xB0uLL);
  v77 = 0LL;
  v76 = 0LL;
  if ( a5 )
    *a5 = 0;
  if ( a6 )
    *a6 = 0LL;
  v83 = -1LL;
  v82 = 0LL;
  v11 = 0LL;
  v74 = 0;
  v12 = ((1LL << ((unsigned __int8)dword_140E2DB38 - 12)) - 1) & a2;
  P = 0LL;
  v79 = 3;
  v75 = v12;
  v84 = (unsigned __int64 *)&qword_140E37180[8 * v9];
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
  v70 = v16;
  MiIoSpaceGetBounds(&v76, v12);
  v20 = a1;
  if ( HIDWORD(v77) != 3 && a1 == 1 && v12 + a3 - 1 <= *((_QWORD *)&v76 + 1) )
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
      *a5 |= 1 << v77;
    return 0LL;
  }
  MiLockIoPfnTree(5LL);
  v22 = v70;
  for ( i = a3; ; v69 = i )
  {
LABEL_13:
    v24 = (unsigned int)v22;
    if ( !i )
    {
      v33 = 0;
      goto LABEL_160;
    }
    if ( v12 < (unsigned __int64)v76 || v12 > *((_QWORD *)&v76 + 1) )
    {
      MiIoSpaceGetBounds(&v76, v12);
      i = v69;
      v22 = v70;
    }
    if ( v20 != 1 || HIDWORD(v77) == 3 )
      break;
    if ( v6 )
    {
      v21 = (unsigned int)v77;
      *v6 |= 1 << v77;
    }
    v62 = *((_QWORD *)&v76 + 1) - v12 + 1;
    if ( v62 > i )
      v62 = i;
    v12 += v62;
    i -= v62;
  }
  v25 = (_QWORD *)*((_QWORD *)&xmmword_140E37200 + 1);
  v21 = i + v12 - 1;
  if ( *((_QWORD *)&xmmword_140E37200 + 1) )
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
          ++dword_140E37248;
          v33 = -1073741800;
          v24 = (unsigned int)v22;
LABEL_160:
          v31 = v69;
LABEL_39:
          v34 = v75;
LABEL_40:
          v35 = v83;
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
  v73 = 0;
  v26 = *v84;
  for ( j = *v84 == 0; !j; j = v26 == 0 )
  {
    while ( 1 )
    {
      v28 = *(_QWORD *)(v26 + 24);
      if ( v12 < v28 )
        break;
      if ( v12 < v28 + 512 )
        goto LABEL_45;
      v26 = *(_QWORD *)(v26 + 8);
      if ( !v26 )
        goto LABEL_27;
    }
    v26 = *(_QWORD *)v26;
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
      MiDereferenceIoPages(a1, v75, v12 - v75);
      return 3221225626LL;
    }
    *(_DWORD *)(PoolMm + 32) = 1;
    MiInitializeIoPageNodeArray(PoolMm);
    if ( v15 != 17 )
    {
      v58 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags )
      {
        LOBYTE(v56) = 2;
        LOBYTE(v57) = v58;
        KiRaiseIrqlProcessIrqlFlags(v57, v56);
      }
      v15 = v58;
    }
    MiIoSpaceGetBounds(&v76, v12);
  }
  v30[3] = v12 & 0xFFFFFFFFFFFFFE00uLL;
  MiLockIoPfnTree(6LL);
  v31 = v69;
  v22 = 0LL;
  v32 = (_QWORD *)*((_QWORD *)&xmmword_140E37200 + 1);
  v21 = v12 + v69 - 1;
  if ( *((_QWORD *)&xmmword_140E37200 + 1) )
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
      ++dword_140E37248;
      v24 = v70 & 0xFFFFFFFC | 2;
      goto LABEL_39;
    }
  }
  v59 = 0;
  v60 = (_QWORD *)*v84;
  if ( !*v84 )
  {
LABEL_145:
    v65 = v30;
    v26 = (unsigned __int64)v30;
    v66 = v84;
    RtlAvlInsertNodeEx(v84, (unsigned __int64)v60, v59, v65);
    _InterlockedAdd64((volatile signed __int64 *)v66 + 3, 1uLL);
    P = 0LL;
    v73 = 1;
    goto LABEL_146;
  }
  while ( 1 )
  {
    v63 = v60[3];
    v26 = (unsigned __int64)v60;
    if ( v12 < v63 )
    {
      v64 = (_QWORD *)*v60;
      if ( !*v60 )
        goto LABEL_145;
      goto LABEL_150;
    }
    if ( v12 < v63 + 512 )
      break;
    v64 = (_QWORD *)v60[1];
    if ( !v64 )
    {
      v59 = 1;
      goto LABEL_145;
    }
LABEL_150:
    v60 = v64;
  }
  P = v30;
LABEL_146:
  MiConvertIoPfnTreeLockExclusiveToShared();
  i = v69;
LABEL_45:
  v37 = *(_QWORD *)(v26 + 24);
  v38 = v12 - v37;
  if ( v37 == -512 || i + v12 <= v37 + 512 )
    v81 = i + v38;
  else
    v81 = 512LL;
  v78 = 0;
  v80 = 0;
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v26 + 172));
  v40 = v73;
  v41 = 0LL;
  if ( v73 )
    --*(_DWORD *)(v26 + 32);
  while ( 2 )
  {
    v42 = v81;
    while ( 2 )
    {
      if ( v38 >= v42 )
      {
        if ( v82 )
          MiFlushCachedIoPfnRange(v82, ((char *)v11 - v82 - 48) >> 3);
        if ( v74 )
        {
          _InterlockedDecrement64((volatile signed __int64 *)v84 + 1);
          if ( (unsigned int)MiIsPageInIoHugeRangeTransition(*(_QWORD *)(v26 + 24)) )
            _InterlockedDecrement64((volatile signed __int64 *)(v54 + 16));
          v74 = 0;
        }
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v26 + 172));
        i = v69;
        v22 = v70;
        v24 = v70;
        if ( !v69 )
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
            v15);
          v45 = KeGetCurrentIrql();
          __writecr8(2uLL);
          if ( KiIrqlFlags )
          {
            LOBYTE(v43) = 2;
            LOBYTE(v44) = v45;
            KiRaiseIrqlProcessIrqlFlags(v44, v43);
          }
          v15 = v45;
          MiIoSpaceGetBounds(&v76, v12);
          MiLockIoPfnTree(5LL);
          goto LABEL_59;
        }
        if ( v15 != 17 )
        {
          if ( KeShouldYieldProcessor() )
            goto LABEL_56;
LABEL_59:
          i = v69;
          v22 = v70;
        }
        v20 = a1;
        goto LABEL_13;
      }
      if ( v12 < (unsigned __int64)v76 || v12 > *((_QWORD *)&v76 + 1) )
      {
        MiIoSpaceGetBounds(&v76, v12);
        v40 = v73;
        v42 = v81;
      }
      if ( HIDWORD(v77) != 3 && a1 == 1 )
      {
        if ( v6 )
          *v6 |= 1 << v77;
        v67 = v42 - v38;
        if ( *((_QWORD *)&v76 + 1) - v12 + 1 <= v42 - v38 )
          v67 = *((_QWORD *)&v76 + 1) - v12 + 1;
        v12 += v67;
        v38 += v67;
        v69 -= v67;
        continue;
      }
      break;
    }
    v46 = *(unsigned __int16 *)(v26 + 2 * v38 + 176);
    v47 = 2 * (((unsigned int)v12 & ((1 << (dword_140E2DB38 - 12)) - 1)) - *(_DWORD *)(v26 + 24));
    v48 = (2 * (((unsigned __int8)v12 & (unsigned __int8)((1 << (dword_140E2DB38 - 12)) - 1)) - *(_BYTE *)(v26 + 24))) & 0x1F;
    v49 = (*(_DWORD *)(v26 + 4 * (v47 >> 5) + 44) >> (v47 & 0x1F)) & 3;
    if ( (_WORD)v46 != 0xFFFF )
    {
      if ( (_WORD)v46 )
        goto LABEL_67;
      v50 = *(_DWORD *)(v26 + 32);
      if ( !v50 )
      {
        v48 = v74;
        if ( !(_DWORD)v40 )
          v48 = 1LL;
        v74 = v48;
      }
      v51 = a4;
      *(_DWORD *)(v26 + 32) = v50 + 1;
      if ( v49 == a4 )
      {
LABEL_67:
        if ( v86 == v41 )
        {
          v6 = v86;
        }
        else
        {
          v52 = v49;
          v6 = v86;
          *v86 |= 1 << v52;
        }
        ++*(_WORD *)(v26 + 2 * v38 + 176);
        if ( v87 && (_DWORD *)*v87 == v41 )
          *v87 = v26;
        v40 = v73;
        ++v38;
        ++v12;
        --v69;
        continue;
      }
      if ( a4 == 1 )
        *(_BYTE *)(v26 + 40) = 1;
      if ( v49 != 3 )
      {
        if ( v78 == (_DWORD)v41 )
        {
          MiFlushEntireTbDueToAttributeChange(v48, v46, v40, v39);
          v51 = a4;
          v41 = 0LL;
          v78 = 1;
        }
        if ( v49 == 1 )
        {
          v61 = v80;
          if ( !v80 )
          {
            ++dword_140E3723C;
            v39 = v82;
            if ( !v82 )
              goto LABEL_155;
            if ( v79 != v51 )
            {
              MiFlushCachedIoPfnRange(v82, ((char *)v11 - v82 - 48) >> 3);
              v41 = 0LL;
LABEL_155:
              v51 = a4;
              v39 = v88;
              v82 = v88;
              v11 = (ULONG_PTR *)&v89;
            }
            *v11++ = v12;
            v79 = v51;
            if ( v11 == (ULONG_PTR *)(v39 + 176) )
            {
              v68 = MiFlushCachedIoPfnRange(v39, 16LL);
              v51 = a4;
              v41 = 0LL;
              v82 = 0LL;
              if ( v68 )
                v61 = 1;
              v80 = v61;
            }
          }
        }
      }
      LOBYTE(v49) = v51;
      v55 = 2 * ((v12 & ((1 << (dword_140E2DB38 - 12)) - 1)) - *(_DWORD *)(v26 + 24));
      *(_DWORD *)(v26 + 4LL * (v55 >> 5) + 44) = (v51 << (v55 & 0x1F)) | *(_DWORD *)(v26 + 4LL * (v55 >> 5) + 44) & ~(3 << (v55 & 0x1F));
      goto LABEL_67;
    }
    break;
  }
  if ( v82 )
    MiFlushCachedIoPfnRange(v82, ((char *)v11 - v82 - 48) >> 3);
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v26 + 172));
  v34 = v75;
  v24 = v70;
  v31 = v69;
  if ( v12 == v75 )
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
