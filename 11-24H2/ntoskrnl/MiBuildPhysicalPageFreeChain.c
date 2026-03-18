/*
 * XREFs of MiBuildPhysicalPageFreeChain @ 0x140681434
 * Callers:
 *     NtFreeUserPhysicalPages @ 0x1407F9BD0 (NtFreeUserPhysicalPages.c)
 * Callees:
 *     MiInitializeTbFlushList @ 0x140233BB0 (MiInitializeTbFlushList.c)
 *     MiReleaseProcessorFlushList @ 0x14023FFD0 (MiReleaseProcessorFlushList.c)
 *     MiGetProcessorFlushList @ 0x1402894BC (MiGetProcessorFlushList.c)
 *     MiFlushTbList @ 0x140291730 (MiFlushTbList.c)
 *     KeShouldYieldProcessor @ 0x1402DA180 (KeShouldYieldProcessor.c)
 *     ExAcquireAutoExpandPushLockShared @ 0x14033FB60 (ExAcquireAutoExpandPushLockShared.c)
 *     MiIssueFlushTbEntire @ 0x1403AFDC8 (MiIssueFlushTbEntire.c)
 *     MiFlushTbNowToAvoidOverflow @ 0x140424914 (MiFlushTbNowToAvoidOverflow.c)
 *     MiUnlockAweVadsShared @ 0x1404BB0AC (MiUnlockAweVadsShared.c)
 *     MiLockAweVadsShared @ 0x1404C2D68 (MiLockAweVadsShared.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 *     qsort @ 0x1404FED20 (qsort.c)
 *     MiDecrementAweMapCount @ 0x14068190C (MiDecrementAweMapCount.c)
 *     MiLockAwePagesExclusive @ 0x140682830 (MiLockAwePagesExclusive.c)
 *     MiUnlockAwePagesExclusive @ 0x1406830AC (MiUnlockAwePagesExclusive.c)
 *     MiUnmapLegacyAwePage @ 0x1406830EC (MiUnmapLegacyAwePage.c)
 */

__int64 __fastcall MiBuildPhysicalPageFreeChain(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v4; // r14
  struct _KTHREAD *CurrentThread; // rsi
  _QWORD *v7; // rax
  size_t v8; // rcx
  __int64 v9; // rdx
  _QWORD *v10; // rdi
  __int64 v11; // r15
  __int64 *ProcessorFlushList; // rbx
  int v13; // edx
  __int64 v14; // r8
  unsigned __int8 CurrentIrql; // r12
  __int64 v16; // r15
  __int64 v17; // rax
  int v18; // edx
  unsigned __int8 v19; // cl
  unsigned int v20; // r14d
  _BOOL8 v21; // rdx
  __int64 result; // rax
  ULONG_PTR v23; // [rsp+30h] [rbp-68h]
  ULONG_PTR v24; // [rsp+38h] [rbp-60h]
  unsigned __int64 v25; // [rsp+40h] [rbp-58h]
  size_t v26; // [rsp+48h] [rbp-50h]
  BOOL v27; // [rsp+A0h] [rbp+8h]
  __int64 v29; // [rsp+B8h] [rbp+20h]

  v4 = (_QWORD *)(a2 + 48);
  *(_OWORD *)a3 = 0LL;
  *(_QWORD *)(a3 + 16) = 0LL;
  CurrentThread = KeGetCurrentThread();
  v7 = (_QWORD *)(a2 + 48);
  v8 = (unsigned __int64)*(unsigned int *)(a2 + 40) >> 12;
  v26 = v8;
  v9 = a2 + 48 + 8 * v8;
  v25 = v9;
  while ( v7 != (_QWORD *)v9 )
  {
    if ( !*v7 )
    {
      qsort(v4, v8, 8uLL, (int (__cdecl *)(const void *, const void *))HalpNodeCostSort);
      break;
    }
    ++v7;
  }
  v10 = v4;
  v27 = 0;
  LODWORD(v11) = 0;
  v29 = 0LL;
  ProcessorFlushList = 0LL;
  if ( (*(_DWORD *)(a1 + 8) & 1) != 0 )
  {
    v24 = 0LL;
    v23 = MiLockAweVadsShared((__int64)CurrentThread);
    MiLockAwePagesExclusive(a1, CurrentThread);
  }
  else
  {
    --CurrentThread->SpecialApcDisable;
    v23 = 0LL;
    v24 = ExAcquireAutoExpandPushLockShared(a1 + 64, 0LL);
  }
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(v13) = 2;
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, v13);
  }
  while ( (unsigned __int64)v4 < v25 )
  {
    v16 = *v4;
    v17 = MiDecrementAweMapCount(a1, *v4, 1LL, a3);
    if ( v17 == -1 )
    {
      LODWORD(v11) = v29;
      v20 = -1073741800;
      goto LABEL_33;
    }
    if ( v17 )
    {
      if ( (*(_DWORD *)(a1 + 8) & 1) == 0 )
        goto LABEL_20;
      if ( !ProcessorFlushList )
      {
        ProcessorFlushList = MiGetProcessorFlushList();
        MiInitializeTbFlushList(
          (__int64)ProcessorFlushList,
          (__int64)&KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink,
          *((_DWORD *)ProcessorFlushList + 3),
          8,
          1);
      }
      MiUnmapLegacyAwePage(a1, v16, ProcessorFlushList, a3);
      v27 = MiFlushTbNowToAvoidOverflow((__int64)ProcessorFlushList);
    }
    if ( v16 != -1 )
      *v10++ = v16;
LABEL_20:
    v11 = ++v29;
    if ( v27 || (v11 & 0x3F) == 0 && v11 != v26 && KeShouldYieldProcessor() )
    {
      if ( ProcessorFlushList )
      {
        MiFlushTbList((__int64)ProcessorFlushList);
        MiReleaseProcessorFlushList();
        ProcessorFlushList = 0LL;
      }
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
      __writecr8(CurrentIrql);
      v27 = 0;
      v19 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags )
      {
        LOBYTE(v18) = 2;
        KiRaiseIrqlProcessIrqlFlags(v19, v18);
      }
    }
    ++v4;
  }
  v20 = 0;
LABEL_33:
  if ( *(_BYTE *)(a3 + 20) )
  {
    v21 = (*(_DWORD *)(a1 + 8) & 1) == 0;
    MiIssueFlushTbEntire(v21 + 1, v21, v14);
    if ( ProcessorFlushList )
    {
      *(_WORD *)((char *)ProcessorFlushList + 25) = 0;
      *((_DWORD *)ProcessorFlushList + 7) = 0;
      ProcessorFlushList[4] = 0LL;
      *((_DWORD *)ProcessorFlushList + 4) &= 0xFFFFFFDB;
      goto LABEL_38;
    }
  }
  else if ( ProcessorFlushList )
  {
    MiFlushTbList((__int64)ProcessorFlushList);
LABEL_38:
    MiReleaseProcessorFlushList();
  }
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  __writecr8(CurrentIrql);
  if ( v23 )
  {
    MiUnlockAwePagesExclusive(a1, CurrentThread);
    MiUnlockAweVadsShared((__int64)CurrentThread, v23);
  }
  else
  {
    MiUnlockAweVadsShared((__int64)CurrentThread, v24);
  }
  *(_DWORD *)(a2 + 44) = v11;
  result = v20;
  *(_DWORD *)(a2 + 40) = ((__int64)v10 - a2 - 48) >> 3;
  return result;
}
