/*
 * XREFs of MiUpControlAreaRefs @ 0x1404B355C
 * Callers:
 *     MiDeleteNewlyCreatedPartialVads @ 0x1407FF7B4 (MiDeleteNewlyCreatedPartialVads.c)
 *     MiAllocateSplitVads @ 0x140919FC8 (MiAllocateSplitVads.c)
 *     MiInsertChildVads @ 0x14091A854 (MiInsertChildVads.c)
 * Callees:
 *     MiDecrementSubsections @ 0x140259D70 (MiDecrementSubsections.c)
 *     MiDecrementSubsectionViewCount @ 0x14025A760 (MiDecrementSubsectionViewCount.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     MiReleaseSpinLockExclusive @ 0x14029EA30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 *     MiGetProtoPteAddress @ 0x14030BEC0 (MiGetProtoPteAddress.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     MiReferenceActiveSubsection @ 0x1403374A0 (MiReferenceActiveSubsection.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x140362C10 (KiCheckForKernelApcDelivery.c)
 *     MiControlAreaRequiresCharge @ 0x140394370 (MiControlAreaRequiresCharge.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x1404B34A4 (MiReturnCrossPartitionSectionCharges.c)
 *     MiLockNestedVad @ 0x140A12F2C (MiLockNestedVad.c)
 *     MiUnlockNestedVad @ 0x140A15178 (MiUnlockNestedVad.c)
 */

__int64 __fastcall MiUpControlAreaRefs(__int64 a1, int a2)
{
  int v2; // esi
  struct _KTHREAD *CurrentThread; // r13
  __int64 v5; // rbx
  int v6; // r15d
  __int64 v8; // rcx
  int v9; // eax
  bool v10; // zf
  int active; // r12d
  unsigned __int64 v12; // r14
  _QWORD *v13; // rdi
  unsigned __int64 v14; // rdi
  __int64 v15; // rax
  unsigned __int64 *v16; // rdi
  char *v17; // rax
  char *v18; // rsi
  KIRQL v19; // al
  __int64 v20; // r15
  _QWORD *v21; // rsi
  __int64 v22; // rax
  __int64 v23; // rdi
  BOOL v24; // [rsp+20h] [rbp-68h]
  ULONG_PTR BugCheckParameter2; // [rsp+28h] [rbp-60h] BYREF
  _QWORD *v26; // [rsp+30h] [rbp-58h] BYREF
  __int64 v27; // [rsp+38h] [rbp-50h]
  unsigned __int8 v28; // [rsp+90h] [rbp+8h]
  int v30; // [rsp+A0h] [rbp+18h]
  int v31; // [rsp+A8h] [rbp+20h]

  v2 = a2;
  CurrentThread = 0LL;
  v31 = 0;
  v5 = **(_QWORD **)(a1 + 72);
  v6 = MiControlAreaRequiresCharge(v5, 0);
  if ( !v6 )
    return 3221227019LL;
  v8 = *(_QWORD *)(v5 + 64);
  v24 = v8 != 0;
  v9 = *(_DWORD *)(a1 + 48) & 0xF80;
  if ( (v9 == 512 || v9 == 768) && v8 && (*(_DWORD *)(v5 + 56) & 0x20) == 0 )
  {
    if ( v2 )
      _InterlockedAdd((volatile signed __int32 *)(v5 + 92), 1u);
    else
      _InterlockedAdd((volatile signed __int32 *)(v5 + 92), 0xFFFFFFFF);
    v31 = 1;
  }
  v10 = (*(_DWORD *)(v5 + 56) & 0x400) == 0;
  active = 0;
  v30 = 0;
  v12 = 0LL;
  v13 = 0LL;
  BugCheckParameter2 = 0LL;
  v26 = 0LL;
  if ( v10 )
  {
    v14 = *(unsigned int *)(a1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32);
    MiLockNestedVad(a1);
    if ( !*(_QWORD *)(v5 + 64) || (*(_DWORD *)(v5 + 56) & 0x20) != 0 )
    {
      v13 = (_QWORD *)(v5 + 128);
      BugCheckParameter2 = v5 + 128;
    }
    else
    {
      MiGetProtoPteAddress(a1, v14, 0, (__int64 *)&BugCheckParameter2);
      v13 = (_QWORD *)BugCheckParameter2;
    }
    if ( v13 )
      v30 = 1;
    else
      MiUnlockNestedVad(a1);
  }
  if ( *(_QWORD *)(v5 + 64) )
  {
    v27 = 0LL;
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    v27 = *(_QWORD *)v5;
    v15 = v27;
    --CurrentThread->SpecialApcDisable;
    v16 = (unsigned __int64 *)(v15 + 40);
    v17 = (char *)KeAbPreAcquire(v15 + 40, 0LL);
    v18 = v17;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v16, 0LL) )
      ExfAcquirePushLockExclusiveEx(v16, v17, (__int64)v16);
    v13 = (_QWORD *)BugCheckParameter2;
    if ( v18 )
      v18[10] = 1;
    v2 = a2;
  }
  v19 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v5 + 72));
  v28 = v19;
  *(__m128i *)(v5 + 40) = _mm_add_epi64(
                            _mm_load_si128((const __m128i *)&_xmm),
                            _mm_loadu_si128((const __m128i *)(v5 + 40)));
  if ( v13 )
  {
    if ( (*(_DWORD *)(v5 + 56) & 0x20) == 0 && *(_QWORD *)(v5 + 64) )
    {
      MiGetProtoPteAddress(
        a1,
        *(unsigned int *)(a1 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 33) << 32),
        1u,
        (__int64 *)&v26);
      v20 = 0LL;
      v21 = v13;
      while ( 1 )
      {
        if ( a2 )
        {
          active = MiReferenceActiveSubsection(v21, 8, v28);
          if ( active < 0 )
          {
            if ( v20 )
              v12 += MiDecrementSubsections((ULONG_PTR)v13, v20, 8);
            goto LABEL_45;
          }
        }
        else
        {
          v12 += MiDecrementSubsections((ULONG_PTR)v21, (__int64)v21, 8);
        }
        v20 = (__int64)v21;
        if ( v21 != v26 )
        {
          v21 = (_QWORD *)v21[2];
          if ( v21 )
            continue;
        }
        goto LABEL_45;
      }
    }
    if ( v2 )
    {
      active = MiReferenceActiveSubsection(v13, 8, v19);
      goto LABEL_45;
    }
    if ( (*(_DWORD *)(v5 + 56) & 0x20) != 0 )
    {
      if ( v6 != 2 )
        goto LABEL_45;
      v22 = MiDecrementSubsectionViewCount(v13, 24);
    }
    else
    {
      v22 = MiDecrementSubsections((ULONG_PTR)v13, (__int64)v13, 8);
    }
    v12 = v22;
  }
LABEL_45:
  MiReleaseSpinLockExclusive((_DWORD *)(v5 + 72), v28);
  if ( v12 )
    MiReturnCrossPartitionSectionCharges(*((_QWORD *)qword_140E300C8 + (*(_WORD *)(v5 + 60) & 0x3FF)), v24, v12);
  if ( !*(_QWORD *)(v5 + 64) )
  {
    v23 = v27;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v27 + 40), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v23 + 40));
    KeAbPostRelease(v23 + 40);
    v10 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v10 && ($727077A9B6E167EAE1398C74674DC5A5 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery();
  }
  if ( v30 )
    MiUnlockNestedVad(a1);
  if ( active < 0 )
  {
    if ( v31 )
      _InterlockedDecrement((volatile signed __int32 *)(v5 + 92));
  }
  return (unsigned int)active;
}
