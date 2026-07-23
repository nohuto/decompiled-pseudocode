/*
 * XREFs of KeFindFirstSetLeftGroupMask @ 0x140407D54
 * Callers:
 *     EtwTraceThreadAffinity @ 0x1403A2658 (EtwTraceThreadAffinity.c)
 * Callees:
 *     KeFindFirstSetRightGroupMask @ 0x140330524 (KeFindFirstSetRightGroupMask.c)
 *     RtlNumberOfSetBitsEx @ 0x140407FA0 (RtlNumberOfSetBitsEx.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
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
      FirstSetRightGroupMask = (unsigned __int16)KeFindFirstSetRightGroupMask((__int64 *)&v6);
      _bittestandreset64((signed __int64 *)&v6, FirstSetRightGroupMask);
    }
    while ( v4 != 1 );
  }
  return (unsigned __int16)FirstSetRightGroupMask;
}
