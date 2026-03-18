/*
 * XREFs of ?UmfdGetServerPort@@YAPEAXW4FontDriverType@@@Z @ 0x1401600CC
 * Callers:
 *     ?UninitializeThread@UmfdHostLifeTimeManager@@SAXW4ThreadTerminationType@1@@Z @ 0x14015FE28 (-UninitializeThread@UmfdHostLifeTimeManager@@SAXW4ThreadTerminationType@1@@Z.c)
 *     ?ResetUmfdHostReadiness@UmfdHostLifeTimeManager@@CAXXZ @ 0x1402664EC (-ResetUmfdHostReadiness@UmfdHostLifeTimeManager@@CAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall UmfdGetServerPort(int a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 SessionState; // rax

  v2 = a1;
  SessionState = W32GetSessionState(a1, a2);
  if ( (unsigned int)v2 > 3 )
    return 0LL;
  else
    return *(_QWORD *)(*(_QWORD *)(SessionState + 104) + 8 * v2 + 48);
}
