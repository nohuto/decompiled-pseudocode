/*
 * XREFs of IvtLegacyAttachDeviceDomainInternal @ 0x14056C85C
 * Callers:
 *     IvtAttachDeviceDomain @ 0x14056A6C0 (IvtAttachDeviceDomain.c)
 *     IvtDetachDeviceDomain @ 0x14056AD20 (IvtDetachDeviceDomain.c)
 * Callees:
 *     HalpReleaseHighLevelLock @ 0x140205754 (HalpReleaseHighLevelLock.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14028A810 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x140300F20 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     HalpAcquireHighLevelLock @ 0x140445E40 (HalpAcquireHighLevelLock.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     IvtLegacyAllocateTranslationStructures @ 0x14056C7A8 (IvtLegacyAllocateTranslationStructures.c)
 *     IvtLegacyFlushTbInternal @ 0x14056CE68 (IvtLegacyFlushTbInternal.c)
 *     IvtLegacyGetDomainId @ 0x14056D594 (IvtLegacyGetDomainId.c)
 *     IvtLegacyUpdateTranslationStructures @ 0x14056DDFC (IvtLegacyUpdateTranslationStructures.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

__int64 __fastcall IvtLegacyAttachDeviceDomainInternal(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // r14
  _BYTE *v5; // rdi
  __int64 result; // rax
  int v10; // edx
  int v11; // eax
  unsigned __int8 CurrentIrql; // bl
  __int64 DomainId; // rax
  int v14; // r8d
  __int64 v15; // r15
  _QWORD *v16; // rbx
  __int64 v17; // rbx
  __int64 v18; // rcx
  _QWORD *v19; // rax
  _QWORD *v20; // rdx
  int v21; // r9d
  unsigned __int8 v22; // bl
  __int64 v23; // rax
  int v24; // [rsp+20h] [rbp-158h]
  int v25; // [rsp+28h] [rbp-150h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-128h] BYREF
  _BYTE v27[4]; // [rsp+70h] [rbp-108h] BYREF
  int v28; // [rsp+74h] [rbp-104h]
  _BYTE v29[48]; // [rsp+E0h] [rbp-98h] BYREF
  int v30; // [rsp+110h] [rbp-68h]

  memset(&LockHandle, 0, sizeof(LockHandle));
  v4 = 0;
  v5 = (_BYTE *)a3;
  result = IvtLegacyAllocateTranslationStructures(a1, a2, a3, a4, v24, 0LL);
  if ( (int)result >= 0 )
  {
    memset_0(v27, 0, 0x70uLL);
    if ( !a3 )
    {
      v11 = *(_DWORD *)(a1 + 308);
      if ( v11 == 2 )
      {
        v28 = 1;
      }
      else if ( v11 != 1 )
      {
        return 3221225473LL;
      }
      v5 = v27;
    }
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(0xFuLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(v10) = 15;
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, v10);
    }
    KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(a1 + 208), &LockHandle);
    DomainId = IvtLegacyGetDomainId(a1, **(unsigned int **)(a2 + 56));
    v15 = DomainId;
    if ( a3 || DomainId == *(_QWORD *)(a2 + 24) )
    {
      IvtLegacyUpdateTranslationStructures(a1, *(_QWORD *)(a2 + 56), v14, *(_QWORD *)(a2 + 64), 0, v25, (__int64)v5);
      v4 = 1;
      *(_QWORD *)(a2 + 24) = *((unsigned int *)v5 + 12);
    }
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
    if ( !v4 )
      return 0LL;
    if ( !a3 || *(_QWORD *)(a2 + 16) )
    {
      v17 = *(_QWORD *)(a2 + 16);
      *(_BYTE *)(v17 + 96) = HalpAcquireHighLevelLock((PKSPIN_LOCK)(v17 + 88));
      v16 = (_QWORD *)(a2 + 40);
      v18 = *(_QWORD *)(a2 + 40);
      if ( *(_QWORD *)(v18 + 8) != a2 + 40 )
        goto LABEL_34;
      v19 = *(_QWORD **)(a2 + 48);
      if ( (_QWORD *)*v19 != v16 )
        goto LABEL_34;
      *v19 = v18;
      *(_QWORD *)(v18 + 8) = v19;
      HalpReleaseHighLevelLock(*(_QWORD *)(a2 + 16) + 88LL, *(_BYTE *)(*(_QWORD *)(a2 + 16) + 96LL));
      _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(a2 + 16) + 52LL));
      if ( !a3 )
      {
LABEL_24:
        memset_0(v29, 0, 0x70uLL);
        v30 = v15;
        v22 = KeGetCurrentIrql();
        __writecr8(0xFuLL);
        if ( KiIrqlFlags )
          KiRaiseIrqlProcessIrqlFlags(v22, 15);
        v23 = *(_QWORD *)a2;
        if ( v15 == 0x10000 )
        {
          LODWORD(v5) = 0;
        }
        else
        {
          LOBYTE(v21) = 1;
          IvtLegacyFlushTbInternal(a1, 0, (unsigned int)v29, v21, v23, 0LL, 0, 0LL);
          v23 = *(_QWORD *)a2;
        }
        LOBYTE(v21) = 1;
        IvtLegacyFlushTbInternal(a1, 0, (_DWORD)v5, v21, v23, 0LL, 0, 0LL);
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v22);
        __writecr8(v22);
        return 0LL;
      }
    }
    else
    {
      v16 = (_QWORD *)(a2 + 40);
    }
    v5[96] = HalpAcquireHighLevelLock((PKSPIN_LOCK)v5 + 11);
    v20 = (_QWORD *)*((_QWORD *)v5 + 8);
    if ( (_BYTE *)*v20 == v5 + 56 )
    {
      *v16 = v5 + 56;
      v16[1] = v20;
      *v20 = v16;
      *((_QWORD *)v5 + 8) = v16;
      HalpReleaseHighLevelLock((__int64)(v5 + 88), v5[96]);
      _InterlockedIncrement((volatile signed __int32 *)v5 + 13);
      goto LABEL_24;
    }
LABEL_34:
    __fastfail(3u);
  }
  return result;
}
