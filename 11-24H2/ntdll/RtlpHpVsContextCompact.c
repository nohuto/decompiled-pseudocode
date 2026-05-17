/*
 * XREFs of RtlpHpVsContextCompact @ 0x18005034C
 * Callers:
 *     RtlpHpHeapCompact @ 0x180050D34 (RtlpHpHeapCompact.c)
 * Callees:
 *     RtlpHpVsSlotCompact @ 0x18011B65C (RtlpHpVsSlotCompact.c)
 *     RtlpHpVsContextGetSlotInfo @ 0x18011C5C0 (RtlpHpVsContextGetSlotInfo.c)
 *     __security_check_cookie @ 0x1801659C0 (__security_check_cookie.c)
 */

__int64 __fastcall RtlpHpVsContextCompact(__int64 a1)
{
  __int64 result; // rax
  unsigned __int16 *v3; // rbx
  __int64 v4; // rsi
  _BYTE v5[256]; // [rsp+20h] [rbp-118h] BYREF

  result = RtlpHpVsContextGetSlotInfo(a1, v5);
  if ( (_DWORD)result )
  {
    v3 = (unsigned __int16 *)v5;
    v4 = (unsigned int)result;
    do
    {
      result = RtlpHpVsSlotCompact(a1, a1 + ((unsigned __int64)*v3 << 6));
      v3 += 2;
      --v4;
    }
    while ( v4 );
  }
  return result;
}
