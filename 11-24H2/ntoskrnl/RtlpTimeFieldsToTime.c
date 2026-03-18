/*
 * XREFs of RtlpTimeFieldsToTime @ 0x1404266C8
 * Callers:
 *     HalSetRealTimeClock @ 0x140425310 (HalSetRealTimeClock.c)
 *     HalQueryRealTimeClock @ 0x140425810 (HalQueryRealTimeClock.c)
 *     RtlTimeFieldsToTime @ 0x1404266B0 (RtlTimeFieldsToTime.c)
 *     HalEfiGetTime @ 0x14054C53C (HalEfiGetTime.c)
 *     HalpCheckWakeupTimeAndAdjust @ 0x14055A494 (HalpCheckWakeupTimeAndAdjust.c)
 *     GetBootSystemTime @ 0x140C0AA8C (GetBootSystemTime.c)
 *     Phase1InitializationDiscard @ 0x140C0C048 (Phase1InitializationDiscard.c)
 *     SeMakeAnonymousLogonToken @ 0x140C39E0C (SeMakeAnonymousLogonToken.c)
 *     SeMakeAnonymousLogonTokenNoEveryone @ 0x140C3A090 (SeMakeAnonymousLogonTokenNoEveryone.c)
 *     SeMakeSystemToken @ 0x140C3A2F0 (SeMakeSystemToken.c)
 * Callees:
 *     RtlpTimeFieldsToTimeNoLeapSeconds @ 0x140426768 (RtlpTimeFieldsToTimeNoLeapSeconds.c)
 */

char __fastcall RtlpTimeFieldsToTime(__int64 a1, __int64 *a2)
{
  _QWORD *v3; // rbx
  unsigned int v4; // esi
  __int64 v5; // rax
  __int64 i; // r8
  __int64 v8; // rdx
  __int64 v9; // rdx
  signed __int32 v10[10]; // [rsp+0h] [rbp-28h] BYREF
  __int64 v11; // [rsp+40h] [rbp+18h] BYREF

  v11 = 0LL;
  v3 = ExLeapSecondData;
  if ( !ExLeapSecondData || !*(_BYTE *)ExLeapSecondData )
    return ((__int64 (*)(void))RtlpTimeFieldsToTimeNoLeapSeconds)();
  v4 = *((_DWORD *)ExLeapSecondData + 1);
  _InterlockedOr(v10, 0);
  if ( !(unsigned __int8)RtlpTimeFieldsToTimeNoLeapSeconds(a1, &v11) )
    return 0;
  v5 = v11;
  for ( i = 0LL; ; i = (unsigned int)(i + 1) )
  {
    if ( (unsigned int)i >= v4 )
      goto LABEL_6;
    v8 = v3[i + 1];
    if ( v8 < 0 )
      break;
    if ( v5 < v8 + 10000000 )
    {
      if ( v5 < v8 )
        goto LABEL_6;
      v5 = 2 * v5 - v8;
    }
    else
    {
      v5 += 10000000LL;
    }
LABEL_16:
    ;
  }
  v9 = v8 & 0x7FFFFFFFFFFFFFFFLL;
  if ( v5 >= v9 + 10000000 )
  {
    v5 -= 10000000LL;
    goto LABEL_16;
  }
  if ( v5 < v9 )
  {
LABEL_6:
    *a2 = v5;
    return 1;
  }
  return 0;
}
