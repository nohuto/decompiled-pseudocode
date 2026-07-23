/*
 * XREFs of IvtLegacyAttachDeviceDomainInternal @ 0x14056CFEC
 * Callers:
 *     IvtAttachDeviceDomain @ 0x14056AE50 (IvtAttachDeviceDomain.c)
 *     IvtDetachDeviceDomain @ 0x14056B4B0 (IvtDetachDeviceDomain.c)
 * Callees:
 *     KxReleaseQueuedSpinLock @ 0x1402CA740 (KxReleaseQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x140359760 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     HalpReleaseHighLevelLock @ 0x140372268 (HalpReleaseHighLevelLock.c)
 *     HalpAcquireHighLevelLock @ 0x1403729A0 (HalpAcquireHighLevelLock.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     IvtLegacyAllocateTranslationStructures @ 0x14056CF38 (IvtLegacyAllocateTranslationStructures.c)
 *     IvtLegacyFlushTbInternal @ 0x14056D5F8 (IvtLegacyFlushTbInternal.c)
 *     IvtLegacyGetDomainId @ 0x14056DD24 (IvtLegacyGetDomainId.c)
 *     IvtLegacyUpdateTranslationStructures @ 0x14056E58C (IvtLegacyUpdateTranslationStructures.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
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
  __int64 v14; // rdx
  int v15; // r8d
  __int64 v16; // r15
  _QWORD *v17; // rbx
  __int64 v18; // rbx
  __int64 v19; // rcx
  _QWORD *v20; // rax
  _QWORD *v21; // rdx
  int v22; // r9d
  unsigned __int8 v23; // bl
  __int64 v24; // rax
  int v25; // [rsp+20h] [rbp-158h]
  int v26; // [rsp+28h] [rbp-150h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-128h] BYREF
  _BYTE v28[4]; // [rsp+70h] [rbp-108h] BYREF
  int v29; // [rsp+74h] [rbp-104h]
  _BYTE v30[48]; // [rsp+E0h] [rbp-98h] BYREF
  int v31; // [rsp+110h] [rbp-68h]

  memset(&LockHandle, 0, sizeof(LockHandle));
  v4 = 0;
  v5 = (_BYTE *)a3;
  result = IvtLegacyAllocateTranslationStructures(a1, a2, a3, a4, v25, 0LL);
  if ( (int)result >= 0 )
  {
    memset_0(v28, 0, 0x70uLL);
    if ( !a3 )
    {
      v11 = *(_DWORD *)(a1 + 308);
      if ( v11 == 2 )
      {
        v29 = 1;
      }
      else if ( v11 != 1 )
      {
        return 3221225473LL;
      }
      v5 = v28;
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
    v16 = DomainId;
    if ( a3 || DomainId == *(_QWORD *)(a2 + 24) )
    {
      IvtLegacyUpdateTranslationStructures(a1, *(_QWORD *)(a2 + 56), v15, *(_QWORD *)(a2 + 64), 0, v26, (__int64)v5);
      v4 = 1;
      *(_QWORD *)(a2 + 24) = *((unsigned int *)v5 + 12);
    }
    KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle, v14);
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
    if ( !v4 )
      return 0LL;
    if ( !a3 || *(_QWORD *)(a2 + 16) )
    {
      v18 = *(_QWORD *)(a2 + 16);
      *(_BYTE *)(v18 + 96) = HalpAcquireHighLevelLock((PKSPIN_LOCK)(v18 + 88));
      v17 = (_QWORD *)(a2 + 40);
      v19 = *(_QWORD *)(a2 + 40);
      if ( *(_QWORD *)(v19 + 8) != a2 + 40 )
        goto LABEL_34;
      v20 = *(_QWORD **)(a2 + 48);
      if ( (_QWORD *)*v20 != v17 )
        goto LABEL_34;
      *v20 = v19;
      *(_QWORD *)(v19 + 8) = v20;
      HalpReleaseHighLevelLock(
        (volatile signed __int64 *)(*(_QWORD *)(a2 + 16) + 88LL),
        *(_BYTE *)(*(_QWORD *)(a2 + 16) + 96LL));
      _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(a2 + 16) + 52LL));
      if ( !a3 )
      {
LABEL_24:
        memset_0(v30, 0, 0x70uLL);
        v31 = v16;
        v23 = KeGetCurrentIrql();
        __writecr8(0xFuLL);
        if ( KiIrqlFlags )
          KiRaiseIrqlProcessIrqlFlags(v23, 15);
        v24 = *(_QWORD *)a2;
        if ( v16 == 0x10000 )
        {
          LODWORD(v5) = 0;
        }
        else
        {
          LOBYTE(v22) = 1;
          IvtLegacyFlushTbInternal(a1, 0, (unsigned int)v30, v22, v24, 0LL, 0, 0LL);
          v24 = *(_QWORD *)a2;
        }
        LOBYTE(v22) = 1;
        IvtLegacyFlushTbInternal(a1, 0, (_DWORD)v5, v22, v24, 0LL, 0, 0LL);
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v23);
        __writecr8(v23);
        return 0LL;
      }
    }
    else
    {
      v17 = (_QWORD *)(a2 + 40);
    }
    v5[96] = HalpAcquireHighLevelLock((PKSPIN_LOCK)v5 + 11);
    v21 = (_QWORD *)*((_QWORD *)v5 + 8);
    if ( (_BYTE *)*v21 == v5 + 56 )
    {
      *v17 = v5 + 56;
      v17[1] = v21;
      *v21 = v17;
      *((_QWORD *)v5 + 8) = v17;
      HalpReleaseHighLevelLock((volatile signed __int64 *)v5 + 11, v5[96]);
      _InterlockedIncrement((volatile signed __int32 *)v5 + 13);
      goto LABEL_24;
    }
LABEL_34:
    __fastfail(3u);
  }
  return result;
}
