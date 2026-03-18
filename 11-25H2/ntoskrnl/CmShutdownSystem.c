/*
 * XREFs of CmShutdownSystem @ 0x1407C5A50
 * Callers:
 *     ExRebootSystemForRecovery @ 0x140647A6C (ExRebootSystemForRecovery.c)
 *     PopGracefulShutdown @ 0x140B4BB18 (PopGracefulShutdown.c)
 * Callees:
 *     CmpInitializeThreadInfo @ 0x1403F5C00 (CmpInitializeThreadInfo.c)
 *     CmCleanupThreadInfo @ 0x140429780 (CmCleanupThreadInfo.c)
 *     CmShutdownSystem0 @ 0x14065C07C (CmShutdownSystem0.c)
 *     CmShutdownSystem1 @ 0x14065C0A4 (CmShutdownSystem1.c)
 *     CmShutdownSystem2 @ 0x14065C2F0 (CmShutdownSystem2.c)
 */

_KAFFINITY_EX *CmShutdownSystem()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  int v2; // r8d
  __int64 v3; // r9
  __int64 v4; // r8
  __int128 v6; // [rsp+20h] [rbp-18h] BYREF

  v6 = 0LL;
  CmpInitializeThreadInfo((_KAFFINITY_EX *)&v6);
  if ( v2 )
  {
    v4 = (unsigned int)(v2 - 1);
    if ( (_DWORD)v4 )
    {
      if ( (_DWORD)v4 == 1 )
        CmShutdownSystem2();
    }
    else
    {
      CmShutdownSystem1(v1, v0, v4, v3);
    }
  }
  else
  {
    CmShutdownSystem0();
  }
  return CmCleanupThreadInfo((_KAFFINITY_EX **)&v6);
}
