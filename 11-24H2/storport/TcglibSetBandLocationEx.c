/*
 * XREFs of TcglibSetBandLocationEx @ 0x14013C8E8
 * Callers:
 *     RaidAssignTcgRangeLockingObject @ 0x14008AF58 (RaidAssignTcgRangeLockingObject.c)
 *     RaidDeassignTcgLockingObject @ 0x14008B9A8 (RaidDeassignTcgLockingObject.c)
 * Callees:
 *     WPP_SF_ @ 0x14005585C (WPP_SF_.c)
 *     WPP_SF_d @ 0x140055B28 (WPP_SF_d.c)
 *     TcglibEalLogInfo @ 0x140085CB8 (TcglibEalLogInfo.c)
 *     TcglibpCheckContext @ 0x14013D280 (TcglibpCheckContext.c)
 *     TcglibpCheckError @ 0x14013D2CC (TcglibpCheckError.c)
 *     TcglibpSetBandLocation @ 0x14013E4B8 (TcglibpSetBandLocation.c)
 *     TcglibpAuthenticateSession @ 0x14014147C (TcglibpAuthenticateSession.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 */

__int64 __fastcall TcglibSetBandLocationEx(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // r15
  __int64 v9; // rdx
  int v10; // ebx
  __int64 *v11; // r10
  char v12; // r11
  __int64 *v13; // r9
  __int64 v14; // r8
  __int64 v16; // [rsp+30h] [rbp-38h] BYREF

  v7 = a3;
  v16 = 0LL;
  if ( a3 > *(_DWORD *)(a1 + 48) || !a6 || !a3 && (*(_QWORD *)(a6 + 8) || *(_QWORD *)(a6 + 16)) )
  {
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
      WPP_SF_(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        0x17u,
        (__int64)&WPP_127317a3aac038578d69cb8ccf054e38_Traceguids);
    return (unsigned int)-1073741811;
  }
  else
  {
    v10 = TcglibpCheckContext(a1, a2);
    if ( v10 )
    {
      if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
        WPP_SF_d(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          0x18u,
          (__int64)&WPP_127317a3aac038578d69cb8ccf054e38_Traceguids,
          v10);
    }
    else if ( _InterlockedCompareExchange((volatile signed __int32 *)(v9 + 28), 1, 0) == 1 )
    {
      if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
        WPP_SF_(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          0x19u,
          (__int64)&WPP_127317a3aac038578d69cb8ccf054e38_Traceguids);
      return (unsigned int)-2147483631;
    }
    else
    {
      v13 = &v16;
      if ( v11 )
        v13 = v11;
      if ( v12 )
        v14 = 0x900010001LL;
      else
        v14 = v7 + 0x900030001LL;
      v10 = TcglibpAuthenticateSession(a1, v9, v14, v13);
      if ( v10 < 0 || (v10 = TcglibpSetBandLocation(a1, a2, (unsigned int)v7, a6), v10 < 0) )
        v10 = TcglibpCheckError(a1, a2, (unsigned int)v10);
      else
        TcglibEalLogInfo(*(int **)a1, "TcglibSetBandLocationEx success", v7, *(_QWORD *)(a6 + 8), *(_QWORD *)(a6 + 16));
      _InterlockedExchange((volatile __int32 *)(a2 + 28), 0);
    }
  }
  return (unsigned int)v10;
}
