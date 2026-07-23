/*
 * XREFs of PfFbLogEntryReserve @ 0x14044BAF4
 * Callers:
 *     PfTFiNotifyVolumeCreateCallback @ 0x14044B6C0 (PfTFiNotifyVolumeCreateCallback.c)
 *     PfTFiNotifyFileStreamCreateCallback @ 0x14044B840 (PfTFiNotifyFileStreamCreateCallback.c)
 *     PfTFiNotifyFileInfoDeleteCallback @ 0x14044B9D0 (PfTFiNotifyFileInfoDeleteCallback.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14020DE50 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x14022E830 (ExAcquireRundownProtection_0.c)
 *     RtlpInterlockedPopEntrySList @ 0x1406B4830 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1406B4870 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall PfFbLogEntryReserve(__int64 a1, __int64 a2, PSLIST_ENTRY *a3, _QWORD *a4, unsigned int a5)
{
  PSLIST_ENTRY v9; // rdx
  __int64 v10; // r8
  int v11; // edi

  while ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)a2) )
  {
    while ( 1 )
    {
      v9 = RtlpInterlockedPopEntrySList((PSLIST_HEADER)(a2 + 32));
      if ( v9 )
        break;
      v9 = RtlpInterlockedPopEntrySList((PSLIST_HEADER)(a2 + 16));
      if ( v9 )
        break;
      v11 = guard_dispatch_icall_no_overrides(a1, a2);
      if ( v11 < 0 )
        goto LABEL_8;
    }
    v10 = *((_QWORD *)&v9[1].Next + 1);
    if ( a5 <= (__int64)v9[2].Next - v10 )
    {
      *a4 = v10;
      v11 = 0;
      *a3 = v9;
      return (unsigned int)v11;
    }
    if ( !*((_DWORD *)&v9[2].Next + 2) )
    {
      RtlpInterlockedPushEntrySList((PSLIST_HEADER)(a2 + 16), v9);
      v11 = -1073741789;
LABEL_8:
      ++*(_DWORD *)(a2 + 116);
      *(_DWORD *)(a2 + 120) += a5;
      ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)a2);
      return (unsigned int)v11;
    }
    guard_dispatch_icall_no_overrides(a1, v9);
  }
  return 3221225865LL;
}
