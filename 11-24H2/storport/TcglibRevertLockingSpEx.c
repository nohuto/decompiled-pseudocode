/*
 * XREFs of TcglibRevertLockingSpEx @ 0x14013C434
 * Callers:
 *     RaidRevertTcgConfiguration @ 0x14008DDF0 (RaidRevertTcgConfiguration.c)
 * Callees:
 *     WPP_SF_ @ 0x14005585C (WPP_SF_.c)
 *     WPP_SF_d @ 0x140055B28 (WPP_SF_d.c)
 *     TcglibEalLogInfo @ 0x140085CB8 (TcglibEalLogInfo.c)
 *     TcglibpCheckContext @ 0x14013D280 (TcglibpCheckContext.c)
 *     TcglibpCheckError @ 0x14013D2CC (TcglibpCheckError.c)
 *     TcglibpRevertLockingSp @ 0x14013F9C0 (TcglibpRevertLockingSp.c)
 *     TcglibpAuthenticateSession @ 0x14014147C (TcglibpAuthenticateSession.c)
 */

__int64 __fastcall TcglibRevertLockingSpEx(__int64 a1, __int64 a2)
{
  int v2; // r9d
  int v5; // ebx
  __int64 v6; // rdx
  char v7; // r10
  __int64 v8; // r11

  v2 = *(_DWORD *)(a1 + 32);
  if ( v2 == 512 )
  {
    v5 = TcglibpCheckContext(a1, a2);
    if ( v5 )
    {
      if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
        WPP_SF_d(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          0x11u,
          (__int64)&WPP_127317a3aac038578d69cb8ccf054e38_Traceguids,
          v5);
    }
    else if ( _InterlockedCompareExchange((volatile signed __int32 *)(v6 + 28), 1, 0) == 1 )
    {
      if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
        WPP_SF_(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          0x12u,
          (__int64)&WPP_127317a3aac038578d69cb8ccf054e38_Traceguids);
      return (unsigned int)-2147483631;
    }
    else
    {
      v5 = TcglibpAuthenticateSession(a1, v6, v7 != 0 ? 0x90001FF01LL : 0x900000006LL, v8);
      if ( v5 < 0 || (v5 = TcglibpRevertLockingSp(a1, a2), v5 < 0) )
        v5 = TcglibpCheckError(a1, a2, (unsigned int)v5);
      else
        TcglibEalLogInfo(*(int **)a1, "TcglibRevertLockingSpEx success", 0, 0, 0LL);
      _InterlockedExchange((volatile __int32 *)(a2 + 28), 0);
    }
  }
  else
  {
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
      WPP_SF_d(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        0x10u,
        (__int64)&WPP_127317a3aac038578d69cb8ccf054e38_Traceguids,
        v2);
    return (unsigned int)-1073741637;
  }
  return (unsigned int)v5;
}
