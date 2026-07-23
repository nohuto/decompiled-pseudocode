/*
 * XREFs of RtlpHpLargeAllocationDestroy @ 0x1800F5BB4
 * Callers:
 *     RtlpHpHeapDestroy @ 0x1800270BC (RtlpHpHeapDestroy.c)
 * Callees:
 *     RtlpHpMetadataFree @ 0x180064B08 (RtlpHpMetadataFree.c)
 *     RtlGetCurrentServiceSessionId @ 0x18006B600 (RtlGetCurrentServiceSessionId.c)
 *     RtlpHeapLogRangeRelease @ 0x18006B624 (RtlpHeapLogRangeRelease.c)
 *     RtlpHpVaMgrCtxFree @ 0x18009D290 (RtlpHpVaMgrCtxFree.c)
 *     RtlpHpTlLogVAChange @ 0x18009D720 (RtlpHpTlLogVAChange.c)
 */

__int64 __fastcall RtlpHpLargeAllocationDestroy(__int64 a1, __int128 *a2)
{
  unsigned __int64 v3; // r10
  unsigned __int64 v5; // r9
  char v6; // cl
  __int64 v7; // r9
  __int64 v8; // rcx
  __int128 v10; // [rsp+20h] [rbp-18h] BYREF
  __int64 v11; // [rsp+40h] [rbp+8h] BYREF
  signed __int64 v12; // [rsp+48h] [rbp+10h] BYREF

  v3 = *(_QWORD *)(a1 + 24) & 0xFFFFFFFFFFFF0000uLL;
  v5 = *(_QWORD *)(a1 + 32);
  v6 = (unsigned __int8)v5 >> 2;
  v7 = ((v5 >> 12) + ((v5 >> 1) & 1)) << 12;
  v12 = (v3 + 0xFFFFF) & 0xFFFFFFFFFFF00000uLL;
  v11 = v3 + (1LL << v6) - (((1LL << v6) - 1) & (v7 + (1LL << v6) - 1)) + v7 - 1 - v12;
  if ( v11 )
  {
    RtlpHpVaMgrCtxFree((__int64)&unk_1801CD968, (PVOID *)&v12, (ULONG_PTR *)&v11);
    if ( (RtlpHpHeapFeatures & 8) != 0 )
      RtlpHpTlLogVAChange(0x8000, v11, v12, 0LL);
  }
  if ( RtlGetCurrentServiceSessionId() )
    v8 = (__int64)NtCurrentPeb()->SharedData + 558;
  else
    v8 = 2147353480LL;
  if ( *(_BYTE *)v8 )
    RtlpHeapLogRangeRelease((__int64)a2, v12, v11);
  v10 = *a2;
  return RtlpHpMetadataFree(a1, &v10);
}
