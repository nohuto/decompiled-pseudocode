/*
 * XREFs of ?FreeSessionGlobalsArea@Base@Gre@@YAXXZ @ 0x14008A1C4
 * Callers:
 *     MultiUserNtGreCleanup @ 0x140089C68 (MultiUserNtGreCleanup.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     ??1BaseGlobalsNonPaged@Base@Gre@@QEAA@XZ @ 0x14015475C (--1BaseGlobalsNonPaged@Base@Gre@@QEAA@XZ.c)
 */

void __fastcall Gre::Base::FreeSessionGlobalsArea(Gre::Base *this)
{
  __int64 SessionState; // rdi
  PERESOURCE *v2; // rbx

  SessionState = W32GetSessionState(this);
  v2 = *(PERESOURCE **)(SessionState + 88);
  if ( v2 )
  {
    if ( *v2 )
    {
      Gre::Base::BaseGlobalsNonPaged::~BaseGlobalsNonPaged(*v2);
      GreDeleteFastMutex((char *)*v2);
      *v2 = 0LL;
    }
    GreDeleteFastMutex(*(char **)(SessionState + 88));
    *(_QWORD *)(SessionState + 88) = 0LL;
  }
}
