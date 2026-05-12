/*
 * XREFs of TcglibSetAdmin1Pin @ 0x14013C5B4
 * Callers:
 *     RaidSetTcgSpAuthorityKey @ 0x14008E83C (RaidSetTcgSpAuthorityKey.c)
 * Callees:
 *     WPP_SF_ @ 0x14005585C (WPP_SF_.c)
 *     WPP_SF_d @ 0x140055B28 (WPP_SF_d.c)
 *     TcglibpCheckContext @ 0x14013D280 (TcglibpCheckContext.c)
 *     TcglibpCheckError @ 0x14013D2CC (TcglibpCheckError.c)
 *     TcglibpSetPin @ 0x14014091C (TcglibpSetPin.c)
 *     TcglibpAuthenticateSession @ 0x14014147C (TcglibpAuthenticateSession.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 */

__int64 __fastcall TcglibSetAdmin1Pin(__int64 a1, __int64 a2, __int64 a3, __int64 *a4)
{
  __int64 v7; // rdx
  int v8; // ebx
  __int64 *v9; // r10
  __int64 *v10; // r9
  __int64 *v11; // r9
  __int64 v13; // [rsp+20h] [rbp-38h] BYREF

  v13 = 0LL;
  v8 = TcglibpCheckContext(a1, a2);
  if ( v8 >= 0 )
  {
    if ( _InterlockedCompareExchange((volatile signed __int32 *)(v7 + 28), 1, 0) == 1 )
    {
      if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
        WPP_SF_(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          0x28u,
          (__int64)&WPP_127317a3aac038578d69cb8ccf054e38_Traceguids);
      return (unsigned int)-2147483631;
    }
    else
    {
      v10 = &v13;
      if ( v9 )
        v10 = v9;
      v8 = TcglibpAuthenticateSession(a1, v7, 0x900010001LL, v10);
      if ( v8 < 0 )
        goto LABEL_16;
      v11 = &v13;
      if ( a4 )
        v11 = a4;
      v8 = TcglibpSetPin(a1, a2, 0xB00010001LL, v11, v13);
      if ( v8 < 0 )
LABEL_16:
        v8 = TcglibpCheckError(a1, a2, (unsigned int)v8);
      _InterlockedExchange((volatile __int32 *)(a2 + 28), 0);
    }
  }
  else if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
  {
    WPP_SF_d(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      0x27u,
      (__int64)&WPP_127317a3aac038578d69cb8ccf054e38_Traceguids,
      v8);
  }
  return (unsigned int)v8;
}
