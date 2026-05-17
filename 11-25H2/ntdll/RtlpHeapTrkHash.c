/*
 * XREFs of RtlpHeapTrkHash @ 0x180090730
 * Callers:
 *     RtlpHeapTrkTrackAdd @ 0x1800901E0 (RtlpHeapTrkTrackAdd.c)
 *     RtlpHeapTrkTrackRemove @ 0x1800902C0 (RtlpHeapTrkTrackRemove.c)
 *     RtlpHeapTrkInterceptor @ 0x180090400 (RtlpHeapTrkInterceptor.c)
 *     RtlpHeapTrkFindStack @ 0x1800923B0 (RtlpHeapTrkFindStack.c)
 * Callees:
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 */

unsigned __int64 __fastcall RtlpHeapTrkHash(__int64 a1)
{
  unsigned __int64 v1; // r8
  unsigned __int8 *v2; // r9
  __int16 *v3; // r10
  __int64 v4; // r11
  __int16 v5; // cx
  __int16 v6; // dx
  __int64 v8; // [rsp+0h] [rbp-18h] BYREF

  v1 = 0LL;
  v8 = a1;
  v2 = (unsigned __int8 *)&v8;
  v3 = (__int16 *)&unk_1801D0858;
  v4 = 8LL;
  do
  {
    v5 = *v3++;
    v6 = *v2++;
    v1 += (unsigned __int16)(v5 * v6) % 0x1EEFu;
    --v4;
  }
  while ( v4 );
  return v1 % 0x1EEF;
}
