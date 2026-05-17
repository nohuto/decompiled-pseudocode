/*
 * XREFs of RtlpHpLfhBucketCleanup @ 0x1800B86FC
 * Callers:
 *     RtlpHpLfhContextCleanup @ 0x1800B8168 (RtlpHpLfhContextCleanup.c)
 * Callees:
 *     RtlpHpLfhBucketGetSlotInfo @ 0x1800B8790 (RtlpHpLfhBucketGetSlotInfo.c)
 *     RtlpHpLfhOwnerCleanup @ 0x1800B881C (RtlpHpLfhOwnerCleanup.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 */

__int64 __fastcall RtlpHpLfhBucketCleanup(__int64 a1, __int64 a2)
{
  unsigned int SlotInfo; // eax
  unsigned __int16 *v5; // rdi
  __int64 v6; // rsi
  _BYTE v8[256]; // [rsp+20h] [rbp-128h] BYREF

  SlotInfo = RtlpHpLfhBucketGetSlotInfo(a1, a2, v8);
  if ( SlotInfo )
  {
    v5 = (unsigned __int16 *)v8;
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
