/*
 * XREFs of RtlpHpLfhBucketCleanup @ 0x1405FA0BC
 * Callers:
 *     RtlpHpHeapDestroy @ 0x1405F8D9C (RtlpHpHeapDestroy.c)
 * Callees:
 *     RtlpHpLfhBucketGetSlotInfo @ 0x1403C8210 (RtlpHpLfhBucketGetSlotInfo.c)
 *     RtlpHpLfhOwnerCleanup @ 0x1405FA668 (RtlpHpLfhOwnerCleanup.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 */

__int64 __fastcall RtlpHpLfhBucketCleanup(__int64 a1, unsigned __int8 *a2)
{
  unsigned int SlotInfo; // eax
  unsigned __int16 *v5; // rdi
  __int64 v6; // rsi
  _WORD v8[128]; // [rsp+20h] [rbp-128h] BYREF

  SlotInfo = RtlpHpLfhBucketGetSlotInfo(a1, a2, v8);
  if ( SlotInfo )
  {
    v5 = v8;
    v6 = SlotInfo;
    do
    {
      RtlpHpLfhOwnerCleanup(a1, a1 + ((unsigned __int64)*v5 << 6));
      v5 += 2;
      --v6;
    }
    while ( v6 );
  }
  return RtlpHpLfhOwnerCleanup(a1, a2);
}
