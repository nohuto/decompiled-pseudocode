/*
 * XREFs of RtlpEnumProcessHeaps @ 0x18009A690
 * Callers:
 *     RtlSetHeapDebuggingInformation @ 0x18000116C (RtlSetHeapDebuggingInformation.c)
 *     RtlSetHeapInformation @ 0x1800024D0 (RtlSetHeapInformation.c)
 *     LdrpEnableUMGLTracingStateSync @ 0x180002C54 (LdrpEnableUMGLTracingStateSync.c)
 *     RtlpHeapTrkDumpOutstandingAllocs @ 0x180092DD0 (RtlpHeapTrkDumpOutstandingAllocs.c)
 *     RtlpQueryExtendedInformationAllHeaps @ 0x18009885C (RtlpQueryExtendedInformationAllHeaps.c)
 *     RtlQueryProcessHeapInformation @ 0x18009A090 (RtlQueryProcessHeapInformation.c)
 *     RtlHeapsStackCollection @ 0x1800E4C14 (RtlHeapsStackCollection.c)
 *     RtlFlushHeaps @ 0x1801148E0 (RtlFlushHeaps.c)
 *     RtlGetProcessHeaps @ 0x180115910 (RtlGetProcessHeaps.c)
 *     RtlHeapTrkInitialize @ 0x180116430 (RtlHeapTrkInitialize.c)
 *     RtlpHpStackTraceSerialize @ 0x180120A28 (RtlpHpStackTraceSerialize.c)
 *     RtlpHpStackTraceEnable @ 0x1801214B4 (RtlpHpStackTraceEnable.c)
 *     RtlEnumProcessHeaps @ 0x180143030 (RtlEnumProcessHeaps.c)
 *     RtlValidateProcessHeaps @ 0x180143470 (RtlValidateProcessHeaps.c)
 *     RtlpHpGCTimerCallback @ 0x180143DD0 (RtlpHpGCTimerCallback.c)
 *     RtlpHpStackTraceDisable @ 0x18014D2F0 (RtlpHpStackTraceDisable.c)
 *     LdrpUMGLTracingStateChangeNotification @ 0x180160510 (LdrpUMGLTracingStateChangeNotification.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x18007BF00 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18007C000 (RtlLeaveCriticalSection.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
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
    RtlEnterCriticalSection(&RtlpProcessHeapsLock);
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
      v13 = qword_1801D4208[2 * i];
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
    RtlLeaveCriticalSection(&RtlpProcessHeapsLock);
  return (unsigned int)v6;
}
