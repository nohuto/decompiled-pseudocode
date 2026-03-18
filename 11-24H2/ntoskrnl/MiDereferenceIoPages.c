/*
 * XREFs of MiDereferenceIoPages @ 0x1403CE8E0
 * Callers:
 *     MmUnlockPages @ 0x140267F30 (MmUnlockPages.c)
 *     MiReferenceIoPages @ 0x140283108 (MiReferenceIoPages.c)
 *     MiClearMappingAndDereferenceIoSpace @ 0x14028E960 (MiClearMappingAndDereferenceIoSpace.c)
 *     MiMapContiguousMemoryLarge @ 0x1403A6D44 (MiMapContiguousMemoryLarge.c)
 *     MiDereferenceIoPageRuns @ 0x1403CE6A8 (MiDereferenceIoPageRuns.c)
 *     MiUnmapMdlCommon @ 0x14040F900 (MiUnmapMdlCommon.c)
 *     MiDecommitFreePagesTail @ 0x1404F1D60 (MiDecommitFreePagesTail.c)
 *     MiMapLockedPagesInUserSpace @ 0x1409C3AE8 (MiMapLockedPagesInUserSpace.c)
 *     MiMapViewOfPhysicalSection @ 0x140A135A0 (MiMapViewOfPhysicalSection.c)
 *     MiRotateToFrameBuffer @ 0x140A2E9A4 (MiRotateToFrameBuffer.c)
 *     MiRotateToFrameBufferNoCopy @ 0x140A2ECC0 (MiRotateToFrameBufferNoCopy.c)
 *     MiReplaceRotateWithDemandZero @ 0x140A64CA8 (MiReplaceRotateWithDemandZero.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14020FA40 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140210170 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140210C80 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     MiReleaseSpinLockShared @ 0x140244830 (MiReleaseSpinLockShared.c)
 *     KeShouldYieldProcessor @ 0x1402DA180 (KeShouldYieldProcessor.c)
 *     ExQueueWorkItem @ 0x140325850 (ExQueueWorkItem.c)
 *     MiIsPageInHugePfn @ 0x1403CEEA0 (MiIsPageInHugePfn.c)
 *     MiIsPageInIoHugeRangeTransition @ 0x1403CEED0 (MiIsPageInIoHugeRangeTransition.c)
 *     MiIoSpaceGetBounds @ 0x1403D0398 (MiIoSpaceGetBounds.c)
 *     MiLockIoPfnTree @ 0x1403D0514 (MiLockIoPfnTree.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
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
  __int16 v28; // ax
  unsigned int v29; // eax
  int v30; // ecx
  unsigned int v31; // eax
  unsigned __int64 v32; // rax
  bool v33; // zf
  unsigned __int64 v34; // r10
  int v35; // eax
  unsigned __int64 v36; // rax
  signed __int32 v37[8]; // [rsp+0h] [rbp-A8h] BYREF
  ULONG_PTR v38; // [rsp+30h] [rbp-78h]
  ULONG_PTR *v39; // [rsp+38h] [rbp-70h]
  unsigned __int64 v40; // [rsp+40h] [rbp-68h]
  unsigned __int64 v41; // [rsp+48h] [rbp-60h] BYREF
  unsigned __int64 v42; // [rsp+50h] [rbp-58h]
  int v43; // [rsp+5Ch] [rbp-4Ch]
  unsigned __int8 v45; // [rsp+B8h] [rbp+10h]
  int v47; // [rsp+C8h] [rbp+20h]

  v38 = a3;
  v3 = 0LL;
  v47 = 0;
  v40 = 1024LL;
  v4 = ((1LL << ((unsigned __int8)dword_140E2DB38 - 12)) - 1) & a2;
  v5 = a3;
  BugCheckParameter4 = v4;
  v7 = (ULONG_PTR *)&qword_140E37180[8 * (__int64)a1];
  v8 = 1;
  v39 = v7;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags != (unsigned __int8)v47 )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
  v10 = CurrentIrql;
  if ( CurrentIrql == 2 )
    v10 = 17;
  v45 = v10;
  if ( (unsigned int)MiIsPageInHugePfn(v4) )
  {
    v41 = v4 & 0xFFFFFFFFFFFC0000uLL;
    v36 = (v4 + 0x3FFFF) & 0xFFFFFFFFFFFC0000uLL;
    if ( v4 == v36 )
      v36 = v4 + 0x40000;
    v43 = v14;
    v42 = v36 - 1;
  }
  else
  {
    v15 = (_QWORD *)xmmword_140E37200;
    if ( !(_QWORD)xmmword_140E37200 )
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
      v41 = v15[3];
      v42 = v15[4];
      v43 = v13;
    }
    else
    {
LABEL_12:
      v16 = (v4 + 0x3FFFF) & 0xFFFFFFFFFFFC0000uLL;
      if ( v4 == v16 )
        v16 = v4 + 0x40000;
      v17 = (_QWORD *)xmmword_140E37200;
      v18 = v16 - 1;
      if ( !(_QWORD)xmmword_140E37200 )
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
        v42 = v17[3] - 1LL;
      else
LABEL_20:
        v42 = v18;
      v41 = v4;
      v43 = 3;
    }
  }
  if ( v43 != 3 && v11 == 1 && v12 + v4 - 1 <= v42 )
  {
    if ( v10 >= 2u )
      return;
    v33 = KiIrqlFlags == 0;
    goto LABEL_66;
  }
  MiLockIoPfnTree(5LL);
  while ( v5 )
  {
    if ( BugCheckParameter4 < v41 || BugCheckParameter4 > v42 )
      MiIoSpaceGetBounds(&v41, BugCheckParameter4);
    if ( a1 != 1 || v43 == 3 )
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
      v24 = (BugCheckParameter4 & ((1LL << ((unsigned __int8)dword_140E2DB38 - 12)) - 1)) - v23;
      if ( v5 + BugCheckParameter4 > v23 + 512 )
        v25 = 512LL;
      else
        v25 = v24 + v5;
      ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v3 + 172));
      v26 = v38;
      v27 = (_WORD *)(v3 + 2 * (v24 + 88));
      while ( v24 < v25 )
      {
        if ( !*v27 )
          KeBugCheckEx(0x1Au, 0x6194AuLL, v4, a3, BugCheckParameter4);
        v28 = *v27 - 1;
        *v27 = v28;
        if ( !v28 )
        {
          v29 = *(_DWORD *)(v3 + 32);
          if ( v29 )
          {
            v30 = 0;
            if ( v29 > 0x200 )
              goto LABEL_57;
          }
          else
          {
            v30 = 1;
          }
          if ( v30 )
LABEL_57:
            KeBugCheckEx(0x1Au, 0x6194BuLL, v3, *(unsigned int *)(v3 + 32), BugCheckParameter4);
          v31 = v29 - 1;
          *(_DWORD *)(v3 + 32) = v31;
          if ( !v31 )
          {
            if ( *(_BYTE *)(v3 + 40) )
            {
              _InterlockedOr(v37, 0);
              *(_DWORD *)(v3 + 36) = KiCacheFlushTimeStamp;
            }
            _InterlockedExchangeAdd64((volatile signed __int64 *)v39 + 1, 1uLL);
            if ( (unsigned int)MiIsPageInIoHugeRangeTransition(*(_QWORD *)(v3 + 24)) )
            {
              _InterlockedIncrement64((volatile signed __int64 *)v39 + 2);
              v40 = 1LL;
            }
            v35 = v47;
            if ( v34 >= v40 )
              v35 = 1;
            v47 = v35;
          }
        }
        ++BugCheckParameter4;
        ++v27;
        ++v24;
        v38 = --v26;
      }
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v3 + 172));
      v5 = v38;
      v10 = v45;
      if ( v38
        && ((*(_DWORD *)(*((_QWORD *)KeGetCurrentPrcb()->MmInternal + 41) + 640LL) & 0x40000000) != 0
         || v45 != 17 && KeShouldYieldProcessor()) )
      {
        MiReleaseSpinLockShared(
          (volatile signed __int32 *)(*((_QWORD *)KeGetCurrentPrcb()->MmInternal + 41) + 640LL),
          v45);
        v8 = 1;
        MiLockIoPfnTree(1LL);
        v7 = v39;
      }
      else
      {
        v7 = v39;
        v3 = i;
      }
    }
    else
    {
      v8 = 1;
      v32 = v42 - BugCheckParameter4 + 1;
      if ( v32 > v5 )
        v32 = v5;
      BugCheckParameter4 += v32;
      v5 -= v32;
      v38 = v5;
    }
  }
  ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(*((_QWORD *)KeGetCurrentPrcb()->MmInternal + 41) + 640LL));
  if ( v47 && (MiFlags & 0x30) != 0 )
  {
    ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140E37210);
    if ( !stru_140E37218.Parameter )
    {
      stru_140E37218.List.Flink = 0LL;
      stru_140E37218.WorkerRoutine = (void (__fastcall *)(void *))MiDeleteStaleCacheMaps;
      stru_140E37218.Parameter = &stru_140E37218;
      ExQueueWorkItem(&stru_140E37218, DelayedWorkQueue);
    }
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140E37210);
  }
  if ( v10 != 17 )
  {
    v33 = KiIrqlFlags == 0;
LABEL_66:
    if ( !v33 )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v10);
    __writecr8(v10);
  }
}
