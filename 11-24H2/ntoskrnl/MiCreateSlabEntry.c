/*
 * XREFs of MiCreateSlabEntry @ 0x140217C8C
 * Callers:
 *     MiReplenishSlabAllocator @ 0x14021E544 (MiReplenishSlabAllocator.c)
 * Callees:
 *     MiSetPfnIdentity @ 0x140216B00 (MiSetPfnIdentity.c)
 *     MiReInitializeFreeSlabPfn @ 0x140218778 (MiReInitializeFreeSlabPfn.c)
 *     MiFreeLargePageMemory @ 0x14021B56C (MiFreeLargePageMemory.c)
 *     PsDereferencePartition @ 0x14022B3F0 (PsDereferencePartition.c)
 *     RtlpGetStackLimits @ 0x140235480 (RtlpGetStackLimits.c)
 *     MiGetCurrentSlabIdentity @ 0x1402619D0 (MiGetCurrentSlabIdentity.c)
 *     PsReferencePartitionSafe @ 0x140262AE0 (PsReferencePartitionSafe.c)
 *     MiGetSlabCurrentTime @ 0x140263454 (MiGetSlabCurrentTime.c)
 *     MiInitializeDemandCoalesceContext @ 0x14026AE60 (MiInitializeDemandCoalesceContext.c)
 *     MiAllocateLargeZeroPages @ 0x14026F2E8 (MiAllocateLargeZeroPages.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiConvertActiveLargePageToSmall @ 0x1402EDFDC (MiConvertActiveLargePageToSmall.c)
 *     MiReleaseNonPagedResources @ 0x1403358DC (MiReleaseNonPagedResources.c)
 *     MiAcquireNonPagedResources @ 0x14033A560 (MiAcquireNonPagedResources.c)
 *     MiUpdateSlabPagePlaceholderState @ 0x1403A9C00 (MiUpdateSlabPagePlaceholderState.c)
 *     MiAbortCombineScan @ 0x1403A9DB0 (MiAbortCombineScan.c)
 *     MiLogSlabEntryAllocateFailure @ 0x14047E460 (MiLogSlabEntryAllocateFailure.c)
 *     MiSetSlabTypeIdentifiers @ 0x140487BBC (MiSetSlabTypeIdentifiers.c)
 *     MiPopLargePfnList @ 0x14048BDB4 (MiPopLargePfnList.c)
 *     MiAllocateSlabEntry @ 0x14049F108 (MiAllocateSlabEntry.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall MiCreateSlabEntry(__int64 a1, __int64 a2, int a3, unsigned __int8 a4)
{
  char v7; // cl
  __int64 v8; // r15
  __int64 v9; // rax
  struct _KTHREAD *CurrentThread; // r12
  __int64 v11; // rdx
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
  __int64 v32; // r15
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rdx
  unsigned int v36; // ecx
  bool v37; // r12
  unsigned __int64 CurrentIrql; // rcx
  unsigned __int64 v39; // rbx
  unsigned __int64 v40; // r13
  unsigned __int64 v41; // r14
  unsigned int v42; // r10d
  unsigned __int64 v43; // rbx
  unsigned int v44; // r15d
  int v46; // ebx
  char StackLimits; // al
  __int64 v48; // rax
  char v49; // al
  char v50; // al
  volatile signed __int32 *v51; // rax
  signed __int32 v52[8]; // [rsp+0h] [rbp-100h] BYREF
  int v53; // [rsp+20h] [rbp-E0h]
  unsigned __int8 v54; // [rsp+30h] [rbp-D0h]
  char v55; // [rsp+31h] [rbp-CFh]
  int v56; // [rsp+34h] [rbp-CCh]
  int v57; // [rsp+38h] [rbp-C8h]
  int v58; // [rsp+3Ch] [rbp-C4h]
  int v59; // [rsp+40h] [rbp-C0h]
  __int64 v60; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v61; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v62; // [rsp+58h] [rbp-A8h]
  int v63; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v64; // [rsp+68h] [rbp-98h]
  __int64 v65; // [rsp+70h] [rbp-90h]
  __int64 v66; // [rsp+78h] [rbp-88h]
  int v67; // [rsp+80h] [rbp-80h]
  int v68; // [rsp+84h] [rbp-7Ch]
  __int64 v69; // [rsp+88h] [rbp-78h]
  int v70; // [rsp+94h] [rbp-6Ch]
  _OWORD *v71; // [rsp+A0h] [rbp-60h]
  __int64 v72; // [rsp+A8h] [rbp-58h]
  _BYTE *v73; // [rsp+B0h] [rbp-50h]
  _OWORD v74[3]; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v75; // [rsp+F0h] [rbp-10h]
  int v76; // [rsp+F8h] [rbp-8h]
  _BYTE v77[96]; // [rsp+100h] [rbp+0h] BYREF

  v58 = a3;
  v54 = a4;
  memset_0(v77, 0, sizeof(v77));
  memset_0(&v63, 0, 0x58uLL);
  v75 = 0LL;
  v76 = 0;
  v7 = 1;
  v8 = 0LL;
  v9 = (*(_DWORD *)(a1 + 136) >> 4) & 3;
  v55 = 1;
  memset(v74, 0, sizeof(v74));
  v57 = 0;
  CurrentThread = 0LL;
  v11 = LODWORD(MiPageSizes[v9]);
  v12 = *(_QWORD *)(a1 + 176);
  v59 = v11;
  if ( v12 )
  {
    v46 = 10;
    goto LABEL_85;
  }
  v13 = *(_QWORD *)(a2 + 18688) < 0x420uLL;
  v56 = 1;
  if ( v13 )
  {
    v46 = 20;
    goto LABEL_50;
  }
  v62 = v11;
  v14 = (unsigned int)v11;
  v15 = MiAcquireNonPagedResources(a2, v11, 0LL, 2LL);
  v16 = 0LL;
  if ( v15 < 0 )
  {
    v46 = 30;
LABEL_50:
    *(_QWORD *)(a1 + 176) = MiGetSlabCurrentTime();
    goto LABEL_84;
  }
  v69 = -1LL;
  v17 = v63 | 8;
  v18 = *(_DWORD *)(a1 + 132);
  v19 = v58;
  v64 = a2;
  v65 = v14;
  v66 = v14;
  v67 = v18;
  v68 = 4;
  v63 |= 8u;
  v70 = v58;
  if ( a4 == 2 )
  {
    v17 |= 0x10u;
    v63 = v17;
  }
  if ( (*(_DWORD *)(a1 + 136) & 4) == 0 )
  {
    v17 |= 4u;
    v63 = v17;
  }
  if ( (v17 & 4) != 0 )
    goto LABEL_9;
  if ( (v58 & 0x20000) != 0 )
    goto LABEL_61;
  v61 = 0LL;
  v60 = 0LL;
  StackLimits = RtlpGetStackLimits(&v60, &v61);
  v16 = 0LL;
  if ( StackLimits )
  {
    v48 = v60;
  }
  else
  {
    v48 = 0LL;
    v61 = 0LL;
    v60 = 0LL;
  }
  if ( (unsigned __int64)&v61 - v48 < (unsigned __int64)(unsigned int)KeKernelStackSize >> 2 )
  {
    v17 |= 4u;
    v63 = v17;
    goto LABEL_90;
  }
  if ( KeGetCurrentIrql() >= 2u )
  {
LABEL_90:
    v19 = v58;
    goto LABEL_9;
  }
  CurrentThread = KeGetCurrentThread();
  v17 = v63;
  v19 = v58;
  v49 = BYTE2(CurrentThread[1].Queue);
  if ( (v49 & 1) != 0 )
  {
LABEL_61:
    v17 |= 4u;
    v63 = v17;
LABEL_9:
    v20 = 0;
    goto LABEL_10;
  }
  v20 = 1;
  BYTE2(CurrentThread[1].Queue) = v49 | 1;
  v57 = 1;
LABEL_10:
  if ( (v17 & 4) == 0
    && (ULONG *)a2 != &MiSystemPartition
    && *((_QWORD *)qword_140E300C8 + HIWORD(KeGetCurrentThread()->ApcState.Process[2].ProcessListEntry.Blink)) != a2 )
  {
    v8 = *(_QWORD *)(a2 + 184);
    if ( !(unsigned __int8)PsReferencePartitionSafe(v8) )
    {
      v63 |= 4u;
      v8 = v16;
    }
  }
  v21 = v77;
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
  v73 = v77;
  if ( KeGetCurrentThread() == *(struct _KTHREAD **)&KeSwapProcessOrStackThread )
  {
    v23 = v19 | 8;
    v70 = v19 | 8;
  }
  else
  {
    v23 = v70;
  }
  if ( (*(_DWORD *)(a1 + 136) & 0x30) != 0 )
  {
    if ( (v23 & 0x40) != 0 )
    {
      v24 = 1;
      v56 = v16;
    }
    else
    {
      v55 = v16;
      v70 = v23 | 0x40;
      v24 = 2;
    }
  }
  else
  {
    v24 = 1;
    v56 = 1;
  }
  v25 = (unsigned int)v16;
  LOBYTE(v25) = v24 == 1;
  MiInitializeDemandCoalesceContext(v74, v14, 1LL, v25);
  v26 = 0;
  v71 = v74;
  while ( 1 )
  {
    MiAllocateLargeZeroPages(&v63);
    if ( v72 )
      break;
    v70 &= ~0x40u;
    ++v26;
    v63 &= ~8u;
    if ( v26 >= v24 )
    {
      v46 = 50;
      goto LABEL_79;
    }
  }
  if ( v20 )
  {
    BYTE2(CurrentThread[1].Queue) &= ~1u;
    v57 = 0;
  }
  if ( v8 )
  {
    PsDereferencePartition(v8, 1632857421LL);
    v8 = 0LL;
  }
  v27 = MiPopLargePfnList(v77, (*(_DWORD *)(a1 + 136) >> 4) & 3);
  MiConvertActiveLargePageToSmall(48 * v27 - 0x220000000000LL, 1LL);
  SlabEntry = MiAllocateSlabEntry(a1);
  if ( SlabEntry )
  {
    *(_DWORD *)(SlabEntry + 84) = v59;
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
    v32 = v62;
    *(_QWORD *)(SlabEntry + 40) = v27;
    v53 = (v30 >> 1) & 1;
    *(_QWORD *)(SlabEntry + 48) = v27 + v32 - 1;
    MiSetSlabTypeIdentifiers(v27, v32, *(_DWORD *)(a1 + 128), CurrentSlabIdentity, v53);
    v35 = 2LL;
    v36 = *(_DWORD *)(a1 + 128);
    if ( v36 <= 4 )
    {
      v37 = 1;
      if ( v36 == 2 )
        v37 = (v63 & 4) != 0;
    }
    else
    {
      v37 = (v63 & 4) != 0;
    }
    CurrentIrql = 0xFFFFDE0000000000uLL;
    v39 = 48LL * *(_QWORD *)(SlabEntry + 40) - 0x220000000000LL;
    v40 = v54;
    v41 = 48LL * *(_QWORD *)(SlabEntry + 48) - 0x220000000000LL;
    v42 = 0;
    if ( v54 != 2 )
    {
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags )
      {
        KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
        v42 = 0;
        v35 = 2LL;
      }
    }
    if ( v39 <= v41 )
    {
      v43 = v39 + 24;
      do
      {
        v44 = v42;
        while ( _interlockedbittestandset64((volatile signed __int32 *)v43, 0x3FuLL) )
        {
          do
          {
            if ( (++v44 & HvlLongSpinCountMask) == 0
              && (HvlEnlightenments & 0x40) != 0
              && (v50 = KiCheckVpBackingLongSpinWaitHypercall(CurrentIrql, v35, v33, v34), v42 = 0, v50) )
            {
              HvlNotifyLongSpinWait(v44);
              v42 = 0;
            }
            else
            {
              _mm_pause();
            }
          }
          while ( *(__int64 *)v43 < 0 );
        }
        HIWORD(v56) = HIWORD(*(_DWORD *)(v43 + 8));
        LOWORD(v56) = v42;
        *(_DWORD *)(v43 + 8) = v56;
        _InterlockedOr(v52, v42);
        *(_QWORD *)v43 = ((unsigned __int64)(unsigned int)KiTbFlushTimeStamp << 59) ^ (*(_QWORD *)v43 ^ ((unsigned __int64)(unsigned int)KiTbFlushTimeStamp << 59)) & 0xC7FFFFFFFFFFFFFFuLL;
        v56 = *(_DWORD *)(v43 + 8);
        BYTE2(v56) = v37 | BYTE2(v56) & 0xF8;
        *(_DWORD *)(v43 + 8) = v56;
        MiReInitializeFreeSlabPfn(v43 - 24, a1);
        v34 = *(unsigned int *)(a1 + 128);
        v35 = 2LL;
        if ( (int)v34 >= 0 && (_DWORD)v34 != 2 && (int)v34 <= 4 )
        {
          MiSetPfnIdentity(v43 - 24, 3u);
          MiAbortCombineScan(v43 - 24);
          v42 = 0;
          v35 = 2LL;
        }
        _InterlockedAnd64((volatile signed __int64 *)v43, 0x7FFFFFFFFFFFFFFFuLL);
        v43 += 48LL;
      }
      while ( v43 - 24 <= v41 );
      v32 = v62;
    }
    if ( (_BYTE)v40 != 2 )
    {
      if ( KiIrqlFlags != v42 )
      {
        LOBYTE(v35) = v40;
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v35);
      }
      __writecr8(v40);
    }
    MiUpdateSlabPagePlaceholderState(*(unsigned int *)(a1 + 128), *(_QWORD *)(SlabEntry + 40), v32, 1LL);
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 144));
    return SlabEntry;
  }
  v46 = 40;
  if ( v27 != -1LL )
    MiFreeLargePageMemory(v27);
LABEL_79:
  MiReleaseNonPagedResources(a2, v62);
  if ( v57 )
    BYTE2(CurrentThread[1].Queue) &= ~1u;
  if ( v8 )
    PsDereferencePartition(v8, 1632857421LL);
  if ( v56 )
    goto LABEL_50;
LABEL_84:
  v7 = v55;
  if ( !v55 )
  {
    v51 = (volatile signed __int32 *)(a1 + 156);
    goto LABEL_86;
  }
LABEL_85:
  v51 = (volatile signed __int32 *)(a1 + 152);
LABEL_86:
  _InterlockedIncrement(v51);
  MiLogSlabEntryAllocateFailure(a1, v46, v58, v70, v7);
  return 0LL;
}
