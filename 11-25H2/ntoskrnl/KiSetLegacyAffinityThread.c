/*
 * XREFs of KiSetLegacyAffinityThread @ 0x1402715DC
 * Callers:
 *     KeSetAffinityThread @ 0x1405B3D90 (KeSetAffinityThread.c)
 *     NtSetInformationThread @ 0x1408B7970 (NtSetInformationThread.c)
 * Callees:
 *     KeIsSubsetAffinityEx @ 0x1402717F0 (KeIsSubsetAffinityEx.c)
 *     KiSetAffinityThread @ 0x140271884 (KiSetAffinityThread.c)
 *     KiProcessDeferredReadyList @ 0x140285EA0 (KiProcessDeferredReadyList.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402B5440 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x14031F360 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

__int64 __fastcall KiSetLegacyAffinityThread(__int64 a1, __int64 a2)
{
  __int64 v4; // r13
  __int64 v5; // rbx
  __int64 v6; // rcx
  unsigned __int8 CurrentIrql; // r15
  unsigned __int16 v8; // dx
  __int64 v9; // rdi
  unsigned __int16 v10; // ax
  unsigned __int16 Count; // cx
  unsigned __int16 v12; // dx
  __int64 v13; // rax
  unsigned __int16 i; // dx
  __int64 v15; // r9
  _WORD *v16; // rcx
  __int64 v17; // r8
  __int64 v19; // rcx
  __int64 v20; // [rsp+28h] [rbp-E0h] BYREF
  struct _KPRCB *CurrentPrcb; // [rsp+30h] [rbp-D8h]
  __int64 v22; // [rsp+38h] [rbp-D0h] BYREF
  _QWORD v23[33]; // [rsp+40h] [rbp-C8h] BYREF

  memset_0(v23, 0, 0x100uLL);
  v4 = *(_QWORD *)(a1 + 544);
  v5 = 0LL;
  if ( !a2 )
    return v5;
  v22 = 2097153LL;
  memset_0(v23, 0, 0x100uLL);
  v20 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(v6) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(v6);
  }
  CurrentPrcb = KeGetCurrentPrcb();
  ExAcquireSpinLockSharedAtDpcLevel((PEX_SPIN_LOCK)(v4 + 64));
  v8 = v22;
  v9 = *(unsigned __int16 *)(a1 + 560);
  if ( (unsigned __int16)v22 > (unsigned __int16)v9 )
    goto LABEL_5;
  v10 = WORD1(v22);
  if ( WORD1(v22) > (unsigned __int16)v9 )
  {
    LOWORD(v22) = v9 + 1;
LABEL_5:
    v23[v9] |= a2;
    v10 = WORD1(v22);
    v8 = v22;
  }
  Count = KeActiveProcessors.Count;
  if ( v8 < KeActiveProcessors.Count )
    Count = v8;
  v12 = 0;
  if ( Count > v10 )
    Count = v10;
  LOWORD(v22) = Count;
  if ( Count )
  {
    do
    {
      v19 = v12++;
      v23[v19] &= KeActiveProcessors.Bitmap[v19];
      Count = v22;
    }
    while ( v12 < (unsigned __int16)v22 );
    v10 = WORD1(v22);
  }
  HIDWORD(v22) = 0;
  if ( v12 < v10 )
  {
    do
    {
      v13 = v12++;
      v23[v13] = 0LL;
    }
    while ( v12 < WORD1(v22) );
    Count = v22;
  }
  for ( i = 0; i < Count; ++i )
  {
    if ( v23[i] )
    {
      if ( (unsigned int)KeIsSubsetAffinityEx(&v22, *(_QWORD *)(v4 + 80)) )
      {
        v16 = *(_WORD **)(a1 + 552);
        if ( (unsigned __int16)v9 < *v16 )
          v5 = *(_QWORD *)&v16[4 * v9 + 4];
        LOBYTE(v15) = CurrentIrql;
        KiSetAffinityThread(a1, &v20, &v22, v15);
      }
      break;
    }
  }
  ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(v4 + 64));
  LOBYTE(v17) = CurrentIrql;
  KiProcessDeferredReadyList(CurrentPrcb, &v20, v17);
  return v5;
}
