/*
 * XREFs of MiJumpStackTarget @ 0x14047B8F0
 * Callers:
 *     MiDoStackCopy @ 0x14047B710 (MiDoStackCopy.c)
 * Callees:
 *     MiLockWorkingSetSharedAtDpc @ 0x14020BF58 (MiLockWorkingSetSharedAtDpc.c)
 *     MiUnlockWorkingSetShared @ 0x140241CF0 (MiUnlockWorkingSetShared.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x14029C130 (MiRemoveLockedPageChargeAndDecRef.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiUnlockPageTableInternal @ 0x1402C9C00 (MiUnlockPageTableInternal.c)
 *     KeWakeAddressAll @ 0x1402CA630 (KeWakeAddressAll.c)
 *     MiGetPfnSlabType @ 0x140300F20 (MiGetPfnSlabType.c)
 *     MiTryLockPageTableUnordered @ 0x140355AB0 (MiTryLockPageTableUnordered.c)
 *     KeYieldProcessorEx @ 0x1403EFB70 (KeYieldProcessorEx.c)
 *     MiSwapStackPageNoDpc @ 0x1404221A4 (MiSwapStackPageNoDpc.c)
 *     MiCanStealKernelStack @ 0x140422408 (MiCanStealKernelStack.c)
 *     MiCheckSameSlabType @ 0x1404224C0 (MiCheckSameSlabType.c)
 *     MiGetPfnKernelStack @ 0x14043FBD8 (MiGetPfnKernelStack.c)
 *     KiHaltOnAddress @ 0x1404F7B98 (KiHaltOnAddress.c)
 *     KeCanUseHaltOnAddress @ 0x1404F7F60 (KeCanUseHaltOnAddress.c)
 *     MiStackTheftFreezeProcessors @ 0x140676544 (MiStackTheftFreezeProcessors.c)
 */

volatile signed __int32 *__fastcall MiJumpStackTarget(_QWORD *a1)
{
  __int64 v1; // rsi
  _QWORD *v2; // r15
  unsigned __int64 v3; // rdi
  signed __int32 v4; // eax
  __int64 v5; // rdx
  unsigned int v6; // ebx
  unsigned int v7; // esi
  char v8; // r14
  unsigned __int64 v9; // rdi
  signed __int32 v10; // eax
  unsigned int v11; // ebx
  unsigned int v12; // esi
  char v13; // r14
  volatile signed __int32 *result; // rax
  unsigned __int32 v15; // ecx
  volatile signed __int32 v16; // r8d
  signed __int32 v17; // ecx
  signed __int32 v18; // edx
  volatile signed __int32 v19; // r8d
  __int64 v20; // rbx
  __int64 v21; // r12
  __int64 v22; // r15
  __int64 v23; // rdi
  __int16 v24; // bp
  __int64 v25; // r14
  int PfnSlabType; // eax
  int v27; // r9d
  int v28; // r10d
  unsigned __int64 v29; // rdx
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // r9
  int v33; // eax
  char v34; // bp
  int v35; // ebp
  int v36; // ebp
  __int32 v38; // [rsp+78h] [rbp+10h] BYREF
  __int32 v39; // [rsp+80h] [rbp+18h] BYREF
  unsigned int v40; // [rsp+88h] [rbp+20h] BYREF

  v1 = *a1;
  v2 = a1;
  v3 = a1[2];
  v4 = _InterlockedDecrement((volatile signed __int32 *)v3);
  v5 = 1LL;
  v6 = ~v4 & 0x80000000;
  if ( (v4 & 0x3FFFFFFF) != 0 )
  {
    v7 = 0;
    v8 = 0;
    if ( (*(_DWORD *)v3 & 0x80000000) != v6 )
    {
      do
      {
        if ( (++v7 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && KiCheckVpBackingLongSpinWaitHypercall() )
        {
          ++v8;
          if ( (unsigned __int8)KeCanUseHaltOnAddress() && (KiVelocityFlags & 0x20000) != 0 && (v8 & 7) == 0 )
          {
            v15 = *(_DWORD *)v3;
            if ( (*(_DWORD *)v3 & 0x80000000) != v6 )
            {
              LODWORD(v5) = *(_DWORD *)v3;
              v16 = *(_DWORD *)v3;
              do
              {
                v35 = v15 | 0x40000000;
                v15 = _InterlockedCompareExchange((volatile signed __int32 *)v3, v15 | 0x40000000, v5);
                if ( v15 == v16 )
                {
                  v38 = v35;
                  do
                  {
                    KiHaltOnAddress(v3, &v38, 4LL);
                    v15 = *(_DWORD *)v3;
                  }
                  while ( *(_DWORD *)v3 == v35 );
                }
                v5 = v15;
                v16 = v15;
              }
              while ( (v15 & 0x80000000) != v6 );
            }
          }
          else
          {
            HvlNotifyLongSpinWait(v7);
          }
        }
        else
        {
          _mm_pause();
        }
      }
      while ( (*(_DWORD *)v3 & 0x80000000) != v6 );
      v2 = a1;
    }
    goto LABEL_7;
  }
  v38 = _InterlockedExchange((volatile __int32 *)v3, *(_DWORD *)(v3 + 4) | v6);
  if ( (v38 & 0x40000000) != 0 )
  {
    KeWakeAddressAll(v3, 1LL);
    v5 = 1LL;
  }
  if ( !*(_DWORD *)(v1 + 32) )
  {
    v20 = 48LL * *(_QWORD *)v1 - 0x220000000000LL;
    v21 = *(_QWORD *)(v1 + 56);
    v22 = 48LL * *(_QWORD *)(v1 + 8) - 0x220000000000LL;
    v23 = 0LL;
    v24 = (*(_QWORD *)(v1 + 48) != 0LL) + 1;
    MiLockWorkingSetSharedAtDpc(v21);
    v40 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v20 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v40);
      while ( *(__int64 *)(v20 + 24) < 0 );
    }
    v25 = *(_QWORD *)(v1 + 40);
    if ( *((_QWORD *)qword_140E300C8 + ((*(_QWORD *)(v20 + 40) >> 43) & 0x3FFLL)) == *(_QWORD *)(v1 + 24)
      && MiCanStealKernelStack(v20, v24)
      && MiGetPfnKernelStack((_QWORD *)v20) != -32LL )
    {
      if ( MiGetPfnKernelStack((_QWORD *)v20) )
      {
        MiGetPfnSlabType(v22);
        PfnSlabType = MiGetPfnSlabType(v20);
        if ( MiCheckSameSlabType(v20, PfnSlabType, v22, v27, v28) )
        {
          v29 = *(_QWORD *)(v20 + 8);
          if ( v25 == (__int64)(v29 << 25) >> 16 )
          {
            v23 = ((v29 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
            if ( (unsigned int)MiTryLockPageTableUnordered(v21, v23) )
            {
              if ( v23 )
              {
                v34 = byte_140E2DC09 & 1;
                if ( *(_QWORD *)(v1 + 48) )
                {
                  MiRemoveLockedPageChargeAndDecRef(v20, v30, v31, v32);
                  *(_QWORD *)(v1 + 48) = 0LL;
                }
                if ( !v34 || !(unsigned int)MiSwapStackPageNoDpc(v20, v22) )
                  MiStackTheftFreezeProcessors(v1);
                v33 = 0;
                goto LABEL_45;
              }
            }
            else
            {
              v23 = 0LL;
            }
          }
        }
      }
    }
    v33 = -1073740748;
LABEL_45:
    *(_DWORD *)(v1 + 32) = v33;
    _InterlockedAnd64((volatile signed __int64 *)(v20 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( v23 )
      MiUnlockPageTableInternal(v21, v23);
    MiUnlockWorkingSetShared(v21, 0x11u);
    v2 = a1;
  }
LABEL_7:
  v9 = v2[2];
  v10 = _InterlockedDecrement((volatile signed __int32 *)v9);
  v11 = ~v10 & 0x80000000;
  if ( (v10 & 0x3FFFFFFF) != 0 )
  {
    v12 = 0;
    v13 = 0;
    while ( (*(_DWORD *)v9 & 0x80000000) != v11 )
    {
      if ( (++v12 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && KiCheckVpBackingLongSpinWaitHypercall() )
      {
        ++v13;
        if ( (unsigned __int8)KeCanUseHaltOnAddress() && (KiVelocityFlags & 0x20000) != 0 && (v13 & 7) == 0 )
        {
          v17 = *(_DWORD *)v9;
          if ( (*(_DWORD *)v9 & 0x80000000) != v11 )
          {
            v18 = *(_DWORD *)v9;
            v19 = *(_DWORD *)v9;
            do
            {
              v36 = v17 | 0x40000000;
              v17 = _InterlockedCompareExchange((volatile signed __int32 *)v9, v17 | 0x40000000, v18);
              if ( v17 == v19 )
              {
                v39 = v36;
                do
                {
                  KiHaltOnAddress(v9, &v39, 4LL);
                  v17 = *(_DWORD *)v9;
                }
                while ( *(_DWORD *)v9 == v36 );
              }
              v18 = v17;
              v19 = v17;
            }
            while ( (v17 & 0x80000000) != v11 );
          }
        }
        else
        {
          HvlNotifyLongSpinWait(v12);
        }
      }
      else
      {
        _mm_pause();
      }
    }
  }
  else
  {
    v39 = _InterlockedExchange((volatile __int32 *)v9, *(_DWORD *)(v9 + 4) | v11);
    if ( (v39 & 0x40000000) != 0 )
      KeWakeAddressAll(v9, v5);
  }
  result = (volatile signed __int32 *)v2[1];
  _InterlockedDecrement(result);
  return result;
}
