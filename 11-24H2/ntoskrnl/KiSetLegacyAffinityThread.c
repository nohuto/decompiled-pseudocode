/*
 * XREFs of KiSetLegacyAffinityThread @ 0x14039FF9C
 * Callers:
 *     KeSetAffinityThread @ 0x1405B5260 (KeSetAffinityThread.c)
 *     NtSetInformationThread @ 0x1408E8B60 (NtSetInformationThread.c)
 * Callees:
 *     KiProcessDeferredReadyList @ 0x1402C5F60 (KiProcessDeferredReadyList.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x140339480 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140339FE0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     KiSetAffinityThread @ 0x1403A0218 (KiSetAffinityThread.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall KiSetLegacyAffinityThread(__int64 a1, __int64 a2)
{
  __int64 v4; // r15
  __int64 v5; // rbx
  __int64 v6; // rcx
  unsigned __int8 CurrentIrql; // r14
  struct _KPRCB *CurrentPrcb; // r13
  __int64 v9; // r8
  unsigned __int16 v10; // dx
  unsigned __int16 v11; // ax
  unsigned __int16 Count; // cx
  unsigned __int16 v13; // dx
  __int64 v14; // rax
  unsigned __int16 i; // dx
  _WORD *v16; // rcx
  unsigned __int16 *v18; // r9
  unsigned __int16 v19; // r10
  unsigned __int16 v20; // r11
  __int64 *v21; // rdi
  unsigned __int16 j; // dx
  __int64 v23; // rcx
  _QWORD *v24; // [rsp+28h] [rbp-E0h] BYREF
  __int64 v25; // [rsp+38h] [rbp-D0h] BYREF
  _QWORD v26[33]; // [rsp+40h] [rbp-C8h] BYREF

  memset_0(v26, 0, 0x100uLL);
  v4 = *(_QWORD *)(a1 + 544);
  v5 = 0LL;
  if ( !a2 )
    return v5;
  v25 = 2097153LL;
  memset_0(v26, 0, 0x100uLL);
  v24 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(v6) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(v6, 2LL);
  }
  CurrentPrcb = KeGetCurrentPrcb();
  ExAcquireSpinLockSharedAtDpcLevel((PEX_SPIN_LOCK)(v4 + 64));
  v9 = *(unsigned __int16 *)(a1 + 560);
  v10 = v25;
  if ( (unsigned __int16)v25 > (unsigned __int16)v9 )
    goto LABEL_5;
  v11 = WORD1(v25);
  if ( WORD1(v25) > (unsigned __int16)v9 )
  {
    LOWORD(v25) = v9 + 1;
LABEL_5:
    v26[v9] |= a2;
    v11 = WORD1(v25);
    v10 = v25;
  }
  Count = KeActiveProcessors.Count;
  if ( v10 < KeActiveProcessors.Count )
    Count = v10;
  v13 = 0;
  if ( Count > v11 )
    Count = v11;
  LOWORD(v25) = Count;
  if ( Count )
  {
    do
    {
      v23 = v13++;
      v26[v23] &= KeActiveProcessors.Bitmap[v23];
      Count = v25;
    }
    while ( v13 < (unsigned __int16)v25 );
    v11 = WORD1(v25);
  }
  HIDWORD(v25) = 0;
  if ( v13 < v11 )
  {
    do
    {
      v14 = v13++;
      v26[v14] = 0LL;
    }
    while ( v13 < WORD1(v25) );
    Count = v25;
  }
  for ( i = 0; i < Count; ++i )
  {
    if ( v26[i] )
    {
      v18 = *(unsigned __int16 **)(v4 + 80);
      v19 = *v18;
      if ( Count >= *v18 )
      {
        v20 = *v18;
        v21 = &v25;
        v19 = Count;
      }
      else
      {
        v20 = Count;
        v21 = *(__int64 **)(v4 + 80);
      }
      for ( j = 0; j < v20; ++j )
      {
        if ( (v26[j] & *(_QWORD *)&v18[4 * j + 4]) != v26[j] )
          goto LABEL_21;
      }
      if ( v21 != (__int64 *)v18 )
      {
        while ( j < v19 )
        {
          if ( v26[j] )
            goto LABEL_21;
          ++j;
        }
      }
      v16 = *(_WORD **)(a1 + 552);
      if ( (unsigned __int16)v9 < *v16 )
        v5 = *(_QWORD *)&v16[4 * v9 + 4];
      KiSetAffinityThread(a1);
      break;
    }
  }
LABEL_21:
  ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(v4 + 64));
  KiProcessDeferredReadyList(CurrentPrcb, &v24, CurrentIrql);
  return v5;
}
