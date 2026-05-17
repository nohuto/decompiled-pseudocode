/*
 * XREFs of RtlpEnumProcessHeaps @ 0x1800469B0
 * Callers:
 *     RtlpHeapTrkDumpOutstandingAllocs @ 0x18003F3E0 (RtlpHeapTrkDumpOutstandingAllocs.c)
 *     RtlpQueryExtendedInformationAllHeaps @ 0x180044B7C (RtlpQueryExtendedInformationAllHeaps.c)
 *     RtlQueryProcessHeapInformation @ 0x1800463B0 (RtlQueryProcessHeapInformation.c)
 *     RtlSetHeapDebuggingInformation @ 0x180095C6C (RtlSetHeapDebuggingInformation.c)
 *     RtlSetHeapInformation @ 0x180096E70 (RtlSetHeapInformation.c)
 *     LdrpEnableUMGLTracingStateSync @ 0x1800975E4 (LdrpEnableUMGLTracingStateSync.c)
 *     RtlHeapsStackCollection @ 0x1800E5C44 (RtlHeapsStackCollection.c)
 *     RtlFlushHeaps @ 0x1801117E0 (RtlFlushHeaps.c)
 *     RtlGetProcessHeaps @ 0x180112BD0 (RtlGetProcessHeaps.c)
 *     RtlHeapTrkInitialize @ 0x1801134A0 (RtlHeapTrkInitialize.c)
 *     RtlpHpStackTraceSerialize @ 0x18011F158 (RtlpHpStackTraceSerialize.c)
 *     RtlpHpStackTraceEnable @ 0x18011FBE4 (RtlpHpStackTraceEnable.c)
 *     RtlEnumProcessHeaps @ 0x180141940 (RtlEnumProcessHeaps.c)
 *     RtlValidateProcessHeaps @ 0x180141D80 (RtlValidateProcessHeaps.c)
 *     RtlpHpGCTimerCallback @ 0x1801426E0 (RtlpHpGCTimerCallback.c)
 *     RtlpHpStackTraceDisable @ 0x18014BD40 (RtlpHpStackTraceDisable.c)
 *     LdrpUMGLTracingStateChangeNotification @ 0x18015F000 (LdrpUMGLTracingStateChangeNotification.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x1800148F0 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x1800149F0 (RtlLeaveCriticalSection.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180172020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall RtlpEnumProcessHeaps(__int64 (__fastcall *a1)(__int64, __int64, __int64 *), __int64 a2, int a3)
{
  int v6; // esi
  int v7; // r14d
  __int64 v8; // rbx
  __int64 *v9; // r8
  int v10; // edx
  __int64 v11; // rcx
  __int64 i; // rax
  __int64 v13; // rcx
  int v15; // [rsp+24h] [rbp-34h]

  v6 = -1073741823;
  v7 = a3 & 1;
  if ( (a3 & 1) == 0 )
    RtlEnterCriticalSection((__int64)&RtlpProcessHeapsLock);
  v8 = RtlpProcessHeaps;
  v9 = &RtlpProcessHeaps;
  while ( 1 )
  {
    if ( (__int64 *)v8 == &RtlpProcessHeaps )
      v8 = 0LL;
    if ( !v8 )
      break;
    v10 = 0;
    v11 = *(_QWORD *)(v8 + 16);
    if ( *(_DWORD *)(v11 + 16) == -571548178 )
    {
      if ( (*(_BYTE *)(v11 + 30) & 2) == 0 )
        goto LABEL_10;
LABEL_9:
      v10 = 2;
      goto LABEL_10;
    }
    if ( (*(_BYTE *)(v11 + 563) & 1) != 0 )
      goto LABEL_9;
LABEL_10:
    if ( (*(_BYTE *)(v8 + 24) & 1) != 0 )
      v10 |= 4u;
    if ( (a3 & v10) == v10 )
    {
      v6 = a1(v11, a2, &RtlpProcessHeaps);
      if ( v6 < 0 )
        goto LABEL_25;
      v9 = &RtlpProcessHeaps;
    }
    v8 = *(_QWORD *)v8;
  }
  if ( (a3 & 4) != 0 )
  {
    for ( i = 0LL; ; i = (unsigned int)(v15 + 1) )
    {
      v15 = i;
      if ( (unsigned int)i >= 4 )
        break;
      v13 = qword_1801D21B8[2 * i];
      if ( v13 )
      {
        v6 = a1(v13, a2, v9);
        if ( v6 < 0 )
          goto LABEL_25;
      }
    }
    v6 = 0;
  }
LABEL_25:
  if ( !v7 )
    RtlLeaveCriticalSection((__int64)&RtlpProcessHeapsLock);
  return (unsigned int)v6;
}
