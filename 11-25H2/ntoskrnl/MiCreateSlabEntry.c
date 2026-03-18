/*
 * XREFs of MiCreateSlabEntry @ 0x140376BF8
 * Callers:
 *     MiReplenishSlabAllocator @ 0x1403769E8 (MiReplenishSlabAllocator.c)
 * Callees:
 *     MiReleaseNonPagedResources @ 0x14021133C (MiReleaseNonPagedResources.c)
 *     MiSetPfnIdentity @ 0x1402293B0 (MiSetPfnIdentity.c)
 *     MiAcquireNonPagedResources @ 0x14022E560 (MiAcquireNonPagedResources.c)
 *     RtlpGetStackLimits @ 0x140258FB0 (RtlpGetStackLimits.c)
 *     MiReInitializeFreeSlabPfn @ 0x1402C60D4 (MiReInitializeFreeSlabPfn.c)
 *     PsDereferencePartition @ 0x140302710 (PsDereferencePartition.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiInitializeDemandCoalesceContext @ 0x140378AD0 (MiInitializeDemandCoalesceContext.c)
 *     MiPopLargePfnList @ 0x140384E4C (MiPopLargePfnList.c)
 *     MiConvertActiveLargePageToSmall @ 0x14038A558 (MiConvertActiveLargePageToSmall.c)
 *     MiFreeLargePageMemory @ 0x14038C050 (MiFreeLargePageMemory.c)
 *     MiAllocateLargeZeroPages @ 0x140390BD8 (MiAllocateLargeZeroPages.c)
 *     MiUpdateSlabPagePlaceholderState @ 0x1403B79B4 (MiUpdateSlabPagePlaceholderState.c)
 *     MiAbortCombineScan @ 0x1403B7B64 (MiAbortCombineScan.c)
 *     MiLogSlabEntryAllocateFailure @ 0x1403BC0C0 (MiLogSlabEntryAllocateFailure.c)
 *     PsReferencePartitionSafe @ 0x1403BE990 (PsReferencePartitionSafe.c)
 *     MiGetCurrentSlabIdentity @ 0x1403BEAC0 (MiGetCurrentSlabIdentity.c)
 *     MiGetSlabCurrentTime @ 0x14045CB68 (MiGetSlabCurrentTime.c)
 *     MiSetSlabTypeIdentifiers @ 0x14048D8F4 (MiSetSlabTypeIdentifiers.c)
 *     MiAllocateSlabEntry @ 0x1404A40AC (MiAllocateSlabEntry.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

__int64 __fastcall MiCreateSlabEntry(__int64 a1, __int64 a2, int a3, unsigned __int8 a4)
{
  char v7; // cl
  __int64 v8; // r15
  __int64 v9; // rax
  struct _KTHREAD *CurrentThread; // r12
  unsigned __int64 v11; // rdx
  __int64 v12; // rax
  bool v13; // cf
  __int64 v14; // rsi
  int v15; // eax
  __int64 v16; // r10
  int v17; // ebx
  int v18; // eax
  int v19; // r8d
  int v20; // r14d
  _QWORD *v21; // rax
  __int64 v22; // rcx
  int v23; // ecx
  unsigned int v24; // ebx
  __int64 v25; // r9
  unsigned int v26; // esi
  ULONG_PTR v27; // r14
  __int64 SlabEntry; // rsi
  int CurrentSlabIdentity; // r9d
  unsigned int v30; // edx
  int v31; // eax
  unsigned __int64 v32; // r15
  __int64 v33; // rdx
  unsigned int v34; // ecx
  bool v35; // r12
  unsigned __int64 v36; // rbx
  unsigned __int64 v37; // r13
  unsigned __int64 v38; // r14
  unsigned int v39; // r10d
  __int64 CurrentIrql; // rcx
  unsigned __int64 v41; // rbx
  unsigned int v42; // r15d
  int v43; // r9d
  int v45; // ebx
  char v46; // al
  bool StackLimits; // al
  char *v48; // rax
  char v49; // al
  volatile signed __int32 *v50; // rax
  signed __int32 v51[8]; // [rsp+0h] [rbp-100h] BYREF
  int v52; // [rsp+20h] [rbp-E0h]
  unsigned __int8 v53; // [rsp+30h] [rbp-D0h]
  char v54; // [rsp+31h] [rbp-CFh]
  int v55; // [rsp+34h] [rbp-CCh]
  int v56; // [rsp+38h] [rbp-C8h]
  int v57; // [rsp+3Ch] [rbp-C4h]
  int v58; // [rsp+40h] [rbp-C0h]
  char *v59; // [rsp+48h] [rbp-B8h] BYREF
  unsigned __int64 v60; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int64 v61; // [rsp+58h] [rbp-A8h]
  int v62; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v63; // [rsp+68h] [rbp-98h]
  __int64 v64; // [rsp+70h] [rbp-90h]
  __int64 v65; // [rsp+78h] [rbp-88h]
  int v66; // [rsp+80h] [rbp-80h]
  int v67; // [rsp+84h] [rbp-7Ch]
  __int64 v68; // [rsp+88h] [rbp-78h]
  int v69; // [rsp+94h] [rbp-6Ch]
  _OWORD *v70; // [rsp+A0h] [rbp-60h]
  __int64 v71; // [rsp+A8h] [rbp-58h]
  _BYTE *v72; // [rsp+B0h] [rbp-50h]
  _OWORD v73[3]; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v74; // [rsp+F0h] [rbp-10h]
  int v75; // [rsp+F8h] [rbp-8h]
  _BYTE v76[96]; // [rsp+100h] [rbp+0h] BYREF

  v57 = a3;
  v53 = a4;
  memset_0(v76, 0, sizeof(v76));
  memset_0(&v62, 0, 0x58uLL);
  v74 = 0LL;
  v75 = 0;
  v7 = 1;
  v8 = 0LL;
  v9 = (*(_DWORD *)(a1 + 136) >> 4) & 3;
  v54 = 1;
  memset(v73, 0, sizeof(v73));
  v56 = 0;
  CurrentThread = 0LL;
  v11 = LODWORD(MiPageSizes[v9]);
  v12 = *(_QWORD *)(a1 + 176);
  v58 = v11;
  if ( v12 )
  {
    v45 = 10;
    goto LABEL_85;
  }
  v13 = *(_QWORD *)(a2 + 18688) < 0x420uLL;
  v55 = 1;
  if ( v13 )
  {
    v45 = 20;
    goto LABEL_50;
  }
  v61 = v11;
  v14 = (unsigned int)v11;
  v15 = MiAcquireNonPagedResources((ULONG *)a2, v11, 0LL, 2LL);
  v16 = 0LL;
  if ( v15 < 0 )
  {
    v45 = 30;
LABEL_50:
    *(_QWORD *)(a1 + 176) = MiGetSlabCurrentTime();
    goto LABEL_84;
  }
  v68 = -1LL;
  v17 = v62 | 8;
  v18 = *(_DWORD *)(a1 + 132);
  v19 = v57;
  v63 = a2;
  v64 = v14;
  v65 = v14;
  v66 = v18;
  v67 = 4;
  v62 |= 8u;
  v69 = v57;
  if ( a4 == 2 )
  {
    v17 |= 0x10u;
    v62 = v17;
  }
  if ( (*(_DWORD *)(a1 + 136) & 4) == 0 )
  {
    v17 |= 4u;
    v62 = v17;
  }
  if ( (v17 & 4) != 0 )
    goto LABEL_9;
  if ( (v57 & 0x20000) != 0 )
    goto LABEL_64;
  v60 = 0LL;
  v59 = 0LL;
  StackLimits = RtlpGetStackLimits(&v59, &v60);
  v16 = 0LL;
  if ( StackLimits )
  {
    v48 = v59;
  }
  else
  {
    v48 = 0LL;
    v60 = 0LL;
    v59 = 0LL;
  }
  if ( (char *)&v60 - v48 < (unsigned __int64)(unsigned int)KeKernelStackSize >> 2 )
  {
    v17 |= 4u;
    v62 = v17;
    goto LABEL_90;
  }
  if ( KeGetCurrentIrql() >= 2u )
  {
LABEL_90:
    v19 = v57;
    goto LABEL_9;
  }
  CurrentThread = KeGetCurrentThread();
  v17 = v62;
  v19 = v57;
  v49 = BYTE2(CurrentThread[1].Queue);
  if ( (v49 & 1) != 0 )
  {
LABEL_64:
    v17 |= 4u;
    v62 = v17;
LABEL_9:
    v20 = 0;
    goto LABEL_10;
  }
  v20 = 1;
  BYTE2(CurrentThread[1].Queue) = v49 | 1;
  v56 = 1;
LABEL_10:
  if ( (v17 & 4) == 0
    && (ULONG *)a2 != &MiSystemPartition
    && *((_QWORD *)qword_140E2FD48 + HIWORD(KeGetCurrentThread()->ApcState.Process[2].ProcessListEntry.Blink)) != a2 )
  {
    v8 = *(_QWORD *)(a2 + 184);
    if ( !(unsigned __int8)PsReferencePartitionSafe(v8) )
    {
      v62 |= 4u;
      v8 = v16;
    }
  }
  v21 = v76;
  v22 = 4LL;
  do
  {
    v21[2] = v16;
    v21[1] = v21;
    *v21 = v21;
    v21 += 3;
    --v22;
  }
  while ( v22 );
  v72 = v76;
  if ( KeGetCurrentThread() == *(struct _KTHREAD **)&KeSwapProcessOrStackThread )
  {
    v23 = v19 | 8;
    v69 = v19 | 8;
  }
  else
  {
    v23 = v69;
  }
  if ( (*(_DWORD *)(a1 + 136) & 0x30) != 0 )
  {
    if ( (v23 & 0x40) != 0 )
    {
      v24 = 1;
      v55 = v16;
    }
    else
    {
      v54 = v16;
      v69 = v23 | 0x40;
      v24 = 2;
    }
  }
  else
  {
    v24 = 1;
    v55 = 1;
  }
  v25 = (unsigned int)v16;
  LOBYTE(v25) = v24 == 1;
  MiInitializeDemandCoalesceContext(v73, v14, 1LL, v25);
  v26 = 0;
  v70 = v73;
  while ( 1 )
  {
    MiAllocateLargeZeroPages(&v62);
    if ( v71 )
      break;
    v69 &= ~0x40u;
    ++v26;
    v62 &= ~8u;
    if ( v26 >= v24 )
    {
      v45 = 50;
      goto LABEL_79;
    }
  }
  if ( v20 )
  {
    BYTE2(CurrentThread[1].Queue) &= ~1u;
    v56 = 0;
  }
  if ( v8 )
  {
    PsDereferencePartition(v8);
    v8 = 0LL;
  }
  v27 = MiPopLargePfnList(v76, (*(_DWORD *)(a1 + 136) >> 4) & 3);
  MiConvertActiveLargePageToSmall(48 * v27 - 0x220000000000LL, 1LL);
  SlabEntry = MiAllocateSlabEntry(a1);
  if ( SlabEntry )
  {
    *(_DWORD *)(SlabEntry + 84) = v58;
    if ( *(_DWORD *)(a1 + 128) == 8 )
    {
      CurrentSlabIdentity = (unsigned __int8)MiGetCurrentSlabIdentity(KeGetCurrentThread());
      v30 = *(_DWORD *)(SlabEntry + 92) ^ ((unsigned __int16)*(_DWORD *)(SlabEntry + 92) ^ (unsigned __int16)(8 * CurrentSlabIdentity)) & 0x1F8 | 4;
      *(_DWORD *)(SlabEntry + 92) = v30;
    }
    else
    {
      v30 = *(_DWORD *)(SlabEntry + 92);
      LOBYTE(CurrentSlabIdentity) = 0;
    }
    v31 = *(_DWORD *)(a2 + 17748);
    if ( _bittest(&v31, *(_DWORD *)(a1 + 128)) )
    {
      v30 |= 2u;
      *(_DWORD *)(SlabEntry + 92) = v30;
    }
    v32 = v61;
    *(_QWORD *)(SlabEntry + 40) = v27;
    v52 = (v30 >> 1) & 1;
    *(_QWORD *)(SlabEntry + 48) = v27 + v32 - 1;
    MiSetSlabTypeIdentifiers(v27, v32, *(_DWORD *)(a1 + 128), CurrentSlabIdentity, v52);
    v33 = 2LL;
    v34 = *(_DWORD *)(a1 + 128);
    if ( v34 <= 4 )
    {
      v35 = 1;
      if ( v34 == 2 )
        v35 = (v62 & 4) != 0;
    }
    else
    {
      v35 = (v62 & 4) != 0;
    }
    v36 = 48LL * *(_QWORD *)(SlabEntry + 40) - 0x220000000000LL;
    v37 = v53;
    v38 = 48LL * *(_QWORD *)(SlabEntry + 48) - 0x220000000000LL;
    v39 = 0;
    if ( v53 != 2 )
    {
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags )
      {
        KiRaiseIrqlProcessIrqlFlags(CurrentIrql);
        v39 = 0;
        v33 = 2LL;
      }
    }
    if ( v36 <= v38 )
    {
      v41 = v36 + 24;
      do
      {
        v42 = v39;
        while ( _interlockedbittestandset64((volatile signed __int32 *)v41, 0x3FuLL) )
        {
          do
          {
            if ( (++v42 & HvlLongSpinCountMask) == 0
              && (HvlEnlightenments & 0x40) != 0
              && (v46 = KiCheckVpBackingLongSpinWaitHypercall(), v39 = 0, v46) )
            {
              HvlNotifyLongSpinWait();
              v39 = 0;
            }
            else
            {
              _mm_pause();
            }
          }
          while ( *(__int64 *)v41 < 0 );
        }
        HIWORD(v55) = HIWORD(*(_DWORD *)(v41 + 8));
        LOWORD(v55) = v39;
        *(_DWORD *)(v41 + 8) = v55;
        _InterlockedOr(v51, v39);
        *(_QWORD *)v41 = ((unsigned __int64)(unsigned int)KiTbFlushTimeStamp << 59) ^ (*(_QWORD *)v41 ^ ((unsigned __int64)(unsigned int)KiTbFlushTimeStamp << 59)) & 0xC7FFFFFFFFFFFFFFuLL;
        v55 = *(_DWORD *)(v41 + 8);
        BYTE2(v55) = v35 | BYTE2(v55) & 0xF8;
        *(_DWORD *)(v41 + 8) = v55;
        MiReInitializeFreeSlabPfn((_QWORD *)(v41 - 24), a1);
        v43 = *(_DWORD *)(a1 + 128);
        v33 = 2LL;
        if ( v43 >= 0 && v43 != 2 && v43 <= 4 )
        {
          MiSetPfnIdentity(v41 - 24, 3u);
          MiAbortCombineScan(v41 - 24);
          v39 = 0;
          v33 = 2LL;
        }
        _InterlockedAnd64((volatile signed __int64 *)v41, 0x7FFFFFFFFFFFFFFFuLL);
        v41 += 48LL;
      }
      while ( v41 - 24 <= v38 );
      v32 = v61;
    }
    if ( (_BYTE)v37 != 2 )
    {
      if ( KiIrqlFlags != v39 )
      {
        LOBYTE(v33) = v37;
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v33);
      }
      __writecr8(v37);
    }
    MiUpdateSlabPagePlaceholderState(*(unsigned int *)(a1 + 128), *(_QWORD *)(SlabEntry + 40), v32, 1LL);
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 144));
    return SlabEntry;
  }
  v45 = 40;
  if ( v27 != -1LL )
    MiFreeLargePageMemory(v27);
LABEL_79:
  MiReleaseNonPagedResources(a2, v61);
  if ( v56 )
    BYTE2(CurrentThread[1].Queue) &= ~1u;
  if ( v8 )
    PsDereferencePartition(v8);
  if ( v55 )
    goto LABEL_50;
LABEL_84:
  v7 = v54;
  if ( !v54 )
  {
    v50 = (volatile signed __int32 *)(a1 + 156);
    goto LABEL_86;
  }
LABEL_85:
  v50 = (volatile signed __int32 *)(a1 + 152);
LABEL_86:
  _InterlockedIncrement(v50);
  MiLogSlabEntryAllocateFailure(a1, v45, v57, v69, v7);
  return 0LL;
}
