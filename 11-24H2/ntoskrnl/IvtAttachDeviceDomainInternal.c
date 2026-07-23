/*
 * XREFs of IvtAttachDeviceDomainInternal @ 0x14056AEA0
 * Callers:
 *     IvtAttachDeviceDomain @ 0x14056AE50 (IvtAttachDeviceDomain.c)
 *     IvtDetachDeviceDomain @ 0x14056B4B0 (IvtDetachDeviceDomain.c)
 * Callees:
 *     KxReleaseQueuedSpinLock @ 0x1402CA740 (KxReleaseQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x140359760 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     HalpReleaseHighLevelLock @ 0x140372268 (HalpReleaseHighLevelLock.c)
 *     HalpAcquireHighLevelLock @ 0x1403729A0 (HalpAcquireHighLevelLock.c)
 *     IvtFlushTbInternal @ 0x140372B58 (IvtFlushTbInternal.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     IvtUpdateTranslationStructures @ 0x1404F59EC (IvtUpdateTranslationStructures.c)
 *     IvtAllocateTranslationStructures @ 0x14056AD68 (IvtAllocateTranslationStructures.c)
 *     IvtFreeScalableModePasidTables @ 0x14056BA90 (IvtFreeScalableModePasidTables.c)
 *     IvtGetDomainId @ 0x14056BBE8 (IvtGetDomainId.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall IvtAttachDeviceDomainInternal(__int64 a1, _QWORD *a2, _BYTE *a3)
{
  _BYTE *v3; // rsi
  char v6; // r15
  bool v7; // r13
  __int64 v8; // r12
  int v9; // eax
  __int64 result; // rax
  int v11; // edx
  unsigned __int8 CurrentIrql; // bl
  __int64 DomainId; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r14
  __int64 v17; // rax
  _QWORD *v18; // rbx
  __int64 v19; // rbx
  __int64 v20; // rcx
  _QWORD *v21; // rax
  _QWORD *v22; // rdx
  unsigned __int8 v23; // bl
  struct _EX_RUNDOWN_REF *v24; // rax
  int v25; // [rsp+20h] [rbp-158h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-128h] BYREF
  _BYTE v27[4]; // [rsp+70h] [rbp-108h] BYREF
  int v28; // [rsp+74h] [rbp-104h]
  _BYTE v29[48]; // [rsp+E0h] [rbp-98h] BYREF
  int v30; // [rsp+110h] [rbp-68h]

  v3 = a3;
  memset(&LockHandle, 0, sizeof(LockHandle));
  memset_0(v29, 0, 0x70uLL);
  v6 = 0;
  v7 = 0;
  v8 = 0LL;
  memset_0(v27, 0, 0x70uLL);
  if ( !v3 )
  {
    v9 = *(_DWORD *)(a1 + 308);
    if ( v9 == 2 )
    {
      v28 = 1;
    }
    else if ( v9 != 1 )
    {
      return 3221225473LL;
    }
    v3 = v27;
  }
  result = IvtAllocateTranslationStructures(a1, (__int64)a2, v3);
  if ( (int)result >= 0 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(0xFuLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(v11) = 15;
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, v11);
    }
    KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(a1 + 208), &LockHandle);
    DomainId = IvtGetDomainId(a1, a2);
    v16 = DomainId;
    if ( a3 || DomainId == a2[3] )
    {
      v17 = a2[9];
      v6 = 1;
      v8 = a2[8];
      if ( v17 )
      {
        if ( v8 )
          v7 = v17 != v8;
        a2[8] = v17;
      }
      a2[9] = 0LL;
      IvtUpdateTranslationStructures(a1, (__int64)a2, v15, 0LL, v25, (__int64)v3, 0);
      a2[3] = *((unsigned int *)v3 + 12);
    }
    KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle, v14);
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
    if ( !v6 )
      goto LABEL_36;
    if ( !a3 || a2[2] )
    {
      v19 = a2[2];
      *(_BYTE *)(v19 + 96) = HalpAcquireHighLevelLock((PKSPIN_LOCK)(v19 + 88));
      v18 = a2 + 5;
      v20 = a2[5];
      if ( *(_QWORD **)(v20 + 8) != a2 + 5 )
        goto LABEL_40;
      v21 = (_QWORD *)a2[6];
      if ( (_QWORD *)*v21 != v18 )
        goto LABEL_40;
      *v21 = v20;
      *(_QWORD *)(v20 + 8) = v21;
      HalpReleaseHighLevelLock((volatile signed __int64 *)(a2[2] + 88LL), *(_BYTE *)(a2[2] + 96LL));
      _InterlockedDecrement((volatile signed __int32 *)(a2[2] + 52LL));
      if ( !a3 )
      {
LABEL_28:
        v30 = v16;
        v23 = KeGetCurrentIrql();
        __writecr8(0xFuLL);
        if ( KiIrqlFlags )
          KiRaiseIrqlProcessIrqlFlags(v23, 15);
        v24 = (struct _EX_RUNDOWN_REF *)*a2;
        if ( v16 == 0x10000 )
        {
          v3 = 0LL;
        }
        else
        {
          IvtFlushTbInternal(a1, 0LL, 0, (__int64)v29, 1, v24, 0LL, 0, 0LL);
          v24 = (struct _EX_RUNDOWN_REF *)*a2;
        }
        IvtFlushTbInternal(a1, 0LL, 0, (__int64)v3, 1, v24, 0LL, 0, 0LL);
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v23);
        __writecr8(v23);
LABEL_36:
        if ( v7 )
          IvtFreeScalableModePasidTables(a1, v8);
        return 0LL;
      }
    }
    else
    {
      v18 = a2 + 5;
    }
    v3[96] = HalpAcquireHighLevelLock((PKSPIN_LOCK)v3 + 11);
    v22 = (_QWORD *)*((_QWORD *)v3 + 8);
    if ( (_BYTE *)*v22 == v3 + 56 )
    {
      *v18 = v3 + 56;
      v18[1] = v22;
      *v22 = v18;
      *((_QWORD *)v3 + 8) = v18;
      HalpReleaseHighLevelLock((volatile signed __int64 *)v3 + 11, v3[96]);
      _InterlockedAdd((volatile signed __int32 *)v3 + 13, 1u);
      goto LABEL_28;
    }
LABEL_40:
    __fastfail(3u);
  }
  return result;
}
