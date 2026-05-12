/*
 * XREFs of TcglibSetBand @ 0x14013C6EC
 * Callers:
 *     RaidAssignTcgNamespaceLockingObject @ 0x14008AC00 (RaidAssignTcgNamespaceLockingObject.c)
 *     RaidAssignTcgRangeLockingObject @ 0x14008AF58 (RaidAssignTcgRangeLockingObject.c)
 *     RaidDeassignTcgLockingObject @ 0x14008B9A8 (RaidDeassignTcgLockingObject.c)
 *     RaidSetTcgLockingObject @ 0x14008E140 (RaidSetTcgLockingObject.c)
 * Callees:
 *     WPP_SF_ @ 0x14005585C (WPP_SF_.c)
 *     WPP_SF_d @ 0x140055B28 (WPP_SF_d.c)
 *     TcglibEalLogInfo @ 0x140085CB8 (TcglibEalLogInfo.c)
 *     TcglibpCheckContext @ 0x14013D280 (TcglibpCheckContext.c)
 *     TcglibpCheckError @ 0x14013D2CC (TcglibpCheckError.c)
 *     TcglibpSetBand @ 0x14013E0A4 (TcglibpSetBand.c)
 *     TcglibpAuthenticateSession @ 0x14014147C (TcglibpAuthenticateSession.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 */

__int64 __fastcall TcglibSetBand(__int64 a1, __int64 a2, unsigned int a3, int a4, int a5, char a6, char a7, __int64 a8)
{
  __int64 v11; // r12
  __int64 v12; // rdx
  int v13; // ebx
  __int64 *v14; // r10
  __int64 *v15; // r9
  __int64 v17; // [rsp+48h] [rbp-50h] BYREF

  v11 = a3;
  v17 = 0LL;
  if ( a3 > *(_DWORD *)(a1 + 48) || (unsigned int)(a4 - 1) > 2 || (unsigned int)(a5 - 1) > 2 )
  {
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
      WPP_SF_(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        0x1Du,
        (__int64)&WPP_127317a3aac038578d69cb8ccf054e38_Traceguids);
    return (unsigned int)-1073741811;
  }
  else
  {
    v13 = TcglibpCheckContext(a1, a2);
    if ( v13 )
    {
      if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
        WPP_SF_d(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          0x1Eu,
          (__int64)&WPP_127317a3aac038578d69cb8ccf054e38_Traceguids,
          v13);
    }
    else if ( _InterlockedCompareExchange((volatile signed __int32 *)(v12 + 28), 1, 0) == 1 )
    {
      if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
        WPP_SF_(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          0x1Fu,
          (__int64)&WPP_127317a3aac038578d69cb8ccf054e38_Traceguids);
      return (unsigned int)-2147483631;
    }
    else
    {
      v15 = &v17;
      if ( v14 )
        v15 = v14;
      v13 = TcglibpAuthenticateSession(a1, v12, v11 + 0x900030001LL, v15);
      if ( v13 < 0 || (v13 = TcglibpSetBand(a1, a2, v11, a4, a5, a6, a7, a8), v13 < 0) )
        v13 = TcglibpCheckError(a1, a2, (unsigned int)v13);
      else
        TcglibEalLogInfo(*(int **)a1, "TcglibSetBand success", v11, a4, a5);
      _InterlockedExchange((volatile __int32 *)(a2 + 28), 0);
    }
  }
  return (unsigned int)v13;
}
