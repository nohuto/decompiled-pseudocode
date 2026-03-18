/*
 * XREFs of ?UnInitialize@RootSynthesizedMouseList@InputVirtualization@@SAXXZ @ 0x14019DE44
 * Callers:
 *     UnInitializeInputComponents @ 0x1400D0638 (UnInitializeInputComponents.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     isChildPartition @ 0x1400525E0 (isChildPartition.c)
 */

void __fastcall InputVirtualization::RootSynthesizedMouseList::UnInitialize(__int64 a1)
{
  __int64 v1; // rcx
  __int64 UserSessionState; // rbx
  char **v3; // rdi
  char *v4; // rcx
  __int64 v5; // rax

  UserSessionState = W32GetUserSessionState(a1);
  if ( *(_QWORD *)(UserSessionState + 19544) )
  {
    if ( isChildPartition(v1) )
    {
      v3 = *(char ***)(UserSessionState + 19544);
      while ( 1 )
      {
        v4 = *v3;
        if ( *v3 == (char *)v3 )
          break;
        if ( *((char ***)v4 + 1) != v3 || (v5 = *(_QWORD *)v4, *(char **)(*(_QWORD *)v4 + 8LL) != v4) )
          __fastfail(3u);
        *v3 = (char *)v5;
        *(_QWORD *)(v5 + 8) = v3;
        GreDeleteFastMutex(v4);
      }
    }
    GreDeleteFastMutex(*(char **)(UserSessionState + 19544));
    *(_QWORD *)(UserSessionState + 19544) = 0LL;
  }
}
