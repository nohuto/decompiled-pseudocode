/*
 * XREFs of IvtAttachDeviceDomainInternal @ 0x14056A710
 * Callers:
 *     IvtAttachDeviceDomain @ 0x14056A6C0 (IvtAttachDeviceDomain.c)
 *     IvtDetachDeviceDomain @ 0x14056AD20 (IvtDetachDeviceDomain.c)
 * Callees:
 *     HalpReleaseHighLevelLock @ 0x140205754 (HalpReleaseHighLevelLock.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14028A810 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x140300F20 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     HalpAcquireHighLevelLock @ 0x140445E40 (HalpAcquireHighLevelLock.c)
 *     IvtFlushTbInternal @ 0x140445FF8 (IvtFlushTbInternal.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     IvtUpdateTranslationStructures @ 0x1404F590C (IvtUpdateTranslationStructures.c)
 *     IvtAllocateTranslationStructures @ 0x14056A5D8 (IvtAllocateTranslationStructures.c)
 *     IvtFreeScalableModePasidTables @ 0x14056B300 (IvtFreeScalableModePasidTables.c)
 *     IvtGetDomainId @ 0x14056B458 (IvtGetDomainId.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
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
  __int64 v14; // r8
  __int64 v15; // r14
  __int64 v16; // rax
  _QWORD *v17; // rbx
  __int64 v18; // rbx
  __int64 v19; // rcx
  _QWORD *v20; // rax
  _QWORD *v21; // rdx
  unsigned __int8 v22; // bl
  struct _EX_RUNDOWN_REF *v23; // rax
  int v24; // [rsp+20h] [rbp-158h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-128h] BYREF
  _BYTE v26[4]; // [rsp+70h] [rbp-108h] BYREF
  int v27; // [rsp+74h] [rbp-104h]
  _BYTE v28[48]; // [rsp+E0h] [rbp-98h] BYREF
  int v29; // [rsp+110h] [rbp-68h]

  v3 = a3;
  memset(&LockHandle, 0, sizeof(LockHandle));
  memset_0(v28, 0, 0x70uLL);
  v6 = 0;
  v7 = 0;
  v8 = 0LL;
  memset_0(v26, 0, 0x70uLL);
  if ( !v3 )
  {
    v9 = *(_DWORD *)(a1 + 308);
    if ( v9 == 2 )
    {
      v27 = 1;
    }
    else if ( v9 != 1 )
    {
      return 3221225473LL;
    }
    v3 = v26;
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
    v15 = DomainId;
    if ( a3 || DomainId == a2[3] )
    {
      v16 = a2[9];
      v6 = 1;
      v8 = a2[8];
      if ( v16 )
      {
        if ( v8 )
          v7 = v16 != v8;
        a2[8] = v16;
      }
      a2[9] = 0LL;
      IvtUpdateTranslationStructures(a1, (__int64)a2, v14, 0LL, v24, (__int64)v3, 0);
      a2[3] = *((unsigned int *)v3 + 12);
    }
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
    if ( !v6 )
      goto LABEL_36;
    if ( !a3 || a2[2] )
    {
      v18 = a2[2];
      *(_BYTE *)(v18 + 96) = HalpAcquireHighLevelLock((PKSPIN_LOCK)(v18 + 88));
      v17 = a2 + 5;
      v19 = a2[5];
      if ( *(_QWORD **)(v19 + 8) != a2 + 5 )
        goto LABEL_40;
      v20 = (_QWORD *)a2[6];
      if ( (_QWORD *)*v20 != v17 )
        goto LABEL_40;
      *v20 = v19;
      *(_QWORD *)(v19 + 8) = v20;
      HalpReleaseHighLevelLock(a2[2] + 88LL, *(_BYTE *)(a2[2] + 96LL));
      _InterlockedDecrement((volatile signed __int32 *)(a2[2] + 52LL));
      if ( !a3 )
      {
LABEL_28:
        v29 = v15;
        v22 = KeGetCurrentIrql();
        __writecr8(0xFuLL);
        if ( KiIrqlFlags )
          KiRaiseIrqlProcessIrqlFlags(v22, 15);
        v23 = (struct _EX_RUNDOWN_REF *)*a2;
        if ( v15 == 0x10000 )
        {
          v3 = 0LL;
        }
        else
        {
          IvtFlushTbInternal(a1, 0LL, 0, (__int64)v28, 1, v23, 0LL, 0, 0LL);
          v23 = (struct _EX_RUNDOWN_REF *)*a2;
        }
        IvtFlushTbInternal(a1, 0LL, 0, (__int64)v3, 1, v23, 0LL, 0, 0LL);
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v22);
        __writecr8(v22);
LABEL_36:
        if ( v7 )
          IvtFreeScalableModePasidTables(a1, v8);
        return 0LL;
      }
    }
    else
    {
      v17 = a2 + 5;
    }
    v3[96] = HalpAcquireHighLevelLock((PKSPIN_LOCK)v3 + 11);
    v21 = (_QWORD *)*((_QWORD *)v3 + 8);
    if ( (_BYTE *)*v21 == v3 + 56 )
    {
      *v17 = v3 + 56;
      v17[1] = v21;
      *v21 = v17;
      *((_QWORD *)v3 + 8) = v17;
      HalpReleaseHighLevelLock((__int64)(v3 + 88), v3[96]);
      _InterlockedAdd((volatile signed __int32 *)v3 + 13, 1u);
      goto LABEL_28;
    }
LABEL_40:
    __fastfail(3u);
  }
  return result;
}
