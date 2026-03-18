/*
 * XREFs of PfFbLogEntryReserve @ 0x140456B24
 * Callers:
 *     PfTFiNotifyVolumeCreateCallback @ 0x1404566F0 (PfTFiNotifyVolumeCreateCallback.c)
 *     PfTFiNotifyFileStreamCreateCallback @ 0x140456870 (PfTFiNotifyFileStreamCreateCallback.c)
 *     PfTFiNotifyFileInfoDeleteCallback @ 0x140456A00 (PfTFiNotifyFileInfoDeleteCallback.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140245670 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection @ 0x1402792A0 (ExAcquireRundownProtection.c)
 *     RtlpInterlockedPopEntrySList @ 0x1406B3890 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1406B38D0 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall PfFbLogEntryReserve(__int64 a1, __int64 a2, PSLIST_ENTRY *a3, _QWORD *a4, unsigned int a5)
{
  PSLIST_ENTRY v9; // rdx
  __int64 v10; // r9
  __int64 v11; // r8
  int v12; // edi
  __int64 v14; // r8

  while ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)a2) )
  {
    while ( 1 )
    {
      v9 = RtlpInterlockedPopEntrySList((PSLIST_HEADER)(a2 + 32));
      if ( v9 )
        break;
      v9 = RtlpInterlockedPopEntrySList((PSLIST_HEADER)(a2 + 16));
      if ( v9 )
        break;
      v12 = guard_dispatch_icall_no_overrides(a1, a2, v14, v10);
      if ( v12 < 0 )
        goto LABEL_8;
    }
    v11 = *((_QWORD *)&v9[1].Next + 1);
    if ( a5 <= (__int64)v9[2].Next - v11 )
    {
      *a4 = v11;
      v12 = 0;
      *a3 = v9;
      return (unsigned int)v12;
    }
    if ( !*((_DWORD *)&v9[2].Next + 2) )
    {
      RtlpInterlockedPushEntrySList((PSLIST_HEADER)(a2 + 16), v9);
      v12 = -1073741789;
LABEL_8:
      ++*(_DWORD *)(a2 + 116);
      *(_DWORD *)(a2 + 120) += a5;
      ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)a2);
      return (unsigned int)v12;
    }
    guard_dispatch_icall_no_overrides(a1, v9, v11, v10);
  }
  return 3221225865LL;
}
