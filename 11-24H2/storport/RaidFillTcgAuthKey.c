/*
 * XREFs of RaidFillTcgAuthKey @ 0x14008C178
 * Callers:
 *     RaidActivateTcgLocking @ 0x14008A8E4 (RaidActivateTcgLocking.c)
 *     RaidAssignTcgNamespaceLockingObject @ 0x14008AC00 (RaidAssignTcgNamespaceLockingObject.c)
 *     RaidAssignTcgRangeLockingObject @ 0x14008AF58 (RaidAssignTcgRangeLockingObject.c)
 *     RaidDeassignTcgLockingObject @ 0x14008B9A8 (RaidDeassignTcgLockingObject.c)
 *     RaidEraseTcgLockingObject @ 0x14008BED4 (RaidEraseTcgLockingObject.c)
 *     RaidGetTcgLockingObjectMetadata @ 0x14008CBA4 (RaidGetTcgLockingObjectMetadata.c)
 *     RaidRevertTcgConfiguration @ 0x14008DDF0 (RaidRevertTcgConfiguration.c)
 *     RaidSetTcgLockingObject @ 0x14008E140 (RaidSetTcgLockingObject.c)
 *     RaidSetTcgLockingObjectAuthKey @ 0x14008E3CC (RaidSetTcgLockingObjectAuthKey.c)
 *     RaidSetTcgLockingObjectMetadata @ 0x14008E5CC (RaidSetTcgLockingObjectMetadata.c)
 *     RaidSetTcgSpAuthorityKey @ 0x14008E83C (RaidSetTcgSpAuthorityKey.c)
 * Callees:
 *     RtlStringCbCopyA @ 0x14006FC78 (RtlStringCbCopyA.c)
 *     TcglibCloseSession @ 0x14013BB98 (TcglibCloseSession.c)
 *     TcglibGetMsid @ 0x14013C2D4 (TcglibGetMsid.c)
 *     TcglibOpenSession @ 0x14013C388 (TcglibOpenSession.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 *     memmove @ 0x140143780 (memmove.c)
 */

__int64 __fastcall RaidFillTcgAuthKey(
        __int64 a1,
        char a2,
        unsigned int a3,
        const void *a4,
        unsigned int *a5,
        char *pszDest)
{
  int Msid; // ebx
  _OWORD v9[3]; // [rsp+20h] [rbp-58h] BYREF
  __int64 v10; // [rsp+50h] [rbp-28h]

  Msid = 0;
  v10 = 0LL;
  memset(v9, 0, sizeof(v9));
  if ( a3 && a4 )
  {
    *a5 = a3;
    memmove(a5 + 1, a4, a3);
  }
  else if ( a2 )
  {
    Msid = TcglibOpenSession(a1, 1LL, v9);
    if ( Msid >= 0 )
    {
      Msid = TcglibGetMsid(a1, v9, a5);
      if ( Msid < 0 )
        RtlStringCbCopyA(pszDest, 0x20uLL, "TcglibGetMsid");
      TcglibCloseSession(a1, v9);
    }
    else
    {
      RtlStringCbCopyA(pszDest, 0x20uLL, "TcglibOpenSession");
    }
  }
  return (unsigned int)Msid;
}
