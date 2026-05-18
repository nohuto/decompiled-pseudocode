/*
 * XREFs of sub_1800013E0 @ 0x1800013E0
 * Callers:
 *     sub_18001FFD0 @ 0x18001FFD0 (sub_18001FFD0.c)
 *     sub_1800206DC @ 0x1800206DC (sub_1800206DC.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 */

__int64 __fastcall sub_1800013E0(ULONGLONG *CallbackContext)
{
  ULONGLONG *v1; // rsi
  bool v2; // zf
  signed int v4; // eax
  unsigned int v5; // ebx
  GUID ProviderId; // [rsp+20h] [rbp-28h] BYREF

  v1 = CallbackContext + 4;
  v2 = CallbackContext[4] == 0;
  ProviderId = *(GUID *)(CallbackContext[1] - 16);
  if ( !v2 )
    __fastfail(5u);
  CallbackContext[5] = 0LL;
  CallbackContext[6] = 0LL;
  v4 = EventRegister(&ProviderId, EnableCallback, CallbackContext, v1);
  v5 = v4;
  if ( v4 )
  {
    if ( v4 > 0 )
      return (unsigned __int16)v4 | 0x80070000;
  }
  else
  {
    EventSetInformation(
      *v1,
      2LL,
      CallbackContext[1],
      *(unsigned __int16 *)CallbackContext[1],
      *(_QWORD *)&ProviderId.Data1,
      *(_QWORD *)ProviderId.Data4);
  }
  return v5;
}
