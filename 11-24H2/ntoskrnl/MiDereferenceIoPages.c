/*
 * XREFs of MiDereferenceIoPages @ 0x14038E760
 * Callers:
 *     MiReferenceIoPages @ 0x140238698 (MiReferenceIoPages.c)
 *     MmUnlockPages @ 0x14025F510 (MmUnlockPages.c)
 *     MiMapContiguousMemoryLarge @ 0x14026BE10 (MiMapContiguousMemoryLarge.c)
 *     MiClearMappingAndDereferenceIoSpace @ 0x14029E560 (MiClearMappingAndDereferenceIoSpace.c)
 *     MiDereferenceIoPageRuns @ 0x14038E6E8 (MiDereferenceIoPageRuns.c)
 *     MiUnmapMdlCommon @ 0x140433530 (MiUnmapMdlCommon.c)
 *     MiDecommitFreePagesTail @ 0x1404EF800 (MiDecommitFreePagesTail.c)
 *     MiMapLockedPagesInUserSpace @ 0x1408DC1EC (MiMapLockedPagesInUserSpace.c)
 *     MiMapViewOfPhysicalSection @ 0x140A0BD00 (MiMapViewOfPhysicalSection.c)
 *     MiRotateToFrameBuffer @ 0x140A233E4 (MiRotateToFrameBuffer.c)
 *     MiRotateToFrameBufferNoCopy @ 0x140A23700 (MiRotateToFrameBufferNoCopy.c)
 *     MiReplaceRotateWithDemandZero @ 0x140A5D478 (MiReplaceRotateWithDemandZero.c)
 * Callees:
 *     MiReleaseSpinLockShared @ 0x14020CFC0 (MiReleaseSpinLockShared.c)
 *     KeShouldYieldProcessor @ 0x14023BA60 (KeShouldYieldProcessor.c)
 *     ExQueueWorkItem @ 0x1402CE3E0 (ExQueueWorkItem.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140338DA0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403394D0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140339FE0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     MiIsPageInHugePfn @ 0x14038ED20 (MiIsPageInHugePfn.c)
 *     MiIsPageInIoHugeRangeTransition @ 0x14038ED50 (MiIsPageInIoHugeRangeTransition.c)
 *     MiIoSpaceGetBounds @ 0x14038F8B0 (MiIoSpaceGetBounds.c)
 *     MiLockIoPfnTree @ 0x14038FA2C (MiLockIoPfnTree.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

void __fastcall MiDereferenceIoPages(int a1, __int64 a2, ULONG_PTR a3)
{
  ULONG_PTR v3; // rdi
  ULONG_PTR v4; // rsi
  ULONG_PTR v5; // r12
  ULONG_PTR BugCheckParameter4; // rbp
  ULONG_PTR *v7; // r13
  int v8; // ebx
  unsigned __int8 CurrentIrql; // r14
  unsigned __int8 v10; // r15
  int v11; // edx
  __int64 v12; // r8
  int v13; // r9d
  int v14; // r10d
  _QWORD *v15; // rax
  unsigned __int64 v16; // rcx
  _QWORD *v17; // rax
  unsigned __int64 v18; // rcx
  ULONG_PTR v19; // rax
  unsigned __int64 i; // r14
  ULONG_PTR v21; // rcx
  _QWORD *v22; // rax
  __int64 v23; // rax
  unsigned __int64 v24; // r15
  unsigned __int64 v25; // r12
  ULONG_PTR v26; // r11
  _WORD *v27; // r9
  __int64 v28; // r8
  __int64 v29; // r9
  __int16 v30; // ax
  unsigned int v31; // eax
  int v32; // ecx
  unsigned int v33; // eax
  unsigned __int64 v34; // rax
  bool v35; // zf
  unsigned __int64 v36; // r10
  int v37; // eax
  unsigned __int64 v38; // rax
  signed __int32 v39[8]; // [rsp+0h] [rbp-A8h] BYREF
  ULONG_PTR v40; // [rsp+30h] [rbp-78h]
  ULONG_PTR *v41; // [rsp+38h] [rbp-70h]
  unsigned __int64 v42; // [rsp+40h] [rbp-68h]
  unsigned __int64 v43; // [rsp+48h] [rbp-60h] BYREF
  unsigned __int64 v44; // [rsp+50h] [rbp-58h]
  int v45; // [rsp+5Ch] [rbp-4Ch]
  unsigned __int8 v47; // [rsp+B8h] [rbp+10h]
  int v49; // [rsp+C8h] [rbp+20h]

  v40 = a3;
  v3 = 0LL;
  v49 = 0;
  v42 = 1024LL;
  v4 = ((1LL << ((unsigned __int8)dword_140E2DC78 - 12)) - 1) & a2;
  v5 = a3;
  BugCheckParameter4 = v4;
  v7 = (ULONG_PTR *)&qword_140E372C0[8 * (__int64)a1];
  v8 = 1;
  v41 = v7;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags != (unsigned __int8)v49 )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
  v10 = CurrentIrql;
  if ( CurrentIrql == 2 )
    v10 = 17;
  v47 = v10;
  if ( (unsigned int)MiIsPageInHugePfn(v4) )
  {
    v43 = v4 & 0xFFFFFFFFFFFC0000uLL;
    v38 = (v4 + 0x3FFFF) & 0xFFFFFFFFFFFC0000uLL;
    if ( v4 == v38 )
      v38 = v4 + 0x40000;
    v45 = v14;
    v44 = v38 - 1;
  }
  else
  {
    v15 = (_QWORD *)xmmword_140E37340;
    if ( !(_QWORD)xmmword_140E37340 )
      goto LABEL_12;
    do
    {
      if ( v4 < v15[3] )
      {
        v15 = (_QWORD *)*v15;
      }
      else
      {
        if ( v4 <= v15[4] )
          break;
        v15 = (_QWORD *)v15[1];
      }
    }
    while ( v15 );
    if ( v15 )
    {
      v43 = v15[3];
      v44 = v15[4];
      v45 = v13;
    }
    else
    {
LABEL_12:
      v16 = (v4 + 0x3FFFF) & 0xFFFFFFFFFFFC0000uLL;
      if ( v4 == v16 )
        v16 = v4 + 0x40000;
      v17 = (_QWORD *)xmmword_140E37340;
      v18 = v16 - 1;
      if ( !(_QWORD)xmmword_140E37340 )
        goto LABEL_20;
      do
      {
        if ( v18 < v17[3] )
        {
          v17 = (_QWORD *)*v17;
        }
        else
        {
          if ( v4 <= v17[4] )
            break;
          v17 = (_QWORD *)v17[1];
        }
      }
      while ( v17 );
      if ( v17 )
        v44 = v17[3] - 1LL;
      else
LABEL_20:
        v44 = v18;
      v43 = v4;
      v45 = 3;
    }
  }
  if ( v45 != 3 && v11 == 1 && v12 + v4 - 1 <= v44 )
  {
    if ( v10 >= 2u )
      return;
    v35 = KiIrqlFlags == 0;
    goto LABEL_66;
  }
  MiLockIoPfnTree(5LL);
  while ( v5 )
  {
    if ( BugCheckParameter4 < v43 || BugCheckParameter4 > v44 )
      MiIoSpaceGetBounds(&v43, BugCheckParameter4);
    if ( a1 != 1 || v45 == 3 )
    {
      if ( v8 )
      {
        v3 = *v7;
        while ( v3 )
        {
          v19 = *(_QWORD *)(v3 + 24);
          if ( BugCheckParameter4 < v19 )
          {
            v3 = *(_QWORD *)v3;
          }
          else
          {
            if ( BugCheckParameter4 < v19 + 512 )
              break;
            v3 = *(_QWORD *)(v3 + 8);
          }
        }
        v8 = 0;
      }
      if ( !v3 )
        KeBugCheckEx(0x1Au, 0x61948uLL, v4, a3, BugCheckParameter4);
      i = *(_QWORD *)(v3 + 8);
      v21 = v3;
      if ( i )
      {
        v22 = *(_QWORD **)i;
        if ( *(_QWORD *)i )
        {
          do
          {
            i = (unsigned __int64)v22;
            v22 = (_QWORD *)*v22;
          }
          while ( v22 );
        }
      }
      else
      {
        for ( i = *(_QWORD *)(v3 + 16) & 0xFFFFFFFFFFFFFFFCuLL; i; i = *(_QWORD *)(i + 16) & 0xFFFFFFFFFFFFFFFCuLL )
        {
          if ( *(_QWORD *)i == v21 )
            break;
          v21 = i;
        }
      }
      v23 = *(_QWORD *)(v3 + 24);
      v24 = (BugCheckParameter4 & ((1LL << ((unsigned __int8)dword_140E2DC78 - 12)) - 1)) - v23;
      if ( v5 + BugCheckParameter4 > v23 + 512 )
        v25 = 512LL;
      else
        v25 = v24 + v5;
      ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v3 + 172));
      v26 = v40;
      v27 = (_WORD *)(v3 + 2 * (v24 + 88));
      while ( v24 < v25 )
      {
        if ( !*v27 )
          KeBugCheckEx(0x1Au, 0x6194AuLL, v4, a3, BugCheckParameter4);
        v30 = *v27 - 1;
        *v27 = v30;
        if ( !v30 )
        {
          v31 = *(_DWORD *)(v3 + 32);
          if ( v31 )
          {
            v32 = 0;
            if ( v31 > 0x200 )
              goto LABEL_57;
          }
          else
          {
            v32 = 1;
          }
          if ( v32 )
LABEL_57:
            KeBugCheckEx(0x1Au, 0x6194BuLL, v3, *(unsigned int *)(v3 + 32), BugCheckParameter4);
          v33 = v31 - 1;
          *(_DWORD *)(v3 + 32) = v33;
          if ( !v33 )
          {
            if ( *(_BYTE *)(v3 + 40) )
            {
              _InterlockedOr(v39, 0);
              *(_DWORD *)(v3 + 36) = KiCacheFlushTimeStamp;
            }
            _InterlockedExchangeAdd64((volatile signed __int64 *)v41 + 1, 1uLL);
            if ( (unsigned int)MiIsPageInIoHugeRangeTransition(*(_QWORD *)(v3 + 24)) )
            {
              _InterlockedIncrement64((volatile signed __int64 *)v41 + 2);
              v42 = 1LL;
            }
            v37 = v49;
            if ( v36 >= v42 )
              v37 = 1;
            v49 = v37;
          }
        }
        ++BugCheckParameter4;
        ++v27;
        ++v24;
        v40 = --v26;
      }
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v3 + 172));
      v5 = v40;
      v10 = v47;
      if ( v40
        && ((*(_DWORD *)(*((_QWORD *)KeGetCurrentPrcb()->MmInternal + 41) + 640LL) & 0x40000000) != 0
         || v47 != 17 && KeShouldYieldProcessor()) )
      {
        MiReleaseSpinLockShared(
          (volatile signed __int32 *)(*((_QWORD *)KeGetCurrentPrcb()->MmInternal + 41) + 640LL),
          v47,
          v28,
          v29);
        v8 = 1;
        MiLockIoPfnTree(1LL);
        v7 = v41;
      }
      else
      {
        v7 = v41;
        v3 = i;
      }
    }
    else
    {
      v8 = 1;
      v34 = v44 - BugCheckParameter4 + 1;
      if ( v34 > v5 )
        v34 = v5;
      BugCheckParameter4 += v34;
      v5 -= v34;
      v40 = v5;
    }
  }
  ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(*((_QWORD *)KeGetCurrentPrcb()->MmInternal + 41) + 640LL));
  if ( v49 && (MiFlags & 0x30) != 0 )
  {
    ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140E37350);
    if ( !stru_140E37358.Parameter )
    {
      stru_140E37358.List.Flink = 0LL;
      stru_140E37358.WorkerRoutine = (void (__fastcall *)(void *))MiDeleteStaleCacheMaps;
      stru_140E37358.Parameter = &stru_140E37358;
      ExQueueWorkItem(&stru_140E37358, DelayedWorkQueue);
    }
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140E37350);
  }
  if ( v10 != 17 )
  {
    v35 = KiIrqlFlags == 0;
LABEL_66:
    if ( !v35 )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v10);
    __writecr8(v10);
  }
}
