/*
 * XREFs of KeSetUserGroupAffinityThread @ 0x1403A1240
 * Callers:
 *     MiAssignBackgroundZeroThreadToProcessor @ 0x1403312CC (MiAssignBackgroundZeroThreadToProcessor.c)
 *     MiMoveBackgroundZeroThreads @ 0x1403A3B00 (MiMoveBackgroundZeroThreads.c)
 * Callees:
 *     KiProcessDeferredReadyList @ 0x1402C5F60 (KiProcessDeferredReadyList.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x140339480 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140339FE0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ?KiCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z @ 0x14039FF30 (-KiCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z.c)
 *     KiSetAffinityThread @ 0x1403A0218 (KiSetAffinityThread.c)
 *     KeIsSubsetAffinityEx @ 0x1403A1D00 (KeIsSubsetAffinityEx.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall KeSetUserGroupAffinityThread(__int64 a1, __int64 *a2)
{
  __int64 v4; // rax
  __int64 v5; // rdi
  struct _KPRCB *CurrentPrcb; // rbx
  __int64 v8; // rcx
  __int64 v9; // rbx
  unsigned __int8 CurrentIrql; // di
  volatile LONG *v11; // rsi
  struct _KAFFINITY_EX *v12; // rbx
  unsigned __int16 i; // cx
  __int64 v14; // rdx
  struct _SINGLE_LIST_ENTRY v15[2]; // [rsp+20h] [rbp-E0h] BYREF
  struct _KAFFINITY_EX v16; // [rsp+30h] [rbp-D0h] BYREF

  memset_0(&v16.8, 0, sizeof(v16.8));
  v4 = *((unsigned __int16 *)a2 + 4);
  if ( (unsigned __int16)v4 >= (unsigned __int16)KiActiveGroups )
    return 3221225485LL;
  v5 = *a2;
  if ( (KeActiveProcessors.Bitmap[v4] & *a2) != *a2
    || *((_WORD *)a2 + 5) | (unsigned __int16)(*((_WORD *)a2 + 6) | *((_WORD *)a2 + 7)) )
  {
    return 3221225485LL;
  }
  *(_QWORD *)&v16.Count = 2097153LL;
  memset_0(&v16.8, 0, sizeof(v16.8));
  v8 = *((unsigned __int16 *)a2 + 4);
  if ( !(_WORD)v8 )
    goto LABEL_8;
  if ( v16.Size > (unsigned __int16)v8 )
  {
    v16.Count = v8 + 1;
LABEL_8:
    v16.Bitmap[v8] |= v5;
  }
  v9 = *(_QWORD *)(a1 + 544);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(v8) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(v8, 2LL);
  }
  v11 = (volatile LONG *)(v9 + 64);
  ExAcquireSpinLockSharedAtDpcLevel((PEX_SPIN_LOCK)(v9 + 64));
  v12 = *(struct _KAFFINITY_EX **)(v9 + 80);
  if ( (unsigned int)KeIsSubsetAffinityEx(&v16, v12) )
  {
    for ( i = 0; i < v16.Count; ++i )
    {
      if ( v16.Bitmap[i] )
        goto LABEL_6;
    }
    KiCopyAffinityEx(&v16, v16.Size, v12);
LABEL_6:
    v15[0].Next = 0LL;
    KiSetAffinityThread(a1, v15, &v16, CurrentIrql);
    CurrentPrcb = KeGetCurrentPrcb();
    ExReleaseSpinLockSharedFromDpcLevel(v11);
    KiProcessDeferredReadyList(CurrentPrcb, v15, CurrentIrql);
    return 0LL;
  }
  else
  {
    ExReleaseSpinLockSharedFromDpcLevel(v11);
    if ( KiIrqlFlags )
    {
      LOBYTE(v14) = CurrentIrql;
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v14);
    }
    __writecr8(CurrentIrql);
    return 3221225473LL;
  }
}
