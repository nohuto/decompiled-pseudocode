/*
 * XREFs of KeFindFirstSetLeftGroupMask @ 0x14026A604
 * Callers:
 *     EtwTraceThreadAffinity @ 0x14026B7D8 (EtwTraceThreadAffinity.c)
 * Callees:
 *     RtlNumberOfSetBitsEx @ 0x140305240 (RtlNumberOfSetBitsEx.c)
 *     KeFindFirstSetRightGroupMask @ 0x140305380 (KeFindFirstSetRightGroupMask.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 */

__int64 __fastcall KeFindFirstSetLeftGroupMask(__int128 *a1)
{
  __int128 v1; // xmm0
  unsigned __int64 FirstSetRightGroupMask; // rbx
  __int64 v4; // r11
  _QWORD v5[2]; // [rsp+20h] [rbp-38h] BYREF
  __int128 v6; // [rsp+30h] [rbp-28h] BYREF

  v1 = *a1;
  v5[0] = 32LL;
  v5[1] = &v6;
  v6 = v1;
  LOWORD(FirstSetRightGroupMask) = 0;
  if ( (unsigned __int16)RtlNumberOfSetBitsEx(v5) )
  {
    do
    {
      FirstSetRightGroupMask = (unsigned __int16)KeFindFirstSetRightGroupMask(&v6);
      _bittestandreset64((signed __int64 *)&v6, FirstSetRightGroupMask);
    }
    while ( v4 != 1 );
  }
  return (unsigned __int16)FirstSetRightGroupMask;
}
