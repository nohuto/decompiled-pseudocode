/*
 * XREFs of ?CalculateUpToTime@CIT_USER_ACTIVE_TRACKER@@QEAAXI@Z @ 0x1400B2AA8
 * Callers:
 *     ?CitpSetForegroundProcess@@YAXPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@@Z @ 0x1400B26AC (-CitpSetForegroundProcess@@YAXPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@@Z.c)
 *     ?OnDisplayRequiredChange@CIT_USER_ACTIVE_TRACKER@@QEAAXII@Z @ 0x1400B5974 (-OnDisplayRequiredChange@CIT_USER_ACTIVE_TRACKER@@QEAAXII@Z.c)
 * Callees:
 *     ?SetActive@CIT_USER_ACTIVITY_STAT@@QEAAXI@Z @ 0x1400E78D8 (-SetActive@CIT_USER_ACTIVITY_STAT@@QEAAXI@Z.c)
 */

void __fastcall CIT_USER_ACTIVE_TRACKER::CalculateUpToTime(CIT_USER_ACTIVE_TRACKER *this, int a2)
{
  unsigned __int64 v2; // rdi
  __int64 v4; // rcx
  __int64 UserSessionState; // r14
  unsigned int v6; // eax
  unsigned int v7; // esi
  int v8; // r8d
  unsigned int v9; // edx
  unsigned int v10; // ecx
  unsigned int v11; // ecx
  int v12; // eax
  unsigned int v13; // eax
  __int64 v14; // r8
  unsigned int v15; // eax

  LODWORD(v2) = a2;
  UserSessionState = W32GetUserSessionState(this);
  if ( !*(_DWORD *)(UserSessionState + 18976) )
    *(_DWORD *)(UserSessionState + 18976) = *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v4) + 18968) + 8LL);
  v6 = *((_DWORD *)this + 2);
  v7 = v2 - v6;
  if ( (_DWORD)v2 != v6 )
  {
    if ( (unsigned int)v2 >= v6 )
      goto LABEL_22;
    v13 = *((_DWORD *)this + 2);
    v2 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    v7 = v2 - v13;
    if ( (unsigned int)v2 >= v13 )
      goto LABEL_22;
    v14 = *(_QWORD *)(W32GetUserSessionState(v4) + 18968);
    v15 = -1;
    if ( (unsigned __int64)(((((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                            * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64)
                          - *(_QWORD *)(v14 + 64)) <= 0xFFFFFFFF )
      v15 = ((((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
            * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64)
          - *(_DWORD *)(v14 + 64);
    if ( v7 <= v15 && v7 <= 0x240C8400 )
    {
LABEL_22:
      if ( *(_DWORD *)this )
      {
        *((_DWORD *)this + 4) += v7;
      }
      else
      {
        v8 = *((_DWORD *)this + 1);
        v9 = *((_DWORD *)this + 2) - v8;
        v10 = *(_DWORD *)(UserSessionState + 18976);
        if ( v9 < v10 )
        {
          if ( (int)v2 - v8 > v10 )
          {
            v12 = *((_DWORD *)this + 5);
            v11 = v10 - v9;
            if ( v12 < 0 )
              *((_DWORD *)this + 5) = v12 & 0x7FFFFFFF;
          }
          else
          {
            v11 = v7;
          }
          *((_DWORD *)this + 4) += v11;
        }
      }
      *((_DWORD *)this + 2) = v2;
    }
    else
    {
      ++*((_DWORD *)this + 3);
      *((_DWORD *)this + 2) = v2;
      *((_DWORD *)this + 1) = v2 - *(_DWORD *)(UserSessionState + 18976);
      CIT_USER_ACTIVITY_STAT::SetActive((CIT_USER_ACTIVE_TRACKER *)((char *)this + 16), 0);
    }
  }
}
