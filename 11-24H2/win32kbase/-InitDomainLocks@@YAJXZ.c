/*
 * XREFs of ?InitDomainLocks@@YAJXZ @ 0x140139D40
 * Callers:
 *     InitCreateUserCrit @ 0x1402E5784 (InitCreateUserCrit.c)
 * Callees:
 *     ?LockInitialize@tagDomLock@@QEBAJXZ @ 0x140139F20 (-LockInitialize@tagDomLock@@QEBAJXZ.c)
 */

__int64 __fastcall InitDomainLocks(__int64 a1)
{
  __int64 UserSessionState; // rax
  __int64 v2; // rbx
  __int64 result; // rax

  UserSessionState = W32GetUserSessionState(a1);
  v2 = UserSessionState + 42336;
  *(_QWORD *)(UserSessionState + 42520) = 0LL;
  *(_QWORD *)(UserSessionState + 42528) = 0LL;
  *(_DWORD *)(UserSessionState + 42536) = 0;
  *(_QWORD *)(UserSessionState + 42544) = 0LL;
  *(_QWORD *)(UserSessionState + 42552) = 0LL;
  *(_DWORD *)(UserSessionState + 42560) = 0;
  *(_QWORD *)(UserSessionState + 42568) = 0LL;
  *(_QWORD *)(UserSessionState + 42576) = 0LL;
  *(_DWORD *)(UserSessionState + 42584) = 0;
  *(_QWORD *)(UserSessionState + 42592) = 0LL;
  result = tagDomLock::LockInitialize((tagDomLock *)(UserSessionState + 42336));
  if ( (int)result >= 0 )
  {
    result = tagDomLock::LockInitialize((tagDomLock *)(v2 + 8));
    if ( (int)result >= 0 )
    {
      result = tagDomLock::LockInitialize((tagDomLock *)(v2 + 16));
      if ( (int)result >= 0 )
      {
        result = tagDomLock::LockInitialize((tagDomLock *)(v2 + 32));
        if ( (int)result >= 0 )
        {
          result = tagDomLock::LockInitialize((tagDomLock *)(v2 + 40));
          if ( (int)result >= 0 )
          {
            result = tagDomLock::LockInitialize((tagDomLock *)(v2 + 48));
            if ( (int)result >= 0 )
            {
              result = tagDomLock::LockInitialize((tagDomLock *)(v2 + 56));
              if ( (int)result >= 0 )
              {
                result = tagDomLock::LockInitialize((tagDomLock *)(v2 + 64));
                if ( (int)result >= 0 )
                {
                  result = tagDomLock::LockInitialize((tagDomLock *)(v2 + 72));
                  if ( (int)result >= 0 )
                  {
                    result = tagDomLock::LockInitialize((tagDomLock *)(v2 + 80));
                    if ( (int)result >= 0 )
                    {
                      result = tagDomLock::LockInitialize((tagDomLock *)(v2 + 88));
                      if ( (int)result >= 0 )
                      {
                        result = tagDomLock::LockInitialize((tagDomLock *)(v2 + 96));
                        if ( (int)result >= 0 )
                        {
                          result = tagDomLock::LockInitialize((tagDomLock *)(v2 + 104));
                          if ( (int)result >= 0 )
                          {
                            result = tagDomLock::LockInitialize((tagDomLock *)(v2 + 112));
                            if ( (int)result >= 0 )
                            {
                              result = tagDomLock::LockInitialize((tagDomLock *)(v2 + 128));
                              if ( (int)result >= 0 )
                              {
                                result = tagDomLock::LockInitialize((tagDomLock *)(v2 + 120));
                                if ( (int)result >= 0 )
                                {
                                  result = tagDomLock::LockInitialize((tagDomLock *)(v2 + 136));
                                  if ( (int)result >= 0 )
                                  {
                                    result = tagDomLock::LockInitialize((tagDomLock *)(v2 + 144));
                                    if ( (int)result >= 0 )
                                    {
                                      result = tagDomLock::LockInitialize((tagDomLock *)(v2 + 152));
                                      if ( (int)result >= 0 )
                                      {
                                        result = tagDomLock::LockInitialize((tagDomLock *)(v2 + 160));
                                        if ( (int)result >= 0 )
                                        {
                                          result = tagDomLock::LockInitialize((tagDomLock *)(v2 + 168));
                                          if ( (int)result >= 0 )
                                            return tagDomLock::LockInitialize((tagDomLock *)(v2 + 176));
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return result;
}
